/****************
*unique number 2 problem
*given a list of number with each number occuring twice except two find that numbers
*used property of xor that a^a=0; 
*so a^b^c^d^b^d^a^f = c^f;
*https://hack.codingblocks.com/app/practice/5/213/problem
*book 1 - page 126
****************/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n]={0};
	int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		//find xor of all no. we will be left with a^b
		ans=ans ^ arr[i];
	}
	int temp=ans;
	//find the pos where only one of the two no.s has set bit
	int pos=0;
	while((temp&1)==0)
	{
		pos++;
		temp=temp>>1;
	}

	int mask=(1<<pos);
	int a=0,b=0;
	//find numbers that have set bit at pos in array
	for(int i=0;i<n;i++)
	{
		//wont include b and all other elements that dont have set bit at pos
		if(arr[i] & mask > 0 )
		{
			//do xor to be left with only one number i.e a ---cause b wont be included in if statement
			a= a^arr[i];
		}
	}

	// a^b =ans ---so, b=ans^a  =   b= a^b ^ a = b;
	b=ans^a;

	cout<<min(a,b)<<" "<<max(a,b)<<endl;



}