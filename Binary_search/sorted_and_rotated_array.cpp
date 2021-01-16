/****************
*Help Rahul
*https://hack.codingblocks.com/app/practice/6/1044/problem
*Book 1 Page 98
*Binary Search in sorted and rotated array
****************/

#include<iostream>

using namespace std;

int find_key(int *a,int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int m=(s+e)/2;
        if(a[m]==key){
            return m;
        }
        //if mid lies on the left side of the rotated array {4, 5, 6, 7, 1, 2, 3} ie lies before 1
        else if(a[s]<=a[m]){
            //if mid is element 6 and key lies between 4 and 6
            if(key>=a[s]  && key<=a[m]){
                e=m-1;
            }
            //if key lies on right side of 6
            else
            {
                s=m+1;
            }  
        }
        //if mid lies on the right side of the rotated array {4, 5, 6, 7, 1, 2, 3} ie lies after 7
        else if(a[e]>=a[m])
        {
            //if the mid point is element 2 and it lies between 2 and 7
            if(key<=a[e]  && key>=a[m]){
                s=m+1;
            }
            //if it lies before mid point
            else
            {
                e=m-1;
            }       
        }   
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;

    cout<<find_key(a,n,key)<<endl;
}