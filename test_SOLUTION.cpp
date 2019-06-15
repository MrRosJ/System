#include "test_SOLUTION.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void test_solution_menu()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::test_SOLUTION test_SOLUTION;
	Application::Run(% test_SOLUTION);
}
