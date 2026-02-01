// Problem Statement

// You will be given a string, S, as input. Take this input in the main function. Next, write a function named is_palindrome() that will receive this string. Return type of that function will be integer. The function checks whether the string is a palindrome or not. If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome".

// Palindrome: A palindrome is a word that reads the same forward and backward.


#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]){ 

    int n = strlen(str);

    char newStr[1000];
    int l = 0;


    for(int i = n - 1; i >= 0; i--){  
        newStr[l] = str[i];

        l++;

    }

    newStr[l] = '\0';


    // printf("%s\n", str);
    // printf("%s\n", newStr);


    // if(strcmp(str) == strcmp(newStr)){
    //     res = 1;
    // }

    int res = strcmp(str, newStr);

    return res;
}

int main () {

    char str[1000];

    scanf("%s", &str);

    int res = is_palindrome(str);

    // printf("%d", res);


    if(res == 0){
        printf("Palindrome");
    } else {
        printf("Not Palindrome"); 
    }

    return 0;
}