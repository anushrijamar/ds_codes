#include <stdio.h>
#include <limits.h>

void dj(int c[7][7], int n, int source) {
    int i, j;
    int d[n], k = 0, flag = 0, sum = 0,v[n];
    for(i=0;i<n;i++)
    v[0]=0;
    d[source] = 0;

    for (i = 0; i < n; i++) {
        if (i != source) {
            d[i] = INT_MAX; 
        }
    }

    v[k] = source;
    k++;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (c[i][j] != 0) {
                flag = 0;
                for (int t = 0; t < k; t++) {
                    if (j == v[t]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    sum = d[i] + c[i][j];
                    if (sum < d[j]) {
                        printf("%d is the sum \n",sum);
                        d[j] = sum;
                    }
                }
            }
        }
            v[k] = i;
            k++;
    }
    
    for (i = 0; i < n; i++)
        printf("%d ", d[i]);
    printf("\n");
}

int main() {
    int c[7][7] = {
        {0,5,6,0,0,0,0},
        {5,0,15,7,8,0,0},
        {6,15,0,2,0,4,0},
        {0,7,2,0,2,9,10},
        {0,8,0,2,0,0,3},
        {0,0,4,9,0,0,8},
        {0,0,0,10,3,8,0}
    };
    dj(c, 7, 0);
    return 0;
}
