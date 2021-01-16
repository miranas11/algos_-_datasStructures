/****************
*Quick Sort
*recursion
*Book -1 Page 183
*avg case -- O(nlogN)
*worst case -- O(N^2)
****************/


#include<iostream>
using namespace std;

int partition(int a[],int s,int e)
{
    //i pointer represent the ending of smaller elements than p 
    //it is at -1 or s-1 at start
    int i=s-1;
    //j represent the elements till will we have checked if its greater or less than p
    int j=s;
    
    //pivot or p is usually the last or first element
    int pivot=a[e];

    //loop from j to e-1 not e cause eth element is pivot
    for(;j<=e-1;j++)
    {
        //if element less than p then expand the value of i and place at i
        if(a[j]<=pivot)
        {
            i=i+1;
            swap(a[i],a[j]);
        }
        //else
        //expand j which automatically happens
    }
    //swap the pivot and place it in middle of the two sides
    swap(a[i+1],a[e]);

    //return the pos of pivot element
    return i+1;
}

void quick_sort(int a[],int s,int e)
{
    //base case
    if(s>=e)
        return;

    //find the position of partition and divides the array into elemnst less than p on left side and elements greater on right side
    int p=partition(a,s,e);

    //quicksort on elements on left side of p
    quick_sort(a,s,p-1);
    //quick sort on elements on right side of p
    quick_sort(a,p+1,e);
    return;    
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
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}