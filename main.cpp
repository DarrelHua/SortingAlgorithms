#include <iostream>
using namespace std;
#include "quickSort.cpp"
#include "mergeSort.cpp"


// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
 {
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
 }


int main() {
    int sz;
   cout<<"Enter the size of array::";
   cin>>sz;
   int randArray[sz];
   cout << "Before Sorting" << endl;

   for(int i=0;i<sz;i++) {
      randArray[i]=rand()%100;  //Generate number between 0 to 99
      cout << randArray[i] << " ";
   }
  
   //quickSort(randArray, 0, sizeof(randArray));
   mergeSort(randArray, 0 , sz-1);

   cout << endl;
   cout << "Sorted Array: " << endl;
   printArray(randArray, sz);
   return 0;


}

