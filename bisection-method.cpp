#include<iostream>
using namespace std;

//function used is x^3-2x^2+3
double func(double x)
{
    return x*x*x - x -11;
}

double e=0.001;
double c;

void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        cout<<"Incorrect a and b";
        return;
    }

    c = a;
    int i=0;
    while ((b-a) >= e)
    {
        cout<<i+1<<"iteration:"<<endl;
        cout<<"Here f("<<a<<") = "<<func(a)<<" and f("<<b<<") = "<<func(b)<<endl;
        cout<<"Now, root lies between "<<a<<" and "<<b<<endl;
        c = (a+b)/2;
        cout<<"X("<<i<<") = "<<"("<<a<<"+"<<b<<")/2 = "<<c<<endl;

        if (func(c) == 0.0){
            cout << "X("<<i<<") ="<< c<<endl;
            break;
        }
        else if (func(c)*func(a) < 0){

                if(func(c)>0){
                    cout<<"f("<<c<<") = "<<func(c)<<"> 0"<<endl<<endl;
                }
                else{
                    cout<<"f("<<c<<") = "<<func(c)<<"< 0"<<endl<<endl;
                }

                b = c;
        }
        else{
                 if(func(c)>0){
                    cout<<"f("<<c<<") = "<<func(c)<<">0"<<endl<<endl;
                }
                else{
                    cout<<"f("<<c<<") = "<<func(c)<<"<0"<<endl<<endl;
                }
                a = c;
        }
        i++;
    }
}

int main()
{
    double a,b;
    cin>>a>>b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    bisection(a,b);
    cout<<"\n";
    cout<<"Accurate Root calculated is = "<<c<<endl;

    return 0;
}
