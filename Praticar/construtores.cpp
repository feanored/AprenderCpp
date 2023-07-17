#include <iostream>
#include <conio.h>

using namespace std;

class Empty {
private:
	const std::string text;

// Todos os construtores abaixo s�o gerados automaticamente se n�o especificados
public:
  Empty(): text("Binha") {                // construtor padr�o
  }
  Empty(const Empty& rhs) {               // construtor de c�pia
  }
  ~Empty() {                              // destrutor
  }
  Empty& operator=(const Empty& rhs) {    // operador atribui��o por c�pia
  }

  const char* getText() {
    return text.c_str();
  }
};



void linha() {
	std::cout << "----------------" << std::endl;
}

int main() {
	linha();

  Empty obj;
  std::cout << obj.getText() << std::endl;

  getch();
	return 0;
}