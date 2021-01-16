/****************
*Prime Sieve
*Book 1 - Page 139
*prints all prime from 1 to n 
*if ith index of array is prime marks as 1
*optimised way to print prime numbers
*prime sieve complexity = O(NloglogN)
*brute way complexity = O(N*N)
*for 10^18
	brute way is O(10^36)
	prime sieve is O(7* 10^18)
****************/

#include<iostream>
using namespace std;

void prime_seive(int p[],int n)
{
	//mark all odd prime (even non primes)
	for(int i=3;i<=n;i+=2)
	{
		p[i]=1;
	}


	for(int i=3;i<=n;i+=2)
	{
		//if current number is prime
		if(p[i]==1)
		{
			//mark all multiples of i as non prime
			for(int j=i*i;j<=n;j+=i)
			{
				p[j]=0;
			}
		}
	}
	p[2]=1;
	p[0]=p[1]=0;
}


int main()
{
	int n;
	cin>>n;
	int p[n]={0};
	prime_seive(p,n);
	for(int i=0;i<=n;i++)
	{
		if(p[i]==1)
			cout<<i<<" ,";
	}
}