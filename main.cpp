#include <iostream>
using namespace std;

class Student {

    int roll;
    string name;
    int mathMarks;
    int chemistryMarks;
    int physicsMarks;

public:
Student(int r, string n, int m, int p, int c) {
    roll = r;
    name = n;
    mathMarks = m;
    chemistryMarks = c;
    physicsMarks = p;
}

int total() {
    return (mathMarks + chemistryMarks + physicsMarks);
}

char grade() {
    float average = total()/3;

    if(average > 60) {
        return 'A';
    } else if(average >=40 && average < 60) {
        return 'B';
    } else {
        return 'C';
    }
}
};


int main() {

    int roll;
    string name;
    int m,p,c;
    std::cout<<"Enter roll number of a student"<<"\n";
    std::cin>>roll;
    std::cout<<"Enter name of a student"<<"\n";
    cin>>name;
    std::cout<<"Enter marks in three subjects"<<"\n";
    std::cin>>m>>p>>c;

    Student s (0ll,name,m,p,c);
    std::cout<<"Total Marks:"<<s.total()<<"\n";
    std::cout<<"Grade of Student:"<<s.grade()<<"\n";

    return 0;
}