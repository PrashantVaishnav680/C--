#include <iostream>
// #include <bits/stdc++.h> ==> For All Libreary
#include <math.h> // max,min fun
using namespace std;
// int main() {

    /*
    data types : int , float , long , long long , double , CHAR
    string and getline ==> it take line of string and put it in string variable
    */

    // string str;
    // cout << "Enter your name: ";
    // getline(cin , str);
    // cout << str;
    /*
    OUTPUT:
    Enter your name: Prashant Vaishnav 
    Prashant Vaishnav
    */

//if else statement

   /*write a  program that takes an input of age and print if you are adult or not*/
    // int age;
    // cout << "Enter Your Age : ";
    // cin >> age;
    // if(age>=18){
    //     cout << "you are adult.";
    // }else cout << "You are not Adult.";

    /*
    A school  has following rule for grading system :
    a. below 25 - F
    b. 25-44 - E
    c. 45-49 - D
    d. 50-59 - C
    e. 60-79 - B
    f. 80-100 - A
    Ask user to enter marks and print the corresponding grade
    */
    // int marks ;
    // cout << "Enter Your Marks : ";
    // cin >> marks;
    // if(marks<25) cout << "Your Grade is F";
    // if( marks>24 && marks<45) cout << "Your Grade is E";
    // if( marks>44 && marks<50) cout << "Your Grade is D";
    // if( marks>49 && marks<60) cout << "Your Grade is C";
    // if( marks>59 && marks<80) cout << "Your Grade is B";
    // if( marks>79 && marks<100) cout << "Your Grade is A";
   // if statement take too much time so we use else if 


// Switch Statement 
    /*
    take a day no and print corresponding day 
    like 1 for  monday.
    */
    // int num ; 
    // cout << "Enter Day No (from 1-7) : ";
    // cin >> num ;
    // switch(num){
    //  case 1: cout << "Monday"; break;
    //  case 2: cout << "Tuesday"; break;
    //  case 3: cout << "Wednesday"; break;
    //  case 4: cout << "Thursday"; break;
    //  case 5: cout << "Friday"; break;
    //  case 6: cout << "Saturday"; break;
    //  case 7: cout << "Sunday"; break;
    //  default: cout << "Invalid Day No";
    // }

//Array and String

    //Array
    //1D
    // int arr[5] = {1,2,3,4,5};
    // cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
    
    //2D
    // int arr[2][3];

    //String
    // string a = "Hello";
    // cout << a[0] << endl ;
    // cout << a.size();

// For Loops
    // int i = 1 ; 
    // while(i<=5){
    //     cout << i << endl ;
    //     i++;
    // }
//     return 0;
// }
// Functions 
    /*
    functions 1) void ==> does not return anything
              2) int ==> returns integer value
                return ==> 
    */
    //void print(string Name){
    // cout << "Hello " << Name << "\n";
    //}

    // int main(){
    // string name;
    // cin >> name;
    // print(name);
    // return 0 ;
    // }

    /*
    Take two number and print sum
    */
    // int sum(int a , int b){
    //     cout << a + b;
    // }
    // int main(){
        // int a,b;
        // cin >> a >> b;
        // sum(a,b);
        // int Max = max(a,b); // max function
        // cout << Max << "\n";
        // int Min = min(a,b);
        // cout << Min;  // min function

    //     return 0 ; 
    // }

    // call / pass by value
    // void some(int x){
    //     cout << x << endl ;
    //     // x += "hii"; or
    //     x++;
    //     cout << x << endl ;
    // }
    // int main(){
    //     string a = "taj"; //or
    //     int b = 4;
    //     some(b);
    //     cout << b << endl ;
    //     return 0 ;
    // }
    // OUTPUT
    // 4
    // 5
    // 4


    // call by refrence
    // void some(int &x)// due 
    // {
        // cout << x << endl ;
        // // x += "hii"; or
        // x++;
        // cout << x << endl ;
    // }
    // int main(){
        // string a = "taj"; //or
        // int b = 4;
        // some(b);
        // cout << b << endl ;
        // return 0 ;
    // }
    // OUTPUT
    // 4 
    // 5
    // 5
