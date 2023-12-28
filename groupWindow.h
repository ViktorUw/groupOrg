
#include "AddUserToGroupForm.h"
#include "CurentMemberInfo.h"

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

	private: Form^ okno2;
	public:
		GroupWindow(Form^ okno2, String^ cur_groupName, String^ cur_groupID)
		{
			this->okno2 = okno2;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			GroupID = cur_groupID;
			this->GroupWindow_headerLabel->Text = cur_groupName; // groupName
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


	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);


	private: System::Windows::Forms::Button^ groupWindow_headerBackToListBtn;
	private: List<String^>^ membersList = gcnew List<String^>();
	private: List<String^>^ membersIDList = gcnew List<String^>();

	private: System::Windows::Forms::Panel^ GroupWindow_panelForGroups;
	private: String^ GroupID;
	private: System::Windows::Forms::Button^ groupWindow_headerAddUserBtn;
	private: System::Windows::Forms::Panel^ GroupWindow_header;
	private: System::Windows::Forms::Label^ GroupWindow_headerLabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->groupWindow_headerAddUserBtn = (gcnew System::Windows::Forms::Button());
			this->groupWindow_headerBackToListBtn = (gcnew System::Windows::Forms::Button());
			this->GroupWindow_headerLabel = (gcnew System::Windows::Forms::Label());
			this->GroupWindow_panelForGroups = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GroupWindow_header->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// GroupWindow_header
			// 
			this->GroupWindow_header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->GroupWindow_header->Controls->Add(this->groupWindow_headerAddUserBtn);
			this->GroupWindow_header->Controls->Add(this->groupWindow_headerBackToListBtn);
			this->GroupWindow_header->Controls->Add(this->GroupWindow_headerLabel);
			this->GroupWindow_header->Dock = System::Windows::Forms::DockStyle::Top;
			this->GroupWindow_header->Location = System::Drawing::Point(0, 0);
			this->GroupWindow_header->Name = L"GroupWindow_header";
			this->GroupWindow_header->Size = System::Drawing::Size(982, 100);
			this->GroupWindow_header->TabIndex = 1;
			// 
			// groupWindow_headerAddUserBtn
			// 
			this->groupWindow_headerAddUserBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupWindow_headerAddUserBtn->FlatAppearance->BorderSize = 0;
			this->groupWindow_headerAddUserBtn->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupWindow_headerAddUserBtn->Location = System::Drawing::Point(268, 30);
			this->groupWindow_headerAddUserBtn->Name = L"groupWindow_headerAddUserBtn";
			this->groupWindow_headerAddUserBtn->Size = System::Drawing::Size(230, 36);
			this->groupWindow_headerAddUserBtn->TabIndex = 3;
			this->groupWindow_headerAddUserBtn->Text = L"Dodaj użytkownika do grupy";
			this->groupWindow_headerAddUserBtn->UseVisualStyleBackColor = true;
			this->groupWindow_headerAddUserBtn->Click += gcnew System::EventHandler(this, &GroupWindow::groupWindow_headerAddUserBtn_Click);
			// 
			// groupWindow_headerBackToListBtn
			// 
			this->groupWindow_headerBackToListBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupWindow_headerBackToListBtn->FlatAppearance->BorderSize = 0;
			this->groupWindow_headerBackToListBtn->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupWindow_headerBackToListBtn->Location = System::Drawing::Point(12, 30);
			this->groupWindow_headerBackToListBtn->Name = L"groupWindow_headerBackToListBtn";
			this->groupWindow_headerBackToListBtn->Size = System::Drawing::Size(230, 36);
			this->groupWindow_headerBackToListBtn->TabIndex = 2;
			this->groupWindow_headerBackToListBtn->Text = L"Wróć do listy grup";
			this->groupWindow_headerBackToListBtn->UseVisualStyleBackColor = true;
			this->groupWindow_headerBackToListBtn->Click += gcnew System::EventHandler(this, &GroupWindow::groupWindow_headerBackToListBtn_Click);
			// 
			// GroupWindow_headerLabel
			// 
			this->GroupWindow_headerLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GroupWindow_headerLabel->AutoSize = true;
			this->GroupWindow_headerLabel->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GroupWindow_headerLabel->Location = System::Drawing::Point(598, 24);
			this->GroupWindow_headerLabel->Name = L"GroupWindow_headerLabel";
			this->GroupWindow_headerLabel->Size = System::Drawing::Size(280, 51);
			this->GroupWindow_headerLabel->TabIndex = 1;
			this->GroupWindow_headerLabel->Text = L"Group Name";
			this->GroupWindow_headerLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// GroupWindow_panelForGroups
			// 
			this->GroupWindow_panelForGroups->Location = System::Drawing::Point(0, 129);
			this->GroupWindow_panelForGroups->Name = L"GroupWindow_panelForGroups";
			this->GroupWindow_panelForGroups->Size = System::Drawing::Size(814, 624);
			this->GroupWindow_panelForGroups->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(816, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(166, 653);
			this->panel1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Eventy";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GroupWindow::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(816, 33);
			this->panel2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Uczestnicy grupy:";
			// 
			// GroupWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->GroupWindow_panelForGroups);
			this->Controls->Add(this->GroupWindow_header);
			this->Name = L"GroupWindow";
			this->Text = L"GroupWindow";
			this->Shown += gcnew System::EventHandler(this, &GroupWindow::GroupWindow_Shown);
			this->GroupWindow_header->ResumeLayout(false);
			this->GroupWindow_header->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
			
		
	private: System::Void groupWindow_headerBackToListBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		okno2->Show();
	}

	
	private: System::Void GroupWindow_Shown(System::Object^ sender, System::EventArgs^ e) {
		
		updateMembersOfGroup();
				
	}
	private: System::Void groupWindow_headerAddUserBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
		AddUserToGroupForm^ groupWindowAddUser = gcnew AddUserToGroupForm(this, GroupID);
		groupWindowAddUser->ShowDialog();
		if (groupWindowAddUser->DialogResult == System::Windows::Forms::DialogResult::OK)
		{	
			updateMembersOfGroup();
		}
	}

	private: void updateMembersOfGroup()
	{
		GroupWindow_panelForGroups->Controls->Clear();
		try
		{
			conDatabase->Open();
			membersList->Clear();
			membersIDList->Clear();


			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM grouporg.`members` WHERE members.`GroupID` = @value", conDatabase);
			cmd->Parameters->AddWithValue("@value", GroupID);


			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				 String^ MemberID = reader->GetString(0);
				 String^ MemberName = reader->GetString(2);
				 String^ MemberSecondName = reader->GetString(3);
				 String^ memberInit = MemberName + " " + MemberSecondName;
				 membersIDList->Add(MemberID);
				 membersList->Add(memberInit);

			}

			for (int i = 0; i < membersList->Count; i++)
			{
				 
				 Panel^ groupWindow_panelForGroups_panel = gcnew Panel();
				 groupWindow_panelForGroups_panel->Dock = System::Windows::Forms::DockStyle::Top;
				 groupWindow_panelForGroups_panel->Location = System::Drawing::Point(0, 30);
				 groupWindow_panelForGroups_panel->Name = L"groupWindow_panelForGroups_panel";
				 groupWindow_panelForGroups_panel->Size = System::Drawing::Size(982, 30);
				 groupWindow_panelForGroups_panel->TabIndex = 0;
				 //groupWindow_panelForGroups_panel->Cursor = System::Windows::Forms::Cursors::Hand;

				 Panel^ groupWindow_panel_forBtn = gcnew Panel();
				 groupWindow_panel_forBtn->Dock = System::Windows::Forms::DockStyle::Right;

				 groupWindow_panel_forBtn->Size = System::Drawing::Size(155, 30);
				 groupWindow_panel_forBtn->Name = L"groupWindow_panel_forBtn";

				 Button^ groupWindow_deleteUserBtn = gcnew Button();
				 groupWindow_deleteUserBtn->Text = "Usun";
				 groupWindow_deleteUserBtn->Dock = System::Windows::Forms::DockStyle::Right;
				 groupWindow_deleteUserBtn->Name = L"groupWindow_deleteUserBtn";
				 groupWindow_deleteUserBtn->Tag = membersIDList[i];
				 groupWindow_deleteUserBtn->Click += gcnew System::EventHandler(this, &GroupWindow::groupWindow_deleteUserBtn_Click);

				 Button^ groupWindow_infoUserBtn = gcnew Button();
				 groupWindow_infoUserBtn->Text = "Informacja";
				 groupWindow_infoUserBtn->Dock = System::Windows::Forms::DockStyle::Left;		
				 groupWindow_infoUserBtn->Name = L"groupWindow_infoUserBtn";
				 groupWindow_infoUserBtn->Tag = membersIDList[i];
				 groupWindow_infoUserBtn->Click += gcnew System::EventHandler(this, &GroupWindow::groupWindow_infoUserBtn_Click);
				 



				 Label^ groupWindow_panelForGroups_panel_label = gcnew Label();
				 groupWindow_panelForGroups_panel_label->AutoSize = true;
				 groupWindow_panelForGroups_panel_label->Font = (gcnew System::Drawing::Font(L"Bell MT", 12,  System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			 			   static_cast<System::Byte>(0)));
				 groupWindow_panelForGroups_panel_label->Location = System::Drawing::Point(3, 4);
				 groupWindow_panelForGroups_panel_label->Name = L"groupWindow_panelForGroups_panel_label";
				 groupWindow_panelForGroups_panel_label->Size = System::Drawing::Size(159, 23);
				 groupWindow_panelForGroups_panel_label->TabIndex = 2;
				 groupWindow_panelForGroups_panel_label->Text = membersList[i];

				 groupWindow_panel_forBtn->Controls->Add(groupWindow_deleteUserBtn);
				 groupWindow_panel_forBtn->Controls->Add(groupWindow_infoUserBtn);
			 
				 groupWindow_panelForGroups_panel->Controls->Add(groupWindow_panel_forBtn);
				 groupWindow_panelForGroups_panel->Controls->Add(groupWindow_panelForGroups_panel_label);
			 
				 GroupWindow_panelForGroups->Controls->Add(groupWindow_panelForGroups_panel);
			


				}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conDatabase->Close();
		}
	}

	private: System::Void groupWindow_deleteUserBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userID = safe_cast<Button^>(sender)->Tag->ToString();
		deleteUser(userID);
		updateMembersOfGroup();
		
	}
	private: System::Void groupWindow_infoUserBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userID = safe_cast<Button^>(sender)->Tag->ToString();
		CurentMemberInfo^ curentMemberInfo = gcnew CurentMemberInfo(this, userID);
		curentMemberInfo->ShowDialog();

		if(curentMemberInfo->DialogResult == System::Windows::Forms::DialogResult::OK)
		{
			updateMembersOfGroup();
		}
		
	}


	private: void deleteUser(String^ userID)
	{
	try
		{
		
			conDatabase->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM grouporg.`members` WHERE members.`MemberID` = @value", conDatabase);
			cmd->Parameters->AddWithValue("@value", userID);
			cmd->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conDatabase->Close();
		}
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}




//// 