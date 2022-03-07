#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"ENTER SIZE OF ARRAY : ";
    cin>>size;
    int i,j,count=0,arr[size],k;
    cout<<"ENTER ELEMENTS :\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                for(k=j;k<size-1;k++)
                {
                    arr[j]=arr[j+1];
                }
                size--;
                j--;
            }
        }
    }
    cout<<"DUPLICTAE ELEMENTS :"<<count<<endl;
    cout<<"ARRAY AFTER REMOVING DUPLICATE ELEMENTS :"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
