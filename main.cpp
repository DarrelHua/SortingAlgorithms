#include <iostream>
#include <iomanip>
// #include <algorithm>
using namespace std;

#include "quickSort.cpp"
#include "mergeSort.cpp"
#include "selectionSort.cpp"
#include "bubbleSort.cpp"
//What can i do to fix this
int main()
{
    int sz;
    cout << "Enter the size of array: " << endl;
    cin >> sz;
    int randArray[sz];
    cout << "Before Sorting" << endl;

    for (int i = 0; i < sz; i++)
    {
        randArray[i] = rand() % 100; //Generate number between 0 to 99
    }

    int selection;
    cout << endl;

    cout << endl;
    cout << "Select Sorting Algorithm:" << endl;
    cout << setw(6) << "1) Quick Sort" << endl;
    cout << setw(6) << "2) Merge Sort" << endl;
    cout << setw(6) << "3) Selection Sort" << endl;
    cout << setw(6) << "4) Bubble Sort" << endl;
    cout << setw(6) << "5) Comnpare All" << endl;
    cout << endl;

    cout << "Algorithm #: ";
    cin >> selection;
    cout << endl;

    time_t start, end;
    double total;
    if (selection == 1) {
        time(&start);
        quickSort(randArray,0,sz);
        time(&end);
        double total = double(end-start);
        cout << "Quick Sort took " << total << setprecision(3) << endl;
    }
    else if (selection == 2){
        time(&start);
        mergeSort(randArray,0,sz-1);
        time(&end);
        total = double(end-start);
        cout << "Merge Sort took " << total << setprecision(3) << endl;
    }
    else if (selection == 3) {
        time(&start);
        selectionSort(randArray,sz);
        time(&end);
        double total = double(end-start);
        cout << "Selection Sort took " << total << setprecision(3) << endl;
    }
    else if (selection == 4) {
        time(&start);
        bubbleSort(randArray,sz);
        time(&end);
        double total = double(end-start);
        cout << "Bubble Sort took " << total << setprecision(3) << endl;
    }
    else if (selection == 5) {
        int arr1[sz];
        copy(randArray[0],randArray[sz-1], arr1[0]);
        time(&start);
        quickSort(arr1,0,sz);
        time(&end);
        total = double(end-start);
        cout << "Quick Sort took " << total << setprecision(3) << endl;

        int arr2[sz];
        copy(randArray[0],randArray[sz-1], arr2[0]);
        time(&start);
        mergeSort(arr1,0,sz-1);
        time(&end);
        total = double(end-start);
        cout << "Merge Sort took " << total << setprecision(3) << endl;

        int arr3[sz];
        copy(randArray[0],randArray[sz-1], arr3[0]);
        time(&start);
        selectionSort(arr1,sz);
        time(&end);
        total = double(end-start);
        cout << "Selection Sort took " << total << setprecision(3) << endl;

        int arr4[sz];
        copy(randArray[0],randArray[sz-1], arr4[0]);
        time(&start);
        bubbleSort(arr1,sz);
        time(&end);
        total = double(end-start);
        cout << "Bubble Sort took " << total << setprecision(3) << endl;
    }
    
    
    return 0;
}
