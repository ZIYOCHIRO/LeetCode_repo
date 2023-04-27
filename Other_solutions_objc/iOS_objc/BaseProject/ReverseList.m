//
//  ReverseList.m
//  BaseProject
//
//  Created by RuiSalli on 22/4/2023.
//

#import "ReverseList.h"

@implementation ReverseList
//链表反转
struct Node* reverseList(struct Node *head) {
    struct Node *newHead = NULL; // 反转后的链表头部
    struct Node *p = head; // 遍历指针，初始化为原始链表的头节点
    while (p != NULL) {
        //记录p的值
        struct Node *temp = p;
        // 移动p指针
        p = p->next;
        // temp的next节点指向新的头节点
        temp->next = newHead;
        // 更新链表头节点的值
        newHead = temp;
    }
    
    return newHead;
}

//构造一个链表
struct Node* constructList(void) {
    // 头节点
    struct Node *head = NULL;
    // 尾节点
    struct Node *cur = NULL;
    
    for (int i = 1; i <= 4; i++) {
        struct Node *node = malloc(sizeof(struct Node));
        node->data = i;
        
        // 头节点为空，当前节点即为头节点
        if (head == NULL) {
            head = node;
        } else {
            //当前节点的next为新节点
            cur->next = node;
        }
        //设置当前节点为新节点
        cur = node;
    }
    
    return head;
}

//打印链表中的数据
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("node is %d \n", temp->data);
        temp = temp->next;
    }
}
@end
