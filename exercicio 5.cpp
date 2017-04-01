#include <iostream>
using namespace std;
int main()
{
    float deposito,juros,rendimento,total;

    cout<<"Digite o valor do deposito:";
    cin>>deposito;

    cout<<"Digite o valor da taxa de juros:";
    cin>>juros;

    rendimento = deposito * (juros/100);

    total = rendimento + deposito;
    cout<<"O valor total de seu rendimento foi de:"<<total<<"\n";

    cout<<"O aumento foi de:"<<rendimento;


}
