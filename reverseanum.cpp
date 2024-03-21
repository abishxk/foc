#include <iostream>  
#include <sstream>
using namespace std;  
main()  
{  
int n,rev=0,b;    
string str;
cout<<"Enter a number: ";    
cin>>n;    
if(isdigit(n)==0){
	if(n>0){
  while(n!=0)    
  {    
     b=n%10;      
     rev=rev*10+b;    
     n/=10;    
  }    
 cout<<"Reversed Number: "<<rev<<endl;     
}
	else{
	 stringstream ss;  
  	 ss << n;  
  	 ss >> str;
  	 int l=str.length();
	 string num=str.substr(1, l);
	 stringstream a(num);
	 int x=0;
	 a>>x;
	  while(x!=0){    
     b=x%10;      
     rev=rev*10+b;    
     x/=10;    
  }    
 cout<<"Reversed Number: "<<"-"<<rev<<endl;    
	}
}
else{
cout<<"Given number is invalid";
}  
}
