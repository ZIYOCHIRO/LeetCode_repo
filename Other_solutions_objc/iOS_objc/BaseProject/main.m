//
//  main.m
//  BaseProject
//
//  Created by RuiSalli on 22/4/2023.
//

#import <Foundation/Foundation.h>
#import "ReverseString.h"
#import "ReverseList.h"
#import "MergeTwoSortedArray.h"
#import "HashFind.h"
#import "FindMedian.h"
#import "BubbleSort.h"
#import "SelectionSort.h"
#import "InsertSort.h"
#import "RomanNumeral.h"
#import "FindSum.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");

        
        // 1.字符串反转
        printf("-----1-----\n");
        char ch_1[] = "hello,world";
        char_reverse(ch_1);
        printf("reverse string is %s \n", ch_1);
        NSString *str_1 = @"hello,world";
        NSLog(@"reverse string is %@.", [ReverseString reverseString:str_1]);
        
        // 2.链表反转
        printf("-----2-----\n");
        struct Node *head = constructList();
        printList(head);
        struct Node *reversedHead = reverseList(head);
        printList(reversedHead);
        
        // 3.两个有序数组合并
        printf("-----3-----\n");
        int a[5] = {1, 4, 6, 7, 9};
        int b[8] = {2, 3, 5, 6, 8, 10, 11, 12};
        int result[13];
        mergeTwoSortedArray(a, 5, b, 8, result);
        for (int i = 0; i < 13; i++) {
            printf("%d \n", result[i]);
        }
        
        // 4.hash查找第一个只出现一次的字符
        printf("-----4-----\n");
        char *cha = "abaccdeff";
        char find = findFirstChar(cha);
        printf("first char is %c \n", find);
        
        // 5.快排思想查找无序数组中位数
        printf("-------5------\n");
        int list[9] = {12,3,10,8,6,7,11,13,9};
        int median = findMedian(list, 9);
        printf("median is %d \n", median);
        
        
        // 6.冒泡排序
        printf("------6------\n");
        int arr[] = {3,1,7,2,4,6,5};
        bubbleSort(arr, 7);
        for (int i = 0; i < 7; i++) {
            printf("%d \n", arr[i]);
        }
        NSArray *array_6 = @[@"3",@"1",@"7",@"2",@"4",@"6",@"5"];
        NSArray *result_6 = [BubbleSort bubbleSort:array_6];
        NSLog(@"%@", result_6);
        
        
        // 7.选择排序
        printf("------7------\n");
        int arrSel[] = {3,1,7,2,4,6,5};
        selectinoSort(arrSel, 7);
        for (int i = 0; i < 7; i++) {
            printf("%d \n", arrSel[i]);
        }
        
        // 8.插入排序
        printf("------8------\n");
        int arrInsert[] = {3,1,7,2,4,6,5};
        insertSort(arrInsert, 7);
        for (int i = 0; i < 7; i++) {
            printf("%d \n", arrInsert[i]);
        }
        
        
        // 9.罗马转数字
        printf("------9------\n");
        //char str[] = "MCMLIV";// 1954
        //char str[] = "MCMXC"; //1990
        char ch_9[] = "MMXIV"; //2014
        int number = romanNumeralsToNumber(ch_9);
        printf("%d \n", number);
        
        NSString *str_9 = @"MMXIV";
        int number_9_1 = [RomanNumeral romanNumeralsToNumber:str_9];
        NSLog(@"%i", number_9_1);
        
        
        //test
        NSString *string1 = @"Hello";
        NSString *string2 = [NSString stringWithFormat:@"Hello"];
        NSString *string3 = [NSString stringWithFormat:@"HelloWorld"];
        NSLog(@"%@ %@ %@", string1.class, string2.class, string3.class);
        
        // findsum
        NSArray *array = @[@1, @7, @3, @2, @5, @6, @4];
        int sum = 6;
        [FindSum FindSum:array sum:sum];
        [FindSum FindSum_1:array sum:sum];
        
        
    }
    return 0;
}
