//
//  main.m
//  BaseProject
//
//  Created by RuiSalli on 22/4/2023.
//

#import <Foundation/Foundation.h>
#include <stdio.h>


// 计算16的几次方 16^0 = 1; 16^1 = 16; 16^2 = 16*16;
int my16Pow(int n) {
    if (n == 0) return 1; // 任何数的0次方等于1；
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= 16;
    }
    return result;
}




int main(int argc, const char * argv[]) {
    @autoreleasepool {
        char str[64], c;
        int len, i;
        long result, x;
        while (scanf("%s", str) != EOF) {
            if (str[0] == '0' && str[1] == 'x') {
                len = strlen(str);
                result = 0;
                x = 1;
                for (i = len - 1; i > 1; i--){
                    c = str[i];
                    if (c >= '0' && c <= '9') {
                        result += (c - '0') * x;
                    } else {
                        result += (c - 'A' + 10) * x;
                    }
                }
                x *= 16;
                
            }
            printf("%d\n", result);
        }
        
        
        
    }
    return 0;
}



