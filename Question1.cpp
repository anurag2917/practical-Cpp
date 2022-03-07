#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// The program displays value of series with command-line arguments

int main(int argc, char* argv[])
{	cout<<"Series is - 1/(1*1)-1/(2*2)+..... 1/(n*n)"<<endl;
	int n;
	if(argc==2){
		n=atoi(argv[1]);
		cout<<"Value of n is :"<< n<<endl;
	}

	else
	{
		cout<<"Enter value of n : ";
		cin>>n;
	}
	int i=1;
	float S=0.0;
	while (i<=n)
	{	S=S+(pow(-1,i+1)*(1.0/(i*i)));
		i=i+1;
	}
	cout<<"Sum of series upto "<<n<<" is "<<S;
	return 0;
}
