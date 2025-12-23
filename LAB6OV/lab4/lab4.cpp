#include <iostream>
#include <string>
#include <iomanip>
#include <limits> 

using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    int size;


    for (int i = 0; true; i++) {
        cout << "Enter number of students: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cout << "Wrong input! Please enter a number more than 0.\n";
            cin.clear(); // ล้างสถานะ error
            // ล้างค่าที่ค้างใน buffer ทิ้งให้หมดจนถึงบรรทัดใหม่
            cin.ignore();
        }
        else {
            break; // ออกจาก loop
        }
    }

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    for (int i = 0; true; i++)
    {
        if (i >= size) {
            cout << "Maximum student limit reached.\n";
            break;
        }
        cout << "\n--- Student " << i + 1 << " ---" << endl;
        cout << "Enter name: ";

        getline(cin, name[i]);

        cout << "Enter id: ";
        cin >> id[i];

        cout << "Enter score: ";
        cin >> score[i];
        cin.ignore();

        calculateGrade(score[i], grade[i]);
    }

    cout << "\n================ RESULT ================\n";
    for (int i = 0; i < size; i++)
    {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
        cout << "----------------------------------------\n";
    }


    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}