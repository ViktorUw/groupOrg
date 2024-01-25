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
	/// Сводка для CurentMemberInfo
	/// </summary>
	public ref class CurentMemberInfo : public System::Windows::Forms::Form
	{
	private: String^ userID;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::DateTimePicker^ currentMember_TextBoxForAddDate;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Label^ currentMember_LabelForAddDate;
	private: Form^ okno;
	private: bool isEdit = false;
	public:		
		CurentMemberInfo(Form^ okno, String^ userID)
		{
			InitializeComponent();

			this->okno = okno;
			this->userID = userID;
			this->StartPosition = FormStartPosition::CenterScreen;
			disableTextBoxes(isEdit);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CurentMemberInfo()
		{
			if (components)
			{
				delete components;
			}
		}


	

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);


	private: System::Windows::Forms::Panel^ panel7;
	protected:
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Button^ currentMember_Cancel;

	private: System::Windows::Forms::Button^ currentMember_editUser;




	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::TextBox^ currentMember_TextBoxForPhoneNumber;

	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ currentMember_LabelForPhoneNumber;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ currentMember_radioButtonWoman;

	private: System::Windows::Forms::RadioButton^ currentMember_radioButtonMan;

	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ currentMember_LabelForGender;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::DateTimePicker^ currentMember_TextBoxForBirthDate;

	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ currentMember_LabelForBirthDate;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ currentMember_TextBoxForMail;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ currentMember_LabelForMail;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ currentMember_TextBoxForSecondName;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ currentMember_labelForSecondName;
	private: System::Windows::Forms::Panel^ addUserForm_panelForName;



	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ currentMember_TextBoxForName;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ currentMember_labelForName;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: void disableTextBoxes(bool isEdit) {
		if (isEdit) {
			currentMember_TextBoxForName->Enabled = true;
			currentMember_TextBoxForSecondName->Enabled = true;
			currentMember_TextBoxForMail->Enabled = true;
			currentMember_TextBoxForBirthDate->Enabled = true;
			currentMember_TextBoxForPhoneNumber->Enabled = true;
			currentMember_radioButtonMan->Enabled = true;
			currentMember_radioButtonWoman->Enabled = true;
			currentMember_TextBoxForAddDate->Enabled = true;

			currentMember_editUser->Text = "Zapisz";					
		}
		else
		{
			currentMember_TextBoxForName->Enabled = false;
			currentMember_TextBoxForSecondName->Enabled = false;
			currentMember_TextBoxForMail->Enabled = false;
			currentMember_TextBoxForBirthDate->Enabled = false;
			currentMember_TextBoxForPhoneNumber->Enabled = false;
			currentMember_radioButtonMan->Enabled = false;
			currentMember_radioButtonWoman->Enabled = false;
			currentMember_TextBoxForAddDate->Enabled = false;

			currentMember_editUser->Text = "Edytuj";
		}
		
	}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CurentMemberInfo::typeid));
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_TextBoxForAddDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_LabelForAddDate = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_Cancel = (gcnew System::Windows::Forms::Button());
			this->currentMember_editUser = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_TextBoxForPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_LabelForPhoneNumber = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->currentMember_radioButtonWoman = (gcnew System::Windows::Forms::RadioButton());
			this->currentMember_radioButtonMan = (gcnew System::Windows::Forms::RadioButton());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_LabelForGender = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_TextBoxForBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_LabelForBirthDate = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_TextBoxForMail = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_LabelForMail = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_TextBoxForSecondName = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_labelForSecondName = (gcnew System::Windows::Forms::Label());
			this->addUserForm_panelForName = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_TextBoxForName = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->currentMember_labelForName = (gcnew System::Windows::Forms::Label());
			this->panel7->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->addUserForm_panelForName->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->panel20);
			this->panel7->Controls->Add(this->panel19);
			this->panel7->Controls->Add(this->panel16);
			this->panel7->Controls->Add(this->panel13);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->panel4);
			this->panel7->Controls->Add(this->panel1);
			this->panel7->Controls->Add(this->addUserForm_panelForName);
			this->panel7->Location = System::Drawing::Point(67, 44);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(631, 427);
			this->panel7->TabIndex = 5;
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->panel21);
			this->panel20->Controls->Add(this->panel22);
			this->panel20->Location = System::Drawing::Point(15, 259);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(563, 34);
			this->panel20->TabIndex = 9;
			// 
			// panel21
			// 
			this->panel21->Controls->Add(this->currentMember_TextBoxForAddDate);
			this->panel21->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel21->Location = System::Drawing::Point(237, 0);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(326, 34);
			this->panel21->TabIndex = 6;
			// 
			// currentMember_TextBoxForAddDate
			// 
			this->currentMember_TextBoxForAddDate->CustomFormat = L"yyyy-MM-dd";
			this->currentMember_TextBoxForAddDate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->currentMember_TextBoxForAddDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->currentMember_TextBoxForAddDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->currentMember_TextBoxForAddDate->Location = System::Drawing::Point(0, 0);
			this->currentMember_TextBoxForAddDate->Name = L"currentMember_TextBoxForAddDate";
			this->currentMember_TextBoxForAddDate->Size = System::Drawing::Size(326, 32);
			this->currentMember_TextBoxForAddDate->TabIndex = 0;
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->currentMember_LabelForAddDate);
			this->panel22->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel22->Location = System::Drawing::Point(0, 0);
			this->panel22->Name = L"panel22";
			this->panel22->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel22->Size = System::Drawing::Size(192, 34);
			this->panel22->TabIndex = 5;
			// 
			// currentMember_LabelForAddDate
			// 
			this->currentMember_LabelForAddDate->AutoSize = true;
			this->currentMember_LabelForAddDate->Dock = System::Windows::Forms::DockStyle::Right;
			this->currentMember_LabelForAddDate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->currentMember_LabelForAddDate->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentMember_LabelForAddDate->Location = System::Drawing::Point(68, 5);
			this->currentMember_LabelForAddDate->Margin = System::Windows::Forms::Padding(0);
			this->currentMember_LabelForAddDate->Name = L"currentMember_LabelForAddDate";
			this->currentMember_LabelForAddDate->Size = System::Drawing::Size(124, 23);
			this->currentMember_LabelForAddDate->TabIndex = 3;
			this->currentMember_LabelForAddDate->Text = L"Data dodania:";
			this->currentMember_LabelForAddDate->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->currentMember_Cancel);
			this->panel19->Controls->Add(this->currentMember_editUser);
			this->panel19->Location = System::Drawing::Point(43, 335);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(553, 45);
			this->panel19->TabIndex = 8;
			// 
			// currentMember_Cancel
			// 
			this->currentMember_Cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->currentMember_Cancel->FlatAppearance->BorderSize = 0;
			this->currentMember_Cancel->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentMember_Cancel->Location = System::Drawing::Point(41, 3);
			this->currentMember_Cancel->Name = L"currentMember_Cancel";
			this->currentMember_Cancel->Size = System::Drawing::Size(175, 36);
			this->currentMember_Cancel->TabIndex = 10;
			this->currentMember_Cancel->Text = L"Anuluj";
			this->currentMember_Cancel->UseVisualStyleBackColor = true;
			this->currentMember_Cancel->Click += gcnew System::EventHandler(this, &CurentMemberInfo::addUserToGroup_Cancel_Click);
			// 
			// currentMember_editUser
			// 
			this->currentMember_editUser->Cursor = System::Windows::Forms::Cursors::Hand;
			this->currentMember_editUser->FlatAppearance->BorderSize = 0;
			this->currentMember_editUser->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentMember_editUser->Location = System::Drawing::Point(297, 3);
			this->currentMember_editUser->Name = L"currentMember_editUser";
			this->currentMember_editUser->Size = System::Drawing::Size(175, 36);
			this->currentMember_editUser->TabIndex = 9;
			this->currentMember_editUser->Text = L"Edytuj";
			this->currentMember_editUser->UseVisualStyleBackColor = true;
			this->currentMember_editUser->Click += gcnew System::EventHandler(this, &CurentMemberInfo::currentMember_editUser_Click);
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->panel17);
			this->panel16->Controls->Add(this->panel18);
			this->panel16->Location = System::Drawing::Point(15, 219);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(563, 34);
			this->panel16->TabIndex = 7;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->currentMember_TextBoxForPhoneNumber);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel17->Location = System::Drawing::Point(237, 0);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(326, 34);
			this->panel17->TabIndex = 6;
			// 
			// currentMember_TextBoxForPhoneNumber
			// 
			this->currentMember_TextBoxForPhoneNumber->Dock = System::Windows::Forms::DockStyle::Fill;
			this->currentMember_TextBoxForPhoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->currentMember_TextBoxForPhoneNumber->Location = System::Drawing::Point(0, 0);
			this->currentMember_TextBoxForPhoneNumber->Name = L"currentMember_TextBoxForPhoneNumber";
			this->currentMember_TextBoxForPhoneNumber->Size = System::Drawing::Size(326, 32);
			this->currentMember_TextBoxForPhoneNumber->TabIndex = 3;
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->currentMember_LabelForPhoneNumber);
			this->panel18->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel18->Location = System::Drawing::Point(0, 0);
			this->panel18->Name = L"panel18";
			this->panel18->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel18->Size = System::Drawing::Size(192, 34);
			this->panel18->TabIndex = 5;
			// 
			// currentMember_LabelForPhoneNumber
			// 
			this->currentMember_LabelForPhoneNumber->AutoSize = true;
			this->currentMember_LabelForPhoneNumber->Dock = System::Windows::Forms::DockStyle::Right;
			this->currentMember_LabelForPhoneNumber->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->currentMember_LabelForPhoneNumber->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->currentMember_LabelForPhoneNumber->Location = System::Drawing::Point(51, 5);
			this->currentMember_LabelForPhoneNumber->Margin = System::Windows::Forms::Padding(0);
			this->currentMember_LabelForPhoneNumber->Name = L"currentMember_LabelForPhoneNumber";
			this->currentMember_LabelForPhoneNumber->Size = System::Drawing::Size(141, 23);
			this->currentMember_LabelForPhoneNumber->TabIndex = 3;
			this->currentMember_LabelForPhoneNumber->Text = L"Numer telefonu";
			this->currentMember_LabelForPhoneNumber->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->panel15);
			this->panel13->Location = System::Drawing::Point(15, 177);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(563, 34);
			this->panel13->TabIndex = 7;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->groupBox1);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel14->Location = System::Drawing::Point(237, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(326, 34);
			this->panel14->TabIndex = 6;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->currentMember_radioButtonWoman);
			this->groupBox1->Controls->Add(this->currentMember_radioButtonMan);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(326, 34);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// currentMember_radioButtonWoman
			// 
			this->currentMember_radioButtonWoman->AutoSize = true;
			this->currentMember_radioButtonWoman->BackColor = System::Drawing::Color::White;
			this->currentMember_radioButtonWoman->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->currentMember_radioButtonWoman->Location = System::Drawing::Point(169, 10);
			this->currentMember_radioButtonWoman->Name = L"currentMember_radioButtonWoman";
			this->currentMember_radioButtonWoman->Size = System::Drawing::Size(79, 22);
			this->currentMember_radioButtonWoman->TabIndex = 5;
			this->currentMember_radioButtonWoman->TabStop = true;
			this->currentMember_radioButtonWoman->Text = L"Kobieta";
			this->currentMember_radioButtonWoman->UseVisualStyleBackColor = false;
			// 
			// currentMember_radioButtonMan
			// 
			this->currentMember_radioButtonMan->AutoSize = true;
			this->currentMember_radioButtonMan->BackColor = System::Drawing::Color::White;
			this->currentMember_radioButtonMan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->currentMember_radioButtonMan->Location = System::Drawing::Point(31, 9);
			this->currentMember_radioButtonMan->Name = L"currentMember_radioButtonMan";
			this->currentMember_radioButtonMan->Size = System::Drawing::Size(105, 22);
			this->currentMember_radioButtonMan->TabIndex = 4;
			this->currentMember_radioButtonMan->TabStop = true;
			this->currentMember_radioButtonMan->Text = L"Mężczyzna";
			this->currentMember_radioButtonMan->UseVisualStyleBackColor = false;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->currentMember_LabelForGender);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel15->Location = System::Drawing::Point(0, 0);
			this->panel15->Name = L"panel15";
			this->panel15->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel15->Size = System::Drawing::Size(192, 34);
			this->panel15->TabIndex = 5;
			// 
			// currentMember_LabelForGender
			// 
			this->currentMember_LabelForGender->AutoSize = true;
			this->currentMember_LabelForGender->Dock = System::Windows::Forms::DockStyle::Right;
			this->currentMember_LabelForGender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->currentMember_LabelForGender->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentMember_LabelForGender->Location = System::Drawing::Point(146, 5);
			this->currentMember_LabelForGender->Margin = System::Windows::Forms::Padding(0);
			this->currentMember_LabelForGender->Name = L"currentMember_LabelForGender";
			this->currentMember_LabelForGender->Size = System::Drawing::Size(46, 23);
			this->currentMember_LabelForGender->TabIndex = 3;
			this->currentMember_LabelForGender->Text = L"Płeć:";
			this->currentMember_LabelForGender->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->panel11);
			this->panel8->Controls->Add(this->panel12);
			this->panel8->Location = System::Drawing::Point(15, 137);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(563, 34);
			this->panel8->TabIndex = 7;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->currentMember_TextBoxForBirthDate);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel11->Location = System::Drawing::Point(237, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(326, 34);
			this->panel11->TabIndex = 6;
			// 
			// currentMember_TextBoxForBirthDate
			// 
			this->currentMember_TextBoxForBirthDate->CustomFormat = L"yyyy-MM-dd";
			this->currentMember_TextBoxForBirthDate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->currentMember_TextBoxForBirthDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->currentMember_TextBoxForBirthDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->currentMember_TextBoxForBirthDate->Location = System::Drawing::Point(0, 0);
			this->currentMember_TextBoxForBirthDate->Name = L"currentMember_TextBoxForBirthDate";
			this->currentMember_TextBoxForBirthDate->Size = System::Drawing::Size(326, 32);
			this->currentMember_TextBoxForBirthDate->TabIndex = 0;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->currentMember_LabelForBirthDate);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel12->Location = System::Drawing::Point(0, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel12->Size = System::Drawing::Size(192, 34);
			this->panel12->TabIndex = 5;
			// 
			// currentMember_LabelForBirthDate
			// 
			this->currentMember_LabelForBirthDate->AutoSize = true;
			this->currentMember_LabelForBirthDate->Dock = System::Windows::Forms::DockStyle::Right;
			this->currentMember_LabelForBirthDate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->currentMember_LabelForBirthDate->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentMember_LabelForBirthDate->Location = System::Drawing::Point(51, 5);
			this->currentMember_LabelForBirthDate->Margin = System::Windows::Forms::Padding(0);
			this->currentMember_LabelForBirthDate->Name = L"currentMember_LabelForBirthDate";
			this->currentMember_LabelForBirthDate->Size = System::Drawing::Size(141, 23);
			this->currentMember_LabelForBirthDate->TabIndex = 3;
			this->currentMember_LabelForBirthDate->Text = L"Data urodzenia:";
			this->currentMember_LabelForBirthDate->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Location = System::Drawing::Point(15, 97);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(563, 34);
			this->panel4->TabIndex = 7;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->currentMember_TextBoxForMail);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel5->Location = System::Drawing::Point(237, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(326, 34);
			this->panel5->TabIndex = 6;
			// 
			// currentMember_TextBoxForMail
			// 
			this->currentMember_TextBoxForMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->currentMember_TextBoxForMail->Location = System::Drawing::Point(0, 0);
			this->currentMember_TextBoxForMail->Name = L"currentMember_TextBoxForMail";
			this->currentMember_TextBoxForMail->Size = System::Drawing::Size(326, 32);
			this->currentMember_TextBoxForMail->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->currentMember_LabelForMail);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel6->Size = System::Drawing::Size(192, 34);
			this->panel6->TabIndex = 5;
			// 
			// currentMember_LabelForMail
			// 
			this->currentMember_LabelForMail->AutoSize = true;
			this->currentMember_LabelForMail->Dock = System::Windows::Forms::DockStyle::Right;
			this->currentMember_LabelForMail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->currentMember_LabelForMail->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentMember_LabelForMail->Location = System::Drawing::Point(128, 5);
			this->currentMember_LabelForMail->Margin = System::Windows::Forms::Padding(0);
			this->currentMember_LabelForMail->Name = L"currentMember_LabelForMail";
			this->currentMember_LabelForMail->Size = System::Drawing::Size(64, 23);
			this->currentMember_LabelForMail->TabIndex = 3;
			this->currentMember_LabelForMail->Text = L"Email:";
			this->currentMember_LabelForMail->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(15, 57);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(563, 34);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->currentMember_TextBoxForSecondName);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(237, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(326, 34);
			this->panel2->TabIndex = 6;
			// 
			// currentMember_TextBoxForSecondName
			// 
			this->currentMember_TextBoxForSecondName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->currentMember_TextBoxForSecondName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->currentMember_TextBoxForSecondName->Location = System::Drawing::Point(0, 0);
			this->currentMember_TextBoxForSecondName->Name = L"currentMember_TextBoxForSecondName";
			this->currentMember_TextBoxForSecondName->Size = System::Drawing::Size(326, 32);
			this->currentMember_TextBoxForSecondName->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->currentMember_labelForSecondName);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel3->Size = System::Drawing::Size(192, 34);
			this->panel3->TabIndex = 5;
			// 
			// currentMember_labelForSecondName
			// 
			this->currentMember_labelForSecondName->AutoSize = true;
			this->currentMember_labelForSecondName->Dock = System::Windows::Forms::DockStyle::Right;
			this->currentMember_labelForSecondName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->currentMember_labelForSecondName->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->currentMember_labelForSecondName->Location = System::Drawing::Point(97, 5);
			this->currentMember_labelForSecondName->Margin = System::Windows::Forms::Padding(0);
			this->currentMember_labelForSecondName->Name = L"currentMember_labelForSecondName";
			this->currentMember_labelForSecondName->Size = System::Drawing::Size(95, 23);
			this->currentMember_labelForSecondName->TabIndex = 3;
			this->currentMember_labelForSecondName->Text = L"Nazwisko:";
			this->currentMember_labelForSecondName->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// addUserForm_panelForName
			// 
			this->addUserForm_panelForName->Controls->Add(this->panel10);
			this->addUserForm_panelForName->Controls->Add(this->panel9);
			this->addUserForm_panelForName->Location = System::Drawing::Point(15, 17);
			this->addUserForm_panelForName->Name = L"addUserForm_panelForName";
			this->addUserForm_panelForName->Size = System::Drawing::Size(563, 34);
			this->addUserForm_panelForName->TabIndex = 2;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->currentMember_TextBoxForName);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel10->Location = System::Drawing::Point(237, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(326, 34);
			this->panel10->TabIndex = 6;
			// 
			// currentMember_TextBoxForName
			// 
			this->currentMember_TextBoxForName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->currentMember_TextBoxForName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->currentMember_TextBoxForName->Location = System::Drawing::Point(0, 0);
			this->currentMember_TextBoxForName->Name = L"currentMember_TextBoxForName";
			this->currentMember_TextBoxForName->Size = System::Drawing::Size(326, 32);
			this->currentMember_TextBoxForName->TabIndex = 3;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->currentMember_labelForName);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel9->Size = System::Drawing::Size(192, 34);
			this->panel9->TabIndex = 5;
			// 
			// currentMember_labelForName
			// 
			this->currentMember_labelForName->AutoSize = true;
			this->currentMember_labelForName->Dock = System::Windows::Forms::DockStyle::Right;
			this->currentMember_labelForName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->currentMember_labelForName->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentMember_labelForName->Location = System::Drawing::Point(140, 5);
			this->currentMember_labelForName->Margin = System::Windows::Forms::Padding(0);
			this->currentMember_labelForName->Name = L"currentMember_labelForName";
			this->currentMember_labelForName->Size = System::Drawing::Size(52, 23);
			this->currentMember_labelForName->TabIndex = 3;
			this->currentMember_labelForName->Text = L"Imię:";
			this->currentMember_labelForName->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// CurentMemberInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(757, 544);
			this->Controls->Add(this->panel7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CurentMemberInfo";
			this->Text = L"CurentMemberInfo";
			this->Shown += gcnew System::EventHandler(this, &CurentMemberInfo::CurentMemberInfo_Shown);
			this->panel7->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			this->panel21->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->addUserForm_panelForName->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	



private: System::Void CurentMemberInfo_Shown(System::Object^ sender, System::EventArgs^ e) {
	
	String^ cmd = "SELECT * FROM groupOrg.`members` WHERE MemberID = " + userID;
	MySqlCommand^ command = gcnew MySqlCommand(cmd, conDatabase);
	try
	{
		conDatabase->Open();
		MySqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			
			
			currentMember_TextBoxForName->Text = reader->GetString(2);
			currentMember_TextBoxForSecondName->Text = reader->GetString(3);
			currentMember_TextBoxForMail->Text = reader->GetString(4);
			currentMember_TextBoxForBirthDate->Text = reader->GetString(5);
			currentMember_TextBoxForPhoneNumber->Text = reader->GetString(7);
			currentMember_TextBoxForAddDate->Text = reader->GetString(8);
			if (reader->GetString(6) == "Mezczyzna") {
				currentMember_radioButtonMan->Checked = true;

			}
			else {
				currentMember_radioButtonWoman->Checked = true;

			}
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
private: System::Void addUserToGroup_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	okno->Show();
	this->Close();
	
}
private: System::Void currentMember_editUser_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isEdit)
	{
		isEdit = false;
		disableTextBoxes(isEdit);
		

		String^ cmd = "UPDATE groupOrg.`members` SET FirstName = @value1, LastName = @value2, Email = @value3, BirthDate = @value4, Gender = @value6, PhoneNumber = @value5 WHERE MemberID = " + userID;

		MySqlCommand^ cmdUpdate = gcnew MySqlCommand(cmd, conDatabase);
		cmdUpdate->Parameters->AddWithValue("@value1", currentMember_TextBoxForName->Text);
		cmdUpdate->Parameters->AddWithValue("@value2", currentMember_TextBoxForSecondName->Text);
		cmdUpdate->Parameters->AddWithValue("@value3", currentMember_TextBoxForMail->Text);
		cmdUpdate->Parameters->AddWithValue("@value4", currentMember_TextBoxForBirthDate->Text);
		cmdUpdate->Parameters->AddWithValue("@value5", currentMember_TextBoxForPhoneNumber->Text);
		String^ gender = currentMember_radioButtonMan->Checked ? "Mezczyzna" : "Kobieta";

		cmdUpdate->Parameters->AddWithValue("@value6", gender);
		try {
			conDatabase->Open();
			cmdUpdate->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			conDatabase->Close();
		}
		currentMember_editUser->DialogResult = System::Windows::Forms::DialogResult::OK;
		currentMember_editUser->PerformClick();

	}
	else
	{
		isEdit = true;
		disableTextBoxes(isEdit);

		

	}

}
};
}
