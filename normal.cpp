#include<iostream>

int main()
{
  struct student
  {
    int roll_no;
    char name[30];
    int age;
    int marks;
  };
  struct student p1 = {1,"Brown",14,78};
  cout << p1.roll_no << " " << p1.name << " " << p1.age << " " << p1.marks << "\n";
  return 0;
}
 
