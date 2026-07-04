#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct  {
  char name[50];
  int age;
  float gpa;
  bool isFullTime;
}Student;

void printStudent(Student student);

int main() {
  Student student1 = {0};

  //Assigning values to the instance of the struct
  strcpy(student1.name, "John");
  student1.age = 18;
  student1.gpa = 3.5;
  student1.isFullTime = true;

  printStudent(student1);

  return 0;
}

void printStudent(Student student) {
  printf("%s\n", student.name);
  printf("%d\n", student.age);
  printf("%.1f\n", student.gpa);
  printf("%s\n", (student.isFullTime) ? "Yes" : "No");
  printf("\n");
}