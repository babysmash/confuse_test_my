//
//  TestColor.m
//  confuse_test
//
//  Created by ymac on 28/09/2020.
//  Copyright © 2020 coding520. All rights reserved.
//

// __SAVE__、__M_A_C_R_O__
#import "TestColor.h"

@implementation TestColor

- (IBAction)testColor:(id)sender {
    self.backgroundColor = [UIColor colorWithRed:234
                                           green:112
                                            blue:1
                                           alpha:1];

    self.backgroundColor = [UIColor colorWithRed :234 green:112 blue:1 alpha:1];
    self.backgroundColor = [UIColor colorWithRed:234 green:112 blue:1 alpha:1];
    self.backgroundColor = [UIColor colorWithWhite:21 alpha:1];[UIColor colorWithWhite:21 alpha:1];
    self.backgroundColor = [UIColor colorWithDisplayP3Red:23 green:21 blue:56 alpha:1];
    self.backgroundColor = [[UIColor alloc] initWithWhite:7 alpha:1];
    self.backgroundColor = [[UIColor alloc] initWithRed:43 green:98 blue:21 alpha:1];
    self.backgroundColor = [[UIColor alloc] initWithDisplayP3Red:87 green:34 blue:32 alpha:1];
    [self setColor];
}

- (void)setColor{
    self.backgroundColor = [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0];
    self.backgroundColor = [UIColor colorWithRed:((float)((0xF45B3C & 0xFF0000) >> 16))/255.0 green:((float)((0xF45B3C & 0xFF00) >> 8))/255.0 blue:((float)(0xF45B3C & 0xFF))/255.0 alpha:1.0];
    self.backgroundColor = [UIColor colorWithRed:12/255.0 green:34/255.0 blue:38/255.0 alpha:1];
}

@end
