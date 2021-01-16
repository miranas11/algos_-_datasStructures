/****************
*Merge Sort
*recursion
*Book -1 Page 175
****************/
#include<iostream>
using namespace std;

void merge(int a[],int s,int e)
{
    int m=(s+e)/2;
    int i=s;
    int j=m+1;
    int k=s;
    int temp[100];


    //i and j the two pointers of two arrays
    while(i<=m && j<=e)
    {   
        //the smaller element among the two pointers will be placed at temp[k]
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];  
    }

    //if all elements from i pointers had been placed before placing all elements from j
    while(j<=e)
        temp[k++]=a[j++];

    //if all elements from j placed before j
    while(i<=m)
        temp[k++]=a[i++];    

    //copying temp to a from s to e
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }
}

void merge_sort(int a[],int s,int e)
{
    //base case
    if(s>=e)
        return;

    int m=(s+e)/2;    

    //breaks array in two along mid
    merge_sort(a,s,m);
    merge_sort(a,m+1,e);

    //merges array
    merge(a,s,e);    
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
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}