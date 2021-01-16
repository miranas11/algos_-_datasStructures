/****************
*Max Sub arrays sum #3
*KADANE's ALGO
*only one loop
****************/

#include<iostream>
using namespace std;

int main()
{
    int n,current_sum=0,max_sum=0;
    cout<<"Enter the number of elements to be put in array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i =0;i<n;i++)
    {
        current_sum+=a[i];
        if(current_sum<0)
        {
            current_sum=0;
        }
        if(current_sum>max_sum)                 // or use max inbult function max_sum=max(current_sum,max_sum);
        {
            max_sum=current_sum;
        }
    }

    cout<<"Max Sum is: "<<max_sum<<endl;
    
    return 0;
}

