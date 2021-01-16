/****************
*Selection Sort
*Algo to sort array in increasing or decreasing order
****************/

#include<iostream>
using namespace std;

int selection_sort(int a[],int n);


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
    selection_sort(a,n);
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


int selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++) // less than n-1 because when the elemnts till n-2 are sorted the last element n-1 will always be sorted
    {
        int min_index=i;
        for(int j=i;j<=n-1;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);
    }
}