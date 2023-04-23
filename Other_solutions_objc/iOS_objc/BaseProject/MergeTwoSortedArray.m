//
//  MergeTwoSortedArray.m
//  BaseProject
//
//  Created by RuiSalli on 22/4/2023.
//

#import "MergeTwoSortedArray.h"

@implementation MergeTwoSortedArray
void mergeTwoSortedArray(int a[], int aLen, int b[], int bLen, int result[]) {
    int p = 0; //遍历a数组的指针
    int q = 0; //遍历b数组的指针
    int i = 0; //result数组的索引
    
    // 任一数组没有到达边界则两个数组同时遍历
    while (p < aLen && q < bLen) {
        // 如果 a 的值大于 b，则向后移动 a 的指针
        if (a[p] < b[q]) {
            result[i] = a[p];
            p++;
        } else {
            result[i] = b[q];
            q++;
        }
        
        i++;
    }
    
    while (p < aLen) {
        result[i] = a[p];
        p++;
        i++;
    }
    
    while (q < bLen) {
        result[i] = b[q];
        q++;
        i++;
        
    }
}
@end
