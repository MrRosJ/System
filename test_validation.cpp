#include "test_validation.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void test_validation_menu()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::test_validation test_validation;
	Application::Run(% test_validation);
}
