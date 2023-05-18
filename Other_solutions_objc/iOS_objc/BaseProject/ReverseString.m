//
//  ReverseString.m
//  BaseProject
//
//  Created by RuiSalli on 22/4/2023.
//

#import "ReverseString.h"

@implementation ReverseString
void char_reverse(char str[]) {
    int strLength = strlen(str);
    int i = 0;
    int j = strLength - 1;
    while (i <= j) {
        //交换i 和 j的值，同时向中间移动
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}


+(NSString *)reverseString:(NSString *)str {
    NSString *result = @"";
    for (NSInteger i = str.length - 1; i >= 0; i--) {
        NSString *currentStr = [str substringWithRange:NSMakeRange(i, 1)];
        result = [result stringByAppendingString:currentStr];
    }
    
    return result;
}
@end
