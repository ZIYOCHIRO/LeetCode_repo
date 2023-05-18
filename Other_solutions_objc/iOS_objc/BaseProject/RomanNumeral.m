//
//  RomanNumeral.m
//  BaseProject
//
//  Created by RuiSalli on 24/4/2023.
//

#import "RomanNumeral.h"

@implementation RomanNumeral
/*
 罗马数字的规则
 1.几个相同的字母并排表示加法 III=I+I+I;
 2.最大的数字左边表示减，右边表示加 IMV = M-I+V；
 */
// 罗马转十进制数字

//罗马字符对应的数字
int romanToNumber(char cha) {
    char symbols[] = {'I','V','X','L','C','D','M'};
    int numbers[] = {1, 5, 10, 50, 100, 500, 1000};
    int result = 0;
    for (int i = 0; i < strlen(symbols); i++) {
        if (cha == symbols[i]) {
            result = numbers[i];
            return result;
        }
    }
    return result;
}

//字符串中最大数的索引
int maxNumberIndex(char str[], int L, int R) {
    int maxIndex = L;
    int maxNumber = romanToNumber(str[L]);
    for (int i = L+1; i <= R; i++) {
        int nextNumber = romanToNumber(str[i]);
        if (maxNumber < nextNumber) {
            maxNumber = nextNumber;
            maxIndex = i;
        }
    }
    return maxIndex;
}

int romanNumeralsToNumberFunc(char str[], int L, int R) {
    if (L == R) {
        return romanToNumber(str[L]);
    } else if (L > R) {
        return 0;
    } else {
        int maxIndex = maxNumberIndex(str, L, R);
        int maxNumber = romanToNumber(str[maxIndex]);
        int leftPartNumber = romanNumeralsToNumberFunc(str, L, maxIndex-1);
        int rightPartNumber = romanNumeralsToNumberFunc(str, maxIndex+1, R);
        return maxNumber + rightPartNumber - leftPartNumber;
    }
}

int romanNumeralsToNumber(char str[]) {
    int L = 0;
    int R = strlen(str) - 1;
    return romanNumeralsToNumberFunc(str, L, R);
}


+(int)romanNumeralsToNumber:(NSString *)str {
    // MCMLIV to array
    NSMutableArray *strArray = [NSMutableArray array];
    [str enumerateSubstringsInRange:NSMakeRange(0, str.length) options:NSStringEnumerationByComposedCharacterSequences usingBlock:^(NSString * _Nullable substring, NSRange substringRange, NSRange enclosingRange, BOOL * _Nonnull stop) {
            [strArray addObject:substring];
    }];
    int L = 0;
    int R = strArray.count - 1;
    
    return [RomanNumeral romanNumeralsToNumber:strArray leftInex:L rightIndex:R];
}

+(int)romanNumeralsToNumber:(NSArray *)strArray leftInex:(int)L rightIndex:(int)R {
    if (L == R) {
        return [RomanNumeral romanSymbolToNumber:strArray[L]];;
    } else if (L > R) {
        return 0;
    } else {
        // Find the max
        int maxIndex = [RomanNumeral findTheMaxIndex:strArray leftIndex:L rightIndex:R];
        int maxNumber = [RomanNumeral romanSymbolToNumber:strArray[maxIndex]];
        // max - leftPart + rightPart
        int leftPartNumber = [RomanNumeral romanNumeralsToNumber:strArray leftInex:L rightIndex:maxIndex - 1];
        int rightPartNumber = [RomanNumeral romanNumeralsToNumber:strArray leftInex:maxIndex + 1 rightIndex:R];
        return  maxNumber - leftPartNumber + rightPartNumber;
    }
    
}

+ (int)romanSymbolToNumber:(NSString *)symbol {
    NSDictionary *romanDic = @{@"I":@1,
                               @"V":@5,
                               @"X":@10,
                               @"L":@50,
                               @"C":@100,
                               @"D":@500,
                               @"M":@1000,
                               
    };
    if (romanDic[symbol] != nil) {
        return [romanDic[symbol] intValue];
    }
    return 0;
}

+ (int)findTheMaxIndex:(NSArray *)strArray leftIndex:(int)L rightIndex:(int)R {
    int maxNumber = [RomanNumeral romanSymbolToNumber:strArray[L]];
    int maxIndex = L;
    for (int i = L+1; i <= R; i++) {
        int nextNumber = [RomanNumeral romanSymbolToNumber:strArray[i]];
        if (nextNumber > maxNumber) {
            maxNumber = nextNumber;
            maxIndex = i;
        }
    }
    return maxIndex;
}

@end
