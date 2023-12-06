#include "MyForm.h"
// остайня версія з 2-ма формами

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
