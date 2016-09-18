#include <stdio.h>

int main ()
{
    int max, min, count, n, i, j, cynum, cymax = 0;
    while(scanf("%d %d", &i, &j) != EOF)
    {
        if(i>j){max=i; min=j;}
        else {max=j; min=i;}

        for(count=min;count<=max;count++)
        {
            cynum = 1;
            n = count;
            while(n!=1)
            {
                if(n%2!=0) {n=(3*n+1);}
                else {n/=2;}
                cynum++;
            }
            if(cynum > cymax) {cymax = cynum;}
        }
        printf("%d %d %d\n", i, j, cymax);
        cymax = 0;
    }
    return 0;
}
