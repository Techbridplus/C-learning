#include<iostream>
#include<string>
using namespace std;
/*
Here's a step-by-step description of the insertion sort algorithm:

1. Start from the second element (index 1): Assume that the first element in the array is already sorted.

2. Compare and insert: For each element in the unsorted region, compare it with the elements in the sorted region and insert it at the correct position.

3. Shift elements: If an element is greater than the current element in the sorted region, shift the larger element to the right to make space for the current element.

4. Repeat: Repeat steps 2-3 until the entire array is sorted.
*/

void insertion_sort(int arr[], int n) {
    for(int i=1;i<n-1;i++){
        int curr=arr[i];
        for(int j=i-1;j>=0;j--){
            if(curr<arr[j]){
                swap(arr[j+1],arr[j]);
            }else{
                break;
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
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, n);

    insertion_sort(arr, n);

    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
