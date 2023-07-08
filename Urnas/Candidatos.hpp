#pragma once
#include <math.h>

/*!
\author Eduardo Galvani Massino
*/
class Candidato {
protected:
    float votos;

public:
    Candidato() {
        votos = 0;
    }
    Candidato(Candidato& other) {
        *this = other;
    }
    float getVotos();
    Candidato& operator++();
    Candidato operator++(int);
};

class Bozo : public Candidato{};

class Lula : public Candidato{
public:
    Lula& operator++();
    Lula operator++(int);
};
