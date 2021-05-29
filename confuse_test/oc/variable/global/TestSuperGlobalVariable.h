//
//  TestSuperGlobalVariable.h
//  confuse_test
//
//  Created by yjs on 2020/9/27.
//  Copyright © 2020 coding520. All rights reserved.
//

// __SAVE__、__M_A_C_R_O__
#import <UIKit/UIKit.h>

extern __attribute__((visibility ("default"))) NSString * const HWDownloadMaxConcurrentCountKey;
extern __attribute__((visibility ("default"))) NSString * const HWDownloadMaxConcurrentCountChangeNotification;

extern NSString* const kSuperGlobalVariable1;
extern NSString* const kSuperGlobalVariable1_1;
extern NSString* const kSuperGlobalVariable1_2;
extern NSInteger const kSuperGlobalVariable2;
extern NSString* kSuperGlobalVariable3;
NSString* kSuperGlobalVariable4(NSString* str);

NS_ASSUME_NONNULL_BEGIN

@interface TestSuperGlobalVariable : NSObject

@end

NS_ASSUME_NONNULL_END
