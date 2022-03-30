#include<iostream>
#include<unordered_set>
using namespace std;
 
 
int main(){
 
    // Hard-coded unordered set
    unordered_set<int> s1 = {1, 4, 8, 3, 2};
 
    // Inserting elements in the set 
    s1.insert(5);
    s1.insert(10);
    s1.insert(4);
 
    // Initializing an iterator for unordered set
    unordered_set<int> :: iterator it;
 
    // Printing each element
    for(it=s1.begin(); it != s1.end(); it++)
        cout<<*it<<" ";
 
    cout<<endl;
}