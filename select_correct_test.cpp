#include "select_correct_test.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void menu_select_correct_example()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::select_correct_test select_correct_test;
	Application::Run(% select_correct_test);
}
