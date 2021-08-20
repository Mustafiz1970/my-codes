#include<iostream>
#include<cmath>

 //for specifying format
#include<bits/stdc++.h>

using namespace std;

  //prespecified error tolerance
#define Es 0.0001

#define f(x) x*x*x - 8*x -5

int main(){
	float x0,x1,x2,x2old,f0,f1,f2;
	int itr=1;
	float Ea;
	cout<<"Enter the intial guesses (x0,x1): ";
	cin>>x0>>x1;
	cout<<"Itr No.\t  x0\t  x1\t  x2\t   f(x2)\n";
	cout<<"----------------------------------------------------------------------------\n";
	while (itr<=5){
		f0=f(x0);
		f1=f(x1);
		x2=x1-(f1*(x1-x0)/(f1-f0));
		f2=f(x2);

		//finding absolute error
		Ea=fabs((x2-x1)/x2);
		cout<<fixed<<setprecision(5);
	cout<<itr<<"\t"<<x0<<"\t"<<x1<<"\t"<<x2<<"\t"<<f2<<"\n";
		x0=x1;
		x1=x2;
		itr++;

	}
	cout<<"Approximate root (x2) is: "<<x2;
	return 0;
}
