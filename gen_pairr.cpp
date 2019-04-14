//generating a random array of pairs having distinct values 
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
		for(int j=0;j<2;j++)
		{
			int x;
			do
			{	
				x=rand(0,8);	//difference should be greater than 2*n
			}while(used.count(x));
			printf("%d ",x);
			used.insert(x);
		}
		printf("\n");
	}
} 
