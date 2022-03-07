// WITH RECURSION :
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0||b==0)
        return 0;
    else if(a==b)
        return a;
    else if(a>b)
        return gcd(a-b,b);
    else
        return gcd(a,b-a);
}
int main()
{
    int a,b;
    cout<<"ENTER FIRST NUMBER :"<<endl;
    cin>>a;
    cout<<"ENTER SECOND NUMBER :"<<endl;
    cin>>b;
    cout<<"GCD OF "<<a<<" AND "<<b<<" IS "<<gcd(a,b);
    return 0;
}


//WITHOUT RECURSION :

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,gcd;
    cout<<"ENTER TWO NUMBERS:\n";
    cout<<"number 1 : ";
    cin>>num1;
    cout<<"number 2 : ";
    cin>>num2;
    if(num1<num2)
       {
            int temp=num2;
            num2=num1;
            num1=temp;
       }
    for (int i=1; i<=num2; ++i)
    {
      if (num1%i==0 && num2%i==0)
      {
          gcd=i;
      }
    }
    cout<<"G.C.D = "<<gcd<<endl;	
    return 0;
}

