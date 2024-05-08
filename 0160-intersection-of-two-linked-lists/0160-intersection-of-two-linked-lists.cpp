/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr)return nullptr;
        ListNode * temp1 = headA;
        ListNode * temp2 = headB;
        while(temp1 != temp2){//if both are pointing to same node at starting --, don't need to do!

        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
  if(temp1 == temp2)return temp1;
        if(temp1 == nullptr)temp1 = headB;
        if(temp2 == nullptr)temp2 = headA;
      
 

        }

        return temp1;

    }
};