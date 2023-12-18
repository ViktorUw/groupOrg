#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	groupOrg::MyForm form;
	groupOrg::MyForm groupWindow;

	form.ShowDialog();

	//Application::Run (% form);
}
