#include<iostream>
using namespace std;
int main()
{
    int result[20];
    int a1[10]={1,3,2,5,4,6,8,7,9,10};
    int a2[10]={11,20,15,12,14,16,17,19,18,13};
    int i, j, temp;
    cout<<"FIRST ARRAY : "<<endl;
    for(i=0; i<10; i++)
    {
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    cout<<"SECOND ARRAY : "<<endl;
    for(i=0; i<10; i++)
    {
        cout<<a2[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<10; i++)
    {
        result[i] = a1[i];
    }
    for(j=0; j<10; j++)
    {
        result[i] = a2[j];
        i++;
    }
    cout<<"\nMERGED ARRAY :\n";
    for(i=0; i<20; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    for(j=0; j<(20-1); j++)
    {
        for(i=0; i<(20-1); i++)
        {
            if(result[i]>result[i+1])
            {
                temp = result[i];
                result[i] = result[i+1];
                result[i+1] = temp;
            }
        }
    }
    cout<<"\nSORTED ARRAY :\n";
    for(i=0; i<20; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
