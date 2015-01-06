//
//  LRBUtil.h
//  LRBTravel
//
//  Created by mq on 14/10/30.
//  Copyright (c) 2014年 mqq.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface LRBUtil : NSObject

+(void)drawCircleImage:(UIImageView *) imageView;
+(void)makePhoneCall:(NSString *)phoneNumber;
+(UIImage*)fullScreenShots;
+(void)requestImagePrefix;
+(NSString *)imageProfix;
+ (NSString*)intervalSinceNow:(NSString*)theDate;

@end

@interface NSDictionary(usrinfo)
-(id)objectForKeyNotNSNULL:(id)aKey;


@end
