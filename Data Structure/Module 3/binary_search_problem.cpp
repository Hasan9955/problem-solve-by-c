#include<bits/stdc++.h>
using namespace std;

int main () {

    int n, q;
    cin >> n >> q;
    vector<int>v(n, 0);

    for(int i = 0; i< n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (q--)
    {
        int x;
        cin >> x;

        // binary search
        int l = 0, r = n - 1;
        bool flag = false;
        
        while (l <= r)
        {
            int mid_indx = (l+r) / 2;
            if(v[mid_indx] == x){
                flag = true;
                break;
            }
            else if(x > v[mid_indx]){
                // dane jaw
                l = mid_indx + 1;
            }
            else {
                // bame jaw
                r = mid_indx - 1;
            }
        }

        if(flag) cout << "found" << endl;
        else cout << "not found" << endl;
        
    }
    
    return 0;
}