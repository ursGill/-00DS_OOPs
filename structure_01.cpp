#include<iostream>
using namespace std;

struct Students{
    string name;
    int roll_no;
    float marks;
    void display(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Roll NO: "<<roll_no<<endl;
        cout<<"Student Marks: "<<marks<<endl;
    }
};
int main(){

    Students s1;
    s1.name = "Gopi";
    s1.roll_no = 21;
    s1.marks = 9.7;
    s1.display();

    return 0;
}