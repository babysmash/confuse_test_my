//
//  CppStudent.h
//  ipa
//
//  Created by yjs on 2020/2/6.
//  Copyright © 2020 yjs. All rights reserved.
//

// __SAVE__、__M_A_C_R_O__
#import "CppHeader.h"

class CppStudent {
private:
    string name;
    int m_age;
    float m_score;
public:
    CppStudent();
    CppStudent(string name, int age, float score);
    void setname(string name);
    void setage(int age);
    void setscore(float score);
    string show();
    void say() {
        cout << "" << endl;
    }
public:
    static int m_total;
};
