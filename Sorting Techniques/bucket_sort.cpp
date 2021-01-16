/****************
*Bucket Sort
*Sorting Algorithm
*Bucket sort, or bin sort, is a sorting algorithm that works by distributing the elements of an array into a number of buckets. 
*Each bucket is then sorted individually, either using a different sorting algorithm, 
*or by recursively applying the bucket sorting algorithm.
****************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class students{
	public:
		string name;
		int marks;
};

void bucketsort(students ss[],int n)
{   
    //create a array of vector<students> of range marks
	vector<students> v[101];

	for(int i=0;i<n;i++)
	{   

		int m=ss[i].marks;
        //put ss[i] in a vector according to his marks
		v[m].push_back(ss[i]);
	}

	for(int i=100;i>=0;i--)
	{
		// for(auto it:v[i])
        //iterate inside of every vector in array of vectors starting from last vector  
		for(vector<students>::iterator it=v[i].begin();it!=v[i].end();it++)
		{
			cout<<(*it).marks<<" "<<(*it).name<<endl;
		}
	}
	return;
}


int main()
{
	int n;
	cin>>n;
	students ss[n];
	for(int i=0;i<n;i++)
	{
		cin>>ss[i].name>>ss[i].marks;
	}
	bucketsort(ss,n);
	
}





















