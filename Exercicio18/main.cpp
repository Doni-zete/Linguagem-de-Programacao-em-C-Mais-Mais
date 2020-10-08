#include <iostream>
#include<stdlib.h>

using namespace std;

void tela(void);
int cubo(int x)
{

    return x*x*x;
}

int main()
{
    int a=4;
    cout << "\nO cubo de 4 e:" <<cubo(a) <<endl;
    return 0;
}
