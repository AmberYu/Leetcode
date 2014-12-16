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
    ListNode *deleteDuplicates(ListNode *head) {
        if (!head) {
            return head;
        }
        
        ListNode dummy(head->val+1);
        dummy.next=head;
        
        ListNode *p1=&dummy;
        while (p1->next) {
            ListNode *p2=p1->next;
            if (p1->val == p2->val) {
                p1->next=p2->next;
                delete p2;
            }
            else p1=p1->next;
        }
        return dummy.next;
    }
};

if(!head)
return head;

ListNode *pNode=head;
ListNode *pNext = pNode->next;
while(pNext)
{
    
    if(pNext->val == pNode->val)
    {
        pNode->next = pNext->next;
        delete pNext;
    }
    else
        pNode=pNode->next;
        pNext = pNode->next;
        }
return head;

