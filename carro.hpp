#ifndef CARRO_HPP_INCLUDED
#define CARRO_HPP_INCLUDED
#include <iostream>
#include <string>

using namespace std;
class Carro{
    private:
        string nome;
        int combustivel;
        int distancia;
        int consumo;
        int capMax=50;
    public://Os metodos get e set servem para manipular os dados de uma variavel privada
        Carro(){//O construtor inicializa as variaveis
        int op=0;
        int abastecido=0;
        int mover=0;
        }
        void setNome(string);
        string getNome();
        void setComb(int);
        int getComb();
        void setDistancia(int);
        int getDistancia();
        void setConsumo(int);
        int getConsumo();
        void abastecer(int);
        void mover(int);
        void imprimir();
};
#endif // CARRO_HPP_INCLUDED
