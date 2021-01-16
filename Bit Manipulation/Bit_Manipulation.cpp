/****************
Book 1 - page 115
****************/

#include<iostream>
using namespace std;

void odd_even(int n)
{
	int ans=n & 1;
	if(ans==1)
		cout<<"Odd"<<endl;
	else
		cout<<"Even"<<endl;
}

void get_bit(int n,int i)
{
	int mask= 1<<i;
	int ans= (n&mask) > 0 ? 1 : 0;
	cout<<ans<<endl;
}

void set_bit(int n,int i)
{
	int mask=1<<i;
	int ans=n | mask;
	cout<<"The bit at ith position was : ";
	get_bit(n,i);
	cout<<"Ans : "<<ans<<endl;
	cout<<"Now bit at ith position is : ";
	get_bit(ans,i);
}

void clear_bit(int n,int i)
{
	int mask= ~(1<<i) ;
	int ans= n&mask ;
	cout<<"Ans : "<<ans<<endl;
	cout<<"Now bit at ith position is : ";
	get_bit(ans,i);
	
}

void update_bit(int n,int i,int v)
{
	//first clear bit at i
	int mask=~(1<<i);
	int clear_bit_no= n&mask;

	int newmask= (v<<i);
	int ans= (clear_bit_no | newmask);
	cout<<"The updated number is : "<<ans<<endl;
}

int main()
{
	cout<<"1.Odd/Even\n2.Get Bit\n3.Set Bit\n4.Clear Bit\n5.Update Bit\n";
	int q;
	cin>>q;
	int n,i;
	if(q==1)
	{	
		cout<<"Enter Number:";
		int n;
		cin>>n;
		odd_even(n);
	}
	else if(q==2)
	{
		cout<<"Enter the number and the index you want to get bit of:";
		int n,i;
		cin>>n>>i;
		get_bit(n,i);
	}
		
	else if(q==3)
	{
		cout<<"Enter number and the index where you want to set bit:";
		int n,i;
		cin>>n>>i;
		set_bit(n,i);
	}
	else if(q==4)
	{
		cout<<"Enter number an index where you want to clear bit:";
		int n,i;
		cin>>n>>i;
		clear_bit(n,i);
	}
	else if(q==5)
	{
		cout<<"Enter the number ,index and value to update bit:";
		int n,i,v;
		cin>>n>>i>>v;
		update_bit(n,i,v);
	}
			
}