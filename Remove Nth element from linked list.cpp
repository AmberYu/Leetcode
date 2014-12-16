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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode dummy(-1);
        dummy.next=head;
        
        ListNode *p1=&dummy,*p2=dummy;
        for (int i=0; i<n; i++) {
            p1=p1->next;
        }
        while (p1->next) {
            p1=p1->next;
            p2=p2->next;
        }
        ListNode *temp = p2->next;
        p2->next = temp->next;
        delete temp;
        return dummy.next;
    }
};

