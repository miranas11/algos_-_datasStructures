/****************
*Painter partition Problem
*https://hack.codingblocks.com/app/practice/1/1057/problem
****************/

#include<iostream>
#include<algorithm>

using namespace std;

bool can_paint_all_board(int a[],int n,int k,int time)
{
	int painter_used=1;
	int length_painted=0;
	for(int i=0;i<n;i++)
	{
		if(length_painted + a[i] > time)
		{
			painter_used++;
			length_painted=a[i];
			if(painter_used>k)
				return false;
		}
		else
		{
			length_painted+=a[i];
		}
	}
	return true;
}

long long find_min_time(int a[],int n,int k,int sum,int maxi)
{
	int s=maxi;
	int e=sum;
	int ans=0;
	while(s<=e)
	{
		int m=(s+e)/2;
		if(can_paint_all_board(a,n,k,m))
		{
			ans=m;
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	return ans;
}

int main()
{
	int k,n;
	cin>>k>>n;
	int *a=new int[n];
	int sum=0;
    int maxi=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
        maxi=max(maxi,a[i]);
	}
    
    //sort(a,a+n);
	cout<<find_min_time(a,n,k,sum,maxi)<<endl;
}