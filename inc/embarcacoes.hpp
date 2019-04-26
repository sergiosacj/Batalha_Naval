#ifndef EMBARCACOES_HPP
#define EMBARCACOES_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <vector>

using namespace std;

class Embarcacoes {

private:
    int casas;
    int resistencia;
    int coordenadaColuna;
    int coordenadaLinha;
    string tipo;
    string direcao;

public:
    Embarcacoes();    
    ~Embarcacoes();
    
    string get_tipo();
    void set_tipo(string tipo);
    int get_casas();
    void set_casas(int casas);
    int get_resistencia();
    void set_resistencia(int resistencia);
    int get_coordenadaColuna();
    void set_coordenadaColuna(int coordenadaColuna);
    int get_coordenadaLinha();
    void set_coordenadaLinha(int coordenadaLinha);
    string get_direcao();
    void set_direcao(string direcao);
      
};

#endif
