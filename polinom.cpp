#include "polinom.h"

Polinom::Polinom():
    power(0), coefficient(0)
{
    double *coefficient=NULL;
    coefficient= new double[power+1];
};

Polinom::Polinom(int a):
    power(a), coefficient(0)
{
    coefficient=new double[power+1];
};

Polinom::~Polinom()
{
    delete [] coefficient;
}

Polinom::Polinom(const Polinom &org):
    power(org.power),coefficient(0)
{
    coefficient=new double[power+1];
    for(int i=power; i>=0; --i)
        coefficient[i]=org.coefficient[i];
}

Polinom &Polinom::operator=(const Polinom &org)
{
    if(this==&org)
        return *this;
    delete [] coefficient;
    power=org.power;
    coefficient=new double[power+1];
    for(int i=0; i<power; ++i)
        coefficient[i]=org.coefficient[i];
    return *this;
}

Polinom Polinom::operator+(const Polinom& add)
{
    Polinom temp;

    coefficient=new double[power];
    if(power==add.power)
    {
        for(int i=add.power; i>=0; i--)
            temp.coefficient[i]=coefficient[i]+add.coefficient[i];
        return temp;
    }
    if(power<add.power)
    {
        for(int i=power; i>=0; i--)
            temp.coefficient[i]=coefficient[i]+add.coefficient[i];
        for(int i=add.power; i>=power+1; i--)
            temp.coefficient[i]=add.coefficient[i];
        return temp;
    }
    if(power>add.power)
    {
        for(int i=add.power; i>=0; i--)
            temp.coefficient[i]=coefficient[i]+add.coefficient[i];
        for(int i=power; i>=add.power+1; i--)
            temp.coefficient[i]=coefficient[i];
        return temp;
    }
    return *this;
}

Polinom Polinom::operator*(Polinom& a)
{
    Polinom temp(power+a.power);
    for(int i=power; i>=0; --i)
        for(int j=a.power; j>=0; --j)
            temp.coefficient[i+j]+=coefficient[i]*a.coefficient[j];
    return temp;

}
Polinom Polinom::derivative(Polinom temp)
{
    Polinom result;
    int  k=power;
    result.coefficient=new double[k+1];
    int j=power;
    for ( int i=power-1; i>=0; --i)
    {
        result.coefficient[i]=temp.coefficient[j]*j;
        --j ;

    }
    return result;
}



std::ostream& operator<<(std::ostream &out, const Polinom &coef)
{
    for(int i=coef.power; i>=0; --i)
    {
        switch(i)
        {
        case 0:
            out<<coef.coefficient[i];
            break;
        case 1:
            out<<coef.coefficient[i]<<"x"<<"+";
            break;
        default:
            out<<coef.coefficient[i]<<"x^"<<i<<"+";
            break;
        }
    }
    out<<"\n";
    return out;
}

std::istream& operator>>(std::istream &in, const Polinom &coef)
{
    for(int i=coef.power; i>=0; --i)
    {
        std::cout<<"x^"<<i<<":";
        in>>coef.coefficient[i];
    }
    return in;
}


