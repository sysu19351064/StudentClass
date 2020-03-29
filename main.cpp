//
//  main.cpp
//  C++作业
//
//  Created by 李苹果 on 2020/3/27.
//  Copyright © 2020 李苹果. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "student.hpp"
#include "student_class.hpp"
using namespace std;
int main(){
    cout<<"class student example:"<<endl;
    string course[]={"Robotics","C++","Math"};
    double grade[]={0.0,0.0,0.0};
    Student stu1(19351001,"Bob",course,grade);
    Student stu2(19351002,"John",course,grade);
    Student stu3(19351003,"Alice",course,grade);
    cout<<"set&get_id example:"<<endl;
    stu1.setid();
    cout<<stu1.getid()<<endl;
    cout<<"set&get_name example:"<<endl;
    stu1.setname();
    cout<<stu1.getname()<<endl;
    cout<<"set&get_grade example:"<<endl;
    stu1.SetGrade("Robotics", 92);
    cout<<stu1.GetGrade("Robotics")<<endl;
    cout<<"average example:"<<endl;
    cout<<stu1.GetAverageGrade()<<endl;
    cout<<"show grade example:"<<endl;
    stu1.ShowGrades();
    cout<<"class Studentclass example:"<<endl;
    StudentClass stucls("sysu1935");
    Student*stu=&stu1;
    stucls.AddStudent(stu);
    stucls.ShowStudent(19351001);
    stucls.ShowStudent(19351002);
    stucls.ShowStudent(19351003);
    stucls.ShowStudentCount();
    bool ascending(int a,int b);
    bool descending(int a,int b);
    stucls.ShowStudentByOder(ascending);
}
bool ascending(int a,int b){
    return a<b;
}
bool descending(int a,int b){
    return a>b;
}
