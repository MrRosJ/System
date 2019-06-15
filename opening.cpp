#include "opening.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

[STAThreadAttribute]
void menu_opening()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::opening opening;
	Application::Run(% opening);
}
