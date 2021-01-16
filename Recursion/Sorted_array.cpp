/****************
*Check array is sorted
*recursion
****************/

#include<iostream>
#include<algorithm>
using namespace std;

//we divide the array into two parts one containing the first elemnt and other the rest of elementes;
//base case:if the length of array is 0 or 1 it will be sorted;
//recursive case:if before the seperation the first and second elemnt are same and the 2nd sepertaed array is sorted-The array is sorted;
bool is_sorted(int a[],int n)
{
    //Base Case
    if(n==1 || n==0)
        return true;

    //Recursive Case
    if(a[0] <= a[1]  && is_sorted(a+1,n-1))
        return true;

    return false;    
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

    if(is_sorted(a,n))
        cout<<"SORTED";
    else
        cout<<"NOT SORTED";    
}