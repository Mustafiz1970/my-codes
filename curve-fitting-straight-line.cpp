#include<iostream>

using namespace std;

int main()  //Main Program
{
 int n, i, j;
 cout << "To To fit a straight line to a Given set of Data Values. " << endl;

 //Entering the number of values
 cout << "Enter the number value in the set :" << endl;
 cin >> n;

 double x[n], y[n], z[n], a[n], p, q;

 //Entering the data values
 cout << "Enter the Data values for x : " << endl;
 for (i = 1; i <= n; i++)
 {
  cin >> x[i];
 }
 cout << "Enter the Data values for y : " << endl;
 for (i = 1; i <= n; i++)
 {
  cin >> y[i];
 }

 //printing the complete table
 cout << "Complete table is : " << endl;
 cout << "x\ty\txy\tx^2" << endl;
 for (i = 1; i <= n; i++)
 {
  z[i] = x[i] * x[i];
  a[i] = x[i] * y[i];
  cout << x[i] << "\t" << y[i] << "\t" << a[i] << "\t" << z[i] << endl;
 }

 x[n + 1] = 0;
 y[n + 1] = 0;
 z[n + 1] = 0;
 a[n + 1] = 0;

 for (i = 1; i <= n; i++)
 {
  x[n + 1] = x[n + 1] + x[i];
  y[n + 1] = y[n + 1] + y[i];
  z[n + 1] = z[n + 1] + z[i];
  a[n + 1] = a[n + 1] + a[i];
 }
 cout << "----------------------------" << endl;
 cout << x[n + 1] << "\t" << y[n + 1] << "\t" << z[n + 1] << "\t" << a[n + 1] << endl;
 cout << "----------------------------" << endl;

 //Printing the equations of the formula
 cout << "\n Using formula we obtain : " << endl;
 cout << " " << n << "p + " << x[n + 1] << "q = " << y[n + 1] << endl;
 cout << " " << x[n + 1] << "p + " << z[n + 1] << "q" << " = " << a[n + 1] << endl;

 //Solving for the values of p & q
 p = (y[n + 1] * z[n + 1] - a[n + 1] * x[n + 1]) / (z[n + 1] * n - x[n + 1] * x[n + 1]);
 q = (a[n + 1] - p*x[n + 1]) / z[n + 1];

 //Printing the values of p & q with the equation of best fit line
 cout << "\n Solving the above equations we get : " << endl;
 cout << " p = " << p << endl;
 cout << " q = " << q << endl;
 cout << "\n Equation of the best fit line is " << p << " + " << q << "x = " << "y " << endl;

 return 0;
}
