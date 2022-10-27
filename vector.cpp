// #include <iostream> 
// //dont have all the things
// #include <vector>

#include <bits/stdc++.h>
//It has all the library
using namespace std;

int main(){
    //Advantages of vector?
    //we dont have to declare a size
    //v.size() this will give us the size of vector
    //to sort an array we use sort(arr, arr + n);
    //to sort a vector we use sort(v.begin(), v.end());
    
    int arr[10];
    arr[0] = 34;
    
    
    //but in case of vector
    vector<char>brownie;
    brownie.push_back('a');
    //this will enter the element into vector
    brownie.push_back('f');
    brownie.push_back('e');
    brownie.push_back('w');
    brownie.pop_back();
    //34  22 12 44
    sort(brownie.begin(), brownie.end());
    for(int i=0;i<brownie.size();i++){
        cout<<brownie[i]<<endl;
    }
    return 0;
    
}




