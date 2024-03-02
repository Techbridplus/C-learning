#include<iostream>
#include<string>
using namespace std;
/*
Here's a step-by-step description of the bubble sort algorithm:

1. Compare adjacent elements: Starting from the beginning of the array, compare each pair of adjacent elements.

2. Swap if necessary: If the elements are in the wrong order (e.g., the current element is greater than the next one in the case of ascending order), swap them.

3. Move to the next pair: Move to the next pair of elements and repeat steps 1 and 2.

4. Repeat until sorted: Continue the process until the entire array is sorted. This may require multiple passes through the array.
*/

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements if they are in the wrong order
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
