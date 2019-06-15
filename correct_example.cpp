#include "correct_example.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void menu_correct_example()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::correct_example correct_example;
	Application::Run(% correct_example);
}
