//
//  HashFind.m
//  BaseProject
//
//  Created by RuiSalli on 22/4/2023.
//

#import "HashFind.h"

@implementation HashFind
char findFirstChar(char* cha){
    char result = '\0'; // 初始值是\0，也是是空字符
    char *p = cha;
    int occurTime[256];
    
    // 对数组进行初始化操作
    for (int i = 0; i < 256; i++) {
        occurTime[i] = 0;
    }
    //以每个字母的ascii值作为数组下标，遍历字符串，将数组对应的元素count值+1
    while (*p != '\0') {
        occurTime[*p]++;
        p++;
    }
    //重新遍历cha的每个字母，然后去数组中查找是否对应出现的次数是1
    p = cha;
    while (*p != '\0') {
        if (occurTime[*p] == 1) {
            result = *p;
            break;
        }
        p++;
    }
    return result;
}
@end
