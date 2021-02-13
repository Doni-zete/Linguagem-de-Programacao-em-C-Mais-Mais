#include <iostream>


//Faça um programa que apresente o menu de opção abaixo e implemente as funcionalidades representadas por cada opção:
//Cadastrar pessoa na agenda de aniversariantes (nome, e-mail, dia, mês e ano de nascimento)
//Excluir a pessoa a partir do nome
//Alterar dia, mês ou ano a partir do nome
//Consultar aniversariantes de uma data
//Consultar aniversariantes de um dado mês
//Consultar aniversariantes pela letra inicial do nome
//Mostrar toda a agenda ordenada pelo nome
//Mostrar toda a agenda ordenada pelo mês
//Sair
//A agenda deve ser capaz de armazenar 1000 pessoas

using namespace std;

int main()
{
  char nome [1000];
  char email [1000];
  int dia,mes,anoNascimento;

    cout << "Entre com seu nome" << endl;
    cin>>nome;
    cout <<"Entre com seu E-mail"<<endl;
    cin>>email;
    cout <<"Digite o dia de nascimento: ";
    cin >>dia;
    cout<<"Digite o mes de nascimento:";
    cin>>mes;
    cout<<"Digite o ano de nascimento:";
    cin>>anoNascimento;
    cout<<""<<endl;





    cout<<"Seu nome e: "<< nome<<endl;
    cout<<"Seu Email e: "<<email<<endl;
    cout<<"Sua data e nascimento e: "<<dia<<"/"<<mes<<"/"<<anoNascimento;

      cout<<"";
    return 0;
}
