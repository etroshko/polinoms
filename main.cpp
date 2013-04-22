#include <iostream>
#include "polinom.h"

using namespace std;

int main()
{
    Polinom a(2);
    cin>>a;
    cout<<a;
    Polinom b(2);
    cin>>b;
    cout<<b;
    Polinom c(4);
    std::cout<<"Произведение ";
    c=a*b;
    cout<<c;
    cout<<endl;
    Polinom d(2);
    d=a+b;
    std::cout<<"Сумма ";
    cout<<d;
    Polinom e(1);
    e=a.derivative(a);
    cout<<e;
    Polinom f(a);
    f=a.integral(a);
    cout<<f;
    return 0;
}

