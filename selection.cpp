#include<iostream>
#include<string>
using namespace std;
/*
Here's a step-by-step description of the selection sort algorithm:

1. Find the minimum element: Scan the entire array to find the minimum element in the unsorted region.

2. Swap with the first element: Swap the minimum element with the first element of the unsorted region. Now, the first element is considered part of the sorted region.

3. Move boundary: Expand the sorted region by moving its boundary one position to the right.

4. Repeat: Repeat steps 1-3 until the entire array is sorted.
*/

void Selection_Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted region
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main(){
    int arr[]={7,2,3,1,9,15,4};
    int Size=size(arr);
    Selection_Sort(arr,Size);
    print(arr,Size);
    return 0;
}