//
// Created by 张飞 on 2020/8/29.
//

#ifndef MYPROJECT_STUDENT_H
#define MYPROJECT_STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string &name, int age);

    int getAge();

    std::string getName();

private:
    int mAge;
    std::string mName;
};

#endif //MYPROJECT_STUDENT_H
