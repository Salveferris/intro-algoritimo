#include <iostream>

using namespace std;

int main()
{
    int numa,numb,numc,d,numr,nums;

    cout<<"Digite um numero:";
    cin>>numa;
    cout<<"Digite outro numero:";
    cin>>numb;
    cout<<"Digite mais um numero:";
    cin>>numc;

    numr = (numa+numb)*(numa+numb);
    nums = (numb+numc)*(numb+numc);

    d = (numr+nums)/2;

    cout<<"R e igual a:"<<numr<<"\n";
    cout<<"S e igual a:"<<nums<<"\n";
    cout<<"D e igual a:"<<d<<"\n";






}
