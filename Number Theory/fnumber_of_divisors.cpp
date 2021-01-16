/****************
*Find number of divisors
*book 1 - page 148
****************/


#include<iostream>
#include<vector>
#define ll long long
using namespace std;

vector<int> prime_sieve(int n)
{
	int p[n]={0};
	for(ll i=3;i<n;i+=2)
	{
		p[i]=1;
	}
	vector<int> primes;
	primes.push_back(2);
	for(ll i=3;i<n;i+=2)
	{
		if(p[i]==1)
		{
			primes.push_back(i);
			for(ll j=i*i;j<n;j+=2*i)
			{
				p[j]=0;
			}
		}
	}
	return primes;
}

int find_number_of_divisors(int n,vector<int> primes)
{
	int i=0;
	int p=primes[0];
	int cnt=0;
	int ans=1;
	while(p*p<=n)
	{
		cnt=0;
		if(n%p==0)
		{
			while(n%p==0)
			{
				cnt++;
				n=n/p;
			}
			//total cnt+1 options
			ans*=(cnt+1);
		}
		i++;
		p=primes[i];
	}
	//dry run 10 to understand // 5 will be left
	if(n!=1)
	{
		ans*=(1+1);
	}

	return ans;
}

int main()
{
	int N=100000;
	vector<int> primes=prime_sieve(N);
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		cout<<find_number_of_divisors(m,primes)<<endl;
	}
}
