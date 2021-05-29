//
//  TestFont.m
//  confuse_test
//
//  Created by ymac on 27/09/2020.
//  Copyright © 2020 coding520. All rights reserved.
//

// __SAVE__、__M_A_C_R_O__
#import "TestFont.h"

@interface TestFont ()

@property (nonatomic,strong) UILabel *testLabel;

@end

@implementation TestFont

- (IBAction)testFont:(id)sender {
    [UIFont systemFontOfSize:11 weight:2];
    [UIFont systemFontOfSize:14];
    [UIFont systemFontOfSize:-1 + 14];
    [UIFont italicSystemFontOfSize:14];
    [UIFont boldSystemFontOfSize:13];
    [UIFont fontWithName:@"Helvetica-Oblique" size:11];
    if (@available(iOS 13.0, *)) {
        [UIFont monospacedSystemFontOfSize:13 weight:2];
    } else {
        // Fallback on earlier versions
    }
    [UIFont monospacedDigitSystemFontOfSize:14 weight:2];
    [self setWord];
}

- (void)setWord {
    self.testLabel.font = [UIFont systemFontOfSize :14];self.testLabel.font = [UIFont systemFontOfSize :18];
    self.testLabel.font = [UIFont systemFontOfSize
                           :13];
    self.testLabel.font = [UIFont systemFontOfSize :15];

    self.testLabel.font = [UIFont systemFontOfSize : 16];
    self.testLabel.font = [UIFont fontWithName:@"ArialMT" size:13];
    self.testLabel.font = [UIFont fontWithName:@"Arial-BoldMT" size:13];
    self.testLabel.font = [UIFont fontWithName:@"Helvetica-Oblique" size:13];
    self.testLabel.font = [UIFont fontWithName:@"Helvetica-BoldOblique" size:13];
}

@end
