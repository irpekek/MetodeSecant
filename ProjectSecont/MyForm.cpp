#include "MyForm.h"
#include "Windows.h"


using namespace System;
using namespace System::Windows::Forms;

using namespace ProjectSecont; // This is My project name

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)

	{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());

	return 0;

	}