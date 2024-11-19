// #include<iostream>
// using namespace std;

// void pattern2(int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "* ";
//         }
//         cout << "\n" ;
//     }
// }
// void pattern6(int n){
//     for (int i = 0; i < n ; i++ )
//     {
//         // for (int j = i; j < n; j++) (n-i+1)
//         for (int j = 0; j < n-i ; j++)
//         {
//             cout << "* " ;
//         }
//         cout << endl ;
//     }
// }
// void pattern8(int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= n-i-2; j++)
//         {
//             cout << " " ;
//         }
//         for (int k = 0; k <= 2*i; k++) // if(k==1) then condition 2*i+1 ;
//         {
//             cout << "*";
//         }
//         // OPTIONAL 
//         for (int j = 0; j <= n-i-1; j++)
//         {
//             cout << " " ;
//         }
//         cout << endl ;
//     }
// }
// void pattern9(int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " " ;
//         }
//         for (int k = 0; k < 2*n - (2*i+1) ; k++)
//         {
//             cout << "*" ;
//         }
//         for (int j = 0; j < i; j++)
//         {
//             cout << " " ;
//         }
//         cout << endl ;
//     }
// }


// int main(){
// first pattern
    // ****
    // ****
    // ****
    // ****
    // int n ;
    // cout << "Enter No. :" ;
    // cin >> n ;

    //  for (int i = 0; i < n; i++)
    //  {
    //     for(int j = 0 ; j < n ; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    //  }

// second pattern
    // *
    // * *
    // * * *
    // * * * *
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n" ;
    // }
    
// third pattern
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << j+1 << " ";
    //     }
    //     cout << "\n" ;
    // }

// Forth pattern
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << i+1 << " ";
    //     }
    //     cout << "\n" ;
    // }

// Sixth pattern
    // * * * * 
    // * * *
    // * *
    // *
    // for (int i = 0; i < n ; i++ )
    // {
    //     // for (int j = i; j < n; j++) (n-i+1)
    //     for (int j = 0; j < n-i ; j++)
    //     {
    //         cout << "* " ;
    //     }
    //     cout << endl ;
    // }
    
// Seventh pattern
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1 
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout << j << " " ;
    //     }
    //     cout << endl ;
    // }
    
// Eight pattern
    //    *
    //   ***
    //  *****
    // *******
    //*********
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= n-i-1; j++)
    //     {
    //         cout << " " ;
    //     }
    //     for (int k = 0; k <= 2*i; k++) // if(k==1) then condition 2*i+1 ;
    //     {
    //         cout << "*";
    //     }
    //     // OPTIONAL 
    //     for (int j = 0; j <= n-i-1; j++)
    //     {
    //         cout << " " ;
    //     }
    //     cout << endl ;
    // }

// nine pattern
    // *********
    //  *******
    //   *****
    //    ***
    //     *  
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " " ;
    //     }
    //     for (int k = 0; k < 2*n - (2*i+1) ; k++)
    //     {
    //         cout << "*" ;
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " " ;
    //     }
    //     cout << endl ;
    // }
    
// ten patten
    //          *
    //        * * *
    //      * * * * *
    //    * * * * * * *
    //    * * * * * * *
    //      * * * * *
    //        * * * 
    //          *
    // pattern8(n);
    // pattern9(n);
    
//     return 0 ;
// }
// int main(){
// // Eleven pattern
//     int n ;
//     cout << "Enter No. :" ;
//     cin >> n ;
//     // pattern2(n);
    // pattern6(n);
    // for (int i = 0; i < 2*n-1; i++)
    // {
    //     int star = i ;
    //     if(i>n) star = 2*n-i ;
    //     for (int j = 0; j < star; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl ;
    // }

// twelve pattern
    // 1
    // 01
    // 101
    // 0101
    // 10101
    // for (int i = 0; i < n; i++)
    // {
    //     int start = 1 ;
    //     if(i % 2 == 0) start = 1 ;
    //     else start = 0 ;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << start ;
    //         start = 1 - start ;
    //     }
    //     cout << endl ;
    // }

//thirtteen pattern 
    // 1             1
    // 1 2         2 1
    // 1 2 3     3 2 1
    // 1 2 3 4 4 3 2 1
    // int space = 2*(n-1);
    // for (int i = 1; i <= n; i++)
    // {
    //     //number
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " " ;
    //     }
    //     //space
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << "  " ;
    //     }
    //     //number
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     space -= 2;
        
    //     cout << endl ;
    // }
    
