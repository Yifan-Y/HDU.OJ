//Given a sequence a[1],a[2],a[3]......a[n].
//Your job is to calculate the max sum of a sub-sequence. 
//For example, given (6,-1,5,4,-7), the max sum in this sequence is 6 + (-1) + 5 + 4 = 14.
//Yifan Yang

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);
    int i, N, a[1000001];
    for (int t = 0; t < T; t++) {
        scanf("%d", &N);
        for (i = 0; i < N; i++)
            scanf("%d", &a[i]);
        int maxsum = a[0];
        int sum = 0, start = 0, end = 0;
        int tmp = 0;
        for (i = 0; i < N; i++){
            sum += a[i];
            if (sum > maxsum) {
                maxsum = sum;
                start = tmp;
                end = i;
            }
            if (sum < 0) {
                sum = 0;
                tmp = i + 1;
            }
        }
        printf("Case %d:\n", t+1);
        printf("%d %d %d\n", maxsum, start + 1, end + 1);
        if (t < T - 1)
            printf("\n");
    }
    return 0;
}
