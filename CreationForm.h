#pragma once

namespace groupOrg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// Сводка для CreationForm
	/// </summary>
	public ref class CreationForm : public System::Windows::Forms::Form
	{
	public:
		property String^ GroupName {
			String^ get() {
				return create_textBox->Text;
			}
		}
		
		

		CreationForm(void)
		{
			InitializeComponent();

			this->StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CreationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ create_btnCreate;
	private: System::Windows::Forms::TextBox^ create_textBox;
	private: System::Windows::Forms::Label^ create_label;
	private: System::Windows::Forms::Button^ create_btnCancel;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->create_btnCancel = (gcnew System::Windows::Forms::Button());
			this->create_btnCreate = (gcnew System::Windows::Forms::Button());
			this->create_textBox = (gcnew System::Windows::Forms::TextBox());
			this->create_label = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->panel1->Controls->Add(this->create_btnCancel);
			this->panel1->Controls->Add(this->create_btnCreate);
			this->panel1->Controls->Add(this->create_textBox);
			this->panel1->Controls->Add(this->create_label);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(482, 353);
			this->panel1->TabIndex = 0;
			// 
			// create_btnCancel
			// 
			this->create_btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->create_btnCancel->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_btnCancel->Location = System::Drawing::Point(65, 244);
			this->create_btnCancel->Name = L"create_btnCancel";
			this->create_btnCancel->Size = System::Drawing::Size(170, 43);
			this->create_btnCancel->TabIndex = 3;
			this->create_btnCancel->Text = L"Anuluj";
			this->create_btnCancel->UseVisualStyleBackColor = true;
			this->create_btnCancel->Click += gcnew System::EventHandler(this, &CreationForm::create_btnCancel_Click);
			// 
			// create_btnCreate
			// 
			this->create_btnCreate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->create_btnCreate->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->create_btnCreate->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_btnCreate->Location = System::Drawing::Point(252, 244);
			this->create_btnCreate->Name = L"create_btnCreate";
			this->create_btnCreate->Size = System::Drawing::Size(170, 43);
			this->create_btnCreate->TabIndex = 2;
			this->create_btnCreate->Text = L"Stwórz ";
			this->create_btnCreate->UseVisualStyleBackColor = true;
			// 
			// create_textBox
			// 
			this->create_textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_textBox->Location = System::Drawing::Point(42, 162);
			this->create_textBox->Name = L"create_textBox";
			this->create_textBox->Size = System::Drawing::Size(400, 30);
			this->create_textBox->TabIndex = 1;
			// 
			// create_label
			// 
			this->create_label->AutoSize = true;
			this->create_label->Font = (gcnew System::Drawing::Font(L"Elephant", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_label->Location = System::Drawing::Point(49, 52);
			this->create_label->Name = L"create_label";
			this->create_label->Size = System::Drawing::Size(365, 47);
			this->create_label->TabIndex = 0;
			this->create_label->Text = L"Podaj nazwe grupy";
			// 
			// CreationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 353);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreationForm";
			this->Text = L"CreationForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
private: System::Void create_btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
