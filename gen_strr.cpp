//generating a random string (distinct array of characters)
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b)
{
	return a +rand()%(b-a+1);
}

int main(int argc, char* argv[])
{
	
	srand(atoi(argv[1]));	//atoi(s) converts an array of chars to int
	int n=rand(1,25);	//number of characters
				//make sure it doesn;t exceed 25
	printf("%d\n",n);
	set<int>used;
	for(int i=0;i<n;i++)
	{
		int x;
		do
		{
			x=rand(0,25);
		}while(used.count(x));
		printf("%c",'a'+x);
		used.insert(x);
	}

	printf("\n");
	
} 
