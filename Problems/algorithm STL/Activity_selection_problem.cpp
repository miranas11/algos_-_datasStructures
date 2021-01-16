/*You are given n activities (from 0 to n-1) with their start and finish times. Select the maximum number of activities 
that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Input Format
The first line consists of an integer T, the number of test cases. For each test case, the first line consists of an
integer N, the number of activities. Then the next N lines contain two integers m and n, the start and end time of 
each activity.

Constraints
1<=t<=50
1<=n<=10000
1<=A[i]<=100

Output Format
For each test case find the maximum number of activities that you can do.

Sample Input
1 
3
10 20
12 15
20 30

Sample Output
2

Explanation
Person can only do 0th and 2nd activities.
*/



#include <iostream>
#include<algorithm>

using namespace std;

//function to check if we are already doing activity in a particular time
bool check(pair<int,int> arr[],int n,bool timedone[],int i)
{
    for(int x=arr[i].first;x<arr[i].second;x++)
    {
        if(timedone[x]==true)
            return false;
    }

    return true;
}


//comparater used in sort to make the shortest duration activity come first
bool comapre(pair<int,int> a,pair<int,int> b)
{
    return a.first-a.second > b.first-b.second;
}




 

int main() {
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        int n;
        cin>>n;
        pair<int,int> arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first>>arr[i].second;
        }
        cout<<endl;
        sort(arr,arr+n,comapre);
        int count=0;

        //bool to mark the time we have performed activity
        bool timedone[10000]={false};
        for(int i=0;i<n;i++)
        {
            //check if that time is free
            if(check(arr,n,timedone,i))
            {   
                //if time free then mark the time of current activity unfree
                for(int x=arr[i].first;x<arr[i].second;x++)
                {
                    timedone[x]=true;
                }
                count++;
            }
            
        }

        cout<<count<<endl;

        
    }
	

}
