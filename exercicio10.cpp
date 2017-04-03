#include <iostream>

using namespace std;

int main()


{
    float valor1,quant1,valor2,quant2,ipi1,resultado;

    cout<<"Digite a porcentagem de IPI a ser acrescido no valor das pecas:";
    cin>>ipi1;
    cout<<"Digite o valor unitario da peca 1:";
    cin>>valor1;
    cout<<"Digite a quantidade de pecas:";
    cin>>quant1;
    cout<<"Digite o valor unitario da peca 1:";
    cin>>valor2;
    cout<<"Digite a quantidade de pecas 2:";
    cin>>quant2;

    resultado = ((valor1 * quant1)+(valor2 * quant2)) * ((ipi1/100)+1);

    cout<<"Valor total a ser pago:"<<resultado;

}
