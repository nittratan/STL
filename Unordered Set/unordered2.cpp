#include <iostream>
#include <unordered_set>
using namespace std;
int main (){
   int arr[] = { 2, 1, 5, 6, 9, 3, 2 };
   int size = sizeof (arr) / sizeof (arr[0]);
   unordered_set < int >U_SET;
   //inserting elements from an array to an unordered_set using insert()
   for (int i = 0; i < size; i++){
      U_SET.insert (arr[i]);
   }
   unordered_set < int >::iterator it;
   cout << "Values in unordred set are: ";
   for (it = U_SET.begin (); it != U_SET.end (); it++){
      cout << *it << " ";
   }
}
