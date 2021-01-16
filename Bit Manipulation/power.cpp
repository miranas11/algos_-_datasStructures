/****************
Book 1 - page 132
****************/

#include<iostream>
using namespace std;

int efficient_exp(int a,int n)
{
	int ans=1;
	while(n>0)
	{
		int last_bit=(n&1);
		n=(n>>1);
		if(last_bit==1)
		{
			ans=ans*a;
		}
		a=a*a;
	}
	return ans;
}

int main()
{
	int a,n;
	cin>>a>>n;
	cout<<efficient_exp(a,n)<<endl;
}