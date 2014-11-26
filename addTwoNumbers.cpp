/*
 * Copyright (C) 2014 by The Regents of the University of California
 * Redistribution of this file is permitted under the terms of the GNU
 * Public License (GPL).
 *
 * @author Amber Yu <alice9112 AT g.ucla.edu>
 * @date 11/20/2014
 */
 
/* Definition for singly-linked list.
 struct ListNode {
 int val;
 ListNode *next;
 ListNode(int x) : val(x), next(NULL) {}
 };
 */
class Solution {
public:
     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
         ListNode* p1,p2;
         int count = 0;
         ListNode head(-1);
         ListNode* result=&head;
         for (p1=l1,p2=l2; p1||p2; p1=p1->next? NULL:p1->next,p2=p2->next? NULL:p2->next,result) {
             const int a = p1? 0:p1->val;
             const int b = p2? 0:p2->val;
             const int value = (a+b+count)%10;
             count = (a+b+count)/10;
             result->next = new ListNode(value);   //尾插法
         }
         if(count>0)
             result->next = new ListNode(count);
         return head.next;
     }
};