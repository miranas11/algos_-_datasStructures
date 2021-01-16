/****************
*Winning CB Scholarship
*https://hack.codingblocks.com/app/practice/1/300/problem
*In this prob the search space is 0 to n students 
****************/

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

bool mid_students_can_get_ss(long long n,long long m,long long x,long long y,long long mid)
{
	//if mid can get ss then all above mid will pay the extra coupons to maximize the number of students getting ss
	long long extra_coupons= (n - mid) * y;
	long long total_coupons=extra_coupons + m;
	//total studnets getting ss
	long long s_gotten_ss=total_coupons/x;
	//if students getting ss is greater then the desired mid or equal
	if(s_gotten_ss>=mid)
		return true;
	else
		return false;
		
}

long long find_max_students(long long n,long long m,long long x,long long y)
{
	int long long ans=0;
	long long s=m/x;
	long long e=n;
	while(s<=e)
	{
		long long mid=(s+e)/2;
		//check if mid amount of students will get ss
		if(mid_students_can_get_ss(n,m,x,y,mid))
		{
			ans=mid;
			//if mid students can get ss then all students below mid can get ss
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
	long long n,m,x,y;
	cin>>n>>m>>x>>y;
	cout<<find_max_students(n,m,x,y)<<endl;
}