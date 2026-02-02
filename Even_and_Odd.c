// Problem Statement

// You will be given an array A, and the size of that array N. You need to write a function named odd_even() and take input inside that function. The function won't return anything. You need to count the number of even values and number of odd values in that array and print inside the function.

// Input Format

// First line will contain N.
// Next line will contain the array A.
// Constraints

// 1 <= N <= 1000
// 0 <= A[i] <= 10^9; Where 0 <= i < N
// Output Format

// First print the number of even elements, then the number of odd elements separated by a space.




#include <stdio.h>

void odd_even(){

    
    int n;

    scanf("%d", &n);

    long long arr[n]; 

    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }


    long long  oddCount = 0, evenCount = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%lld %lld", evenCount, oddCount);


}


int main () {

    odd_even();


    return 0;
}