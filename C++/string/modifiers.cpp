#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a = "Hello";

    string b = "world";


    // ----------- append() -------------
    // a = a+b;
    // a+=b;
    // a.append(b);

    // cout << a << endl;
    // cout << b << endl;

    // a[5] = 'A';  // didn't work
    // a = a + "A"; // works
    // a = "HelloA"; // works
    // a.push_back('A'); // works
    // a.pop_back();
    // a.pop_back();

    // cout << a<< endl;



    // ----------- assign() -----------
    // a = "Gelo";
    // a.assign("Gelo");
    // cout << a << endl;




    // ------------ erase() -------------
    // a = "Hasanbinali";

    // a.erase(4, 1);

    // cout << a << endl;


    



    // --------------- replace() --------------
    // a = "Hasanbinali";

    // a.replace (4 , 3, "so");

    // cout << a << endl;



    

    // -------------- insert() -------------
    a = "Hasanbinali";
    a.replace(5, 1, "B");
    a.replace(8, 1, "A");
    a.insert(5, " ");
    a.insert(9, " ");
    
    cout << a << endl;

    return 0;
}