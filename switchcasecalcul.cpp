#include<iostream>
using namespace std;
main()
{
int a,b;
int op;
cout<<"What Arithmetic Operation do you want to perform:"<<endl;
cout<<"1=Addition"<<endl;
cout<<"2=Subtraction"<<endl;
cout<<"3=Multiplication"<<endl;
cout<<"4=Division"<<endl;
cout<<"5=Modulus"<<endl;
cin>>op;

cout<<"Enter Two Numbers"<<endl;
cin>>a>>b;

switch (op)

    {
    case 1:
    cout<<"The Addition result is: "<<a+b;
    break;

    case 2:
    cout<<"The Subtraction result is: "<<a-b;
    break;

    case 3:
    cout<<"The Multiplication result is: "<<a*b;
    break;

    case 4:
    cout<<"The Division result is: "<<a/b;
    break;
    
    case 5:
    cout<<"The Modulus result is: "<<a%b;
    break;
    
    default:
    cout<<"Invalid output :(";
    }
}

