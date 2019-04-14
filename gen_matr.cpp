//generating a random matrix with distinct elements
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b)
{
	return a +rand()%(b-a+1);
}

int main(int argc, char* argv[])
{
	srand(atoi(argv[1]));	//atoi(s) converts an array of chars to int
	int r=rand(2,4);
	int c=rand(2,4);
	printf("%d %d\n",r,c);
	set<int>used;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			int x;
			do
			{	
				x=rand(0,15);	//difference should be greater than max (r)* max (c)
			}while(used.count(x));
			printf("%d ",x);
			used.insert(x);
		}
		printf("\n");
	}
	
} 
