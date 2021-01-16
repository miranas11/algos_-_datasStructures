/****************
*Largest char array
****************/

#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char current[1000],largest[1000];
	int n,l=0;
    cout<<"Enter the total strings you want to compare : ";
    cin>>n;
    cin.get();                  // its get the \n else if we dont use this the first array in i=0 will be \n
    for(int i=0;i<n;i++)
    {
        cin.getline(current,1000);
        if(strlen(current) > l)
        {
            strcpy(largest,current);
            l=strlen(largest);
        }

    }
    cout<<"Largest string is : '"<<largest<<"' with "<<l<<" char"<<endl; 
	
}