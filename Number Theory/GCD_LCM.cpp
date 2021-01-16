/****************
*GCD & LCM
*GCD using Euclids Algo
****************/

#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	else	
		return gcd(b,a%b);		
}


int main()
{
	int a,b;
	cin>>a>>b;
	int GCD=gcd(a,b);
	//relation:  GCD x LCM = Product of numbers
	int LCM=(a*b)/GCD;
	cout<<"GCD :"<<GCD<<endl<<"LCM :"<<LCM<<endl;
}