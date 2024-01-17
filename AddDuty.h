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
	/// Сводка для AddDuty
	/// </summary>
	public ref class AddDuty : public System::Windows::Forms::Form
	{
	public:
		AddDuty(Form^ okno, String^ GroupID, String^ eventId, String^ eventName)
		{
			InitializeComponent();
			
			this->StartPosition = FormStartPosition::CenterScreen;
			this->okno = okno;
			this->eventId = eventId;
			this->eventName = eventName;
			this->addDuty_label->Text = eventName;
			this->GroupID = GroupID;
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddDuty()
		{
			if (components)
			{
				delete components;
			}
		}
	private:

		Form^ okno;
		String^ eventId;
		String^ eventName;
		String^ GroupID;
		String^ memberID;

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	private: System::Windows::Forms::Panel^ addDuty_backgroundPanel;
	protected:

	private: System::Windows::Forms::Button^ addDuty_cancel;
	private: System::Windows::Forms::Button^ addDuty_addBtn;
	protected:


	private: System::Windows::Forms::TextBox^ addDuty_textBoxForDuty;



	private: System::Windows::Forms::Label^ addDuty_label;
	private: System::Windows::Forms::Label^ addDuty_labelForMemberList;

	private: System::Windows::Forms::ComboBox^ addDuty_memberList;
	private: System::Windows::Forms::Label^ addDuty_labelForDutyText;




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
			this->addDuty_backgroundPanel = (gcnew System::Windows::Forms::Panel());
			this->addDuty_labelForDutyText = (gcnew System::Windows::Forms::Label());
			this->addDuty_labelForMemberList = (gcnew System::Windows::Forms::Label());
			this->addDuty_memberList = (gcnew System::Windows::Forms::ComboBox());
			this->addDuty_cancel = (gcnew System::Windows::Forms::Button());
			this->addDuty_addBtn = (gcnew System::Windows::Forms::Button());
			this->addDuty_textBoxForDuty = (gcnew System::Windows::Forms::TextBox());
			this->addDuty_label = (gcnew System::Windows::Forms::Label());
			this->addDuty_backgroundPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// addDuty_backgroundPanel
			// 
			this->addDuty_backgroundPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->addDuty_backgroundPanel->Controls->Add(this->addDuty_labelForDutyText);
			this->addDuty_backgroundPanel->Controls->Add(this->addDuty_labelForMemberList);
			this->addDuty_backgroundPanel->Controls->Add(this->addDuty_memberList);
			this->addDuty_backgroundPanel->Controls->Add(this->addDuty_cancel);
			this->addDuty_backgroundPanel->Controls->Add(this->addDuty_addBtn);
			this->addDuty_backgroundPanel->Controls->Add(this->addDuty_textBoxForDuty);
			this->addDuty_backgroundPanel->Controls->Add(this->addDuty_label);
			this->addDuty_backgroundPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addDuty_backgroundPanel->Location = System::Drawing::Point(0, 0);
			this->addDuty_backgroundPanel->Name = L"addDuty_backgroundPanel";
			this->addDuty_backgroundPanel->Size = System::Drawing::Size(682, 436);
			this->addDuty_backgroundPanel->TabIndex = 1;
			// 
			// addDuty_labelForDutyText
			// 
			this->addDuty_labelForDutyText->AutoSize = true;
			this->addDuty_labelForDutyText->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addDuty_labelForDutyText->Location = System::Drawing::Point(23, 182);
			this->addDuty_labelForDutyText->Name = L"addDuty_labelForDutyText";
			this->addDuty_labelForDutyText->Size = System::Drawing::Size(169, 22);
			this->addDuty_labelForDutyText->TabIndex = 6;
			this->addDuty_labelForDutyText->Text = L"Wpisz co ma zrobic:";
			// 
			// addDuty_labelForMemberList
			// 
			this->addDuty_labelForMemberList->AutoSize = true;
			this->addDuty_labelForMemberList->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addDuty_labelForMemberList->Location = System::Drawing::Point(59, 136);
			this->addDuty_labelForMemberList->Name = L"addDuty_labelForMemberList";
			this->addDuty_labelForMemberList->Size = System::Drawing::Size(133, 22);
			this->addDuty_labelForMemberList->TabIndex = 5;
			this->addDuty_labelForMemberList->Text = L"Wybierz osobe:";
			// 
			// addDuty_memberList
			// 
			this->addDuty_memberList->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->addDuty_memberList->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->addDuty_memberList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->addDuty_memberList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addDuty_memberList->Location = System::Drawing::Point(224, 133);
			this->addDuty_memberList->Name = L"addDuty_memberList";
			this->addDuty_memberList->Size = System::Drawing::Size(316, 30);
			this->addDuty_memberList->TabIndex = 4;
			// 
			// addDuty_cancel
			// 
			this->addDuty_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addDuty_cancel->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addDuty_cancel->Location = System::Drawing::Point(63, 316);
			this->addDuty_cancel->Name = L"addDuty_cancel";
			this->addDuty_cancel->Size = System::Drawing::Size(200, 40);
			this->addDuty_cancel->TabIndex = 3;
			this->addDuty_cancel->Text = L"Anuluj";
			this->addDuty_cancel->UseVisualStyleBackColor = true;
			this->addDuty_cancel->Click += gcnew System::EventHandler(this, &AddDuty::addDuty_cancel_Click);
			// 
			// addDuty_addBtn
			// 
			this->addDuty_addBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addDuty_addBtn->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->addDuty_addBtn->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addDuty_addBtn->Location = System::Drawing::Point(387, 316);
			this->addDuty_addBtn->Name = L"addDuty_addBtn";
			this->addDuty_addBtn->Size = System::Drawing::Size(200, 40);
			this->addDuty_addBtn->TabIndex = 2;
			this->addDuty_addBtn->Text = L"Przydziel";
			this->addDuty_addBtn->UseVisualStyleBackColor = true;
			this->addDuty_addBtn->Click += gcnew System::EventHandler(this, &AddDuty::addDuty_addBtn_Click);
			// 
			// addDuty_textBoxForDuty
			// 
			this->addDuty_textBoxForDuty->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addDuty_textBoxForDuty->Location = System::Drawing::Point(224, 181);
			this->addDuty_textBoxForDuty->Multiline = true;
			this->addDuty_textBoxForDuty->Name = L"addDuty_textBoxForDuty";
			this->addDuty_textBoxForDuty->Size = System::Drawing::Size(316, 96);
			this->addDuty_textBoxForDuty->TabIndex = 1;
			// 
			// addDuty_label
			// 
			this->addDuty_label->AutoSize = true;
			this->addDuty_label->Font = (gcnew System::Drawing::Font(L"Elephant", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addDuty_label->Location = System::Drawing::Point(162, 41);
			this->addDuty_label->Name = L"addDuty_label";
			this->addDuty_label->Size = System::Drawing::Size(397, 47);
			this->addDuty_label->TabIndex = 0;
			this->addDuty_label->Text = L"Przydziel obowiazek";
			// 
			// AddDuty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 436);
			this->Controls->Add(this->addDuty_backgroundPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddDuty";
			this->Text = L"AddDuty";
			this->Shown += gcnew System::EventHandler(this, &AddDuty::AddDuty_Shown);
			this->addDuty_backgroundPanel->ResumeLayout(false);
			this->addDuty_backgroundPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void addDuty_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: void loadMembers() {
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `groupOrg`.`members` WHERE GroupID = " + GroupID + ";", conDatabase);
		MySqlDataReader^ myReader;
		try{
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read()){
				String^ firstName = myReader->GetString(2);
				String^ secondName = myReader->GetString(3);
				memberID = myReader->GetString(0);
				String^ member = firstName + " " + secondName;
				this->addDuty_memberList->Items->Add(member);
				
				memberId_List->Add(memberID);
				
			}
			
		}
		catch (Exception^ ex){
			MessageBox::Show(ex->Message);
		}
		finally{
			conDatabase->Close();
		}
	}

	private: System::Void AddDuty_Shown(System::Object^ sender, System::EventArgs^ e) {
	
		loadMembers();
	}

	private: List<String^>^ memberId_List = gcnew List<String^>();
	private: System::Void addDuty_addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int index = addDuty_memberList->SelectedIndex;
		//MessageBox::Show("Dodano obowiazek" + memberId_List[index]);
			

		String^ cmd = "INSERT INTO `groupOrg`.`idevent_idmember_duty`(`idEvent`, `idMember`, `duty`, `is_complited`) VALUES ('" + eventId + "',' " + memberId_List[index] +" ' ,'" + addDuty_textBoxForDuty->Text + "', 'No')";
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(cmd, conDatabase);
	
		try
		{
			conDatabase->Open();

			MySqlDataReader^ reader = cmdDataBase->ExecuteReader();
			//this->Close();

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
};
}
