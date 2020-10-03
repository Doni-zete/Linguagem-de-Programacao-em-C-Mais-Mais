#include <iostream>

 #include <stdlib.h>

 #define MAX 10
using namespace std;

int main()

 {

 float temp[MAX], media, acctemp, maior, menor;

 int i, op;

do

 {

 system("cls");

 cout << "* * * * M E N U * * * *\n\n";

 cout << "\n1 - Insere temperaturas";

 cout << "\n2 - Mostra temperaturas";

 cout << "\n3 - Calcula media das temperaturas";

 cout << "\n4 - Calcula maior temperatura";

 cout << "\n5 - Calcula menor temperatura";

 cout << "\n9 - Sair\n";

 cout << "\nDigite a sua opcao: ";

 cin >> op;



switch (op)

 {

 case 1 : system("cls");

 cout << "*** Entrada das temperaturas ***\n\n\n";

 for (i=0;i<MAX;i++)

 {

 cout << "Digite uma temperatura: ";

 cin >> temp[i];

 }

 system("pause");

 break;

case 2 : system("cls");

 cout << "*** Impressao das temperaturas ***\n\n\n";

 for (i=0;i<MAX;i++)

 cout << "\n" << temp[i];

 cout << "\n\n";

 system("pause");

 break;



case 3 : system("cls");

 cout << "*** Calculo da media das temperaturas ***\n\n";

 acctemp=0;

 for (i=0;i<MAX;i++)

 acctemp+=temp[i];

 media = acctemp/10;

 cout << "\n\nMedia das temperaturas: " << media << "\n\n\n";

 system("pause");

 break;



case 4 : system("cls");

 cout << "*** Calculo da maior temperatura ***\n\n";

 maior = temp[0];

 for (i=1;i<MAX;i++)

 if (temp[i]>maior)

 maior = temp[i];

 cout << "\n\nMaior temperatura: " << maior << "\n\n";

 system("pause");

 break;



case 5 : system("cls");

 cout << "*** Calculo da menor temperatura ***\n\n";

 menor = temp[0];

 for (i=1;i<MAX;i++)

 if (temp[i]<menor)

 menor = temp[i];

 cout << "\n\nMenor temperatura: " << menor << "\n\n";

 system("pause");

 break;

 }



 }while(op!=9);



}
