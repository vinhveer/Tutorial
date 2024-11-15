//
// Created by Nguyen Phuong Vi on 15/11/2024.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student {
private:
    int id;
    std::string name;
    double score;

public:
    Student();

    Student(int id, const std::string& name, int score);

    void displayInfo() const;

    double getScore() const;
};

#endif //STUDENT_H
