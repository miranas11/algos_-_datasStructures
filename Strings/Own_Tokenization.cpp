/****************
*TOKENIZATION 
*STRTOK()
****************/

#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char *str,char delim)
{

    // initialized only one time 
    static char *input = NULL;

    if(str!=NULL)
    {
        input==str;
        
    }

    char *output=new char[strlen(input) +1];          //output contains the token //+1 to contain the \0
    

    //base case  -- after final token has been extracted
    if(input==NULL)
    {
        return NULL;
    }

    
    int i=0;
    for( ;input[i]!='\0';i++)
    {   
        if(input[i]!= delim)
        {
            output[i]=input[i];
        }
        else
        {
            output[i]='\0';
            input=input + i + 1;
            return output;
        }
    }

    //when at last token and there is no delim after that
    output[i]='\0';
    input==NULL;
    return output;
}

int main()
{
    char s[100]="Today, is a, rainy day";

    char *ptr = mystrtok(s,' ');
    cout<<ptr<<endl;
    
    while(ptr!=NULL)
    {
        ptr=mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }

    return 0;
}


