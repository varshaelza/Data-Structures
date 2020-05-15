/*Given a sequence 𝑎1, . . . , 𝑎𝑛 of integers and an integer 𝑚 ≤ 𝑛, find the maximum among {𝑎𝑖, . . . , 𝑎𝑖+𝑚−1} for
every 1 ≤ 𝑖 ≤ 𝑛 − 𝑚 + 1. A naive 𝑂(𝑛𝑚) algorithm for solving this problem scans each window separately.
Your goal is to design an 𝑂(𝑛) algorithm.*/


#include<stdio.h>
int big=-1,b=-1,a[100000],m;

void main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d ",&a[i]); 
}
scanf("%d",&m);

for(i=0;i<n-m+1;i++)
{	
	if(i==0||b==i-1)
	{
	big=a[i];
	b=i;
	for(j=1;j<m;j++)
	{
		if(a[i+j]>=big)
		{big=a[i+j];
		b=i+j;}  
	}
	}
	else
	{	
		if(a[i+m-1]>=big)
			{big=a[i+m-1];
			b=i+m-1;}
	}
	printf("%d ",big);
	  	
}
}
