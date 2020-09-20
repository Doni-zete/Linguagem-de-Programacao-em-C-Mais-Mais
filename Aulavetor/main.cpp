#include <iostream>
#define MAX 10

using namespace std;

int main()
{
    int vet[MAX], i,soma;
    int vet2[MAX];
    float media;

    for(i=0; i<MAX; i++)
    {
        cout << "\nEntre com uma temperatuta" << endl;
        cin>>vet[i];
    }


    for(i=0; i<MAX; i++)
        vet2[i]=vet[i];

    cout<<endl<<endl;

    cout<<"vet1\t\tvet2";
    for(i=0; i<MAX; i++)
        cout<<endl<<vet[i]<<"\t\t"<<vet2[i];


    for(i=0; i<MAX; i++)
        vet[i]=vet2[(MAX-1)-i];

    for(i=0; i<MAX; i++)
    {
        soma=soma+vet[i];
    }


    for(i=0; i<MAX; i++)
    {
        if(vet[i]>media)
        {
            media++;
            media=soma/(float)MAX;
        }
    }

    cout<<endl<<endl;

    cout<<"vet\t\tvet2";
    for(i=0; i<MAX; i++)

        cout<<endl<<vet[i]<<"\t\t"<<vet2[i]<<endl;
    cout<<"A media e:"<<media;
    return 0;
}
