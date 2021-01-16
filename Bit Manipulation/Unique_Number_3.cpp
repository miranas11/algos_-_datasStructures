/****************
*unique number 3 problem
*We are given an array containg n numbers. All the numbers are present thrice except for one number 
*which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.
*https://hack.codingblocks.com/app/practice/5/433/problem
*book 1 - page 129
****************/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	//create a 64 len array to store the sum of set bits at particular index
	int cnt[64]={0};
	int n,no;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>no;
		int j=0;
		while(no>0)
		{
			//get last bit
			int last_bit= (no & 1);
			no=no>>1;
			//add last bit to cnt
			cnt[j] += last_bit;
			j++;
		}
	}

	int p=1;
	int ans=0;
	for(int i=0;i<64;i++)
	{
		//moule by 3 to eliminate the contribution of set bit occuring thrice of same number.
		cnt[i] %=3;
		//convert to decimal
		ans += (cnt[i] * p);
		p = p*2;				//p<<1;
	}

	cout<<ans;
	

}