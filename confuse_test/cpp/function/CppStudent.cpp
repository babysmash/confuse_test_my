//
//  CppStudent.cpp
//  ipa
//
//  Created by yjs on 2020/2/6.
//  Copyright © 2020 yjs. All rights reserved.
//

// __SAVE__、__M_A_C_R_O__
#import "CppStudent.h"

CppStudent::CppStudent() {
    name = "测试_test_cpp_name";
    m_age = 0;
    m_score = 0.0;
    printf("%s\n", __FUNCTION__);
}

CppStudent::CppStudent(string name, int age, float score) {
    this->name = name;
    m_age = age;
    m_score = score;
    m_total++;
    printf("%s\n", __FUNCTION__);
}
void CppStudent::setname(string name) {
    name = name;
    printf("%s\n", __FUNCTION__);
}
void CppStudent::setage(int age) {
    m_age = age;
    printf("%s\n", __FUNCTION__);
}
void CppStudent::setscore(float score) {
    m_score = score;
    printf("%s\n", __FUNCTION__);
}
string CppStudent::show() {
    string s1(5, '1');
    string s2 = "second ";
    const char* s3 = "third ";
    char s4[] = "fourth ";
    char s5[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    static string s6 = "static";
    cout << s1 + s2 + s3 + s4 + s5 << endl;
    printf("%s\n", __FUNCTION__); return __FUNCTION__;
}
