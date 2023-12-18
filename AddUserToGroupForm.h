
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
	/// Сводка для AddUserToGroupForm
	/// </summary>
	public ref class AddUserToGroupForm : public System::Windows::Forms::Form
	{
	private: Form^ okno;
	private: String^ GroupID;
	public:
		AddUserToGroupForm(Form^ okno, String^ groupID)
		{
			this->GroupID = groupID;
			this->okno = okno;
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
			this->StartPosition = FormStartPosition::CenterScreen;
			
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddUserToGroupForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);


	private: System::Windows::Forms::Label^ addUserForm_Label;
	private: System::Windows::Forms::Panel^ addUserForm_panelForName;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ addUserForm_labelForName;
	private: System::Windows::Forms::TextBox^ addUserForm_TextBoxForName;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::TextBox^ addUserForm_TextBoxForPhoneNumber;

	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ addUserForm_LabelForPhoneNumber;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;


	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ addUserForm_LabelForGender;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel11;

	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ addUserForm_LabelForBirthDate;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ addUserForm_LabelForMail;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ addUserForm_TextBoxForSecondName;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ addUserForm_labelForSecondName;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ addUserForm_radioButtonWoman;

	private: System::Windows::Forms::RadioButton^ addUserForm_radioButtonMan;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Button^ addUserToGroup_Cancel;

	private: System::Windows::Forms::Button^ addUserToGroup_addUser;

	private: System::Windows::Forms::DateTimePicker^ addUserForm_TextBoxForBirthDate;

	private: System::Windows::Forms::TextBox^ addUserForm_TextBoxForMail;














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
		void InitializeComponent(void)
		{
			this->addUserForm_Label = (gcnew System::Windows::Forms::Label());
			this->addUserForm_panelForName = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_TextBoxForName = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_labelForName = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->addUserToGroup_Cancel = (gcnew System::Windows::Forms::Button());
			this->addUserToGroup_addUser = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_TextBoxForPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_LabelForPhoneNumber = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->addUserForm_radioButtonWoman = (gcnew System::Windows::Forms::RadioButton());
			this->addUserForm_radioButtonMan = (gcnew System::Windows::Forms::RadioButton());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_LabelForGender = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_TextBoxForBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_LabelForBirthDate = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_TextBoxForMail = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_LabelForMail = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_TextBoxForSecondName = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->addUserForm_labelForSecondName = (gcnew System::Windows::Forms::Label());
			this->addUserForm_panelForName->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel7->SuspendLayout();
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
			this->SuspendLayout();
			// 
			// addUserForm_Label
			// 
			this->addUserForm_Label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addUserForm_Label->AutoSize = true;
			this->addUserForm_Label->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUserForm_Label->Location = System::Drawing::Point(218, 46);
			this->addUserForm_Label->Name = L"addUserForm_Label";
			this->addUserForm_Label->Size = System::Drawing::Size(406, 51);
			this->addUserForm_Label->TabIndex = 1;
			this->addUserForm_Label->Text = L"Dodaj uzytkownika";
			this->addUserForm_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// addUserForm_panelForName
			// 
			this->addUserForm_panelForName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addUserForm_panelForName->Controls->Add(this->panel10);
			this->addUserForm_panelForName->Controls->Add(this->panel9);
			this->addUserForm_panelForName->Location = System::Drawing::Point(15, 17);
			this->addUserForm_panelForName->Name = L"addUserForm_panelForName";
			this->addUserForm_panelForName->Size = System::Drawing::Size(563, 34);
			this->addUserForm_panelForName->TabIndex = 2;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->addUserForm_TextBoxForName);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel10->Location = System::Drawing::Point(237, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(326, 34);
			this->panel10->TabIndex = 6;
			// 
			// addUserForm_TextBoxForName
			// 
			this->addUserForm_TextBoxForName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addUserForm_TextBoxForName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addUserForm_TextBoxForName->Location = System::Drawing::Point(0, 0);
			this->addUserForm_TextBoxForName->Name = L"addUserForm_TextBoxForName";
			this->addUserForm_TextBoxForName->Size = System::Drawing::Size(326, 32);
			this->addUserForm_TextBoxForName->TabIndex = 3;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->addUserForm_labelForName);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel9->Size = System::Drawing::Size(192, 34);
			this->panel9->TabIndex = 5;
			// 
			// addUserForm_labelForName
			// 
			this->addUserForm_labelForName->AutoSize = true;
			this->addUserForm_labelForName->Dock = System::Windows::Forms::DockStyle::Right;
			this->addUserForm_labelForName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addUserForm_labelForName->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUserForm_labelForName->Location = System::Drawing::Point(91, 5);
			this->addUserForm_labelForName->Margin = System::Windows::Forms::Padding(0);
			this->addUserForm_labelForName->Name = L"addUserForm_labelForName";
			this->addUserForm_labelForName->Size = System::Drawing::Size(101, 23);
			this->addUserForm_labelForName->TabIndex = 3;
			this->addUserForm_labelForName->Text = L"Podaj imię:";
			this->addUserForm_labelForName->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel7->Controls->Add(this->panel19);
			this->panel7->Controls->Add(this->panel16);
			this->panel7->Controls->Add(this->panel13);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->panel4);
			this->panel7->Controls->Add(this->panel1);
			this->panel7->Controls->Add(this->addUserForm_panelForName);
			this->panel7->Location = System::Drawing::Point(128, 153);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(590, 369);
			this->panel7->TabIndex = 4;
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->addUserToGroup_Cancel);
			this->panel19->Controls->Add(this->addUserToGroup_addUser);
			this->panel19->Location = System::Drawing::Point(24, 311);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(553, 45);
			this->panel19->TabIndex = 8;
			// 
			// addUserToGroup_Cancel
			// 
			this->addUserToGroup_Cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addUserToGroup_Cancel->FlatAppearance->BorderSize = 0;
			this->addUserToGroup_Cancel->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUserToGroup_Cancel->Location = System::Drawing::Point(297, 3);
			this->addUserToGroup_Cancel->Name = L"addUserToGroup_Cancel";
			this->addUserToGroup_Cancel->Size = System::Drawing::Size(175, 36);
			this->addUserToGroup_Cancel->TabIndex = 10;
			this->addUserToGroup_Cancel->Text = L"Anuluj";
			this->addUserToGroup_Cancel->UseVisualStyleBackColor = true;
			this->addUserToGroup_Cancel->Click += gcnew System::EventHandler(this, &AddUserToGroupForm::button1_Click);
			// 
			// addUserToGroup_addUser
			// 
			this->addUserToGroup_addUser->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addUserToGroup_addUser->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->addUserToGroup_addUser->FlatAppearance->BorderSize = 0;
			this->addUserToGroup_addUser->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUserToGroup_addUser->Location = System::Drawing::Point(41, 3);
			this->addUserToGroup_addUser->Name = L"addUserToGroup_addUser";
			this->addUserToGroup_addUser->Size = System::Drawing::Size(175, 36);
			this->addUserToGroup_addUser->TabIndex = 9;
			this->addUserToGroup_addUser->Text = L"Dodaj do grupy";
			this->addUserToGroup_addUser->UseVisualStyleBackColor = true;
			this->addUserToGroup_addUser->Click += gcnew System::EventHandler(this, &AddUserToGroupForm::main_btnCreate_Click);
			// 
			// panel16
			// 
			this->panel16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel16->Controls->Add(this->panel17);
			this->panel16->Controls->Add(this->panel18);
			this->panel16->Location = System::Drawing::Point(15, 219);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(563, 34);
			this->panel16->TabIndex = 7;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->addUserForm_TextBoxForPhoneNumber);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel17->Location = System::Drawing::Point(237, 0);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(326, 34);
			this->panel17->TabIndex = 6;
			// 
			// addUserForm_TextBoxForPhoneNumber
			// 
			this->addUserForm_TextBoxForPhoneNumber->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addUserForm_TextBoxForPhoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addUserForm_TextBoxForPhoneNumber->Location = System::Drawing::Point(0, 0);
			this->addUserForm_TextBoxForPhoneNumber->Name = L"addUserForm_TextBoxForPhoneNumber";
			this->addUserForm_TextBoxForPhoneNumber->Size = System::Drawing::Size(326, 32);
			this->addUserForm_TextBoxForPhoneNumber->TabIndex = 3;
			this->addUserForm_TextBoxForPhoneNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddUserToGroupForm::addUserForm_TextBoxForPhoneNumber_KeyPress);
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->addUserForm_LabelForPhoneNumber);
			this->panel18->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel18->Location = System::Drawing::Point(0, 0);
			this->panel18->Name = L"panel18";
			this->panel18->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel18->Size = System::Drawing::Size(192, 34);
			this->panel18->TabIndex = 5;
			// 
			// addUserForm_LabelForPhoneNumber
			// 
			this->addUserForm_LabelForPhoneNumber->AutoSize = true;
			this->addUserForm_LabelForPhoneNumber->Dock = System::Windows::Forms::DockStyle::Right;
			this->addUserForm_LabelForPhoneNumber->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addUserForm_LabelForPhoneNumber->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUserForm_LabelForPhoneNumber->Location = System::Drawing::Point(51, 5);
			this->addUserForm_LabelForPhoneNumber->Margin = System::Windows::Forms::Padding(0);
			this->addUserForm_LabelForPhoneNumber->Name = L"addUserForm_LabelForPhoneNumber";
			this->addUserForm_LabelForPhoneNumber->Size = System::Drawing::Size(141, 23);
			this->addUserForm_LabelForPhoneNumber->TabIndex = 3;
			this->addUserForm_LabelForPhoneNumber->Text = L"Numer telefonu";
			this->addUserForm_LabelForPhoneNumber->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel13
			// 
			this->panel13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->groupBox1->Controls->Add(this->addUserForm_radioButtonWoman);
			this->groupBox1->Controls->Add(this->addUserForm_radioButtonMan);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(326, 34);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// addUserForm_radioButtonWoman
			// 
			this->addUserForm_radioButtonWoman->AutoSize = true;
			this->addUserForm_radioButtonWoman->BackColor = System::Drawing::Color::White;
			this->addUserForm_radioButtonWoman->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addUserForm_radioButtonWoman->Location = System::Drawing::Point(169, 10);
			this->addUserForm_radioButtonWoman->Name = L"addUserForm_radioButtonWoman";
			this->addUserForm_radioButtonWoman->Size = System::Drawing::Size(79, 22);
			this->addUserForm_radioButtonWoman->TabIndex = 5;
			this->addUserForm_radioButtonWoman->TabStop = true;
			this->addUserForm_radioButtonWoman->Text = L"Kobieta";
			this->addUserForm_radioButtonWoman->UseVisualStyleBackColor = false;
			// 
			// addUserForm_radioButtonMan
			// 
			this->addUserForm_radioButtonMan->AutoSize = true;
			this->addUserForm_radioButtonMan->BackColor = System::Drawing::Color::White;
			this->addUserForm_radioButtonMan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addUserForm_radioButtonMan->Location = System::Drawing::Point(31, 9);
			this->addUserForm_radioButtonMan->Name = L"addUserForm_radioButtonMan";
			this->addUserForm_radioButtonMan->Size = System::Drawing::Size(105, 22);
			this->addUserForm_radioButtonMan->TabIndex = 4;
			this->addUserForm_radioButtonMan->TabStop = true;
			this->addUserForm_radioButtonMan->Text = L"Mężczyzna";
			this->addUserForm_radioButtonMan->UseVisualStyleBackColor = false;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->addUserForm_LabelForGender);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel15->Location = System::Drawing::Point(0, 0);
			this->panel15->Name = L"panel15";
			this->panel15->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel15->Size = System::Drawing::Size(192, 34);
			this->panel15->TabIndex = 5;
			// 
			// addUserForm_LabelForGender
			// 
			this->addUserForm_LabelForGender->AutoSize = true;
			this->addUserForm_LabelForGender->Dock = System::Windows::Forms::DockStyle::Right;
			this->addUserForm_LabelForGender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addUserForm_LabelForGender->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUserForm_LabelForGender->Location = System::Drawing::Point(70, 5);
			this->addUserForm_LabelForGender->Margin = System::Windows::Forms::Padding(0);
			this->addUserForm_LabelForGender->Name = L"addUserForm_LabelForGender";
			this->addUserForm_LabelForGender->Size = System::Drawing::Size(122, 23);
			this->addUserForm_LabelForGender->TabIndex = 3;
			this->addUserForm_LabelForGender->Text = L"Wybierz płeć:";
			this->addUserForm_LabelForGender->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->Controls->Add(this->panel11);
			this->panel8->Controls->Add(this->panel12);
			this->panel8->Location = System::Drawing::Point(15, 137);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(563, 34);
			this->panel8->TabIndex = 7;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->addUserForm_TextBoxForBirthDate);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel11->Location = System::Drawing::Point(237, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(326, 34);
			this->panel11->TabIndex = 6;
			// 
			// addUserForm_TextBoxForBirthDate
			// 
			this->addUserForm_TextBoxForBirthDate->CustomFormat = L"yyyy-MM-dd";
			this->addUserForm_TextBoxForBirthDate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addUserForm_TextBoxForBirthDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addUserForm_TextBoxForBirthDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->addUserForm_TextBoxForBirthDate->Location = System::Drawing::Point(0, 0);
			this->addUserForm_TextBoxForBirthDate->Name = L"addUserForm_TextBoxForBirthDate";
			this->addUserForm_TextBoxForBirthDate->Size = System::Drawing::Size(326, 32);
			this->addUserForm_TextBoxForBirthDate->TabIndex = 0;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->addUserForm_LabelForBirthDate);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel12->Location = System::Drawing::Point(0, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel12->Size = System::Drawing::Size(192, 34);
			this->panel12->TabIndex = 5;
			// 
			// addUserForm_LabelForBirthDate
			// 
			this->addUserForm_LabelForBirthDate->AutoSize = true;
			this->addUserForm_LabelForBirthDate->Dock = System::Windows::Forms::DockStyle::Right;
			this->addUserForm_LabelForBirthDate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addUserForm_LabelForBirthDate->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUserForm_LabelForBirthDate->Location = System::Drawing::Point(6, 5);
			this->addUserForm_LabelForBirthDate->Margin = System::Windows::Forms::Padding(0);
			this->addUserForm_LabelForBirthDate->Name = L"addUserForm_LabelForBirthDate";
			this->addUserForm_LabelForBirthDate->Size = System::Drawing::Size(186, 23);
			this->addUserForm_LabelForBirthDate->TabIndex = 3;
			this->addUserForm_LabelForBirthDate->Text = L"Podaj datę urodzenia:";
			this->addUserForm_LabelForBirthDate->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Location = System::Drawing::Point(15, 97);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(563, 34);
			this->panel4->TabIndex = 7;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->addUserForm_TextBoxForMail);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel5->Location = System::Drawing::Point(237, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(326, 34);
			this->panel5->TabIndex = 6;
			// 
			// addUserForm_TextBoxForMail
			// 
			this->addUserForm_TextBoxForMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addUserForm_TextBoxForMail->Location = System::Drawing::Point(0, 0);
			this->addUserForm_TextBoxForMail->Name = L"addUserForm_TextBoxForMail";
			this->addUserForm_TextBoxForMail->Size = System::Drawing::Size(326, 32);
			this->addUserForm_TextBoxForMail->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->addUserForm_LabelForMail);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel6->Size = System::Drawing::Size(192, 34);
			this->panel6->TabIndex = 5;
			// 
			// addUserForm_LabelForMail
			// 
			this->addUserForm_LabelForMail->AutoSize = true;
			this->addUserForm_LabelForMail->Dock = System::Windows::Forms::DockStyle::Right;
			this->addUserForm_LabelForMail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addUserForm_LabelForMail->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUserForm_LabelForMail->Location = System::Drawing::Point(77, 5);
			this->addUserForm_LabelForMail->Margin = System::Windows::Forms::Padding(0);
			this->addUserForm_LabelForMail->Name = L"addUserForm_LabelForMail";
			this->addUserForm_LabelForMail->Size = System::Drawing::Size(115, 23);
			this->addUserForm_LabelForMail->TabIndex = 3;
			this->addUserForm_LabelForMail->Text = L"Podaj Email:";
			this->addUserForm_LabelForMail->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(15, 57);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(563, 34);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->addUserForm_TextBoxForSecondName);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(237, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(326, 34);
			this->panel2->TabIndex = 6;
			// 
			// addUserForm_TextBoxForSecondName
			// 
			this->addUserForm_TextBoxForSecondName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addUserForm_TextBoxForSecondName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addUserForm_TextBoxForSecondName->Location = System::Drawing::Point(0, 0);
			this->addUserForm_TextBoxForSecondName->Name = L"addUserForm_TextBoxForSecondName";
			this->addUserForm_TextBoxForSecondName->Size = System::Drawing::Size(326, 32);
			this->addUserForm_TextBoxForSecondName->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->addUserForm_labelForSecondName);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->panel3->Size = System::Drawing::Size(192, 34);
			this->panel3->TabIndex = 5;
			// 
			// addUserForm_labelForSecondName
			// 
			this->addUserForm_labelForSecondName->AutoSize = true;
			this->addUserForm_labelForSecondName->Dock = System::Windows::Forms::DockStyle::Right;
			this->addUserForm_labelForSecondName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addUserForm_labelForSecondName->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUserForm_labelForSecondName->Location = System::Drawing::Point(46, 5);
			this->addUserForm_labelForSecondName->Margin = System::Windows::Forms::Padding(0);
			this->addUserForm_labelForSecondName->Name = L"addUserForm_labelForSecondName";
			this->addUserForm_labelForSecondName->Size = System::Drawing::Size(146, 23);
			this->addUserForm_labelForSecondName->TabIndex = 3;
			this->addUserForm_labelForSecondName->Text = L"Podaj Nazwisko:";
			this->addUserForm_labelForSecondName->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// AddUserToGroupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(833, 637);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->addUserForm_Label);
			this->Name = L"AddUserToGroupForm";
			this->Text = L"AddUserToGroupForm";
			this->addUserForm_panelForName->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel7->ResumeLayout(false);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Close();
	
	
}


