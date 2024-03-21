#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int n,rev=0,b,i,l,a,q;    
	string wo="",w;
	cout<<"1=Given string is pallindrome or not"<<endl;
	cout<<"2=Given number is pallindrome or not"<<endl;
	cin>>q;
	if(q==1){
	cout<<"Enter a Word:";
	cin>>w;
	l=w.length();
	for (i=l;i>=0;i--)
	{
		wo.insert(wo.length(), 1, w[i]);
	}
	a=wo.compare(w);
	if (a==1)
	{
		cout<<"The given word "<<w<<" is not a pallindrome"<<w;
	}
	else
	{
		cout<<"The given word "<<w<<" is a pallindrome"<<w;
	}
}
else if(q==2){
	cout<<"Enter a number: ";    
	cin>>n;    
	int y=n;
  			while(n!=0)    
  		{	    
     		b=n%10;      
     		rev=rev*10+b;    
     		n/=10;    
		}
		if (y!=rev)
	{
		cout<<"The given number "<<y<<" is not a pallindrome";
	}
	else
	{
		cout<<"The given number "<<y<<" is a pallindrome";
	}
}
}

