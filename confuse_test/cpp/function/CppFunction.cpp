//
//  CppFunction.cpp
//  confuse_test
//
//  Created by yjs on 2020/11/10.
//  Copyright © 2020 coding520. All rights reserved.
//

// __SAVE__、__M_A_C_R_O__
#import "CppFunction.h"

void CppFunction::private_f1() {
    printf("%s\n", __FUNCTION__);
}
void CppFunction::static_private_f1() {
    printf("%s\n", __FUNCTION__);
}

void CppFunction::protectedF1() {
    printf("%s\n", __FUNCTION__);
}
void CppFunction::static_protected_f1() {
    printf("%s\n", __FUNCTION__);
}

void CppFunction::functionChar(PCHAR str) {}

void CppFunction::swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void CppFunction::swap2(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void CppFunction::swap3(int& r1, int& r2) {
    int temp = r1;
    r1 = r2;
    r2 = temp;
}

void CppFunction::f1() {
    printf("%s\n", __FUNCTION__);
}

int& CppFunction::f3(int& a) {
    return a;
}

void CppFunction::f4() {}

void CppFunction::static_f1() {
    printf("%s\n", __FUNCTION__);
}
char* CppFunction::getname() const {
    return m_name;
}

void CppFunction::test() {
    CppFunction func;
    func.f1();
    func.f2();
    func.functionChar("1");
    func.swap1(1, 2);
    int a = 1;
    int b = 2;
    func.swap2(&a, &b);
    func.swap3(a, b);
    func.f3(a);
    func.f4();

    CppFunction funcs[ 10 ];
    funcs[ 0 ].f1();
    funcs[ 0 ].f2();

    CppFunction* p_func = &func;
    p_func->f1();
    p_func->f2();

    CppFunction* p_new_func = new CppFunction();
    p_new_func->f1();
    p_new_func->f2();
    delete p_new_func;
}

// MARK: - CppFunction2

void CppFunction2::f1() {
    printf("%s\n", __FUNCTION__);
}
void CppFunction2::static_f1() {
    printf("%s\n", __FUNCTION__);
}

void CppFunction2::test() {
    CppFunction2 func;
    func.f1();
    CppFunction2::static_f1();
    func.static_f1();
}

// MARK: - CppFunction3

void CppFunction3::f1() {
    printf("%s\n", __FUNCTION__);
}
void CppFunction3::sf1() {
    printf("%s\n", __FUNCTION__);
}

void CppFunction3::test() {
    CppFunction3 func;
    func.f1();
    func.sf1();
    func.CppBase::sf1();
}

// MARK: - CppFunction4

void CppFunction4::sf1() {
    printf("%s\n", __FUNCTION__);
}
void CppFunction4::sf1(int v) {
    printf("%s\n", __FUNCTION__);
}

void CppFunction4::test() {
    CppFunction4 func;
    func.sf1();
    func.sf1(1);
    func.CppBase::sf1();
}

// MARK: - CppFunction5
void CppFunction5::sf1(double v) {
    printf("%s\n", __FUNCTION__);
}
int CppFunction5::sf1(int v1, double v2) {
    printf("%s\n", __FUNCTION__); return v1;
}

void CppFunction5::test() {
    CppFunction5 func;
    func.sf1(0.1);
    func.sf1(1, 0.1);
    func.CppBase::sf1();
}

namespace custom {
    // MARK: - CppFunction5
    void CppFunction5::sf1(double v) {
        printf("%s\n", __FUNCTION__);
    }
    int CppFunction5::sf1(int v1, double v2) {
        printf("%s\n", __FUNCTION__); return v1;
    }

    void CppFunction5::test() {
        CppFunction5 func;
        func.sf1(0.1);
        func.sf1(1, 0.1);
        func.CppBase::sf1();
    }
} // namespace custom

void CppFunction6::f1(double v) {
    printf("%s\n", __FUNCTION__);
}

int CppFunction6::f1(int v1, double v2) {
    printf("%s\n", __FUNCTION__); return v1;
}

void CppFunction6::test() {
    CppFunction6 func;
    func.f1(0.1);
    func.f1(1, 0.1);
}
