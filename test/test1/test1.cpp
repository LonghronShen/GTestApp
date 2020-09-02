#include <gtest/gtest.h>
#include <student.h>

TEST(test1, getAge) {
  Student student("Joel", 21);
  ASSERT_TRUE(student.getAge() == 21) << "age is not 16";
}

TEST(test1, getName) {
  Student student("Joel", 21);
  ASSERT_EQ(student.getName(), "Joel") << "name is not Joel";
}
