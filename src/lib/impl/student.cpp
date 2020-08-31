#include <string>

#include <student.h>

Student::Student(const std::string &name, int age) {
    mAge = age;
    mName = name;
}

std::string Student::getName() {
    return mName;
}

int Student::getAge() {
    return mAge;
}