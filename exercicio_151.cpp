#include <iostream>

using namespace std;

int main()
{
    float tempo,vmedia,dist,combustivel;

    cout<<"Digite o tempo gasto em viagem:";
    cin>>tempo;
    cout<<"Digite a velocidade media durante a viagem:";
    cin>>vmedia;

    dist = tempo * vmedia;

    combustivel = dist / 12;

    cout <<"A velocidade media foi de :"<<vmedia;
    cout <<"Tempo gasto foi de:"<<tempo;

}
