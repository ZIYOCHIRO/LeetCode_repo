//
//  string.m
//  BaseProject
//
//  Created by RuiSalli on 25/4/2023.
//

#import "TestString.h"

@implementation TestString
void swapStr(char *str, int L, int R) {
    char* begin = str + L;
    char* end = str + R;
    while (begin < end) {
        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

int test() {
    //char str[100];
    char str[] = "yM eman si boB.";
//    int L = 0;
//    int R = 0;
//    for (int i = 0; i < strlen(str); i++) {
//        if ( str[i] == ' ' || str[i] == '.' || str[i] == '?') {
//            R = i-1;
//            swapStr(str, L, R);
//            L = i+1;
//        }
//    }
//    printf("abcd%s", str);
    
    
    NSString *test = [NSString stringWithCString:str encoding:NSUTF8StringEncoding];
    NSString *res = test;
    const char *ress = [res cStringUsingEncoding:NSUTF8StringEncoding];
    int L = 0;
    int R = 0;
    for (int i = 0; i < test.length; i++) {
        if ([[test substringWithRange:NSMakeRange(i, 1)]  isEqual: @" "] ||
            [[test substringWithRange:NSMakeRange(i, 1)]  isEqual: @"."] ||
            [[test substringWithRange:NSMakeRange(i, 1)]  isEqual: @"?"]) {
            R = i-1;
            swapStr(ress, L, R);
            L = i+1;
        }
        
    }
    printf("abcd%s", str);
    
    return 0;
    
    
    
}



+ (NSString *)teststr:(NSString *)teststr {
    test();
    
    return @"";
}


@end
