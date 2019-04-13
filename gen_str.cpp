//generating a random string (array of characters)
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b)
{
	return a +rand()%(b-a+1);
}

int main(int argc, char* argv[])
{
	
	srand(atoi(argv[1]));	//atoi(s) converts an array of chars to int
	int n=rand(10,26);	//number of characters
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	{
		printf("%c",'a'+rand(0,25));
	}
	printf("\n");
	
} 
