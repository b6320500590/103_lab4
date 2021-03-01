#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, n;
    char t[99][50];

    scanf("%d", &n);
    fflush(stdin);

    int a[n];

    for(i=0; i<n; i++)
    {
        a[i]=1;
        printf("\n");
        scanf("%s", t[i]);

        for(j=0; j<strlen(t[i]); j++)
        {
            switch(t[i][j])
            {
                case 'A': printf("1");
                break;
                case 'B': printf("2");
                break;
                case 'C': printf("3");
                break;
                case 'D': printf("4");
                break;
                case 'E': printf("5");
                break;
            }
        }
    }



    return 0;
}
