#include<stdio.h>
char arr[100000];
int top=-1; 
void push(char k)
{
	if(top!=99999)
	{
		
	top++;
	arr[top]=k;
	}
}
void pop()
{
	if(top!=-1)
	
	top--;
}
void main()
{
	char S[100000];
	int i=0,d=-1,e=-1,t=-1;
	gets(S);
	while(S[i]!='\0')
	{
		if(S[i]=='{'||S[i]=='('||S[i]=='[')
		{
			push(S[i]);
			if(e==-1)
			{e=i;
			t=top;}
			
			
		}
		else if(S[i]==']')
		{
			if(arr[top]=='[')
			{
				if(t==top)
				{e=-1;
				t=-1;}
				pop();
			}
			else
			{
				push(S[i]);
				if(d==-1)
				d=i;
			}
			
		}
		else if(S[i]==')')
		{
			if(arr[top]=='(')
			{	if(t==top)
				{e=-1;t=-1;}
				pop();
			}
			else
			{
				push(S[i]);
				if(d==-1)
				d=i;
			}
			
		}
		else if(S[i]=='}')
		{
			if(arr[top]=='{')
			{	if(t==top)
				{e=-1;t=-1;}
				pop();
			}
			else
			{
				push(S[i]);
				if(d==-1)
				d=i;
			}
			
		}
		i++;

	}
if(top==-1)
{printf("Success");}
else if(d!=-1)
{
printf("%d",d+1);
}
else
{
printf("%d",e+1);
}

}