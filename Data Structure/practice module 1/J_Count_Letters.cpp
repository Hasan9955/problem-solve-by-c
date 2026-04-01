// #include <bits/stdc++.h>
// using namespace std;

// class letters
// {
// public:
//     char ch;
//     int val;
// };

// int main()
// {

//     string s;
//     cin >> s;
//     letters all[26];

//     for (int i = 0; i < 26; i++)
//     {
//         all[i].ch = i + 'a';
//         all[i].val = 0;
//     }

//     // for(int i = 0; i < s.size(); i++){

//     // }

//     for (char ch : s)
//     {
//         all[ch - 'a'].val++;
//     }

//     for(int i = 0; i < 26; i++){
//         if(all[i].val > 0){
//             cout << all[i].ch << " : " << all[i].val << endl;
//         }
//     }

//     return 0;
// }



// more optimized code
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Speed up I/O for large strings (10^7 is a lot!)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    // A simple array of size 26 initialized to 0
    // int freq[26] = {0}; 
    vector<int> freq(26, 0);

    // Count occurrences
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    // Print in ascending order
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            char current_char = i + 'a';
            cout << current_char << " : " << freq[i] << "\n";
        }
    }

    return 0;
}