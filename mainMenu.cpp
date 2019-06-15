#include <fstream>
#include "mainMenu.h"
#include "opening.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
void main_menu()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCP::opening opening;
	Application::Run(% opening);


	ProjectCP::mainMenu main_menu;
	Application::Run(% main_menu);
}
