#include<bits/stdc++.h>
using namespace std;

class Student{
    int student_rollno;
    string branch;
    string name;


    public:
    void getdetails(){
        cout<<"Enter the roll number : ";
        cin>>student_rollno;
        cout<<"Enter the name of Student : ";
        cin>>name;
    }
    void write_to_file(){
        
        fstream new_file;
        new_file.open("20BDA.txt", ios::app);
        new_file<< "Student Name : "<<name;
        new_file<<endl;
        new_file<<"Student Roll NO : "<<student_rollno;
        new_file<<endl;
        new_file<<"----------------------------------------------";
        new_file<<endl;

    }
};
 void display(){
     cout<<"1. Add Student"<<endl;
    cout<<"2. Exit"<<endl;
 }
int main(){

 display();
 int num=1;
while(num!=2){
 Student student;
 student.getdetails();
 student.write_to_file();
 display();
 cout<<"Run again ??  "<<endl;
 cin>>num;
}

 
}