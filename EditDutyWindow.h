#include "AddDuty.h"
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
	/// —водка дл€ EditDutyWindow
	/// </summary>
	/// this, GroupID, eventId, eventName
	public ref class EditDutyWindow : public System::Windows::Forms::Form
	{
	public:
		EditDutyWindow(Form^ okno, String^ eventID, String^ GroupID, String^ duty)
		{
			InitializeComponent();
			
			
			this->StartPosition = FormStartPosition::CenterScreen;
			this->duty = duty;
			
			this->GroupID = GroupID;
			this->eventID = eventID;

			this->okno = okno;

		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~EditDutyWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ eventID;
	private: Form^ okno;
	private: String^ GroupID;
			
			String^ duty;

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	private: System::Windows::Forms::Panel^ addDuty_backgroundPanel;
	private: System::Windows::Forms::Label^ editDuty_labelForDutyText;
	private: System::Windows::Forms::Label^ editDuty_labelForMemberList;
	private: System::Windows::Forms::ComboBox^ editDuty_memberList;
	protected:



	private: System::Windows::Forms::Button^ editDuty_cancel;
	private: System::Windows::Forms::Button^ editDuty_editBtn;
	private: System::Windows::Forms::TextBox^ editDuty_textBoxForDuty;
	private: System::Windows::Forms::Label^ editDuty_label;





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditDutyWindow::typeid));
			this->addDuty_backgroundPanel = (gcnew System::Windows::Forms::Panel());
			this->editDuty_labelForDutyText = (gcnew System::Windows::Forms::Label());
			this->editDuty_labelForMemberList = (gcnew System::Windows::Forms::Label());
			this->editDuty_memberList = (gcnew System::Windows::Forms::ComboBox());
			this->editDuty_cancel = (gcnew System::Windows::Forms::Button());
			this->editDuty_editBtn = (gcnew System::Windows::Forms::Button());
			this->editDuty_textBoxForDuty = (gcnew System::Windows::Forms::TextBox());
			this->editDuty_label = (gcnew System::Windows::Forms::Label());
			this->addDuty_backgroundPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// addDuty_backgroundPanel
			// 
			this->addDuty_backgroundPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->addDuty_backgroundPanel->Controls->Add(this->editDuty_labelForDutyText);
			this->addDuty_backgroundPanel->Controls->Add(this->editDuty_labelForMemberList);
			this->addDuty_backgroundPanel->Controls->Add(this->editDuty_memberList);
			this->addDuty_backgroundPanel->Controls->Add(this->editDuty_cancel);
			this->addDuty_backgroundPanel->Controls->Add(this->editDuty_editBtn);
			this->addDuty_backgroundPanel->Controls->Add(this->editDuty_textBoxForDuty);
			this->addDuty_backgroundPanel->Controls->Add(this->editDuty_label);
			this->addDuty_backgroundPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addDuty_backgroundPanel->Location = System::Drawing::Point(0, 0);
			this->addDuty_backgroundPanel->Name = L"addDuty_backgroundPanel";
			this->addDuty_backgroundPanel->Size = System::Drawing::Size(665, 413);
			this->addDuty_backgroundPanel->TabIndex = 2;
			// 
			// editDuty_labelForDutyText
			// 
			this->editDuty_labelForDutyText->AutoSize = true;
			this->editDuty_labelForDutyText->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editDuty_labelForDutyText->Location = System::Drawing::Point(23, 182);
			this->editDuty_labelForDutyText->Name = L"editDuty_labelForDutyText";
			this->editDuty_labelForDutyText->Size = System::Drawing::Size(169, 22);
			this->editDuty_labelForDutyText->TabIndex = 6;
			this->editDuty_labelForDutyText->Text = L"Wpisz co ma zrobic:";
			// 
			// editDuty_labelForMemberList
			// 
			this->editDuty_labelForMemberList->AutoSize = true;
			this->editDuty_labelForMemberList->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editDuty_labelForMemberList->Location = System::Drawing::Point(59, 136);
			this->editDuty_labelForMemberList->Name = L"editDuty_labelForMemberList";
			this->editDuty_labelForMemberList->Size = System::Drawing::Size(133, 22);
			this->editDuty_labelForMemberList->TabIndex = 5;
			this->editDuty_labelForMemberList->Text = L"Wybierz osobe:";
			// 
			// editDuty_memberList
			// 
			this->editDuty_memberList->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->editDuty_memberList->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->editDuty_memberList->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editDuty_memberList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->editDuty_memberList->Enabled = false;
			this->editDuty_memberList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->editDuty_memberList->FormattingEnabled = true;
			this->editDuty_memberList->Location = System::Drawing::Point(224, 133);
			this->editDuty_memberList->Name = L"editDuty_memberList";
			this->editDuty_memberList->Size = System::Drawing::Size(316, 30);
			this->editDuty_memberList->TabIndex = 4;
			// 
			// editDuty_cancel
			// 
			this->editDuty_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editDuty_cancel->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editDuty_cancel->Location = System::Drawing::Point(63, 316);
			this->editDuty_cancel->Name = L"editDuty_cancel";
			this->editDuty_cancel->Size = System::Drawing::Size(200, 40);
			this->editDuty_cancel->TabIndex = 3;
			this->editDuty_cancel->Text = L"Anuluj";
			this->editDuty_cancel->UseVisualStyleBackColor = true;
			this->editDuty_cancel->Click += gcnew System::EventHandler(this, &EditDutyWindow::editDuty_cancel_Click);
			// 
			// editDuty_editBtn
			// 
			this->editDuty_editBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editDuty_editBtn->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->editDuty_editBtn->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editDuty_editBtn->Location = System::Drawing::Point(387, 316);
			this->editDuty_editBtn->Name = L"editDuty_editBtn";
			this->editDuty_editBtn->Size = System::Drawing::Size(200, 40);
			this->editDuty_editBtn->TabIndex = 2;
			this->editDuty_editBtn->Text = L"Edytuj";
			this->editDuty_editBtn->UseVisualStyleBackColor = true;
			this->editDuty_editBtn->Click += gcnew System::EventHandler(this, &EditDutyWindow::editDuty_editBtn_Click);
			// 
			// editDuty_textBoxForDuty
			// 
			this->editDuty_textBoxForDuty->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->editDuty_textBoxForDuty->Location = System::Drawing::Point(224, 181);
			this->editDuty_textBoxForDuty->Multiline = true;
			this->editDuty_textBoxForDuty->Name = L"editDuty_textBoxForDuty";
			this->editDuty_textBoxForDuty->Size = System::Drawing::Size(316, 96);
			this->editDuty_textBoxForDuty->TabIndex = 1;
			// 
			// editDuty_label
			// 
			this->editDuty_label->AutoSize = true;
			this->editDuty_label->Font = (gcnew System::Drawing::Font(L"Elephant", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editDuty_label->Location = System::Drawing::Point(168, 42);
			this->editDuty_label->Name = L"editDuty_label";
			this->editDuty_label->Size = System::Drawing::Size(346, 47);
			this->editDuty_label->TabIndex = 0;
			this->editDuty_label->Text = L"Edytuj obowiazek";
			// 
			// EditDutyWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 413);
			this->Controls->Add(this->addDuty_backgroundPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditDutyWindow";
			this->Text = L"EditDutyWindow";
			this->Shown += gcnew System::EventHandler(this, &EditDutyWindow::EditDutyWindow_Shown);
			this->addDuty_backgroundPanel->ResumeLayout(false);
			this->addDuty_backgroundPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void loadMembers() {
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `groupOrg`.`members` WHERE GroupID = " + GroupID + ";", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read()) {
				String^ firstName = myReader->GetString(2);
				String^ secondName = myReader->GetString(3);
				String^ memberID = myReader->GetString(0);
				String^ member = firstName + " " + secondName;
				this->editDuty_memberList->Items->Add(member);

				//memberId_List->Add(memberID);

			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			conDatabase->Close();
		}
	}


	
	private: System::Void EditDutyWindow_Shown(System::Object^ sender, System::EventArgs^ e) {
		loadMembers();
		MySqlCommand^ cmdForFill = gcnew MySqlCommand("SELECT `members`.`FirstName`, `members`.`LastName`, `idevent_idmember_duty`.`duty` FROM `grouporg`.`members` JOIN `grouporg`.`idevent_idmember_duty` ON `members`.`MemberID` = `idevent_idmember_duty`.`idMember` WHERE `duty` = '"+ duty + "'", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdForFill->ExecuteReader();
			while (myReader->Read()) {
				editDuty_memberList->Text = myReader->GetString(0) + " " + myReader->GetString(1);
				editDuty_textBoxForDuty->Text = myReader->GetString(2);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conDatabase->Close();
		}

	}

	private: System::Void editDuty_editBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE `grouporg`.`idevent_idmember_duty` SET `duty` = '" + editDuty_textBoxForDuty->Text + "' WHERE `idevent_idmember_duty`.`idEvent` = " + eventID + " AND `idevent_idmember_duty`.`idMember` = (SELECT `MemberID` FROM `grouporg`.`members` WHERE CONCAT(`members`.`FirstName`, ' ', `members`.`LastName`) = '" + editDuty_memberList->Text + "')", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmd->ExecuteReader();
			//MessageBox::Show("Obowiazek zostal zmieniony");
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conDatabase->Close();
		}
		//MessageBox::Show("Obowiazek zostal zmieniony");
		//this->Close();
		//UPDATE `grouporg`.`idevent_idmember_duty` SET `duty` = 'Sprzatanie' WHERE `idevent_idmember_duty`.`idEvent` = 1 AND `idevent_idmember_duty`.`idMember` = (SELECT `MemberID` FROM `grouporg`.`members` WHERE CONCAT(`members`.`FirstName`, ' ', `members`.`LastName`) = 'Kamil Kowalski')

	}
	
	private: System::Void editDuty_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
};
}