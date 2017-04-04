#include <iostream>

using namespace std;

int main()
{
    float custo,convite,total;

    cout<<"informe o custo do espetaculo:";
    cin>>custo;
    cout<<"Informe o valor do ingresso:";
    cin>>convite;

    total = custo / convite;

    cout<<"Valor necessario e de :"<<total;
}
