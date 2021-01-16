/****************
*DNF SORT
*used to sort arrays of 0 ,1 ans 2 in one loop
****************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void dnf_sort(int *a,int n)
{
    int lo=0,mid=0,hi=n-1;
    while(mid<=hi)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[lo]);
            mid++;
            lo++;
        }
        else if (a[mid]==1)
        {
            mid++;
        }
        else if (a[mid]==2)
        {
            swap(a[mid],a[hi]);
            hi--;
        }
    }
    
}

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    dnf_sort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    delete a;

    return 0;
}


