//fourteen pattern
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // int num = 1 ;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << num << " " ;
    //         num++ ;
    //     }
    //     cout << endl ;
    // }

// fifteen pattern 
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    // for (int i = 1; i <= n; i++)
    // {
    //     int num = 65 ;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << char(num) << " " ;
    //         num++ ;
    //     }
    //     cout << endl ;
    // }
    
// sixteen pattern
    // ABCD
    // ABC
    // AB
    // A
    // for (int i = 0; i < n; i++)
    // {
    //     for (char j = 'A'; j <= 'A'+(n-i-1); j++)
    //     {
    //         cout << j ;
    //     }
    //     cout << "\n" ;
    // }
    
//seventeen pattern
    // A
    // B B
    // C C C
    // D D D D
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A' + i ;
    //     for (int j = 0; j <= i; j++)
    //     {
    //          cout << ch << " " ;
    //     }
    //     cout << "\n" ;
    // }
    
// Eighteen pattern
    //      A
    //     ABA
    //    ABCBA
    //   ABCDCBA
    //  ABCDEDCBA
    // for (int i = 0; i < n; i++)
    // {
    //     //space
    //     for (int j = 0; j <= n-i-1 ; j++)
    //     {
    //         cout << " " ;
    //     }
    //     //Alphabates
    //     char ch = 'A' ;
    //     int breakpoint = (2*i+1) / 2 ;
    //     for (int j = 1; j <= 2*i + 1 ; j++)
    //     {
    //         cout << ch ;
    //         if (j <= breakpoint) ch++ ;
    //         else ch-- ;
            
    //     }
    //     //space
    //     for (int j = 0; j <= n-i-1 ; j++)
    //     {
    //         cout << " " ;
    //     }
    //     cout << endl ;
    // }
    
// nineteen pattern 
    // E 
    // D E 
    // C D E 
    // B C D E 
    // A B C D E 
    // for (int i = 0; i < n; i++)
    // {
    //     for (char j = 'E' - i; j <= 'E' ; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl ;
    // }
    
// twenty pattern 
//     * * * * * * * * * * 
//     * * * *     * * * *
//     * * *         * * *
//     * *             * *
//     *                 * 
//     *                 *
//     * *             * *
//     * * *         * * *
//     * * * *     * * * *
//     * * * * * * * * * *
    // for (int i = 0; i < n; i++)
    // {
    //     // star
    //     for (int j = 0; j <= n-i-1; j++)
    //     {
    //          cout << '*' ;
    //     }
    //     //space
    //     for(int j = 1 ; j <= 2*i ;j++){
    //         cout << " " ;
    //     }
    //     //star
    //     for (int j = 0; j <= n-i-1; j++)
    //     {
    //          cout << '*' ;
    //     }
    //      cout << "\n" ;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     //star
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << '*' ;
    //     }
    //     //space
    //     int space = 2*n-2*i-2;
    //     for (int j = 1; j <= space ; j++)
    //     {
    //         cout << " " ;
    //     }
    //     // star
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << '*' ;
    //     }
        
    //     cout << endl ;
    // }

// twentyone pattern
    // *         *
    // * *     * *
    // * * * * * *
    // * *     * *
    // *         *
    // for (int i = 0; i < 2*n-1; i++)
    // {
    //     int star = i ;
    //     if(i>n) star = 2*n-i ;
    //     for (int j = 0; j < star; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl ;
    // }

// Twenty two Pattern
    // 4 4 4 4 4 4 4
    // 4 3 3 3 3 3 4 
    // 4 3 2 2 2 3 4
    // 4 3 2 1 2 3 4 
    // 4 3 2 2 2 3 4
    // 4 3 3 3 3 3 4
    // 4 4 4 4 4 4 4 
    // for (int i = 0; i < 2*n-1; i++)
    // {
    //     for (int j = 0; j < 2*n-1; j++)
    //     {
    //         int Top = i;
    //         int Bottom = 2*n-2-i ;
    //         int Left = j ;
    //         int Right = 2*n-2-j ;
    //         cout << n - min(min(Top,Bottom),min(Left,Right)) << " ";
    //     }
    //     cout << endl ;
    // }
//     return 0 ;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n ;
    for (int i = 0; i <= n; i++)
    {
        
    }
    
    return 0;
}