#include <stdio.h>
int main() 
{
    // int rahim;
    // int hasan;
    // char c;
    // float f;
    // printf("Enter a First number: ");
    // scanf("%d", &rahim);
    // printf("Enter a second number: ");
    // scanf("%d", &hasan);
    // printf("Enter your name: ");
    // scanf(" %c", &c);
    // printf("Enter a float number: ");
    // scanf("%f", &f);
    // printf("First number: %d, Second number: %d\n", rahim, hasan);
    // printf("Your name: %c\n", c);
    // printf("Float number: %0.1f\n", f);

    // Take input with parcent 10% 20% answer 10% 20%
    // int a, b;
    // char c;
    // printf("Enter numbers with parcent: ");
    // scanf("%d%c %d%c", &a,&c, &b,&c);
    // printf("Here is your answer: \t");
    // printf("%d%c %d%c", a,c, b,c);

    int a,b;
    printf("Enter numbers with parcent: ");
    scanf("%d%% %d%%",&a ,&b);
    printf("Here is your answer: \t");
    printf("%d%% %d%%", a, b);

    return 0;
}