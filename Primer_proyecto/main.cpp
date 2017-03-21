#include <iostream>

using namespace std;

int main()
{
    int x;
    float y;

    cout<<"ingrese el valor de x:";
    cin >> x;
    cout<<"ingrese el valor de y:";
    cin >> y;

    float j=x + y;

    cout << "la suma de " <<x<<"+"<<y<<" es :"<<j<< endl;

    cout<<"ingrese el valor de x:";
    cin >> x;
    cout<<"ingrese el valor de y:";
    cin >> y;

    float u=x - y;

    cout << "la resta de "<<x<<"-"<<y<<" es: "<<u<< endl;

    cout<<"ingrese el valor de x:";
    cin >> x;
    cout<<"ingrese el valor de y:";
    cin >> y;

    float r=x * y;

    cout << "la multiplicacion de "<<x<<"*"<<y<<" es: "<<r<< endl;

    cout<<"ingrese el valor de x:";
    cin >> x;
    cout<<"ingrese el valor de y:";
    cin >> y;

    float g=x / y;

    cout << "la division de "<<x<<"/"<<y<<" es: "<<g<< endl;
    return 0;
}


