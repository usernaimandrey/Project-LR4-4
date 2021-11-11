#include "stdafx.h"
#include "MyForm.h"

using namespace ProjectLR44;

[STAThread]
int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ProjectLR44::MyForm form;
    Application::Run(% form);
    return 0;
}