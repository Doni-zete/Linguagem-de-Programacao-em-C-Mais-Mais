#include <iostream>
#define MAX 10

using namespace std;

int main()
{
    int vet[MAX], i;
    int vet2[MAX];
    for(i=0; i<MAX; i++)
    {
        cout << "\nEntre com um numero" << endl;
    cin>>vet[i];
    }


for(i=0;i<MAX;i++)
    vet2[i]=vet[i];

cout<<endl<<endl;

for(i=0; i<MAX; i++)
    cout<<endl<<vet[i]<<"\t\t"<<vet2[i];


return 0;
}
