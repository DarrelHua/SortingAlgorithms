#include <iostream>
using namespace std;
#include "quickSort.cpp"
#include "mergeSort.cpp"
#include "selectionSort.cpp"


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

   int selection;
   cout << endl << "Select Sorting Algorithm:" << endl;
   cout << "1) Quick Sort" << endl;
   cout << "2) Merge Sort" << endl;
   cout << "3) Selection Sort" << endl;

   cout << "Algorithm #: ";
   cin >> selection;
   cout << endl;

    if (selection == 1)
        quickSort(randArray, 0, sizeof(randArray));
    else if (selection == 2)
        mergeSort(randArray, 0 , sz-1);
    else if (selection ==3)
        selectionSort(randArray, sz);

   cout << endl;
   cout << "Sorted Array: " << endl;
   printArray(randArray, sz);
   return 0;


}

