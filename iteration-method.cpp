#include<iostream>
#include<bits/stdc++.h>
using namespace std;
float fn(float x)
{
  return  x*x*x-x-1;
}
float gn(float x){
    return cbrt(x+1);
}
int main(){
    float x[100],a=50, err=0.0001;
    int i=0;
    cin>>x[0];
    cout<<"Iteration"<<"\t\t x0 "<< "\t"<<"x1 = gn(x0) "<< setw(10)<< endl;
    while(a>err){
        x[i+1]=gn(x[i]);
        a=fabs(x[i+1]-x[i]);
        cout<<"Iteration-"<<i+1<<":\t"<< setw(10)<<x[i]<<setw(10)<<gn(x[i])<< endl;

        i++;
}cout<<"Approximate root of the equation using iteration method is :"<<gn(x[i+1]);
}


