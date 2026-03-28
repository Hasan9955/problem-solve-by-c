// B. Let's use Getline
// time limit per test1 second
// memory limit per test64 megabytes
// Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

// Hint: use function getline(cin, s).

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

// It's guaranteed that S will contain '\' symbol.

// Output
// Print the answer required above.

// Examples
// InputCopy
// Egyptian collegiate programming\ contest
// OutputCopy
// Egyptian collegiate programming
// InputCopy
// google \or facebook
// OutputCopy
// google 


#include<bits/stdc++.h>
using namespace std;

int main () {


    string s;
    
    getline(cin, s);

    // cout << s.find("\\") << endl;

    s.resize(s.find("\\"));

    cout << s<< endl;
    
    return 0;
}
