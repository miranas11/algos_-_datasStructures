/****************
*Selection Sort
*Algo to sort array in increasing or decreasing order by taking larger or smaller element at end
****************/

#include<iostream>
using namespace std;

int bubble_sort(int a[],int n);


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
    bubble_sort(a,n);
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


int bubble_sort(int a[],int n)
{
    for(int itr=1;itr<=n-1;itr++)  //if n=5 then we need to iterate 4 times
    {
        for(int j=0;j<=n-1-itr;j++)//for each itr the last element is sorted,the next unsorted array we need to sort till n-1-itr
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }
}