//GENERATING AN ARRAY OF N NUMBERS
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#include <fstream>
ofstream file;      // FILE DECLARATION
typedef long long ll;

int main()
{
    file.open("Test_Cases", ios::out | ios::trunc );
    
    ll maxrange,maxsize,test;
    maxrange=10;    //MAXIMUM POSSIBLE VALUE OF THE ELEMENT
    maxsize=10;     //MAXIMUM SIZE OF THE ARRAY
    test=10;        //NUMBER OF TEST Test_Cases
    file<<test<<"\n";
    srand(time(0));
    for(ll i=0;i<test;i++)
    {
        ll n=rand()%maxsize+1;
        file<<n<<"\n";
        for(ll j=0;j<n;j++)
        {
            ll a=rand()%maxrange+1;
            file<<a<<" ";
        }
        file<<"\n";
    }
    file.close();
	return 0;   
}
