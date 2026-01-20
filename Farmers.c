#include <stdio.h>
int main()
{

    int a;

    scanf("%d", &a);

    int outputArr[a + 1];

    for (int i = 0; i < a; i++)
    { 
        int m1, m2, d;

        scanf("%d %d %d", &m1, &m2, &d);
 

        int work = m1 * d;
        int newDays = work / (m1 + m2);

        int fewerDay = d - newDays;
 
        
        outputArr[i] = fewerDay;
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d\n", outputArr[i]);
    }

    return 0;
}