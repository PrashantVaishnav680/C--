// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    // pair<int , int> p = {1,3};
    // access pair
    // cout << p.first << " " << p.second << endl ;

    // pair <int , pair<int , int>> a = {1 , {8,9}};
    // cout << a.first << " " << a.second.first << " " << a.second.second ;
    // pair<int , int> arr[] = {{1,2} , {3,4} ,{5,6}};
    // cout << arr[0].first;

    // VECTOR
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2); // Correct usage with one argument
    // v.emplace_back(3); // Correct usage with one argument

    // vector<pair<int, int>> vec;
    // vec.emplace_back(2, 3); // Correct usage for a vector of pairs

    // // vector <int> a(5,100); //a = {100,100,100,100,100}
    // // cout << a[3];
    // vector <pair<int , int>> vec ;
    // vec.emplace_back(25,65);
    

    //copy 1 vector to another 
    // vector<int> b(a);

// Access vector using iterator
// 1st iterator function
    // vector<int>::iterator it = v.begin();
    // it+=2; // it++; 
    // cout << *it << endl; // 2
    // // {1, 2}
    // cout << v[1] << " "; // Accessing the second element

// 2nd iterator function
    // vector <int> ::iterator i = v.end();
    // i--; // i = i-1; // i = i-1; 
    // cout << *i <<"\n";

    // cout << v.back();

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // or 
    // for(vector<int>::iterator it = v.begin() ; it!=v.end();it++){
    //     cout << *it << " ";
    // }
    //or 
    // for(auto it : v){
    //     cout << it << " " ;
    // }
    
    // vector <int> vec;
    // vec.push_back(10);
    // vec.push_back(20);
    // vec.push_back(30);
    // vec.push_back(40);
    // vec.push_back(50);
    // vec.erase(vec.begin()+4); // v.erase(start,end) ==> [Start,end);
    // for(auto it : vec){
    //     cout << it << " " ;
    // }
    // cout << endl;
    // vec.push_back(50);
    // vec.erase(vec.begin()+1 , vec.begin()+5);
    // for(auto it : vec){
    //     cout << it << " " ;
    // }

    // vec.insert(vec.begin()+2 , 2 , 200);
    // vector <int> a = {1,2,3,4,5};
    // vector <int>copy(5,50);
    // a.insert(a.end(),copy.begin(),copy.end());
    // for(auto it : a){
    //     cout << it << " " ;
    // }
    // a.pop_back();//{1,2,3,4}
    // a.swap(copy);// a= {50,50,50,50,50} ,copy = {1,2,3,4,5}
    
// LIST
    // list<int> a;
    // a.push_back(1);
    // a.emplace_back(2);
    // a.push_front(3);
    // a.emplace_front(4);
    // a.pop_front(); // 3 1 2 
    // a.pop_back(); // 3 1
    // cout << a.back(); //1
    // cout << a.front();
    // for(auto i : a){
    //     cout << i << " ";
    // }

//Stack
    // stack <int> a ,b ;
    // // it has only 3 function
    // // 1) push 2) pop 3) top
    // a.push(1);
    // a.push(2);
    // a.push(3);
    // a.push(4);
    // a.emplace(5);
    // cout << a.top() << endl; //5 
    // a.pop();
    // a.swap(b);

// QUEUE

//Priority Queue
    // priority_queue <int> a ;
    // a.push(1);
    // a.push(2);
    // a.push(3);
    // a.push(4);
    // a.push(10);
    // cout << a.top() << endl; //10
    // a.pop();
    // cout << a.top() << endl; //4

// set 
    // set <int> st;
    // st.insert(1);//{1}
    // st.insert(2);//{1,2}
    // st.insert(2);//{1,2}
    // st.insert(4);//{1,2,4}
    // st.insert(3);//{1,2,3,4}
    // // auto it = st.find(3);
    // // auto it = st.find(7);
    // // cout << *it ;
    // // st.erase(4);
    // cout << st.count(2); // return 0 or 1

// map
    // map<int,int> mpp;
    // map<int, pair<int , int> > mpp;
    // map<pair<int,int>,int> mpp ;
    // mpp[1]=2;
    // mpp.emplace(3,1);
    // mpp.insert({2,4});
    // mpp[2,3]=10;
    // for(auto i : mpp){
    //     cout << i.first << " " << i.second << endl ;
    // }
    // cout << mpp[1];
    // cout << mpp[6];
    // auto i = mpp.find(3);
    // cout << *(i).second;
    
//     return 0;
// }

// NEW 

#include <bits/stdc++.h>
// #include <iostream>
// #include<list>
// #include <deque>
// #include <stack>
// #include<queue>
// #include<array>
using namespace std;

int main() {
    // list<int> L = {1 , 2 , 3 , 4} ;
    // deque<int> d ={1 , 2 , 3 , 4} ; //{5,6,7,8,9}
    // cout <<" " << d[2] ;
    // cout << " " << L[2] ; Random access not possible in list

    // priority_queue<int> p ;
    
    // for (int i = 0; i < 3; i++)
    // {
    //     int a;
    //     cin >> a;
    //     p.push(a);
    // }
    // cout << p.top() ;

    // int arr[] ={1, 2, 3, 4};
    // reverse(arr,arr+4);
    // for(int i : arr){
    //     cout << i << " ";
    // }

    // string s = "abc" ;
    // next_permutation(s.begin(),s.end()) ;
    // cout << s << endl ;
    stack <int> v;
    v.push(1);
    v.push(2);
    v.push(3);
    cout << v.top();
    
    
    
    return 0;
}