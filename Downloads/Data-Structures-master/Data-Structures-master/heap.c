#include<stdio.h>

int n,a[100000],c=0,b[100000],j=0,t,k;

void siftdown(int i)
{if((a[2*i+2]>=a[2*i+1]||a[2*i+2]==0)&&a[2*i+1]<a[i])
{t=a[2*i+1];
a[2*i+1]=a[i];
a[i]=t;
c++;
b[j++]=i;
b[j++]=2*i+1;
    if(2*i+1<=n/2-1)
    siftdown(2*i+1);
}
else if((a[2*i+2]<a[2*i+1]&&a[2*i+2]!=0)&&a[2*i+2]<a[i])
{t=a[2*i+2];
a[2*i+2]=a[i];
a[i]=t; 
c++;
b[j++]=i;
b[j++]=2*i+2;
    if(2*i+2<n/2-1)
    siftdown(2*i+2);
}

}
void main()
{
scanf("%d\n",&n);
for(k=0;k<n;k++)
{scanf("%d",&a[k]);}


for(k=((n/2)-1);k>=0;k--)
{
siftdown(k);
}

printf("%d\n",c);
for(k=0;k<j;k=k+2)
{
printf("%d %d \n",b[k],b[k+1]);}
}