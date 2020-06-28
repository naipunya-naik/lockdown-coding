#include <iostream>
using namespace std;
#define MAX 100
class student
{
private:
        int   USN;
        char  name[50];
public:
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
        void putDetails(void);
};
//member function definition, outside of the class
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter USN: ";
    cin >> USN;
}
//member function definition, outside of the class
void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",USN:" << USN;
}
int main()
{
    student std[MAX];      
    int n,l;
    cout << "Enter total number of students: ";
    cin >> n;
    for(l=0;l< n; l++){
        cout << "Enter details of student:- " << l+1 << ":\n";
        std[l].getDetails();
    }
    cout << endl;
    for(l=0;l< n; l++)
    {
        cout << "Details of student:- " << (l+1) << ":\n";
        std[l].putDetails();
    }
    return 0;
}
