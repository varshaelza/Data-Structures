#include<stdio.h>     
struct tree
{
struct tree *child[10];
int no;
int c;
};

int height(struct tree *t)
{int d=0;
	for(int i=0;i<t->c;i++)
		{
			if(height(t->child[i])>d)
			d= height(t->child[i]);
			
		}
		return d+1;
}
void main()
{	
	struct tree *t[100000];
	int n,a[100000],j,k,i,h;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(k=0;k<n;k++)	
		{
			t[k]->no=k;
			j=0;
			for(i=0;i<n;i++)
			{
				if(a[i]==k)
				t[k]->child[j++]=t[i];
			}
			t[k]->c=j;
		}

		for(j=0;j<n;j++)
		{
			if(a[j]==-1)
			{
			h=height(t[j]);	
			}
		}	
		printf("%d",h);
}     