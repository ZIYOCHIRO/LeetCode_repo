//
//  FindSum.m
//  BaseProject
//
//  Created by Rui Saoirse on 17/5/2023.
//

#import "FindSum.h"

@implementation FindSum

+ (void)FindSum:(NSArray *)array sum:(int)sum {
    int arrayCount = array.count;
    for (int i = 0; i < arrayCount; i++) {
        int a = [array[i] intValue];
        for (int j = i+1; j < arrayCount; j++) {
            int b = [array[j] intValue];
            int sumTemp = a + b;
            if (sumTemp == sum) {
                NSLog(@"find %i and %i == %i", a, b, sum);
            }
        }
    }
}

+ (void)FindSum_1:(NSArray *)array sum:(int)sum {

    NSArray *sortedArray = [array sortedArrayWithOptions:NSOrderedAscending usingComparator:^NSComparisonResult(id  _Nonnull obj1, id  _Nonnull obj2) {
        return obj1 < obj2;
    }];
    NSLog(@"sorted array is %@", sortedArray);
    int arrayCount = sortedArray.count;
    for (int i = 0; i < arrayCount; i++) {
        int a = [array[i] intValue];
        for (int j = i+1; j < arrayCount; j++) {
            int b = [array[j] intValue];
            int sumTemp = a + b;
            
            if (sumTemp > sum) {
                break;
            }
            if (sumTemp == sum) {
                NSLog(@"find %i and %i == %i", a, b, sum);
            }
        }
    }
    
}

+ (void)FindSum_2:(NSArray *)array sum:(int)sum {

    NSArray *sortedArray = [array sortedArrayWithOptions:NSOrderedAscending usingComparator:^NSComparisonResult(id  _Nonnull obj1, id  _Nonnull obj2) {
        return obj1 < obj2;
    }];
    NSLog(@"sorted array is %@", sortedArray);
    int arrayCount = sortedArray.count;
    for (int i = 0; i < arrayCount; i++) {
        int a = [array[i] intValue];
        int b = sum - a;
        // 在有序数组里面找到目标b，二分查找
    }
    
}
@end
