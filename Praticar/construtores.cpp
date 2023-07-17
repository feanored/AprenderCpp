#include <iostream>
#include <conio.h>

using namespace std;

class Empty {
private:
	const std::string text;

// Todos os construtores abaixo são gerados automaticamente se não especificados
public:
  Empty(): text("Binha") {                // construtor padrão
  }
  Empty(const Empty& rhs) {               // construtor de cópia
  }
  ~Empty() {                              // destrutor
  }
  Empty& operator=(const Empty& rhs) {    // operador atribuição por cópia
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