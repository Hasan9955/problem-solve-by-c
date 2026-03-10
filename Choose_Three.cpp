// Problem Statement

// You will be given an array A and the size of that array N. Additionally, you will be given a sum S. Your task is to determine whether it is possible to select three distinct indexed values from the array such that their summation equals S.

// Input Format

// First line will contain T, the number of test cases.
// First line of each test case will contain N and S.
// Second line of each test case will contain the array A.
// Constraints

// 1 <= T <= 100
// 1 <= N <= 100
// 1 <= S <= 1000
// 1 <= A[i] <= 1000 Where 0 <= i < N
// Output Format

// Output "YES" if it is possible, otherwise output "NO".
// Sample Input 0

// 5
// 5 10
// 1 2 3 4 5
// 5 6
// 4 2 3 5 4
// 3 6
// 2 2 2
// 4 4
// 2 8 1 5
// 1 3
// 1
// Sample Output 0

// YES
// NO
// YES
// NO
// NO
// Explanation 0

// In the first test case, we can make 10 by adding 5+4+1. There are other ways too.
// In the second test case, it is not possible to make 6 by adding three different indexed values from the array.
// In the third case, it is possible to make 6 by using three different indexed values.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        // int arr[n];
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        bool isFound = false;


        for (int i = 0; i < n - 2 && !isFound; i++)
        {
            int target = sum - arr[i];


            int left = i + 1;
            int right = n - 1;

            while (left < right)
            {
                int currentSum = arr[left] + arr[right];

                if(currentSum == target){
                    isFound = true;
                    break;
                } else if (currentSum < target){
                    left++;
                } else {
                    right--;
                }
            }
            
        }


        cout << (isFound ? "YES" : "NO") << endl;

        // OLDER VERSION
        // int flag = 0;
        // // for (int i = 0; i < n; i++)
        // // {

        // //     for (int j = 0; j < n; j++)
        // //     {

        // //         if (j == i)
        // //         {
        // //             continue;
        // //         }

        // //         for (int k = 0; k < n; k++)
        // //         {
        // //             if (k == i || k == j)
        // //                 continue;

        // //             if (arr[i] + arr[j] + arr[k] == sum)
        // //             {
        // //                 flag = 1;
        // //                 break;
        // //             }
        // //         }
        // //         if (flag)
        // //             break;
        // //     }
        // //     if (flag)
        // //         break;
        // // }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         for (int k = j + 1; k < n; k++)
        //         {
        //             if (arr[i] + arr[j] + arr[k] == sum)
        //             {
        //                 flag = 1;
        //                 break;
        //             }
        //         }
        //         if (flag)
        //             break;
        //     }
        //     if (flag)
        //         break;
        // }

        // if (flag == 0)
        // {
        //     cout << "NO";
        // }
        // else
        // {
        //     cout << "YES";
        // }

        // cout << endl;
    }

    return 0;
}