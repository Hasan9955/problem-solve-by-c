#include<bits/stdc++.h>
using namespace std;


class CharObj {

    public:
    char ch;
    int count;

};


bool cmp (CharObj a, CharObj b){
    if(a.count == b.count){ 
        return a.ch < b.ch;
    } else {
        return a.count > b.count;
    }
}

int main () {

    string s;
    cin >> s;

    CharObj obj[26];


    for(int i = 0; i < 26; i++){
        obj[i].ch = i + 'a';
        obj[i].count = 0;
        
    }

    for(char c:s){
        int ascii = int(c - 'a');

        obj[ascii].count++;

        
    }


    sort(obj, obj + 26, cmp);


    for(int i = 0; i < 26; i++){
        if(obj[i].count > 0){
            // cout << obj[i].ch << " - " << obj[i].count << endl;
            for(int j = 0; j < obj[i].count; j++){
                cout << obj[i].ch;
            }
        }
    }



    return 0;
}