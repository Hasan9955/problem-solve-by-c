#include <stdio.h>
int sum (void) {

    int n, m;

    scanf("%d %d", &n, &m);

    int sum = n + m;

    return sum;
}

int main () {
    int s = sum();

    printf("%d", s);

    return 0;
}


// #include <stdio.h>

// int sum ();


// int main () {
//     int s = sum();

//     printf("%d", s);

//     return 0;
// }


// int sum () {

//     int n, m;

//     scanf("%d %d", &n, &m);

//     int sum = n + m;

//     return sum;
// }