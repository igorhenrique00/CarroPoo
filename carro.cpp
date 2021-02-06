#include <iostream>
#include "carro.hpp"
#include <string>

using namespace std;

void Carro::setNome(string nome){
    this->nome=nome;
}
string Carro::getNome(){
    return nome;
}
void Carro::setComb(int combustivel){
    this->combustivel=combustivel;
}
int Carro::getComb(){
    return combustivel;
}
void Carro::setDistancia(int distancia){
    this->distancia=distancia;
}
int Carro::getDistancia(){
    return distancia;
}
void Carro::setConsumo(int consumo){
    this->consumo=consumo;
}
int Carro::getConsumo(){
    return consumo;
}

void Carro::abastecer(int abastecido){
    combustivel=combustivel+abastecido;
}
void Carro::mover(int mover){
    distancia=distancia+mover;
}
void Carro::imprimir(){
cout << "\nO nome do carro é: "<<nome<<endl;
cout << "\nA qtd de combustivel disponivel é: "<<combustivel<<endl;
cout << "\nA distancia percorrida é: "<<distancia<<endl;
cout << "\nO consumo do veículo é: "<<consumo<<endl;
}
