//GENERATING AN NUMBER WITH N DIGITS
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#include <fstream>
ofstream file;      // FILE DECLARATION
typedef long long ll;

int main()
{
    file.open("Test_Cases", ios::out | ios::trunc );
    
    ll digits,test;
    digits=20;      //NUMBER OF DIGITS IN EACH NUMBER
    test=10;        //NUMBER OF TEST Test_Cases
    file<<test<<"\n";
    srand(time(0));
    for(ll i=0;i<test;i++)
    {
        ll a=rand()%9+1;
        file<<a;
        for(ll j=1;j<digits;j++)
        {
            a=rand()%10;
            file<<a;
        }
        file<<"\n";
    }
    file.close();
	return 0;   
}
