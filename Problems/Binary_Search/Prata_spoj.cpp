/****************
*Parathas Problem
*https://www.spoj.com/problems/PRATA/
****************/


#include <iostream>
#include<algorithm>

using namespace std;

bool all_parathas_cooked_in_time(int a[],int p,int c,int time_limit)
{
	int parathasmade=0;
	for(int i=0;i<c;i++)
	{
		int time=time_limit;
		int multiplier=1;
		while(time >= multiplier * a[i])
		{	
			parathasmade++;
			time-=multiplier*a[i];
			multiplier++;

			if(parathasmade>=p)
				return true;
			
		}
	}

	return false;
		
}



int find_min_time(int a[],int p,int c,int max_time)
{
	int s=0;
	int e=max_time;
	int ans=0;
	while(s<=e)
	{
		int m=(s+e)/2;

		if(all_parathas_cooked_in_time(a,p,c,m))
		{
			e=m-1;
			ans=m;
		}
		else
		{
			s=m+1;
		}
	}
	return ans;
}
 

int main() {
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		int p,c;
		cin>>p>>c;
		int *a=new int[c];
		for(int i=0;i<c;i++)
		{
			cin>>a[i];
		}

		int max_time=0;
		int multiplier=1;
		for(int i=1;i<=p;i++)
		{
			max_time+=a[c-1] * multiplier;
			multiplier++;
			
		}
		cout<<find_min_time(a,p,c,max_time)<<endl;


	}
	

}
