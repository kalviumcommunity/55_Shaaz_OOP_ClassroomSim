#include <iostream>
using namespace std;

class Teacher {
    public:
        string name;
        string classTeacherOf;
        string subject;
        int salary;

        static int totalTeachers;

        Teacher(string n, string c, string sub, int s) {
            this->name = n;
            this->classTeacherOf = c;
            this->subject = sub;
            this->salary = s;
            totalTeachers++;
        }

        void displayInfo() {
            cout << "Name - " << this->name << endl;
            cout << "Class Teacher of - " << this->classTeacherOf << endl;
            cout << "Subject - " << this->subject << endl;
            cout << "Salary - " << this->salary << endl << endl;
        }

        int increment(int num) {
            this->salary += num;
            return this->salary;
        }

        static int getTotal(){
            return totalTeachers;
        }
};

class Student {
    public:
        string name;
        string className;
        int attendance;
        int score;

        static int totalStudents;

        Student(string n, string c, int a, int s) {
            this->name = n;
            this->className = c;
            this->attendance = a;
            this->score = s;
            totalStudents++;
        }

        void displayInfo() {
            cout << "Name - " << this->name << endl;
            cout << "Class - " << this->className << endl;
            cout << "Attendance - " << this->attendance << endl;
            cout << "Score - " << this->score << endl << endl;
        }

        int increaseScore(int num) {
            this->score += num;
            return this->score;
        }

        static int getTotal(){
            return totalStudents;
        }
};

int Teacher::totalTeachers = 0;
int Student::totalStudents = 0;

int main() {

    Teacher* teachers[4];

    teachers[0]  = new Teacher("Shaaz Jiwani","9th C","Computer Science",30000);
    teachers[1]  = new Teacher("Om Jadhav","4th B","Marathi",100);
    teachers[2]  = new Teacher("Divyam Prabhu Desai","9th A","Football",20000);
    teachers[3]  = new Teacher("Ayman Velani","9th B","English",25000);

    for(int i = 0; i < 4; i++) {
        teachers[i]->displayInfo();
    }

    Student* students[4];

    students[0] = new Student("Rushikesh Zope","9th B",92,68);
    students[1] = new Student("Parth Shah","10th A",99,90);
    students[2] = new Student("Ayush Tiwari","9th C",83,66);
    students[3] = new Student("Shreya Pawar","9th A",50,88);

    for(int i = 0; i < 4; i++) {
        students[i]->displayInfo();
    }

    teachers[0]->increment(3333);
    teachers[0]->displayInfo();

    students[0]->increaseScore(10);
    students[0]->displayInfo();

    cout << "Total Teachers: " << Teacher::getTotal() << endl;
    cout << "Total Students: " << Student::getTotal() << endl << endl;

    for(int i = 0; i < 4; i++){
        delete teachers[i];
        delete students[i];
    }

    return 0;
}
