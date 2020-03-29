//
//  student_class.cpp
//  C++作业
//
//  Created by 李苹果 on 2020/3/24.
//  Copyright © 2020 李苹果. All rights reserved.
//
#include "student_class.hpp"
#include<iostream>
#include<string>
using namespace std;
int StudentClass::studentCount_=0;
StudentClass::StudentClass(string New_code):code_(New_code){
    Student*stu[maxStudents_];//提供足够的Student类对象初始化成员指针
    for(int i=0;i<maxStudents_;i++){
        students_[i]=stu[i];
    }
}
StudentClass::StudentClass(const StudentClass&stu){
    code_=stu.code_;
    for(int i=0;i<maxStudents_;i++){
        students_[i]=stu.students_[i];
    }
}
void StudentClass::setcode(){
    cin>>code_;
}
string StudentClass::getcode() const{
    return code_;
}
bool StudentClass::AddStudent(Student*student){
    students_[studentCount_]=student;
    students_[studentCount_]->setid();//调用友元类的成员函数;
    students_[studentCount_]->setname();
    int i;
    for(i=0;i<Student::maxCourses;i++){
        cin>>students_[studentCount_]->courseNames_[i]>>students_[studentCount_]->grades_[i];
    }//添加学生的同时输入各个科目分数；
    studentCount_++;
    return (i<=2);
}
void StudentClass::ShowStudent(int id) const{
    for(auto stu:students_){
        if(stu->id_==id){
            cout<<stu->name_<<endl;
            stu->ShowGrades();//调用student类的成员函数输出分数
        }
    }
}
void StudentClass::ShowStudentByOder(bool (*compare)(int, int)){//选择排序
    int smallorlarge;
    for(int i=0;i<studentCount_-1;i++){
        smallorlarge=i;
        for(int j=i+1;j<studentCount_;j++){
            if(!(*compare)(students_[smallorlarge]->id_,students_[j]->id_))
                smallorlarge=j;
        }
        if(smallorlarge!=i) swap(smallorlarge, i);
    }
}
void StudentClass::ShowStudentCount(){
    cout<<"count:"<<studentCount_<<endl;
}



