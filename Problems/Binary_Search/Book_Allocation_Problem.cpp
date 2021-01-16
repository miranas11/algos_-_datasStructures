/****************
*Book Allocation Problem
*https://hack.codingblocks.com/app/practice/1/1365/problem
*
*In this problem the search space will be from the biggest book to the sum of all book
because the max number of pages assigned to a student will be minimum when its the largest book
and the  max no. of pages assigned will be max when he will read all book
e.g {10,20,30,40}   start - 40 			end - 100;
 so the search space will be from 40 to 100
****************/

#include<iostream>
#include<algorithm>

using namespace std;

bool allbookscanberead(int a[],int b,int s,int max_pages)
{
	int total_pages=0;
	int students_used=1;

	for(int i=0;i<b;i++)
	{
		if(total_pages + a[i] >max_pages)
		{
			students_used++;
			total_pages=a[i];
			if(students_used>s)
				return false;

		}
		else
		{
			total_pages+=a[i];
		}
		
	}
	return true;
}

int find_max_pages(int a[],int b,int s,int total_pages)
{

	int start=a[b-1];
	int e=total_pages;
	int ans=0;
	while(start<=e)
	{
		int m=(start+e)/2;

		//if the max pages a person can read is m and still s students were able to complete all books;
		if(allbookscanberead(a,b,s,m)==true)
		{
			//if max pages a student can read is m and still the could complete all books so if the max pages is greater than m
			//they still will be able to complete all book -so discard the right side
			e=m-1;
			ans=m;
		}
		//if the max pages a person can read is m and s students were not able to complete all books
		else
		{
			//if the max pages a person can read is m and s students were not able to complete all books so for 
			//all max pages less than m s students will not be able to complete alll books
			//so discard left side
			start=m+1;
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
		int b,s;
		cin>>b>>s;
		int totalpages=0;
		int *a=new int[b];
		for(int i=0;i<b;i++)
		{
			cin>>a[i];
			totalpages+=a[i];
		}
		int ans=find_max_pages(a,b,s,totalpages);
		
		cout<<ans<<endl;
	}
}