private: System::Void main_btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (addUserForm_TextBoxForName->Text->Length == 0 || addUserForm_TextBoxForSecondName->Text->Length == 0 || addUserForm_TextBoxForMail->Text->Length == 0 || addUserForm_TextBoxForBirthDate->Text->Length == 0 || addUserForm_TextBoxForPhoneNumber->Text->Length == 0 || (!addUserForm_radioButtonMan->Checked && !addUserForm_radioButtonWoman->Checked)) 
	{
		addUserToGroup_addUser->DialogResult = System::Windows::Forms::DialogResult::None;
		MessageBox::Show("Wypełnij wszystkie pola!");
	}
	else {
		
		String^ user_first_name = addUserForm_TextBoxForName->Text;
		String^ user_second_name = addUserForm_TextBoxForSecondName->Text;
		String^ user_mail = addUserForm_TextBoxForMail->Text;
		String^ user_birth_date = addUserForm_TextBoxForBirthDate->Text;
		String^ user_phone_number = addUserForm_TextBoxForPhoneNumber->Text;
		String^ user_gender;
		
		//!Dla wyswietlania terazniejszej daty:
		DateTime^ now = DateTime::Now;
		String^ user_join_date = now->ToString("yyyy-MM-dd");
		

		if (addUserForm_radioButtonMan->Checked)
		{
			user_gender = "Mezczyzna";
		}
		else if (addUserForm_radioButtonWoman->Checked)
		{
			user_gender = "Kobieta";
		}
		
		//INSERT INTO `members`(`MemberID`, `GroupID`, `FirstName`, `LastName`, `Email`, `BirthDate`, `Gender`, `PhoneNumber`, `JoinDate`) VALUES ('[value-1]','[value-2]','[value-3]','[value-4]','[value-5]','[value-6]','[value-7]','[value-8]','[value-9]')

		String^ insertQuery = "INSERT INTO grouporg.`members`(`MemberID`, `GroupID`, `FirstName`, `LastName`, `Email`, `BirthDate`, `Gender`, `PhoneNumber`, `JoinDate`) VALUES ('null',@value1,@value2,@value3,@value4,@value5,@value6,@value7,@value8)";

		MySqlCommand^ cmdInsert = gcnew MySqlCommand(insertQuery, conDatabase);
		cmdInsert->Parameters->AddWithValue("@value1", GroupID); // GroupID
		cmdInsert->Parameters->AddWithValue("@value2", user_first_name); // FirstName
		cmdInsert->Parameters->AddWithValue("@value3", user_second_name); // LastName
		cmdInsert->Parameters->AddWithValue("@value4", user_mail); // Email
		cmdInsert->Parameters->AddWithValue("@value5", user_birth_date); // BirthDate
		cmdInsert->Parameters->AddWithValue("@value6", user_gender); // Gender
		cmdInsert->Parameters->AddWithValue("@value7", user_phone_number); // PhoneNumber
		cmdInsert->Parameters->AddWithValue("@value8", user_join_date); // JoinDate
		
		/*String^ insertQuery = "INSERT INTO grouporg.groups (id, groupName) VALUES (NULL, @value2)";
				MySqlCommand^ cmdInsert = gcnew MySqlCommand(insertQuery, conDatabase);
				cmdInsert->Parameters->AddWithValue("@value2", groupName);*/

		try
		{
			conDatabase->Open();
			cmdInsert->ExecuteNonQuery();
			
			//MessageBox::Show("Użytkownik został dodany do grupy!");
			
			
			
			


		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conDatabase->Close();
		}



		
		

	}
}
private: System::Void addUserForm_TextBoxForPhoneNumber_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
}
};
}
