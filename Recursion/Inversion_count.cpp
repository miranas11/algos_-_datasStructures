/****************
*Inversion count
*recursion
*Book -1 Page 181
*find count of all combinations i<j but a[i]>a[j]
****************/


#include<iostream>
using namespace std;

int merge(int a[],int s,int e)
{
    int m=(s+e)/2;
    int i=s;
    int j=m+1;
    int k=s;
    int temp[100];

    int cnt=0;

    while(i<=m && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }  
        else
        {
            temp[k++]=a[j++];
            //page181 book 1
            cnt+=m-i+1;
        }

    }

    while(i<=m)
    {
        temp[k++]=a[i++];
    }

    while(j<=e)
    {
        temp[k++]=a[j++];
    }

    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }

    return cnt; 

}

int inversion_count(int a[],int s,int e)
{
    if(s>=e)
        return 0;

    int m=(s+e)/2;


    //x & y also calculated through merege functions recursively 
    int x=inversion_count(a,s,m);
    int y=inversion_count(a,m+1,e);
    //cross inversions
    int z=merge(a,s,e);

    return x+y+z;


}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<inversion_count(a,0,n-1);
    

}