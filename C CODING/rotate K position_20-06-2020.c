#include <stdio.h> 
void leftRotatebyOne(int arr[], int n); 
void leftRotate(int arr[], int d, int n) 
{ 
	int i; 
	for (i = 0; i < d; i++) 
		leftRotatebyOne(arr, n); 
} 

void leftRotatebyOne(int arr[], int n) 
{ 
	int temp = arr[0], i; 
	for (i = 0; i < n-1; i++) 
		arr[i] = arr[i + 1]; 
	arr[i] = temp; 
} 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
} 
void main() 
{ 
	int arr[] = {4, 5, 6}; 
	leftRotate(arr,6,4); 
	printArray(arr,4); 

} 
