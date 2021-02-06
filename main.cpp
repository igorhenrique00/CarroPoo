#include <iostream>
#include "carro.hpp"
#include <string>

using namespace std;
/*Implemente uma classe chamada carro. A classe deve possuir os atributos, nome,
combustível (que armazena a quantidade de combustível no tanque),
distancia(que armazena a distância percorrida desde o abastecimento)e consumo.
O tanque de combustível do carro armazena no máximo 50 litros de gasolina*/
int main()
{
    Carro c;
    string nome;
    int combustivel;
    int distancia;
    int consumo;
    int op,abastecido,mover;
    Carro();


	cout<<"\nNome dos carros: " <<endl;
	getline(cin, nome);
    c.setNome(nome);

    cout<<"\nQtd de combustível disponível: " <<endl;
	cin>>combustivel;
    c.setComb(combustivel);

    cout<<"\nDigite a distancia percorrida: " <<endl;
	cin>>distancia;
    c.setDistancia(distancia);

    cout<<"\nDigite o consumo medio do carro: " <<endl;
	cin>>consumo;
    c.setConsumo(consumo);

    while(op!=0){
    cout << "\nComo deseja prosseguir?"<<endl;
    cout << "1- Abastecer o carro"<<endl;
    cout << "2- Mover o carro"<<endl;
    cout << "3- Saber a qtd de combustivel e a distancia percorrida"<<endl;
    cout << "0- Sair"<<endl;
    cin>>op;
        switch(op){
        case 1:
        cout << "\nQual a qtd de gasolina irá abastecer?"<<endl;
        cin>>abastecido;
        c.abastecer(abastecido);
        break;
        case 2:
        cout << "\nQual a distancia que deseja mover o carro?"<<endl;
        cin>>mover;
        c.mover(mover);
        break;
        case 3:
        c.imprimir();
        break;
        case 0:
        break;
        default:
        cout<< "\nOpção inválida"<<endl;
        }
    }
    return 0;
}
