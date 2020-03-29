//
//  student.cpp
//  C++作业
//
//  Created by 李苹果 on 2020/3/23.
//  Copyright © 2020 李苹果. All rights reserved.
//
#include "student.hpp"
#include<iostream>
#include<string>
using namespace std;
Student::Student():id_(0),name_(0){
    
}
Student::Student(int New_id,string New_name,string course[],double grade[]):id_(New_id),name_(New_name){
    for(int i=0;i<maxCourses;i++){
        courseNames_[i]=course[i];//在main中添加科目和分数的数组便于批量构造学生
        grades_[i]=grade[i];
    }
}
Student::Student(const Student&stu):id_(stu.id_),name_(stu.name_){
    for(int i=0;i<maxCourses;i++){
        courseNames_[i]=stu.courseNames_[i];
    }
    for(int i=0;i<maxCourses;i++){
        grades_[i]=stu.grades_[i];
    }
}
void Student::setid(){
    cout<<"please print a new id:"<<endl;
    cin>>id_;
}
int Student::getid() const{
    return id_;
}
void Student::setname(){
    cout<<"please print a new name:"<<endl;
    cin>>name_;
}
string Student::getname() const{
    return name_;
}
bool Student::AddCourse(const string &courseName, double grade){
    int  flag=0;
    for(int i=0;i<maxCourses;i++){
        if(grades_[i]==0.0){
            courseNames_[i]=courseName;
            grades_[i]=grade;
            flag=1;
        }
        else continue;
    }
    return (flag);
}
void Student::SetGrade(const string &coursename,double grade){
    for(int j=0;j<maxCourses;j++){
        if(courseNames_[j]==coursename)
            grades_[j]=grade;
    }
}
double Student::GetGrade(const string&coursename) const{
    int flag=0,j=0;
    for(j=0;j<maxCourses;++j){
        if(courseNames_[j]==coursename){
            flag=1;
            break;
        }
        else continue;
    }
    if(flag) return (grades_[j]);
    else return 0.0;
}
double Student::GetAverageGrade() const{
    double average=0;
    for(int i=0;i<maxCourses;i++){
        average+=grades_[i];
    }
    return (average/3.0);
}
void Student::ShowGrades() const{
    for(int i=0;i<maxCourses;i++){
        cout<<courseNames_[i]<<' '<<grades_[i]<<endl;
    }
}

