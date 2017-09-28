#include <iostream>
using namespace std;

int main()
{
    long a;
    int pol = 1;
    char string [2000];
    gets(string);
    a = strlen(string) ;
    
    if(string[0] == 0)
    {
        cout<< "1"<<'\n';
    }
    else
    {
    for( long i = 0 ; i != (a/2); i++ )
    {
        if( string[i] == string[a-i-1])
        {
            pol = pol*1 ;
        }
        else
        {
            pol = pol*0;
        }
    }
        if (pol == 1)
        {
            cout<<"1"<<'\n';
        }
        else
        {
            cout<<"0"<<'\n';
        }
    }
    return 0;
}
