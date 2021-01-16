/****************
*Counting Sort
****************/

#include<iostream>
#include<algorithm>
using namespace std;

void countingsort(int a[],int n,int maxx)
{
    int freq[maxx]={0};
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }

    int j=0;
    for(int i=0;i<=maxx;i++)
    {
        while(freq[i]!=0)
        {
            freq[i]--;
            a[j]=i;
            j++;
        }
    }

    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxx=max(maxx,a[i]);
    }
    countingsort(a,n,maxx);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}