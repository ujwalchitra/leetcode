/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* curr = head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
         ListNode* ch=dummy;
        for(int i=0;i<left-1;i++){
            curr=curr->next;
            ch=ch->next;
        }
        ListNode* end=curr;
        ListNode* prev=NULL;
        for(int i=0;i<right-left+1;i++){
            ListNode* c=curr->next;
            curr->next=prev;
            prev=curr;
            curr=c;
        }
        end->next=curr;
        ch->next=prev;
        return dummy->next;
    }
};