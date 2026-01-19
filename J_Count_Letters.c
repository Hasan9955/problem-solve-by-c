#include <stdio.h>
#include <string.h>

int main()
{

    char a[10000000];

    scanf("%s", &a);

    int len = strlen(a);

    int count[26] = {0};

    for (int i = 0; i < 26; i++)
    {

        for (int j = 0; j < len; j++)
        {
            if (i == a[j] - 'a')
                count[i]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
            printf("%c : %d\n", i + 'a', count[i]);
    }

    return 0;
}