#include <stdio.h>
#include <string.h>
int main () {

    char s[1000], t[1000];


    gets(s);
    fgets(t, 100, stdin);
    // scanf("%s", t);

    // split the string by giving null value
    s[4]='\0';

    // printf("%d %d\n", sizeof(s), sizeof(t));
    printf("%d %d\n", strlen(s), strlen(t));

    printf("%s %s", s, t);
    return 0;
}