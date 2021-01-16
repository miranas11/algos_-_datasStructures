/****************
*Remove consecutive same char 
****************/

#include<iostream>
#include<cstring>
using namespace std;

void removeduplicates(char a[])
{

    if(strlen(a)==0 || strlen(a)==1)
    {
        return;
    }
	
    int i=0,j=1;
	while(j<=strlen(a))		//thats is j<= no. of char in array //if hello than j<=5 //j runs from 0 to 5 and gets the /0 as well
	{
		if(a[i]==a[j])
		{
			j++;
		}
		else
		{
			i++;
			a[i]=a[j];
		}
	}
    return;
}

int main() {
	char a[1000];
	cin.getline(a,1000);
	removeduplicates(a);
	cout<<a;
	
}