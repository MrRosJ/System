#include "teacher_menu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void teacher_main_menu()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::teacher_menu teach_menu;
	Application::Run(% teach_menu);
}
