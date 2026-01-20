#include <stdio.h>
#include <string.h>

int main()
{

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        char a[100000];

        scanf("%s", &a);

        int len = strlen(a);

        int digit = 0;
        int capitalLetter = 0;
        int smallLetter = 0;

        for (int j = 0; j < len; j++)
        { 
            if ('0' <= a[j] && a[j] <= '9')
            {
                digit++;
            }
            else if ('A' <= a[j] && a[j] <= 'Z')
            {
                capitalLetter++;
            }
            else if ('a' <= a[j] && a[j] <= 'z')
            {
                smallLetter++;
            }
            
        }

        printf("%d %d %d\n", capitalLetter, smallLetter, digit);
    }
    return 0;
}