#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while (a>0 &&b>0)
    {
        if(a>b) a=a%b ;
        else b=b%a ;
    }
    if(a==0) return b;
    return a;
}

int main() {

// ONE
    // int n ;
    // cin >> n ;
    // int count = (int)(log10(n)+1);
    
    // or
    // int count = 0 ;
    // while(n>0)
    // {
    //     count++ ;
    //     n/=10 ;
    // }
    // cout << count ;

//two : reverse 
    // int n ;
    // cin >> n ;
    // int reverse_no = 0 ;
    // while(n>0){
    //     int last_no = n%10 ;
    //     reverse_no = reverse_no*10 + last_no ;
    //     n/=10 ;
    // }
    // cout << reverse_no ;

// three : pallindrom 
    // int n ;
    // cin >> n ;
    // int og = n ;
    // int reverse_no = 0 ;
    // while(n>0){
    //     int last_no = n%10 ;
    //     reverse_no = reverse_no*10 + last_no ;
    //     n/=10 ;
    // }
    // if(reverse_no == og) cout << "yes";
    // else cout<<"no" ;

// four : amstrom no 
    // int n ;
    // cin >> n ;
    // int og = n;
    // int sum = 0 ;
    // int c = 0 ;
    // int temp = n;
    // while (temp > 0) {
    //     temp /= 10;
    //     c++;
    // }
    // while(n>0){
    //     int ln = n%10 ;
    //     sum = sum + pow(ln,c) ;
    //     n/=10 ;
    // }
    // if(sum == og) cout << "yes";
    // else cout<<"no" ;

// fifth : print all divisor
    // int n ;
    // cin >> n ;
    // for(int i = 1 ; i <= n ; i++){ // due to i<=n T.C = O(N)
    //     if(n%i == 0) cout << i << " " ;
    // }

// six : prime no 
    // int n;
    // cin >> n;
    // int c=0;
    // for(int i = 1 ; i<=n ;i++){
    //     if(n%i==0) c++;
    // }
    // if(c==2) cout << "yes";
    // else cout << "No";

// GCD AND HCF
    // int n1,n2;
    // cin >> n1 >> n2;
    // int gcd;
    // for(int i = 1;i<=min(n1,n2);i++){
    //     if(n1%i==0 && n2%i==0) gcd = i;
    // }
    // cout << gcd ;

    // or  
    // cout << gcd(n1,n2); // t.c = log fi(min(a,b)) uer define function
    return 0;
}

