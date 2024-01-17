#include "CreateCollection.h"

#pragma once

namespace groupOrg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для CollectWindow
	/// </summary>
	public ref class CollectWindow : public System::Windows::Forms::Form
	{
	public:
		CollectWindow(Form^ okno, String^ GroupID)
		{
			InitializeComponent();

			this->StartPosition = FormStartPosition::CenterScreen;
			this->okno = okno;
			this->GroupID = GroupID;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CollectWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ eventsWindow_header;
	private: System::Windows::Forms::Button^ collectWIndow_back_to_group;
	protected:
	private: Form^ okno;
	private: String^ GroupID;

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	private: System::Windows::Forms::Button^ CollectWindow_btnCreateCollection;

	private: System::Windows::Forms::Label^ CollectWindow_headerLable;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ collectWindow_panelForCollects;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->eventsWindow_header = (gcnew System::Windows::Forms::Panel());
			this->collectWIndow_back_to_group = (gcnew System::Windows::Forms::Button());
			this->CollectWindow_btnCreateCollection = (gcnew System::Windows::Forms::Button());
			this->CollectWindow_headerLable = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->collectWindow_panelForCollects = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->eventsWindow_header->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// eventsWindow_header
			// 
			this->eventsWindow_header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->eventsWindow_header->Controls->Add(this->collectWIndow_back_to_group);
			this->eventsWindow_header->Controls->Add(this->CollectWindow_btnCreateCollection);
			this->eventsWindow_header->Controls->Add(this->CollectWindow_headerLable);
			this->eventsWindow_header->Dock = System::Windows::Forms::DockStyle::Top;
			this->eventsWindow_header->Location = System::Drawing::Point(0, 0);
			this->eventsWindow_header->Name = L"eventsWindow_header";
			this->eventsWindow_header->Size = System::Drawing::Size(982, 100);
			this->eventsWindow_header->TabIndex = 2;
			// 
			// collectWIndow_back_to_group
			// 
			this->collectWIndow_back_to_group->Cursor = System::Windows::Forms::Cursors::Hand;
			this->collectWIndow_back_to_group->FlatAppearance->BorderSize = 0;
			this->collectWIndow_back_to_group->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->collectWIndow_back_to_group->Location = System::Drawing::Point(25, 31);
			this->collectWIndow_back_to_group->Name = L"collectWIndow_back_to_group";
			this->collectWIndow_back_to_group->Size = System::Drawing::Size(175, 36);
			this->collectWIndow_back_to_group->TabIndex = 2;
			this->collectWIndow_back_to_group->Text = L"Wróc do grupy";
			this->collectWIndow_back_to_group->UseVisualStyleBackColor = true;
			this->collectWIndow_back_to_group->Click += gcnew System::EventHandler(this, &CollectWindow::collectWIndow_back_to_group_Click);
			// 
			// CollectWindow_btnCreateCollection
			// 
			this->CollectWindow_btnCreateCollection->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CollectWindow_btnCreateCollection->FlatAppearance->BorderSize = 0;
			this->CollectWindow_btnCreateCollection->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CollectWindow_btnCreateCollection->Location = System::Drawing::Point(221, 32);
			this->CollectWindow_btnCreateCollection->Name = L"CollectWindow_btnCreateCollection";
			this->CollectWindow_btnCreateCollection->Size = System::Drawing::Size(175, 36);
			this->CollectWindow_btnCreateCollection->TabIndex = 1;
			this->CollectWindow_btnCreateCollection->Text = L"Organizuj zrzutkę";
			this->CollectWindow_btnCreateCollection->UseVisualStyleBackColor = true;
			this->CollectWindow_btnCreateCollection->Click += gcnew System::EventHandler(this, &CollectWindow::CollectWindow_btnCreateCollection_Click);
			// 
			// CollectWindow_headerLable
			// 
			this->CollectWindow_headerLable->AutoSize = true;
			this->CollectWindow_headerLable->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CollectWindow_headerLable->Location = System::Drawing::Point(470, 16);
			this->CollectWindow_headerLable->Name = L"CollectWindow_headerLable";
			this->CollectWindow_headerLable->Size = System::Drawing::Size(366, 51);
			this->CollectWindow_headerLable->TabIndex = 0;
			this->CollectWindow_headerLable->Text = L"Group Organizer";
			this->CollectWindow_headerLable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(982, 33);
			this->panel1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lista zrzutek:";
			// 
			// collectWindow_panelForCollects
			// 
			this->collectWindow_panelForCollects->AutoScroll = true;
			this->collectWindow_panelForCollects->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->collectWindow_panelForCollects->Location = System::Drawing::Point(0, 129);
			this->collectWindow_panelForCollects->Name = L"collectWindow_panelForCollects";
			this->collectWindow_panelForCollects->Size = System::Drawing::Size(982, 624);
			this->collectWindow_panelForCollects->TabIndex = 9;
			// 
			// CollectWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->collectWindow_panelForCollects);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->eventsWindow_header);
			this->Name = L"CollectWindow";
			this->Text = L"CollectWindow";
			this->Shown += gcnew System::EventHandler(this, &CollectWindow::CollectWindow_Shown);
			this->eventsWindow_header->ResumeLayout(false);
			this->eventsWindow_header->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void collectWIndow_back_to_group_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		okno->Show();
	}
	private: void updateCollectsWindow() {
		collectWindow_panelForCollects->Controls->Clear();

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM grouporg.collects WHERE id_group = " + GroupID + ";", conDatabase);
		MySqlDataReader^ myReader;

		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {
				Panel^ panelForCollect = gcnew Panel();
				panelForCollect->Size = System::Drawing::Size(232, 130);
				panelForCollect->BackColor = Color::DarkGray;
				panelForCollect->Cursor = System::Windows::Forms::Cursors::Hand;
				//panelForCollect->Click += gcnew System::EventHandler(this, &CollectWindow::panelForCollect_Click);

				Label^ collectName = gcnew Label();
				collectName->Text = L"Zrzutka na: " + myReader->GetString(1);
				collectName->Location = System::Drawing::Point(0, 5);
				collectName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				collectName->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				collectName->AutoSize = true;
				

				Label^ collectDateEnd = gcnew Label();
				if (myReader->IsDBNull(2))
				{
					collectDateEnd->Text = L"Data zakończenia zrzutki: ";
				}
				else
				{
					//collectDateEnd->Text = L"Data zakończenia zrzutki: " + myReader->GetDateTime(3).ToString("dd.MM.yyyy");
					collectDateEnd->Text = L"Data zakończenia zrzutki: " + myReader->GetDateTime(2).ToString("dd.MM.yyyy");
				}

				collectDateEnd->Size = System::Drawing::Size(240, 100);
				collectDateEnd->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				collectDateEnd->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));



				Panel^ panelForBtn = gcnew Panel();
				panelForBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
				panelForBtn->Size = System::Drawing::Size(240, 30);

				Button^ enterCollectBtn = gcnew Button();
				enterCollectBtn->Dock = System::Windows::Forms::DockStyle::Left;
				enterCollectBtn->Size = System::Drawing::Size(119, 30);
				enterCollectBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
				enterCollectBtn->BackColor = Color::LightGray;
				enterCollectBtn->Text = L"Wejdź w zrzutke";
				//this->main_btnCreate->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
				enterCollectBtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				enterCollectBtn->Tag = myReader->GetString(0);
				//enterCollectBtn->Click += gcnew System::EventHandler(this, &EventsWindow::enterEventBtn_Click);


				Button^ deleteCollectBtn = gcnew Button();
				deleteCollectBtn->Dock = System::Windows::Forms::DockStyle::Right;
				deleteCollectBtn->Size = System::Drawing::Size(119, 30);
				deleteCollectBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
				deleteCollectBtn->BackColor = Color::LightGray;
				deleteCollectBtn->Text = L"Usuń zrzutke";
				deleteCollectBtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				deleteCollectBtn->Tag = myReader->GetString(0);
				//deleteCollectBtn->Click += gcnew System::EventHandler(this, &EventsWindow::deleteEventBtn_Click);


				panelForBtn->Controls->Add(enterCollectBtn);
				panelForBtn->Controls->Add(deleteCollectBtn);

				panelForCollect->Controls->Add(collectName);
				panelForCollect->Controls->Add(collectDateEnd);
				panelForCollect->Controls->Add(panelForBtn);

				collectWindow_panelForCollects->Controls->Add(panelForCollect);


				
				
				
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			conDatabase->Close();
		}
		
	
	}
private: System::Void CollectWindow_Shown(System::Object^ sender, System::EventArgs^ e) {
	updateCollectsWindow();
}
private: System::Void CollectWindow_btnCreateCollection_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateCollection^ createCollect = gcnew CreateCollection(this, GroupID);
	this->Hide();
	createCollect->ShowDialog();
}
};
}
