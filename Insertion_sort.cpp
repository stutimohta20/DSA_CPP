//Cpp program for insertion sort.


//Header Files
#include<iostream>
using namespace std;


//Displaying the array
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}


//Implementation for insertion sort
void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];//take value
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //insert in right place
   }
}


//Main function
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];    //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
  
   insertionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}

/*
Input
Enter the number of elements: 4
Enter elements:
23 87 12 45
*/

/*
Output
Array after Sorting: 12 23 45 87
*/
