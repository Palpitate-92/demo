#include<bits/stdc++.h>
using namespace std;
const int N=7;
int a[N];
int main()
{
	//srand((unsigned)time(NULL));
	for(int i=1;i<N;i++)
		a[i]=rand()%N;
	for(int i=N-1;i>0;i--)
		printf("%d\n",a[i]);
	puts("");
	return 0;
}