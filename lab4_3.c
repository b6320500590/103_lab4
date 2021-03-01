#include<stdio.h>

int main()
{
    int i, a=0;
    char t[200],c[200];

    scanf("%s", t);

    for(i=0; i<200; i++)
    {
        if(t[i] != t[i+1])
        {
            c[a]=t[i];
            a++;
        }
    }

    printf("%s", c);

    return 0;
}
