// Calculadora.cpp : main project file.

#include "stdafx.h"
#include "FormCalc.h"

using namespace Calculadora;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew FormCalc());
	return 0;
}

/*!
\brief Métodos acessíveis implementados aqui
*/
namespace Calculadora{
	System::String^ getTexto(const char* texto) {
		System::String^ windowsText = gcnew System::String(texto);
		return windowsText;
	}

	void aviso(const char* texto) {
		MessageBox::Show(getTexto(texto), "Aviso", MessageBoxButtons::OK);
	}

	void erro(const char* texto) {
		MessageBox::Show(getTexto(texto), "Erro", MessageBoxButtons::OK);
	}

	void FormCalc::setDisplay(const char* texto) {
		this->display->Text = getTexto(texto);
	}
}