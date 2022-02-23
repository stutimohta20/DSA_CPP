//CPP Program for Merge Sort


//Header Files
#include <iostream>
using namespace std;


// Merge 
void merge(int arr[], int l, int m, int r, int size)
{
    int i = l;
    int j = m + 1;
    int k = l;

    
    int temp[size];

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    
    while (i <= m) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    
    while (j <= r) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    
    for (int p = l; p <= r; p++) {
        arr[p] = temp[p];
    }
}

// Merge Sort
void mergeSort(int arr[], int l, int r, int size)
{
    if (l < r) {
        
        int m = (l + r) / 2;

        
        mergeSort(arr, l, m, size);
        mergeSort(arr, m + 1, r, size);

        // merge
        merge(arr, l, m, r, size);
    }
}


//Main fuction
int main()
{
    cout << "Enter size of array: " ;
    int size;
    cin >> size;
    int myarray[size];

    cout << "Enter the elements of the array: " ;
    for (int i = 0; i < size; i++) {
        cin >> myarray[i];
    }
    cout << "Before Sorting: " ;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }
    cout << endl;
    mergeSort(myarray, 0, (size - 1), size);

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }

    return 0;
}
/*
Input
Enter size of array: 4
Enter the elements of the array: 12 56 34 17
*/

/*
Output
Before Sorting: 12 56 34 17
After Sorting: 12 17 34 56
*/
