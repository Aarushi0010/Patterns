// ____*____ 
// ___***___ 
// __*****__ 

#include<iostream>
using namespace std ;
int main()
{
    int n ,i , j ;
    cin >> n;

    for(i=0;i<=n;i++)
    {
        //space
        for(j=0;j<n-i-1;j++)
        {
            cout << " ";
        }

        //star
        for(j=0;j<2*i+1;j++)
        {
            cout << "*";
        }

        //space
        for(j=0;j<n-i-1;j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0 ;
}