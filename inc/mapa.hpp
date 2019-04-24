#ifndef MAPA_HPP
#define MAPA_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <vector>

using namespace std;

class Mapa {

private:
    int embarcacoesRestantes;
	vector<vector<string>> tamanho;

public:
    Mapa();    
    ~Mapa();
    
    void tamanhoMapa(int coluna, int linha);
    vector<vector<string>> get_tamanho();
    void set_tamanho(int coluna, int linha, string tipo);
    int get_embarcacoesRestantes();
    void set_embarcacoesRestantes(int embarcacoesRestantes);
    void desenhaMapa();
    
};

#endif
