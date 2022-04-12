#include <basics.cpp>

struct course{
    string code;
    string name;
    unsigned short numberCredits;
    unsigned short cycle;
};

struct courseList{
    unsigned short numberCourses;
    unsigned short max;
    course *header;
};

struct student{
    string code;
    string names;
    string surnames;
    unsigned short age;
    string career;
    courseList *courses;
};

struct studentsList{
    unsigned short numberStudents;
    unsigned short max;
    student *header;
};

