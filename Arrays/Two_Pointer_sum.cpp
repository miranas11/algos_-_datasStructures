/****************
*Two Pointer Sum
*Efficient 
*Find pair of element in array whose sum is equal to given sum
*Works in sorted array
****************/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,s;
  
    cout<<"Enter the number of elements to be put in array : ";
    cin>>n;
    cout<<"Enter the sum: ";
    cin>>s;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);


    int i=0;
    int j=sizeof(a)/sizeof(int) - 1;
    int current_sum=0;

    while(i<j)
    {
        current_sum=a[i] + a[j];
        if (current_sum > s)
        {
            j--;
        }
        else if(current_sum<s)
        {
            i++;
        }
        else if(current_sum == s)
        {
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }

    return 0;
}

