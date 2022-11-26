#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
public:
    int id;
    double cgpa;
    void display()
    {
        cout << id << endl << cgpa << endl;
    }

    void setValue(int x,double y)
    {
        id = x;
        cgpa = y;
    }
};

int main()
{
    Student Alim, Suborna;
    Alim.setValue(101,3.44);
    Alim.display();

    Suborna.setValue(102,3.92);
    Suborna.display();
    getch();
} 