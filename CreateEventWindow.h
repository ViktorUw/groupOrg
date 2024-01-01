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
	/// Сводка для CreateEventWindow
	/// </summary>
	public ref class CreateEventWindow : public System::Windows::Forms::Form
	{
	public:
		CreateEventWindow(Form^ okno, String^ GroupID)
		{
			
			this->StartPosition = FormStartPosition::CenterScreen;

			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->groupID = GroupID;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CreateEventWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ groupID;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ createEventWindow_btnCreate;
	private: System::Windows::Forms::TextBox^ createEventWindow_textBoxForEventName;
	protected:


	private: System::Windows::Forms::Label^ createEventWindow_labelForEventName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ addUserForm_TextBoxForEndDate;
	private: System::Windows::Forms::Button^ createEventWindow_btnCancel;

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->createEventWindow_btnCancel = (gcnew System::Windows::Forms::Button());
			this->addUserForm_TextBoxForEndDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->createEventWindow_btnCreate = (gcnew System::Windows::Forms::Button());
			this->createEventWindow_textBoxForEventName = (gcnew System::Windows::Forms::TextBox());
			this->createEventWindow_labelForEventName = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->panel1->Controls->Add(this->createEventWindow_btnCancel);
			this->panel1->Controls->Add(this->addUserForm_TextBoxForEndDate);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->createEventWindow_btnCreate);
			this->panel1->Controls->Add(this->createEventWindow_textBoxForEventName);
			this->panel1->Controls->Add(this->createEventWindow_labelForEventName);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(532, 353);
			this->panel1->TabIndex = 1;
			// 
			// createEventWindow_btnCancel
			// 
			this->createEventWindow_btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->createEventWindow_btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->createEventWindow_btnCancel->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createEventWindow_btnCancel->Location = System::Drawing::Point(50, 269);
			this->createEventWindow_btnCancel->Name = L"createEventWindow_btnCancel";
			this->createEventWindow_btnCancel->Size = System::Drawing::Size(179, 43);
			this->createEventWindow_btnCancel->TabIndex = 5;
			this->createEventWindow_btnCancel->Text = L"Anuluj";
			this->createEventWindow_btnCancel->UseVisualStyleBackColor = true;
			this->createEventWindow_btnCancel->Click += gcnew System::EventHandler(this, &CreateEventWindow::createEventWindow_btnCancel_Click);
			// 
			// addUserForm_TextBoxForEndDate
			// 
			this->addUserForm_TextBoxForEndDate->CalendarMonthBackground = System::Drawing::Color::White;
			this->addUserForm_TextBoxForEndDate->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
			this->addUserForm_TextBoxForEndDate->CustomFormat = L"yyyy-MM-dd";
			this->addUserForm_TextBoxForEndDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addUserForm_TextBoxForEndDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->addUserForm_TextBoxForEndDate->Location = System::Drawing::Point(268, 187);
			this->addUserForm_TextBoxForEndDate->Name = L"addUserForm_TextBoxForEndDate";
			this->addUserForm_TextBoxForEndDate->Size = System::Drawing::Size(182, 32);
			this->addUserForm_TextBoxForEndDate->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Elephant", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(459, 76);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Podaj date ukonczenia eventu\r\n(opcjonalne)\r\n";
			// 
			// createEventWindow_btnCreate
			// 
			this->createEventWindow_btnCreate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->createEventWindow_btnCreate->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createEventWindow_btnCreate->Location = System::Drawing::Point(271, 269);
			this->createEventWindow_btnCreate->Name = L"createEventWindow_btnCreate";
			this->createEventWindow_btnCreate->Size = System::Drawing::Size(179, 43);
			this->createEventWindow_btnCreate->TabIndex = 2;
			this->createEventWindow_btnCreate->Text = L"Stworz";
			this->createEventWindow_btnCreate->UseVisualStyleBackColor = true;
			this->createEventWindow_btnCreate->Click += gcnew System::EventHandler(this, &CreateEventWindow::createEventWindow_btnCreate_Click);
			// 
			// createEventWindow_textBoxForEventName
			// 
			this->createEventWindow_textBoxForEventName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->createEventWindow_textBoxForEventName->Location = System::Drawing::Point(44, 96);
			this->createEventWindow_textBoxForEventName->Name = L"createEventWindow_textBoxForEventName";
			this->createEventWindow_textBoxForEventName->Size = System::Drawing::Size(450, 30);
			this->createEventWindow_textBoxForEventName->TabIndex = 1;
			// 
			// createEventWindow_labelForEventName
			// 
			this->createEventWindow_labelForEventName->AutoSize = true;
			this->createEventWindow_labelForEventName->Font = (gcnew System::Drawing::Font(L"Elephant", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createEventWindow_labelForEventName->Location = System::Drawing::Point(59, 34);
			this->createEventWindow_labelForEventName->Name = L"createEventWindow_labelForEventName";
			this->createEventWindow_labelForEventName->Size = System::Drawing::Size(382, 47);
			this->createEventWindow_labelForEventName->TabIndex = 0;
			this->createEventWindow_labelForEventName->Text = L"Podaj nazwe eventu";
			// 
			// CreateEventWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 353);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateEventWindow";
			this->Text = L"CreateEventWindow";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void createEventWindow_btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void createEventWindow_btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (createEventWindow_textBoxForEventName->Text->Length != 0)
		{
			String^ query = "INSERT INTO grouporg.events (id_event, event_name, end_date, id_group) VALUES (null, '" + createEventWindow_textBoxForEventName->Text + "', '" + addUserForm_TextBoxForEndDate->Text + "' ," + groupID + ");";
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand(query, conDatabase);




			try
			{
				conDatabase->Open();
				cmdDatabase->ExecuteNonQuery();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}


			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
		else
		{
			MessageBox::Show("Wprowadz nazwe eventu");
		}
	}
};
}
