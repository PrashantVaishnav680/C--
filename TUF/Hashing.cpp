#include <bits/stdc++.h>
using namespace std;

int main() {
    // inside the main () we can create array of size (1e7)
    // and in globly we can create array of size (1e8)
    //if we increase the size then it cause segmentaion error
    //because of memory limit exceeded
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    /* NUMBER HASHING*/ 

    // [0][1][2][3][4][5][6][7][8][9][10][11][12]
    // int hash[13] = {0};
    // for (int i = 0; i < n; i++){
    //     hash[arr[i]] += 1 ;
    // }

    /*Character HASHIING*/

    string str;
    cin >> str;

    // int hash[26] = {0};
    int hash[256] = {0};
    for(int i=0 ; i<str.size() ;i++){
        // hash[str[i]-'a'] += 1 ;
        hash[str[i]] += 1 ;
    }
    int q;
    cin >> q;
    while(q--){
        // int x;
        // cin >> x;
        // cout << hash[x] << endl ;
        char c;
        cin  >> c;
        // cout << hash[c-'a'] << endl ;
        // for 256
        cout << hash[c] << endl;
    }
    return 0;
}