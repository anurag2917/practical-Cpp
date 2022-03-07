#include<iostream> 
#include<cstring> 
using namespace std; 
class Individual 
{ 
public: 
string name; 
void get(); 
void display(); 
}; 
void Individual::get() 
{ 
cout<<"Enter your name: "; 
getline(cin,name); 
} 
void Individual::display() 
{ 
cout<<"Your name is: "; 
cout<<name; 
} 
class Student: public Individual 
{ 
public: 
int cls; 
int rollno; 
public: 
void get(); 
void display(); 
}; 
void Student::get() 
{ 
cout<<"Enter your class: " ; 
cin>>cls; 
cout<<"Enter your Roll.No.: "; 
cin>>rollno; 
} 
void Student::display() 
{ 
cout<<"Your class is: "<<cls<<endl; 
cout<<"Your roll. No. is: "<<rollno<<endl; 
} 
class Employee:public Individual 
{ 
public: 
int salary; 
int id; 
public: 
void get(); 
void display(); 
}; 
void Employee::get() 
{ 
cout<<"Enter your salary: "; 
cin>>salary; 
cout<<"Enter your employee ID: "; 
cin>>id; 
} 
void Employee::display() 
{ 
cout<<"Your salary: "<<salary<<endl; 
cout<<"your Employee ID: "<<id<<endl; 
} 
int main() 
{ 
Individual i1; 
Employee e1; 
Student s1; 
i1.get(); 
e1.get(); 
e1.display(); 
cout<<endl; 
s1.get(); 
s1.display(); 
cout<<"HAVE A NICE DAY :) "<<endl; 
}
