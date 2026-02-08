// Problem Statement

// You will be given a positive integer N, you need to print a pattern shown below using this N.

// For example: If N=5, the pattern will look like below.

// image

// See the sample test cases for more clarification.

// Input Format

// Input will contain only N.
// Constraints

// 1 <= N <= 9
// Output Format

// Output the pattern.
// Sample Input 0



#include <stdio.h>
int main () {

    int n;

    scanf("%d", &n);

    int space = n - 1;

    for(int i = 1; i <= n; i++){

        for(int j = 0; j < space; j++){
            printf(" ");
        }

        for(int j = i; j > 0; j--){
            printf("%d", j);
        }


        printf("\n");

        space--;
    }


    return 0;
}
