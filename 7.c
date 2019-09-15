#include <stdio.h>
int main()
{
    int n;
    printf("输入整数\n");
    scanf ("%d",&n);

    if (n%4!=0)
    {
        printf ("平年\n");

    }
    else
    {
        if(n%100!=0)
        {
            printf("闰年\n");

        }
        else
        {
            if(n%400==0)
            {
                printf("闰年\n");

            }
            else
            {
                printf ("平年\n");
            }
        }
    }
    return 0;
}
