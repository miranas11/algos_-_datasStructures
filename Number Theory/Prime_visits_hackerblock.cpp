/****************
*Prime Visits
*https://hack.codingblocks.com/app/practice/3/1039/problem
****************/

#include<iostream>
using namespace std;
#define ll long long

void prime_sieve(int p[])
{
	for(ll i=3;i<=1000000;i+=2)
	{
		p[i]=1;
	}

	for(ll i=3;i<=1000000;i+=2)
	{
		if(p[i]==1)
		{
			for(ll j=i*i;j<=1000000;j+=i)
			{
				p[j]=0;
			}
		}
	}

	p[0]=p[1]=0;
	p[2]=1;
}

int main() {
	int q;
	cin>>q;
	int p[1000001]={0};
	prime_sieve(p);

    //precompute the sum of primes 
	int csum[1000001]={0};
	for(ll i=0;i<=100000;i++)
	{
		csum[i]=csum[i-1]+p[i];
	}

	for(int t=0;t<q;t++)
	{
		int a,b;
		cin>>a>>b;
		cout<<csum[b]-csum[a-1]<<endl;
	}
	return 0;
}