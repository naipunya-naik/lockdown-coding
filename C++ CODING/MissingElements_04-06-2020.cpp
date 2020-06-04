#include <iostream> 
using namespace std; 
void MissingElements(int arr[], int size) 
{ 
    int i;
    for (i = 0; i < size; i++)
    { 
        if (arr[(arr[i]) - 1] > 0) 
            arr[(arr[i]) - 1] = -arr[(arr[i]) - 1]; 
        else
            cout <<(arr[i]) <<endl;
    } 
    cout << " "; 
    for (i = 0; i < size; i++) { 
        if (arr[i] > 0) 
            cout << (i + 1)<<endl; 
    } 
} 
int main() 
{ 
    int arr[] = { 1,2,3,5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    MissingElements(arr,n); 
} 
