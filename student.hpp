//
//  student.hpp
//  C++作业
//
//  Created by 李苹果 on 2020/3/23.
//  Copyright © 2020 李苹果. All rights reserved.
//

#ifndef student_hpp
#define student_hpp
#include <stdio.h>
#include<string>
class StudentClass;
class Student{
    static const int maxCourses=3;
private:
    friend class StudentClass;
    int id_;
    std::string name_;
    std::string courseNames_[maxCourses];
    double grades_[maxCourses];
public:
    Student();
    Student(int New_id,std::string New_name,std::string course[],double grade[]);
    Student(const Student&stu);
    ~Student(){
        
    }
    void setid();
    int getid() const;
    void setname();
    std::string getname() const;
    bool AddCourse(const std::string&courseName,double grade);
    void SetGrade(const std::string &coursename,double grade);
    double GetGrade(const std::string&coursename) const;
    double GetAverageGrade() const;
    void ShowGrades() const;
};
#endif /* student_hpp */
