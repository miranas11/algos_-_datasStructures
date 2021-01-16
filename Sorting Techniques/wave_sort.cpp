/****************
*Wave Sort
*sort array in wave form 
*first bigger element,smaller,bigger,smaller,bigger and so on...
****************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void wave_sort(int *a,int n)
{   
    //we only iterate on pos where we need bigger element
    for(int i=0;i<n;i+=2)
    {   
        //if current element smaller than previous than swap them cause current should be bigger
        if(i!=0 and a[i]<a[i-1])
        {
            swap(a[i],a[i-1]);
        }
        //if current element smaller than next then swap them cause current should be bigger
        if(i!=n-1 and a[i]<a[i+1])
        {
            swap(a[i],a[i+1]);
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

    wave_sort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    delete a;

    return 0;
}


















