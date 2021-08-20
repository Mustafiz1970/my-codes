#include<iostream>

using namespace std;

int main()  //Main Program
{
 int n, i, j;
 cout << "To To fit a straight line to a Given set of Data Values. " << endl;

 //Entering the number of values
 cout << "Enter the number value in the set :" << endl;
 cin >> n;

 double x1[n], y1[n], z1[n], a1[n],b1[n],c1[n],d1[n],a,b,c,d,l,m,o,k,p,q,r,s,x,y,z,D;

 //Entering the data values
 cout << "Enter the Data values for x : " << endl;
 for (i = 1; i <= n; i++)
 {
  cin >> x1[i];
 }
 cout << "Enter the Data values for y : " << endl;
 for (i = 1; i <= n; i++)
 {
  cin >> y1[i];
 }

 //printing the complete table
 cout << "Complete table is : " << endl;
 cout << "x \t y \t x^2 \t x^3 \t x^4 \t xy \t x^2y " << endl;
 for (i = 1; i <= n; i++)
 {
  a1[i] = x1[i] * x1[i];
  b1[i] = x1[i] * x1[i] * x1[i];
  c1[i] = x1[i] * x1[i] * x1[i] * x1[i];
  d1[i] = x1[i] * y1[i];
  z1[i] = x1[i] * x1[i] * y1[i];

  cout << x1[i] << "\t" << y1[i] << "\t" << a1[i] << "\t" <<b1[i]<< "\t"<< c1[i] << "\t"<<d1[i]<< "\t"<<z1[i]<< endl;
 }

 x1[n + 1] = 0;
 y1[n + 1] = 0;
 z1[n + 1] = 0;
 a1[n + 1] = 0;
 b1[n + 1] = 0;
 c1[n + 1] = 0;
 d1[n + 1] = 0;

 for (i = 1; i <= n; i++)
 {
  x1[n + 1] = x1[n + 1] + x1[i];
  y1[n + 1] = y1[n + 1] + y1[i];
  z1[n + 1] = z1[n + 1] + z1[i];
  a1[n + 1] = a1[n + 1] + a1[i];
  b1[n + 1] = b1[n + 1] + b1[i];
  c1[n + 1] = c1[n + 1] + c1[i];
  d1[n + 1] = d1[n + 1] + d1[i];
 }


 cout << "--------------------------------------------------------------" << endl;
 cout<<"Total x  Totaly   Total x^2   Total x^3  Total x^4  Total xy  Total x^2y "<<endl;
 cout << x1[n + 1] << "\t" << y1[n + 1] << "\t" << a1[n + 1] << "\t" << b1[n + 1]<<"\t" << c1[n + 1] << "\t" << d1[n + 1] << "\t" << z1[n + 1]<< endl;
 cout << "--------------------------------------------------------------" << endl;

 cout << "\n Using formula we obtain : " << endl;
cout << " " << n << "a + " << x1[n + 1] << "b + "<<a1[n+1]<<"c = " <<y1[n + 1] << endl;
cout << " " <<x1[n + 1]  << "a + " << a1[n + 1] << "b + "<<b1[n+1]<<"c = " <<d1[n + 1] << endl;
cout << " " <<a1[n + 1]  << "a + " << b1[n + 1] << "b + "<<c1[n+1]<<"c = " <<z1[n + 1] << endl;


 //Solving for the values of p & q
 a=n;
 b=x1[n+1];
 c = a1[n+1];
 d= -y1[n+1];
 l=x1[n+1];
 m=a1[n+1];
 o = b1[n+1];
 k= -d1[n+1];
 p=a1[n+1];
 q=b1[n+1];
 r = c1[n+1];
 s= -z1[n+1];

 D = (a*m*r+b*p*o+c*l*q)-(a*o*q+b*l*r+c*m*p);
 x = ((b*r*k+c*m*s+d*o*q)-(b*o*s+c*q*k+d*m*r))/D;
 y = ((a*o*s+c*p*k+d*l*r)-(a*r*k+c*l*s+d*o*p))/D;
 z = ((a*q*k+b*l*s+d*m*p)-(a*m*s+b*p*k+d*l*q))/D;


 //Printing the values of p & q with the equation of best fit line
 cout << "\n Solving the above equations we get : " << endl;
 cout << " a = " << x << endl;
 cout << " b = " << y << endl;
  cout <<" c = " << z << endl;
 cout << "\n Equation of the best fit line is " << x << " + " << y << "x "<<z<<"x^2 = " << "y " << endl;

 return 0;
}

