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
    ListNode *swapPairs(ListNode *head) {
        ListNode dummy(-1);
        if (head == NULL || head->next == NULL) {
            return head;
        }
        dummy.next = head;
        ListNode *preNode;
        ListNode *currNode;
        ListNode *nextNode;
        for (preNode = &dummy,currNode= preNode->next,nextNode= currNode->next; nextNode; preNode = currNode,currNode = currNode->next, nextNode = currNode->next) {
            preNode->next = nextNode;
            currNode->next = nextNode->next;
            nextNode->next = currNode;
        }
        return dummy.head;
    }
};