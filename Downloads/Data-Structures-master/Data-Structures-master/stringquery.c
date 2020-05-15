#include<stdio.h>
#include<string.h>
int main()
{
    int n,q;
    char *input[1000];
    char *query[1000];
    int a[1000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        input[i]=malloc((sizeof(char)*1000));
        scanf("%s",input[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
         query[i]=malloc((sizeof(char)*1000));
        scanf("%s",query[i]);
        for(j=0;j<n;j++)
        {
            if(strcmp(query[i],input[j])==0)
            {
                a[i]++;
            }
        }
    }
    for(i=0;i<q;i++)
    printf("%d\n",a[i]);
    return 0;
}
