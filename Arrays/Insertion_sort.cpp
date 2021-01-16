/****************
*Insertion Sort
*Insert current element in right pos
****************/

#include<iostream>
using namespace std;

int insertion_sort(int a[],int n);


int main()
{
    int n,key;
    cout<<"Enter the number of elements to be put in array : ";
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
        if (i!=n-1)
        {
            cout<<" ,";
        }
        
    }
    
    return 0;
}


int insertion_sort(int a[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int j=i-1;
        int e=a[i];
        while (j>=0 && a[j]>e)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=e;
    }
}