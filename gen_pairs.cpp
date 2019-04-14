//generating a random array of pairs having first number less than the second number 
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b)
{
	return a +rand()%(b-a+1);
}

int main(int argc, char* argv[])
{
	
	srand(atoi(argv[1]));	//atoi(s) converts an array of chars to int
	int n=rand(1,4);	//number of pairs
				
	printf("%d\n",n);
	set<int>used;
	for(int i=0;i<n;i++)
	{
		int x=rand(0,7);
		printf("%d ",x);
		for(int j=0;j<1;j++)
		{
			int y;
			do
			{
				y=rand(0,8);
			}while(y<=x);
			printf("%d ",y);
		}
		printf("\n");
	}
} 
