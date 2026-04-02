// Solution with maintain TLE 
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    set<int>s;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if(s.count(val)){
            flag = true; 
        }

        s.insert(val);
    }
    

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}






// solution 2 with out TLE
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     vector<int> v(n, 0);
//     bool flag = false;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     for(int i = 0; i < n; i++){
//         if(v[i] == v[i-1]){
//             flag = true;
//             break;
//         }
//     }

//     if (flag)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// }



// worst solution 3 without TLE
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     vector<int> v(n, 0);
//     bool flag = false;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];

//         if (!flag && i > 0)

//         {
//             if (find(v.begin(), v.begin() + i, v[i]) != v.begin() + i)
//             {
//                 flag = true;
//             }
//         }
//     }

//     if (flag)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// }