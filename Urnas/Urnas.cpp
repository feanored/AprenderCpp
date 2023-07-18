/*! 
\brief Estudos.cpp : Defines the entry point for the console application.
\author Eduardo Galvani Massino
*/
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#include <iostream>
#include <conio.h>
#include "Candidatos.hpp"

using namespace std;

/*!
\brief Vers�o com ponteiros
*/
void main_ponteiros() {
  Bozo *bozo = new Bozo();
  Lula *lula = new Lula();

  // votacao justa
  ++*bozo;
  (*bozo)++;
  ++*bozo;
  (*lula)++;
  ++*lula;

  std::cout << " Votos para Bozo: " << bozo->getVotos() << std::endl;
  std::cout << " Votos para Lula: " << lula->getVotos() << std::endl;

  // Esses operadores retornam os tipos primitivos, acess�veis apenas pelo .
  //std::cout << " Votos para Bozo: " << (++*bozo).getVotos() << std::endl;
  //std::cout << " Votos para Lula: " << (*lula)++.getVotos() << std::endl;

  std::cout << " Votos para Bozo (auditoria): " << bozo->getVotos() << std::endl;
  std::cout << " Votos para Lula (auditoria): " << lula->getVotos() << std::endl;
}

/*!
\brief Vers�o com vari�veis
*/
void main_variaveis() {
  Bozo bozo;
  Lula lula;

  // votacao justa
  ++bozo;
  bozo++;
  ++bozo;
  lula++;
  ++lula;

  // Nota��o polonesa exige os () na prefixa, pois � por padr�o posfixa
  std::cout << " Votos para Bozo: " << (++bozo).getVotos() << std::endl;
  std::cout << " Votos para Lula: " << lula++.getVotos() << std::endl;

  std::cout << " Votos para Bozo (auditoria): " << bozo.getVotos() << std::endl;
  std::cout << " Votos para Lula (auditoria): " << lula.getVotos() << std::endl;
}

int main() {
  std::cout << "-- Urna eletronica --" << std::endl;

  main_ponteiros();

  std::cout << std::endl << "<Pressione qualquer tecla para sair>";
  return _getch();
}