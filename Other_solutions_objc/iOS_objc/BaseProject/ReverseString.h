//
//  ReverseString.h
//  BaseProject
//
//  Created by RuiSalli on 22/4/2023.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ReverseString : NSObject

// 字符串反转
void char_reverse(char str[]);
+(NSString *)reverseString:(NSString *)str;
@end

NS_ASSUME_NONNULL_END
