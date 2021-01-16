/****************
*Divisible Subarrays(HackerBlock)
*https://hack.codingblocks.com/app/practice/3/1065/problem
*book 1- page 154
* the concept used here is 
	*we need to find the subarrays whose sum%n=0
	*we calculated the presum and its a goood subarray if (b-a)%n=0 where b and a are presum of 2 diff location
	*or we can say its a good subaraay if (b%n) = (a%n)
	*and we made a freq array of (a%n) and saw how many same values were there and added up the nCr

****************/

#include<iostream>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int fre[n]={0};
		fre[0]=1;
		ll no,sum=0;
		for(int i=0;i<n;i++)
		{		
			cin>>no;
			//made a comm sum
			sum +=no;
			//took the remainder of sum
			sum%=n;
			// in case its a -ve value
			sum=(sum+n)%n;
			//got the freq of that number occuring
			fre[sum]++;
		}

		ll ans=0;
		for(int i=0;i<n;i++)
		{
			if(fre[i]>1)
			{
				ll m=fre[i];
				//cause nC2 = n!/2!*(n-2)! ---- n!/(n-2)! = n * n-1
				ans += (m * (m-1))/2;
			}
		}

		cout<<ans<<endl;
	}
}