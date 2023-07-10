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
	/////////////////////////
	// Utilidades - Inicio //
	/////////////////////////
	std::string FormCalc::_wCharToString(wchar_t text) {
		if (text == NULL)
			return std::string();

		const wchar_t* wideStr = &text;
		std::size_t size = std::wcstombs(NULL, wideStr, 0);
		if (size == static_cast<std::size_t>(-1))
			return std::string();

		char* buffer = new char[size + 1];
		std::wcstombs(buffer, wideStr, size);
		buffer[size] = '\0';

		std::string result(buffer);
		delete[] buffer;

		return result;
	}

	inline String^ _charToWinT(const char* texto) {
		return gcnew System::String(texto);
	}

	inline String^ _stringToWinT(std::string& texto) {
		return gcnew System::String(texto.c_str());
	}
	/////////////////////////
	// Utilidades - Fim //
	/////////////////////////


	inline void aviso(const char* texto) {
		MessageBox::Show(_charToWinT(texto), "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	inline void erro(const char* texto) {
		MessageBox::Show(_charToWinT(texto), "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	void FormCalc::setDisplay(const char* texto) {
		this->display->Text = _charToWinT(texto);
	}

	void FormCalc::setDisplay() {
		this->display->Text = _stringToWinT(getDisplayStack());
	}

	void pushSymbol(const char* symbol){
		if (clear) {
			clearDisplayStack();
			clear = false;
		}
		pushToDisplayStack(string(symbol));
	}

	void pushSymbol(const char* symbol, bool unico){
		if (unico) {
			return;
		}
		pushSymbol(symbol);
	}

	void pushToDisplayStack(const std::string& ch) {
		std::string display = getDisplayStack();
		if (display.size() >= _DISPLAY_MAX)
			return;
		display += ch;
		setDisplayStack(display);
	}

	void popRightDisplayStack() {
		std::string display = getDisplayStack();	    
		if (!display.empty()) {
			display.erase(display.end() - 1);
		}
		setDisplayStack(display);
	}

	void popLeftDisplayStack() {
		std::string display = getDisplayStack();
		if (!display.empty()) {
			display.erase(display.begin());
		}
		setDisplayStack(display);
	}

	void clearDisplayStack() {
		setDisplayStack(string(""));
	}
}