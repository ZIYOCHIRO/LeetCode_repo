//
//  BubbleSort.m
//  BaseProject
//
//  Created by RuiSalli on 23/4/2023.
//

#import "BubbleSort.h"

@implementation BubbleSort
/*
 冒泡排序
 1.每次比较当前和下一个的值大小，然后交换，第一轮结束之后，最大的值一定在最后一个
 2.下一轮开始0...n-1的比较
 */
void bubble(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
}

void bubbleSort(int a[], int aLen) {
//    bubble(a, aLen);
//    bubble(a, aLen-1);
//    bubble(a, aLen-2);
//    ...
//    bubble(a, 1)
    for (int i = aLen; i >= 1; i--) {
        bubble(a, i);
    }
}

+(NSArray *)bubbleSort:(NSArray *)array {
    NSMutableArray *resultArray = [NSMutableArray arrayWithArray:array];
    for (int i = array.count; i >= 1; i--) {
        for (int j = 0; j < i-1; j++) {
            if ([resultArray[j] intValue] > [resultArray[j+1] intValue]) {
                int temp = [resultArray[j] intValue];
                resultArray[j] = resultArray[j+1];
                resultArray[j+1] = [NSNumber numberWithInt:temp];
            }
        }
    }
    
    return resultArray;
}


@end
