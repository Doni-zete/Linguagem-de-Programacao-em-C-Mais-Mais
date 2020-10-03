#include <iostream>
#include <stdlib.h>
#define MAX 4

using namespace std;

int main()

{

    int mat[MAX][MAX];

    int linha, coluna, i, qde, acc, maior, menor;

    char op;

    do

    {

        system("cls");

        cout << "* * * * M E N U * * * *\n\n";

        cout << "\n1 - Insere numeros na matriz";

        cout << "\n2 - Mostra matriz";

        cout << "\n3 - Calcula media dos numeros da matriz";

        cout << "\n4 - Calcula maior e menor numero da matriz";

        cout << "\n5 - Calcula somatoria numeros impares DP";

        cout << "\n6 - Calcula a quantidade de numeros pares da DS";

        cout << "\n7 - Calcula o dobro da somatoria dos numeros pares das duas diagonais";

        cout << "\n9 - Sair\n";

        cout << "\nDigite a sua opcao: ";

        cin >> op;

        switch (op)

        {

        case '1' :
            system("cls");

            cout << "* * * * Insere numeros na matriz * * * *\n\n";

            for (linha=0; linha<MAX; linha++)

                for (coluna=0; coluna<MAX; coluna++)

                {

                    cout << "Digite um numero: ";

                    cin >> mat[linha][coluna];

                }

            cout << "\n\n";

            system("pause");

            break;



        case '2' :
            system("cls");

            cout << "* * * * Imprime matriz * * * *\n\n";

            for (linha=0; linha<MAX; linha++)

            {

                cout << endl;

                for (coluna=0; coluna<MAX; coluna++)

                    cout << mat[linha][coluna] << "\t";

            }

            cout << "\n\n";

            system("pause");

            break;



        case '3' :
            system("cls");

            cout << "* * * * Calcula media * * * *\n\n";

            acc=0;

            for(linha=0; linha<MAX; linha++)

                for(coluna=0; coluna<MAX; coluna++)

                    acc+=mat[linha][coluna];

            cout << "\n\nA media dos numero da matriz e: ";

            cout << acc/(MAX*MAX);

            cout << endl << endl;

            system("pause");

            break;



        case '4' :
            system("cls");

            cout << "* * * * Calcula maior e menor numero da matriz * * * *\n\n";

            maior = mat[0][0];

            menor = mat[0][0];

            for(linha=0; linha<MAX; linha++)

                for(coluna=0; coluna<MAX; coluna++)

                {

                    if (mat[linha][coluna]>maior)

                        maior = mat[linha][coluna];

                    if (mat[linha][coluna]<menor)

                        menor = mat[linha][coluna];

                }

            cout << "\n\nMaior = " << maior;

            cout << "\nMenor = " << menor;

            cout << "\n\n";

            system("pause");

            break;



        case '5' :
            system("cls");

            cout << "* * * * Calcula somatoria numeros impares DP * * * *\n\n";

            acc = 0;

            for(i=0; i<MAX; i++)

                if (mat[i][i]%2!=0)

                    acc+=mat[i][i];

            cout << "\n\nSomatoria dos impares da diagonal principal: " << acc << "\n\n\n";

            system("pause");

            break;



        case '6' :
            system("cls");

            cout << "* * * * Calcula quantidade numeros pares DS * * * *\n\n";

            qde=0;

            for(i=0; i<MAX; i++)

                if (mat[i][MAX-1-i]%2==0)

                    qde++;



            cout << "\n\nQuantidade numeros pares DS: " << qde << "\n\n";

            system("pause");

            break;



        case '7' :
            system("cls");

            cout << "* * * * Calcula dobro da somatoria dos pares das diagonais * * * *\n\n";

            acc=0;

            for (i=0; i<MAX; i++)

                if (mat[i][i]%2==0)

                    acc+=mat[i][i];



            for (i=0; i<MAX; i++)

                if (mat[i][MAX-1-i]%2==0)

                    acc+=mat[i][MAX-1-i];



            cout << "\n\nDobro da somatoria dos pares das diagonais: " << 2*acc << "\n\n";

            system("pause");

            break;

        }


    }
    while (op!='9');







}
