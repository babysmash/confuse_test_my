//
//  CppBase.hpp
//  confuse_test
//
//  Created by yjs on 2020/11/10.
//  Copyright © 2020 coding520. All rights reserved.
//

// __SAVE__、__M_A_C_R_O__
#import "CppHeader.h"

class CppBase {
private:
    char* m_name;
    void private_sf1();
    static void static_private_sf1();

protected:
    void protected_sf1();
    static void static_protected_sf1();

public:
    void sf1();
    void sf1(int);
    void sf1(int*);
    void sf1(int*, float);
    int sf1(int*, float*);
    int* sf1(int*, int*);
    static void static_sf1();
    char* sf3() const;

    static void test();
};
