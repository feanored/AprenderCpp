#include <iostream>
#include <conio.h>

using namespace std;

class Empty {
private:
  const std::string text;
  const char* txt;

  // Todos os construtores abaixo são gerados automaticamente se não especificados
public:
  // construtor padrão
  Empty() :
    text("Binha"), 
    txt(text.c_str()) {}
  // construtor de cópia
  Empty(const Empty& rhs) {}
  // destrutor
  ~Empty() {}
  // operador atribuição por cópia
  Empty& operator=(const Empty& rhs) {}

  // construtor personalizado 1
  Empty(const char* texto) :
    text(texto), 
    txt(text.c_str()) {}

  const char* getText() {
    return text.c_str();
  }

  void print() {
    std::cout << txt << std::endl;
  }
};



void linha() {
  std::cout << "----------------" << std::endl;
}

int main() {
  linha();
  Empty obj;
  obj.print();

  linha();
  Empty tuco("Tuquim");
  tuco.print();

  linha();
  _getch();
  return 0;
}