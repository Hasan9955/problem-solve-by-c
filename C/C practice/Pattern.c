// #include <stdio.h>
// int main()
// {

//     int n;

//     scanf("%d", &n);

//     int s = n - 1;
//     int h = 1;
//     int s2 = n - 2;
//     int l = 0;
//     if (n > 1)
//     {
//         l = 3;
//     }

//     for (int i = 0; i < n; i++)
//     {
        

//         for (int j = 0; j < s; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 0; j < h; j++)
//         {
//             printf("#");
//         }
//         printf("\n");

//         if ((n * 2) - 1 < l)
//         {
//             break;
//         }

//         for (int j = 0; j < s2; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 0; j < l; j++)
//         {
//             printf("-");
//         }
//         printf("\n");

        

//         s -= 2;
//         h += 4;

        
//         s2 -= 2;
//         l += 4;

//         if ((n * 2) - 1 < h)
//         {
//             break;
//         }

//     }


//     return 0;
// }








// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int spaces = n - 1;
//     int symbols = 1;
//     char ch = '#';

//     // upper half (including middle)
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < spaces; j++)
//             printf(" ");

//         for (int j = 0; j < symbols; j++)
//             printf("%c", ch);

//         printf("\n");

//         spaces--;
//         symbols += 2;
//         ch = (ch == '#') ? '-' : '#';
//     }

//     spaces = 1;
//     symbols -= 4;

//     // lower half
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < spaces; j++)
//             printf(" ");

//         for (int j = 0; j < symbols; j++)
//             printf("%c", ch);

//         printf("\n");

//         spaces++;
//         symbols -= 2;
//         ch = (ch == '#') ? '-' : '#';
//     }

//     return 0;
// }




#include <stdio.h>
int main () {

    int n;
    scanf("%d", &n);

    int space = n - 1;
    int symbol = 1;
    int ch = '#';


    for(int i = 0; i < n; i++){

        for(int j = 0; j < space; j++){
            printf(" ");
        }

        for(int j = 0; j < symbol; j++){
            printf("%c", ch);
        }

        printf("\n");

        space--;
        symbol += 2;
        ch = (ch == '#') ? '-' : '#';
    }


    symbol -= 4;
    space = 1;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < space; j++){
            printf(" ");
        }

        for(int j = 0; j < symbol; j++){
            printf("%c", ch);
        }

        printf("\n");

        space++;
        symbol -= 2;
        ch = (ch == '#') ? '-' : '#';

    }


    return 0;
}