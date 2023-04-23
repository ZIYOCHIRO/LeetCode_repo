//
//  SelectionSort.m
//  BaseProject
//
//  Created by RuiSalli on 23/4/2023.
//

#import "SelectionSort.h"

@implementation SelectionSort
void findMaxIndex(int a[], int n) {
    // 找出最大值，然后放在a[n]；
    int max = a[0]; //最大值
    int maxIndex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }
    int temp = a[n-1];
    a[n-1] = max;
    a[maxIndex] = temp;
    
}

void selectinoSort(int a[], int aLen) {
//    findMax(a, aLen);
//    findMax(a, aLen-1);
//    ...
//    findMax(a, 1);
    for (int i = aLen; i >=1; i--) {
        findMaxIndex(a, i);
    }
}
@end
