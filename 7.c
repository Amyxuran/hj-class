#include <stdio.h>
int main()
{
    int n;
    printf("��������\n");
    scanf ("%d",&n);

    if (n%4!=0)
    {
        printf ("ƽ��\n");

    }
    else
    {
        if(n%100!=0)
        {
            printf("����\n");

        }
        else
        {
            if(n%400==0)
            {
                printf("����\n");

            }
            else
            {
                printf ("ƽ��\n");
            }
        }
    }
    return 0;
}
