//WITH  RECURSION 
#include <iostream>
using namespace std;
int binarysearch(int a[],int l,int h,int n)
{
    if(l<=h)
    {
        int m=(l+h)/2;
        if(a[m]==n)
        {
            return m;
        }
        else if(a[m]<n)
        {
            return binarysearch(a,m+1,h,n);
        }
        else
        {
            return binarysearch(a,l,m-1,n);
        }
    }
    return -1;
}
int main()
{
    int a[]={2,4,5,6,9,8,13};
    int n,l,h,m,index;
    cout<<"ARRAY :\n";
    for(int i=0;i<=6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"ENTER NUMBER FROM GIVEN ARRAY : "<<endl;
    cin>>n;
    l=0;
    h=(sizeof(a)/sizeof(a[0]))-1;
    index=binarysearch(a,l,h,n);
    if(index==-1)
    {
        cout<<"NUMBER NOT FOUND ";
    }
    else
    {
        cout<<"NUMBER FOUND AT INDEX "<<index;
    }
    return 0;
}



//WITHOUT  RECURSION 
#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,5,8,9};
    cout<<"GIVEN ARRAY :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    int n,l,h,m,mid;
    cout<<"\nENTER NUMBER :\n";
    cin>>n;
    l=0;
    h=(sizeof(a)/sizeof(a[0]))-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==n)
        {
            mid=m;
            break;
        }
        else if(a[m]<n)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    cout<<"NUMBER FOUND AT INDEX : "<<mid<<endl;
    return 0;
}
