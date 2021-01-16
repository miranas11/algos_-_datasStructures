/****************
*Prime Factorization
*by precomputing all primes using prime sieve
*best for multiple queries
*O(NloglogN) for prime sieve
*O(logN) for single query
****************/

#include<iostream>
#include<vector>
using namespace std;
#define ll long long

vector <int> prime_sieve(int p[],int n)
{
	for(ll i=3;i<n;i+=2)
	{
		p[i]=1;
	}

	for(ll i=3;i*i<n;i+=2)
	{
		if(p[i]==1)
		{
			for(ll j=i*i;j<n;j+=2*i)
			{
				p[j]=0;
			}
		}
	}
	vector<int> primes;
	primes.push_back(2);
	for(int i=3;i<=n;i+=2)
	{
		if(p[i]==1)
		{
			primes.push_back(i);
		}
	}

	return primes;
}

vector <int> find_factors(int m,vector<int> primes)
{
	vector<int> factors;
	int i=0;
	int p=primes[0];
	
	while(p*p<=m)
	{
		if(m%i==0)
		{
			while(m%i==0)
			{
				factors.push_back(i);
				m=m/i;
			}
		}
		i++;
		p=primes[i];
	}
	if(m!=1)
	{
		factors.push_back(m);
	}

	return factors;
}

int main()
{
	int N=100001;
	int p[N]={0};
	vector <int> primes;
	primes.clear();
	primes = prime_sieve(p,N);
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		vector<int> factors;
		factors= find_factors(m,primes);
		for(auto f:factors)
		{
			cout<<f<<" ";
		}
		cout<<endl;
	}
}