//GENERATING A STRING WITH LOWERCASE LETTERS
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#include <fstream>
ofstream file;      // FILE DECLARATION
typedef long long ll;

int main()
{
    file.open("Test_Cases", ios::out | ios::trunc );
    
    ll maxsize,test;
    maxsize=20;      //MAXSIZE OF THE STRING
    test=10;        //NUMBER OF TEST CASES
    
    file<<test<<"\n";
    srand(time(0));
    for(ll i=0;i<test;i++)
    {
        ll s=rand()%maxsize+1;
        file<<s<<"\n";   
        
        for(ll j=0;j<s;j++)
        {
            int a=rand()%26+97;
            file<<(char)a;
        }
        file<<"\n";
    }
    file.close();
	return 0;   
}
