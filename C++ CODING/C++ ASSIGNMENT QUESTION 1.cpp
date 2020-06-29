#include <iostream>
#define M 3
#define N 3
using namespace std;
void row_sum(int numbers[3][3]) 
{ 
	int i,j,sum = 0; 
	cout << "\nSum of each row:\n\n"; 
	for (i = 0; i < 3; ++i) 
	{ 
		for (j = 0; j < 3; ++j)
		{ 
			sum = sum + numbers[i][j]; 
		} 
		cout<< "Sum of the row "
			<< i<< " = " << sum 
			<< endl; 
		sum = 0; 
	} 
} 
void column_sum(int numbers[3][3]) 
{ 
	int i,j,sum = 0; 
	cout << "\n Sum of each column:\n\n"; 
	for (i = 0; i < 3; ++i)
	{ 
		for (j = 0; j < 3; ++j) 
		{ 
			sum = sum + numbers[j][i]; 
		} 
		cout << "Sum of the column "
			<< i << " = " << sum 
			<< endl; 
		sum = 0; 
	} 
}
void printDiagonalSums(int numbers[3][3]) 
{ 
    int main = 0, secondary = 0; 
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
  
            
            if (i == j) 
                main += numbers[i][j]; 
  
            
            if ((i + j) == (3 - 1)) 
                secondary += numbers[i][j]; 
        } 
    } 
  
    cout << "\nSum of Main Diagonal:" << main << endl; 
    cout << "\nSum of Secondary Diagonal:" << secondary << endl; 
} 
int main() 
{
    int numbers[3][3],n,i,j;
    cout << "Enter 9 numbers: " << endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cin >> numbers[i][j];
        }
    }
    cout << "The numbers are: " << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j) 
        {
         cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] <<endl;
        }
    }
    for (i = 0; i < 3; i++) 
		for (j = 0; j < 3; j++) 
	  row_sum(numbers); 
	  column_sum(numbers); 
    printDiagonalSums(numbers); 
	  return 0; 
}
    
