#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
public:
    int id;
    double cgpa;
    void display(){
        cout << id << endl<< cgpa<<endl;
    };
};

int main()
{
    Student Alim,Suborna;
    Alim.id = 981;
    Alim.cgpa = 3.50;
    Alim.display();

    Suborna.id = 844;
    Suborna.cgpa = 3.60;
    Suborna.display();
    getch();
}