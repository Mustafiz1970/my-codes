#include <iostream>
#include <math.h>
using namespace std;
float fn(float x)
{
     return  x*x*x - x -1 ;
}
float de(float x)
{
     return  3*x*x -1 ;
}

float x0,x1;
void NR_ITR(float x0){

    int i=0;
    while(i<7)
  {


     x1 = x0 - (fn(x0)/de(x0));
     cout<<i+1<<"Iteration: "<<endl<<endl;
     cout<<"f(x"<<i<<") = f("<<x0<<") = "<<fn(x0)<<endl;
     cout<<"f(x"<<i<<") = f'("<<x0<<") = "<<de(x0)<<endl;
     cout<<"x"<<i+1<<" = "<<"x"<<i<<" - (f(x"<<i<<")/f'(x"<<i<<"))"<<endl;
     cout<<"x"<<i+1<<" = "<<x0<<"-"<<fn(x0)<<"/"<<de(x0)<<endl;
     cout<<"x"<<i+1<<" = "<<x1<<endl;
     if(fn(x1)==0){
        cout<<"The root is : "<<x1;
        break;
     }
      x0=x1;
      i++;
     }



}
int main()
{
    float x0,a,b;

    cin>>a>>b;
    x0 = (a+b)/2;
    NR_ITR(x0);
    return 0;
}

