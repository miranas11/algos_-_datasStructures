/****************
*Eko 
*Binary Search
*https://www.spoj.com/problems/EKO/
****************/

#include<iostream>
#include<algorithm>

using namespace std;

bool gotten_required_wood(long long a[],long long n,long long m,long long height)
{
	long long wood_collected=0;
	for(long long i=0;i<n;i++)
	{
		if(a[i]>=height)
			wood_collected+= (a[i]-height);
		if(wood_collected>=m)
			return true;
	}

	return false;

}

long long find_max_height_setting(long long a[],long long n,long long m,long long maxi)
{
	long long s=maxi-m;
	long long e=maxi;
	long long ans=0;
	while(s<=e)
	{
		long long mid=(s+e)/2;
		if(gotten_required_wood(a,n,m,mid))
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}

	return ans;
}

int main()
{
	long long n,m;
	cin>>n>>m;
	long long a[n]={0};
	long long maxi=0;
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];
		maxi=max(maxi,a[i]);
	}

	cout<<find_max_height_setting(a,n,m,maxi)<<endl;
}