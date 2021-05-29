//
//  TestFunctionOtherTemplate.h
//  confuse_test
//
//  Created by yjs on 2020/10/8.
//  Copyright © 2020 coding520. All rights reserved.
//

// __SAVE__、__M_A_C_R_O__
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TestFunctionOtherTemplate : NSObject

+ (void)blockSmart:(id)formatStr,...;

@end


@interface TestFunctionOtherTemplateLabel : UILabel

- (instancetype) init: (NSString *)clientId
            channelId: (NSString *)channelId
            clientKey: (NSString *)clientKey;
@end

NS_ASSUME_NONNULL_END
