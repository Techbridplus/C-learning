#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void swap(int array[], int index1, int index2) {
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}
int partition(int* arr,int s,int e){
    int pivot=s;
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[pivot]>arr[i]){
            count++;
        }
    }
    int pivot_index=s+count;
    swap(arr,pivot,pivot_index);
    int i=s;
    int j=e;
    while(i<pivot_index&&j>pivot_index){
        while(arr[i]<arr[pivot_index]){
            i++;
        }
        while(arr[j]>arr[pivot_index]){
            j--;
        }
        if(i<pivot_index&&j>pivot_index){
            swap(arr,i,j);
            i++;
            j--;
        }
    }
    return pivot_index;
}
void Quick_Sort(int* arr,int s,int e){
    if(s>=e) return;
    int p=partition(arr,s,e);
    Quick_Sort(arr,s,p-1);
    Quick_Sort(arr,p+1,e);
}
void print(int* arr,int size){
    for(int i=0;i<size;i++){
        printf("\n%d ",arr[i]);
    }

}
int main(){
    int arr[]={6,4,2,9,8,5,3,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Quick_Sort(arr,0,size-1);
    print(arr,size);
    return 0;
}