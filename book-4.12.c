#include <stdio.h>
int main()
{
    int a, b, c;
    for( a=1; a<=3; a++)
    {
        for (b=1; b<=3; b++)
        {
            for (c=1; c<=3 && b!=a; c++)
            {
                if(b!=c && a!=c)
                {
                    printf ("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}


/*

1, 1, 1
1, 1, 2
1, 1, 3
1, 2, 1
1, 2, 2
1, 2, 3 @
1, 3, 1
1, 3, 2 @
1, 3, 3
2, 1, 1
2, 1, 2
2, 1, 3
2, 2, 1
2, 2, 2
2, 2, 3
2, 3, 1 @
2, 3, 2
2, 3, 3
3, 1, 1
3, 1, 2
3, 1, 3
3, 2, 1 @
3, 2, 2
3, 2, 3
3, 3, 1
3, 3, 2
3, 3, 3
*/
