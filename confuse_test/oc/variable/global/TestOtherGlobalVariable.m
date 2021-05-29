//
//  TestOtherGlobalVariable.m
//  confuse_test
//
//  Created by yjs on 2020/9/27.
//  Copyright © 2020 coding520. All rights reserved.
//

// __SAVE__、__M_A_C_R_O__
#import "TestOtherGlobalVariable.h"

@implementation TestOtherGlobalVariable

- (instancetype)init
{
    self = [super init];
    if (self) {
        [self test];
    }
    return self;
}

- (void)test {
    NSLog(@"%@",kSuperGlobalVariable1);
}

@end
