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
    cout << "\nO cubo de 4 e:" <<cubo(5) <<endl;
    return 0;
}
