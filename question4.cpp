#include <iostream>
#include<cstdlib>
#include<string.h>
#include<iomanip>
using namespace std;
void print_address(char arr[])
{
    void*p;
    for(int i=0;i<strlen(arr);i++)
    {
        p=&arr[i];
        cout<<"address of character "<<arr[i] <<" = "<<p<<endl;

    }
}
int length_string(char*p)
{
    int len=0;
    while(*p)
    {
        len++;
        p=p+1;
    }
    return len;
}
void concatenate_string(char*p,char*q)
{
    while(*p!='\0')
        p++;
    while(*q!='\0')
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
}
void compare_str(char s1[],char s2[])
{

}
void str_case(char a[])
{
    int i;
    for(i=0;i<strlen(a);i++)
        if(islower(a[i]))
    {
        a[i]=a[i]-32;
    }
    return;
}
void str_reverse(char r[])
{
    char temp;
    int i,j;
    j=strlen(r)-1;
    //for(i=0;i<length_string(r)/2;i++;j--)
      //  for(j=length_string(r)-1;)
    for(i=0;i<j;i++,j--)
    {
        temp=r[i];
        r[i]=r[j];
        r[j]=temp;
    }
}
int main()
{
    char arr1[50],arr2[50];
    int c,L1,L2;
    cout<<"ENTER FIRST STRING :"<<endl;
    cin>>arr1;
    cout<<"ENTER SECOND STRING :"<<endl;
    cin>>arr2;
    cout<<"1. PRINT ADDRESS OF EACH CHARACTER OF THE STRING ."<<endl;
    cout<<"2. COMPARE TWO STRINGS ."<<endl;
    cout<<"3. LENGTH OF STRING ."<<endl;
    cout<<"4. CONVERSION OF ALL LOWERCASE CHARACTERS TO UPPERCASE ."<<endl;
    cout<<"5. REVERSE THE STRING ."<<endl;
    cout<<"6. CONCATENATE TWO STRINGS ."<<endl;
    char ch='y';
    while(ch=='y')
    {
        cout<<"ENTER YOUR CHOICE : "<<endl;;
        cin>>c;
        switch(c)
        {
            case 1:print_address(arr1);
            print_address(arr2);
            break;
            case 2:compare_str(arr1,arr2);
            if(arr1==arr2)
            {
                cout<<arr1<<" IS EQUAL TO "<<arr2<<endl;
            }
            else
                cout<<arr1<<" IS NOT EQUAL TO "<<arr2<<endl;
            break;
            case 3:L1=length_string(arr1);
            cout<<"LENGTH OF FIRST STRING : "<<L1<<endl;
            L2=length_string(arr2);
            cout<<"LENGTH OF SECOND STRING : "<<L2<<endl;
            break;
            case 4:str_case(arr1);
            cout<<"UPPERCASE OF FIRST STRING IS : "<<arr1<<endl;
            str_case(arr2);
            cout<<"UPPERCASE OF SECOND STRING IS : "<<arr2<<endl;
            break;
            case 5:str_reverse(arr1);
            cout<<"REVERSE OF FIRST STRING IS : "<<arr1<<endl;
            str_reverse(arr2);
            cout<<"REVERSE OF SECOND STRING IS : "<<arr2<<endl;
            break;
            case 6:concatenate_string(arr1,arr2);
            cout<<"CONCATENATION OF TWO STRING ARE :"<<arr1<<endl;
            break;
            default:cout<<"! INVALID CHOICE !"<<endl;
        }
        cout<<"DO YOU WANT TO CONTINUE ?"<<" ";
        cin>>ch;
    }
    return 0;
}
