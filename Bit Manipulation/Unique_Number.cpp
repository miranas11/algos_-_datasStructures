/****************
*unique number problem
*given a list of number with each number occuring twice except one find that number
*used property of xor that a^a=0; 
*so a^b^c^d^b^d^a=c;
*Book 1 -Page 113
****************/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans=0;
	int no;

	for(int i=0;i<n;i++)
	{
		cin>>no;
		ans=ans^no;
	}
	cout<<ans;
}