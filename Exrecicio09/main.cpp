#include <iostream>

using namespace std;

int main(){
int codigoPeca, valorPeca,quantidadePeca,calcular;
    cout << "Entre com o CODIGO da peca" << endl;
    cin>>codigoPeca;
    cout<<"Entre com o VALOR da peca "<<endl;
    cin>>valorPeca;
    cout<<"Entre com a QUANTIDADE de peca: "<<endl;
    cin>>quantidadePeca;

    calcular= quantidadePeca*valorPeca;

    cout<<" O valor da peça " << codigoPeca<<" e R$: "<<calcular;


    return 0;
}
