/****************
 * substets of string using bits
 * Book 1 - page 135
****************/

#include<iostream>
#include<cstring>
using namespace std;

void filter_char(char a[],int i)
{
	int j=0;
	while(i>0)
	{
		int last_bit=(i&1);
		i=i>>1;
		if(last_bit==1)
		{
			cout<<a[j];
		}
		j++;
	}
	cout<<", ";
}


void print_subsets(char a[])
{
	int n=strlen(a);
	for(int i=0;i<(1<<n);i++)
	{
		filter_char(a,i);
	}
}

int main()
{
	char a[100];
	cin>>a;
	print_subsets(a);
}