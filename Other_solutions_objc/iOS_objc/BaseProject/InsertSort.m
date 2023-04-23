//
//  InsertSort.m
//  BaseProject
//
//  Created by RuiSalli on 23/4/2023.
//

#import "InsertSort.h"

@implementation InsertSort

void partSort(int a[], int n) {
    //将最后一个没有排序好的，放在前面已经排序好的数组中
    int key = a[n];
    int i = n;
    while (key < a[i-1]) {
        a[i] = a[i-1];
        i--;
        if (i == 0) {
            break;
        }
    }
    a[i] = key;
}
void insertSort(int a[], int aLen) {
//    partSort(a,1);
//    partSort(a,2);
//    ...
//    partSort(a, aLen-1);
    for (int i = 1; i < aLen; i++) {
        partSort(a, i);
    }
}
@end
