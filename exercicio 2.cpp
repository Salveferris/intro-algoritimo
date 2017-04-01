#include <iostream>

using namespace std;

int main()
{
    float nota1,peso1,nota2,peso2,nota3,peso3,media;

    cout<<"Digite a nota 1 mano:";
    cin>>nota1;
    cout<<"Digite o peso da nota 1:";
    cin>>peso1;
    cout<<"digite a nota 2:";
    cin>>nota2;
    cout<<"Digite o peso da nota 2:";
    cin>>peso2;
    cout<<"Digite a nota 3:";
    cin>>nota3;
    cout<<"Digite o peso da nota 3:";
    cin>>peso3;

    media = (nota1 * peso1)+(nota2 * peso2)+(nota3 * peso3)/3;

    cout<<"Sua media e de :"<<media;

}
