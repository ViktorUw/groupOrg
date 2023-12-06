

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
	/// Сводка для GroupWindow
	/// </summary>
	public ref class GroupWindow : public System::Windows::Forms::Form
	{

	private: String^ GroupID;
	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ groupWindow_headerBackToListBtn;
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	public:
		GroupWindow(String^ cur_groupName, String^ cur_groupID)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			String^ GroupId = cur_groupID;
			this->GroupWindow_headerLabel->Text = cur_groupID; // groupName
			this->StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GroupWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ GroupWindow_header;
	private: System::Windows::Forms::Label^ GroupWindow_headerLabel;
	protected:


	protected:

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
		void InitializeComponent()
		{
			this->GroupWindow_header = (gcnew System::Windows::Forms::Panel());
			this->GroupWindow_headerLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupWindow_headerBackToListBtn = (gcnew System::Windows::Forms::Button());
			this->GroupWindow_header->SuspendLayout();
			this->SuspendLayout();
			// 
			// GroupWindow_header
			// 
			this->GroupWindow_header->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->GroupWindow_header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->GroupWindow_header->Controls->Add(this->groupWindow_headerBackToListBtn);
			this->GroupWindow_header->Controls->Add(this->GroupWindow_headerLabel);
			this->GroupWindow_header->Location = System::Drawing::Point(0, 0);
			this->GroupWindow_header->Name = L"GroupWindow_header";
			this->GroupWindow_header->Size = System::Drawing::Size(983, 100);
			this->GroupWindow_header->TabIndex = 1;
			// 
			// GroupWindow_headerLabel
			// 
			this->GroupWindow_headerLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GroupWindow_headerLabel->AutoSize = true;
			this->GroupWindow_headerLabel->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GroupWindow_headerLabel->Location = System::Drawing::Point(559, 24);
			this->GroupWindow_headerLabel->Name = L"GroupWindow_headerLabel";
			this->GroupWindow_headerLabel->Size = System::Drawing::Size(280, 51);
			this->GroupWindow_headerLabel->TabIndex = 1;
			this->GroupWindow_headerLabel->Text = L"Group Name";
			this->GroupWindow_headerLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Uczestnicy grupy:";
			// 
			// groupWindow_headerBackToListBtn
			// 
			this->groupWindow_headerBackToListBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupWindow_headerBackToListBtn->FlatAppearance->BorderSize = 0;
			this->groupWindow_headerBackToListBtn->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupWindow_headerBackToListBtn->Location = System::Drawing::Point(45, 30);
			this->groupWindow_headerBackToListBtn->Name = L"groupWindow_headerBackToListBtn";
			this->groupWindow_headerBackToListBtn->Size = System::Drawing::Size(175, 36);
			this->groupWindow_headerBackToListBtn->TabIndex = 2;
			this->groupWindow_headerBackToListBtn->Text = L"Wróć do listy grup";
			this->groupWindow_headerBackToListBtn->UseVisualStyleBackColor = true;
			this->groupWindow_headerBackToListBtn->Click += gcnew System::EventHandler(this, &GroupWindow::groupWindow_headerBackToListBtn_Click);
			// 
			// GroupWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GroupWindow_header);
			this->Name = L"GroupWindow";
			this->Text = L"GroupWindow";
			this->GroupWindow_header->ResumeLayout(false);
			this->GroupWindow_header->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
			
		
	private: System::Void groupWindow_headerBackToListBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
