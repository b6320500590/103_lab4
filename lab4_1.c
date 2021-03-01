#include<stdio.h>

int main()
{
    int i, j, n, min=1000, max=0, a, b;

    scanf("%d", &n);

    int num[n], t[3], sum[n-2];

    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &t[j]);

        num[i] = t[0]*4 + t[1]*2 + t[2]*1;
    }

    for(i=0; i<n-2; i++)
        sum[i]=num[i]+num[i+1]+num[i+2];

    max=sum[0];
    min=sum[0];

     for(i=0; i<n-2; i++)
    {
        if(max<=sum[i])
        {
            max=sum[i];
            a=i+1;
        }
        if(min>=sum[i])
        {
            min=sum[i];
            b=i+1;
        }
    }

    printf("%d %d",a ,b );

    return 0;
}


