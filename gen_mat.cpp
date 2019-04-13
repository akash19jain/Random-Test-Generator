//generating a random matrix
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b)
{
	return a +rand()%(b-a+1);
}

int main(int argc, char* argv[])
{
	srand(atoi(argv[1]));	//atoi(s) converts an array of chars to int
	int r=rand(2,10);
	int c=rand(2,10);
	printf("%d %d\n",r,c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",rand(1,10));
		}
		printf("\n");
	}
	
} 
