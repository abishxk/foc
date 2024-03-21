#include<iostream>
using namespace std;
main()
{
int age;
cout<<"enter your age:";
cin>>age;
if (age>=18)
cout<<"You are eligible to Vote";
else
{
cout<<"You are not eligible to Vote"<<endl;
int c=0;
for(int i=age;i<18;i++){
	c+=1;
}
cout<<"You can vote in "<<c<<" years";
}
}
