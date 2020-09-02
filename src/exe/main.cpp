#include <iostream>

#include <student.h>

int main(int argc, char *argv[]) {
  std::cout << "Hello World!" << std::endl;

  Student student("Joel", 21);

  std::cout << "Name: " << student.getName() << "\r\n"
            << "Age: " << student.getAge() << "\r\n"
            << std::endl;

  return 0;
}
