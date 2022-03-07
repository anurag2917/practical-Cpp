#include<iostream>
using namespace std ;
int main()
{
double p,q,quo;
cout<<"Enter the numerator and denominator: \n";
cin>>p>>q;
try
{
if(q==0)
throw "Attempted to divide by zero.";
quo=p/q;
cout<<"The quotient is: "<<quo;
}
catch (const char*p)
{
cout<<p;
}
cout<<"End of main function: \n";
return 0;
}
