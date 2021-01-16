/****************
*Aggresive cow
*https://www.spoj.com/problems/AGGRCOW/
*
*In this problem the search space will be from x cordinate of first stall to the diff of last and first stall
 because if the stalls are{1,2,8,4,9} the min dist b/w two cows can be 0 and max can be 9-1=8
 so the search space will be from 0 to 8;
****************/

#include<iostream>
#include<algorithm>

using namespace std;

bool canplacecows(int a[],int n,int c,int min_sep)
{
	
	int cow_pos=0;
	int available_pos;

	//place the first cow at a[0];
	cow_pos=a[0];
	//the next avaliable position will be current cow position + min distance
	available_pos=cow_pos + min_sep;
	c--;
	for(int i=1;i<n;i++)
	{
		//if the positionn of stall is greater or equal to next available pos
		if(a[i]>=available_pos)
		{
			cow_pos=a[i];
			available_pos=cow_pos + min_sep;
			c--;
			//if all cows have been placed
			if(c==0)
				return true;
		}
			
	}
	return false;
	
}

int find_largest_min_dist(int a[],int n,int c)
{
	
	int s=0;
	int e=a[n-1]-a[0];
	int ans=0;
	int m;
	while(s<=e)
	{
		m=(s+e)/2;
		//if we can place all cows with min dist m but dont neccesary is the largest distance
		if(canplacecows(a,n,c,m) == true)
		{
			ans=m;
			//disacrd the left side
			s=m+1;
		}
		//if cant place all cows in min dist m
		else
		{
			//discard the right side
			e=m-1;
		}
	}
	return ans;
}

int main()
{
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		int n,c;
		cin>>n>>c;
		int *a=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int ans=find_largest_min_dist(a,n,c);
		cout<<ans<<endl;
	}
}