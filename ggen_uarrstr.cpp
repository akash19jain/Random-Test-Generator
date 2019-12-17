//GENERATING AN ARRAY OF  STRING WITH UPPERCASE LETTERS
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#include <fstream>
ofstream file;      // FILE DECLARATION
typedef long long ll;

int main()
{
    file.open("Test_Cases", ios::out | ios::trunc );
    
    ll maxelements,maxsize,test;
    maxelements=10;  //MAXIMUM SIZE OF THE ARRAY 
    maxsize=20;      //MAXSIZE OF THE STRING
    test=10;        //NUMBER OF TEST CASES
    
    file<<test<<"\n";
    srand(time(0));
    for(ll i=0;i<test;i++)
    {
        ll n=rand()%maxelements+1;
        file<<n<<"\n";
        for(int ii=0;ii<n;ii++)
        {
            ll s=rand()%maxsize+1;
            for(ll j=0;j<s;j++)
            {
                int a=rand()%26+65;
                file<<(char)a;
            }
            file<<" ";
        }
        file<<"\n";
    }
    file.close();
	return 0;   
}
