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
	inline String^ _toWinT(const char* texto) {
		return gcnew System::String(texto);
	}

	inline void aviso(const char* texto) {
		MessageBox::Show(_toWinT(texto), "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	inline void erro(const char* texto) {
		MessageBox::Show(_toWinT(texto), "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	void FormCalc::setDisplay(const char* texto) {
		this->display->Text = _toWinT(texto);
	}
}