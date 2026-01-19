#include <stdio.h>
int main()
{

    char str1[100];
    char str2[100];

    scanf("%s %s", str1, str2);

    int i = 1;

    while (i)
    {
 
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            printf("A and B are same");
            break;
        }
        else if (str1[i] == '\0')
        { 
            printf("A is smaller");
            break;
        }
        else if (str2[i] == '\0')
        {
            printf("B is smaller");
            break;
        }

        if(str1[i] == str2[i]){
            i ++;
        }
        else if(str1[i] < str2[i]){ 
            printf("A is smaller");
            break;
        }
        else{
            printf("B is smaller");
            break;
        }


    }

    return 0;
}