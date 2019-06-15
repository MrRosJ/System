#include "one_example.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void menu_one_example()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::one_example one_examples;
	Application::Run(% one_examples);

}
