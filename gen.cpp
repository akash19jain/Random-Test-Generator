//g++ -o gen gen.cpp
//generating a random sequence elements
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b)
{
	return a +rand()%(b-a+1);
}

int main(int argc, char* argv[])
{
	srand(atoi(argv[1]));	//atoi(s) converts an array of chars to int
	int n=rand(2,10);
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",rand(1,5));
	}
	puts("");
} 
