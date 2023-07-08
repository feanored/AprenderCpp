#include "Candidatos.hpp"

float Candidato::getVotos() {
	return floorf(this->votos);
}

/*!
\brief Prefix operator overload
*/
Candidato& Candidato::operator++() {
	++votos;
	return *this;
}

/*!
\brief Postfix operator overload
*/
Candidato Candidato::operator++(int) {
	Candidato aux = *this;
	++*this;
	return aux;
}


/*!
\brief Prefix operator overload of subclass
*/
Lula&
Lula::operator++() {
	votos += 2.1;
	return *this;
}

/*!
\brief Postfix operator overload of subclass
*/
Lula 
Lula::operator++(int) {
	Lula aux = *this;
	++*this;
	return aux;
}