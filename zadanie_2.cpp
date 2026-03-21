#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    string surname;
    int age;
    string index;
    static vector<string> takenIndex;

public:
    Student(string name, string surname, int age, string index) {
        for (const string& idx : takenIndex) {
            if (idx == index) {
                throw runtime_error("zadzialalo takenIndex");
            }
        }
        this->name = name;
        this->surname = surname;
        this->index = index;
        SetAge(age);
    }

    ~Student() {
        cout << "Student deleted" << endl;
    }

    void SetAge(int newAge) {
        if (newAge >= 0 && newAge <= 120) {
            age = newAge;
        }
        else {
            age = 0;
        }
    }

    string toString() {
        return
            "Name: " + name + "\n" +
            "Surname: " + surname + "\n" +
            "Age: " + to_string(age) + "\n" +
            "Index: " + index;
    }
};

vector<string> Student::takenIndex;

int main() {
    Student u1("Ryszard", "Kowalski", 22, "gx123123");
    Student u2("Bartosz", "Konczakowski", 20, "gx94030");

    cout << u1.toString() << endl;
    cout << u2.toString() << endl;

    return 0;
}