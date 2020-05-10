#include<stdio.h>
int arr[1000000],top=-1;
void push(int d)
{	arr[++top]=d;
	
	
}
void pop()
{
	
		top--;

}


void main()
{	char s[5];
	int i,q,d,big,j;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%s %d",s,&d);
		if(s[3]=='h')
		{
			push(d);
		}
		else if(s[2]=='p')
		{
			pop();
		}
		else 
		{
			 big=arr[top];
			for(j=top-1;j>-1;j--)
			{
			if(arr[j]>big)
				big=arr[j];	
			}
			printf("%d\n",big);
		}
		
	}
	
}