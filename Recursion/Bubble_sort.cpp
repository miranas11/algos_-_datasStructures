/****************
*Bubble Sort
*Book 1 -Page 173
****************/
#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    if(n==1)
        return;

    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
            swap(a[j],a[j+1]);    
    }

    bubble_sort(a,n-1);
}

void complete_bubble_sort(int a[],int n,int j)
{
    if(n==1)
        return;

    if(j==n-1)
        return complete_bubble_sort(a,n-1,0);    

    if(a[j]>a[j+1]) 
        swap(a[j],a[j+1]);
 
    complete_bubble_sort(a,n,j+1);        
}

int main()
{
    int a[]={5,4,3,2,1};
    int n=5;
    complete_bubble_sort(a,n,0);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}