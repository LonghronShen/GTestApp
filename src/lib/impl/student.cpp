#include <string>

#include <student.h>

Student::Student(const std::string &name, int age) {
  this->_age = age;
  this->_name = name;
}

std::string Student::getName() { return this->_name; }

int Student::getAge() { return this->_age; }