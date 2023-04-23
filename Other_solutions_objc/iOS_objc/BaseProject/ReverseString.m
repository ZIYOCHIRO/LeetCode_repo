//
//  ReverseString.m
//  BaseProject
//
//  Created by RuiSalli on 22/4/2023.
//

#import "ReverseString.h"

@implementation ReverseString
void char_reverse(char *str) {
    char* begin = str; // 指向第一个字符
    char* end = str + strlen(str) - 1; // 指向最后一个字符
    while (begin < end) {
        // 交换begin和end的字符，同时移动指针
        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++; // begin指针往后移动一位
        end--; // end指针往前移动一位
    }
}
@end
