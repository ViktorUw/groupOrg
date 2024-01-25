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
	/// —водка дл€ CreateCollection
	/// </summary>
	public ref class CreateCollection : public System::Windows::Forms::Form
	{
	public:
		CreateCollection(Form^ okno, String^ GroupID)
		{
			InitializeComponent();

			this->StartPosition = FormStartPosition::CenterScreen;
			this->okno = okno;
			this->GroupID = GroupID;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~CreateCollection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: Form^ okno;
	private: String^ GroupID;

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	private: System::Windows::Forms::Button^ createEventWindow_btnCancel;
	private: System::Windows::Forms::DateTimePicker^ createCollect_textBoxForEndDate;
	private: System::Windows::Forms::Label^ createCollect_labelBoxForEndDate;
	private: System::Windows::Forms::Button^ createEventWindow_btnCreate;
	private: System::Windows::Forms::TextBox^ createCollect_TextBoxForCollectName;
	private: System::Windows::Forms::Label^ createCollect_labelForCollectName;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateCollection::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->createEventWindow_btnCancel = (gcnew System::Windows::Forms::Button());
			this->createCollect_textBoxForEndDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->createCollect_labelBoxForEndDate = (gcnew System::Windows::Forms::Label());
			this->createEventWindow_btnCreate = (gcnew System::Windows::Forms::Button());
			this->createCollect_TextBoxForCollectName = (gcnew System::Windows::Forms::TextBox());
			this->createCollect_labelForCollectName = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->panel1->Controls->Add(this->createEventWindow_btnCancel);
			this->panel1->Controls->Add(this->createCollect_textBoxForEndDate);
			this->panel1->Controls->Add(this->createCollect_labelBoxForEndDate);
			this->panel1->Controls->Add(this->createEventWindow_btnCreate);
			this->panel1->Controls->Add(this->createCollect_TextBoxForCollectName);
			this->panel1->Controls->Add(this->createCollect_labelForCollectName);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(523, 360);
			this->panel1->TabIndex = 2;
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
			// 
			// createCollect_textBoxForEndDate
			// 
			this->createCollect_textBoxForEndDate->CalendarMonthBackground = System::Drawing::Color::White;
			this->createCollect_textBoxForEndDate->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
			this->createCollect_textBoxForEndDate->CustomFormat = L"yyyy-MM-dd";
			this->createCollect_textBoxForEndDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->createCollect_textBoxForEndDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->createCollect_textBoxForEndDate->Location = System::Drawing::Point(268, 187);
			this->createCollect_textBoxForEndDate->Name = L"createCollect_textBoxForEndDate";
			this->createCollect_textBoxForEndDate->Size = System::Drawing::Size(182, 32);
			this->createCollect_textBoxForEndDate->TabIndex = 4;
			// 
			// createCollect_labelBoxForEndDate
			// 
			this->createCollect_labelBoxForEndDate->AutoSize = true;
			this->createCollect_labelBoxForEndDate->Font = (gcnew System::Drawing::Font(L"Elephant", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createCollect_labelBoxForEndDate->Location = System::Drawing::Point(29, 143);
			this->createCollect_labelBoxForEndDate->Name = L"createCollect_labelBoxForEndDate";
			this->createCollect_labelBoxForEndDate->Size = System::Drawing::Size(468, 76);
			this->createCollect_labelBoxForEndDate->TabIndex = 3;
			this->createCollect_labelBoxForEndDate->Text = L"Podaj date ukonczenia zrzutki\r\n(opcjonalne)\r\n";
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
			// 
			// createCollect_TextBoxForCollectName
			// 
			this->createCollect_TextBoxForCollectName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->createCollect_TextBoxForCollectName->Location = System::Drawing::Point(44, 96);
			this->createCollect_TextBoxForCollectName->Name = L"createCollect_TextBoxForCollectName";
			this->createCollect_TextBoxForCollectName->Size = System::Drawing::Size(450, 30);
			this->createCollect_TextBoxForCollectName->TabIndex = 1;
			// 
			// createCollect_labelForCollectName
			// 
			this->createCollect_labelForCollectName->AutoSize = true;
			this->createCollect_labelForCollectName->Font = (gcnew System::Drawing::Font(L"Elephant", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createCollect_labelForCollectName->Location = System::Drawing::Point(91, 34);
			this->createCollect_labelForCollectName->Name = L"createCollect_labelForCollectName";
			this->createCollect_labelForCollectName->Size = System::Drawing::Size(331, 47);
			this->createCollect_labelForCollectName->TabIndex = 0;
			this->createCollect_labelForCollectName->Text = L"Podaj cel zrzutki";
			// 
			// CreateCollection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 360);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreateCollection";
			this->Text = L"CreateCollection";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
