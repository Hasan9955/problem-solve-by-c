#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main () 
{
    char s[100];

    // fgets(s, 100, stdin);

    cin.getline(s, 100);
    
    // cin >> s;

    cout<<s;
    return 0;


}