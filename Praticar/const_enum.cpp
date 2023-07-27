#include <iostream>
#include <conio.h>

using namespace std;

class TextBlock {
private:
	std::string text;

public:
	TextBlock(const char* text) {
		this->text = string(text);
	}

	const char& operator[](std::size_t pos) const {
		return text[pos];
	}

	char& operator[](std::size_t pos) {
		// return text[pos]; // duplicação de código
		// método eficiente de reuso (casting do proprio objeto):
		return const_cast<char &>(
			static_cast<const TextBlock&>(*this)[pos]
		);
	}

  // Constantes de classe, melhor prática
  enum { n = 7 };
};


void print(const TextBlock& ctb) {
	std::cout << ctb[0] << ctb[1] << std::endl;
}

void linha() {
	std::cout << "----------------" << std::endl;
}

int main() {
	linha();

	TextBlock tb("Helio");
	print(tb);
	tb[0] = 'X'; // continua funcionando, mesmo com o const_cast
	print(tb);

	linha();

	const TextBlock ctb("Helio");
	print(ctb);
	//ctb[0] = 'x'; // Não aceita pois o retorno é do tipo const
	print(ctb);

	linha();

  std::cout << "Constante n: " << TextBlock::n << std::endl;
  return !_getch();
}