#include "student_menu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void student_main_menu()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::student_menu student_menu;
	Application::Run(% student_menu);
}
