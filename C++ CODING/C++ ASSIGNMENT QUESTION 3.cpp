#include <iostream>
using namespace std;
struct Student
{
private:
        int USN;
        char name[50];
public:
        void read(void)
        {
            cout<<"Enter Student's name: ";
            cin>>name;
            cout<<"Enter USN: ";
            cin>>USN;
        }
        void print(void)
        {
            cout<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"USN: "<<USN<<endl;
        }
};
int main()
{
    struct Student std;
    int n,l,i;
    cout << "Enter total number of students: ";
    cin >> n;
    for(l=0;l< n; l++)
    {
        cout << "Enter details of student " << l+1 << ":\n";
        std.read();
     }
    cout << endl;
    for(i=0;i< n; i++)
    {
        cout << "Details of student " << (i+1) << ":\n";
        std.print();
    }
    return 0;
}
