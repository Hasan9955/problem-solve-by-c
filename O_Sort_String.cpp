// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;

//     cin >> n;

//     vector<char> v(n);
//     // char v[n];


//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             if(v[i] > v[j]){
//                 swap(v[i], v[j]);
//             }
//         }
//     }
//     // for(int i = 0; i < n; i++)
//     // {
//     //     for(int j = 0; j < n - i - 1; j++)
//     //     {
//     //         if(v[j] > v[j + 1])
//     //         {
//     //             swap(v[j], v[j + 1]);
//     //         }
//     //     }
//     // }

//     for(int i = 0; i < n; i++)
//     {
//         cout << v[i];
//     }
//     cout << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count[26] = {0};   // 26 letters

    char c;

    // Count letters
    for(int i = 0; i < n; i++)
    {
        cin >> c;
        count[c - 'a']++;   // increase correct letter
    }

    // Print sorted letters
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < count[i]; j++)
        {
            cout << char(i + 'a');
        }
    }

    return 0;
}