#include <iostream>

using namespace std;

int main()

{


    float branco1,nulos1,validos1,eleitores,branco,nulos,validos;

    cout<<"Digite o numero total de eleitores:";
    cin>>eleitores;
    cout<<"Digite quantos votos foram em branco:";
    cin>>branco;
    cout<<"Digite os votos nulos:";
    cin>>nulos;

    validos = eleitores - (branco+nulos);

    branco1 = (branco*100)/eleitores;
    nulos1 = (nulos*100)/eleitores;
    validos1 = (validos*100)/eleitores;

    cout<<"Este e o total de votos validos:"<<validos<<"\n";
    cout<<"A porcentagem de votos brancos foi:"<<branco1<<"\n";
    cout<<"A porcetagem de votos nulos foi:"<<nulos1<<"\n";
    cout<<"A porcentagem de votos validos foi:"<<validos1<<"\n";




}
