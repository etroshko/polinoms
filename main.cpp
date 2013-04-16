#include <iostream>
#include "polinom.h"

using namespace std;

/*double addition ( double *coefficient1,double *coefficient2, int power1, int power2, double *sum)
{
    int i, j;
    if(power1>power2)
    {
        for(i=0; i<power2+1; i++)
            sum[i]=coefficient1[i]+coefficient2[i];
        for(j=i; j<power1+1; j++)
            sum[j]=coefficient1[j];
    }
    else
    {
        for( i=0; i<power1+1; i++)
            sum[i]=coefficient1[i]+coefficient2[i];
        for( j=i; j<power2+1; j++)
            sum[j]=coefficient2[j];
    }
    return *sum;
}

double derivative ( double *coefficient, int power, double *temp )
{
    int k=power;
    int j=power;
    for (int i=k-1; i>=0; --i)
    {
        temp[i]=coefficient[j]*j;
        --j ;
    }
    return *temp;
}

void input(double *coefficient, int power)
{
    for(int i=power; i>=0; --i)
    {
        cout<<"x^"<<i<<":";
        cin>>coefficient[i];
    }
}

void output(double *coefficient, int power)
{
    for(int i=power; i>=0; --i)
    {
        switch(i)
        {
        case 0:
            cout<<coefficient[i];
            break;
        case 1:
            cout<<coefficient[i]<<"x"<<"+";
            break;
        default:
            cout<<coefficient[i]<<"x^"<<i<<"+";
            break;
        }
    }
    cout<<endl;
}

double multiplication(double *coefficient1, double *coefficient2, int power1,int power2, double *coefficient)
{
    for(int i=power1; i>=0; --i)
        for(int j=power2; j>=0; --j)
            coefficient[i+j]+=coefficient1[i]*coefficient2[j];
    return *coefficient;
}*/

int main()
{

    /*int power1;
    int power2;
    cout<<"Введите степень полинома"<<endl;
    cin>>power1;
    double *coefficient1=new double[power1+1];
    input(coefficient1, power1);
    output(coefficient1, power1);


    cout<<"Введите степень полинома"<<endl;
    cin>>power2;
    double *coefficient2=new double[power2+1];
    input(coefficient2, power2);
    output(coefficient2, power2);

    double *temp=new double[power2+1];
    derivative(coefficient2, power2, temp);
    cout<<"Производная от ";
    output(coefficient2, power2);
    cout<<"равна ";
    output(temp, power2-1);


    double *coefficient3=new double[power1+power2+1];
    multiplication(coefficient1, coefficient2, power1, power2, coefficient3);
    cout<<"Произведение ";
    output(coefficient3, (power1+power2));
    delete [] coefficient3;
    int power;
    if(power1>power2)
        power=power1;
    else
        power=power2;
    double *temp1=new double[power+1];

    addition(coefficient1, coefficient2,power1,power2, temp1);
    output(temp1, power);




    delete [] temp;
    delete [] temp1;
    delete [] coefficient1;
    delete [] coefficient2;
    delete [] coefficient3;



    */
    Polinom a(2);
    cin>>a;
    cout<<a;
    Polinom b(3);
    cin>>b;
    cout<<b;
   Polinom c(5);
    c=a*b;
    cout<<c;
    cout<<endl;
   c.derivative(c);
   cout<<c;
    return 0;
}

