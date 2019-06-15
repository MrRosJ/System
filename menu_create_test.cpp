#include "menu_create_test.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void menu_create_test()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::menu_create_test menu_create;
	Application::Run(% menu_create);
}
