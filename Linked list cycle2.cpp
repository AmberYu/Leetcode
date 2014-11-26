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
    bool *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *slow2=head;
        
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                while (slow!=slow2) {
                    slow2=slow2->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};