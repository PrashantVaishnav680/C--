#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int s,int e){
    if(s>=e) return;
    swap(arr[s],arr[e]);
    reverseArray(arr,s+1,e-1);
}
void rA(int i,int arr[] , int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    rA(i+1,arr,n);
}

bool Pallindrom(int i , string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return Pallindrom(i+1,s);
}
int fact(int n) {
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}
void print(int n){
// print n-1 ;
    // if(n==0) return;
    // cout << n << " " ;
    // print(n-1);

// PRINT 1-n
    if(n<=0) return ;
    print(n-1);
    cout << n << " "; 
}

void fibonacci(int n,int a=0,int b=1){
    if(n<=0) return;
    cout << a << " " ;
    fibonacci(n-1,b,a+b);
}


void reverseArray(vector<int> &arr) {
    sort(arr.begin(),arr.end());
}

int main() {
    // int n ;
    // cin >> n ;
    // int arr[n];
    // for(int i = 0 ; i < n ; i++){
    //     cin >> arr[i];
    // }
    // // reverseArray(arr,0,n-1);
    // // rA(0,arr,n);
    // for(int i : arr) cout << i << " ";

// pallindrom
    // string a ;
    // getline(cin , a);
    // if(Pallindrom(0,a)) cout << "Yes";
    // else cout << "No";

// Question
    // int n ;
    // cin >> n ;
    // print(n);

    // int n ;
    // cin >> n ;
    // //factorial
    // cout << fact(n) << endl;
    // //fibonacci
    // fibonacci(n);
    vector <int> arr;
    for(int i = 0 ; i < 2 ; i++){
        int a;
        cin >> a ;
        arr.push_back(a);
    }
    reverseArray(arr);
    for(int i : arr) cout << i << " ";

    return 0;
}