//
//  student_class.hpp
//  C++作业
//
//  Created by 李苹果 on 2020/3/24.
//  Copyright © 2020 李苹果. All rights reserved.
//
#include"student.hpp"//包含友元类的头文件
#ifndef student_class_hpp
#define student_class_hpp
#include <stdio.h>
#include<string>
class Student;
class StudentClass{
    static const int maxStudents_ =20;
    static int studentCount_;
    std::string code_;
    Student *students_[maxStudents_];
public:
    StudentClass();
    StudentClass(std::string New_code);
    StudentClass(const StudentClass&stu);
    ~StudentClass(){
        
    }
    void setcode();
    std::string getcode() const;
    bool AddStudent(Student*student);
    void ShowStudent(int id) const;
    void ShowStudentByOder(bool(*compare)(int,int));
    static void ShowStudentCount();
};
#endif /* student_class_hpp */
