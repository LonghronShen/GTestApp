#ifndef D0E2B3E3_8145_4E86_BA75_7081163BD160
#define D0E2B3E3_8145_4E86_BA75_7081163BD160

#include <string>

class Student {
public:
  Student(const std::string &name, int age);

  int getAge();

  std::string getName();

private:
  int _age;
  std::string _name;
};

#endif /* D0E2B3E3_8145_4E86_BA75_7081163BD160 */
