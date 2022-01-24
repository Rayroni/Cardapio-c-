#include <iostream>
using namespace std;
int main()
{
int codigo,qtde;
float valor=0;
char *item;
cout<<"Informe o seu pedido";
cout<<"********Cardápio**********";
cout<<"100 - Hambúrguer - R$5,50 ";
cout<<"101 - Cachorro-quente - R$4,50";
cout<<"102 - Milkshake - R$7,00 ";
cout<<"103 - Pizza brotinho - R$8,00";
cout<<"104 - Cheeseburguer - R$8,50";
cout<<"Informe o código do seu pedido:";
cin>>codigo;
cout<<"Informe a quantidade desejada:";
cin>>qtde;
switch (codigo)
{
 case 100: item="Hambúrguer";valor=qtde*5.50; break;
 case 101: item="Cachorro-quente";valor=qtde*4.50; break;
 case 102: item="Milkshake"; valor=qtde*7.00; break;
 case 103: item="Pizza brotinho";valor=qtde*8.00; break;
 default: cout<<"Pedido inválido!";
}
cout<<qtde<<"x"<<item<<"="<<valor;
}
