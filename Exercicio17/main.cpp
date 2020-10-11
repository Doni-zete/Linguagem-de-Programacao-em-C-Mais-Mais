#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
float delta (float a, float b, float c)

{

    return b*b-4*a*c;

}

void raizes (float a, float b, float c, float *x1, float *x2, float *Xv, float *Yv)

{

    float dt;

    dt = delta(a,b,c);

    if (dt >=0)

    {

        *x1 = (-b+sqrt(dt))/(2*a);

        *x2 = (-b-sqrt(dt))/(2*a);

    }

    *Xv = (-b)/(2*a);

    *Yv = (-dt)/(4*a);

}

int main()

{

    float a,b,c,x1,x2,Xv,Yv;

    cout << "Digite o valor de A: ";

    cin >> a;

    cout << "Digite o valor de B: ";

    cin >> b;

    cout << "Digite o valor de C: ";

    cin >> c;

    raizes(a,b,c,&x1,&x2,&Xv,&Yv);

    cout << "\nDelta = " << delta(a,b,c);

    if (delta(a,b,c)>=0)

    {
        cout << "\nX1 = " << x1 << "\nX2 = " << x2;
    }


    else

    cout << "\nNao existem raizes reais\n\n";
    cout << "\nXv = " << Xv << "\nYv = " << Yv;
    cout << "\n\n\n";

    return 0;

}
