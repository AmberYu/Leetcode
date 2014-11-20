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
    ListNode *insertionSortList(ListNode *head) {
        ListNode *pTemp;
        ListNode *pNext;
        ListNode *currentNode = head;
        int count=0;
        while(currentNode!=NULL){
            count++;
            currentNode=currentNode->next;
        }
        if(count>0){
            for(int i=0;i<count-1;i++){
                currentNode = head;
                for(int j=0;j<count-1-i;j++)
                {
                    pNext = currentNode ->next;
                    if(pNext->val < currentNode->val){
                        pTemp->val = pNext->val;
                        pNext->val = currentNode->val;
                        currentNode->val = pTemp->val;
                    }
                    currentNode = currentNode->next;
                }
                
            }
        }
        
    }
};