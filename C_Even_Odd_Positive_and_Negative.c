#include <stdio.h>
int main()
{

    int n;
    int a;

    scanf("%d ", &n);
  
    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d ", &a);

        if(a % 2 == 0) {
            even++;
        }
        if(a % 2 == 1 || a % 2 == -1) {
            odd++;
        }
        if(a > 0) {
            pos++;
        }
        if(a < 0) {
            neg++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);


    return 0;
}