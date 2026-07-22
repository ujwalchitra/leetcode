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
    bool hasCycle(ListNode *head) {
        ListNode* curr=head;
        ListNode* durr=head;
        if(head==NULL||head->next==NULL){
            return false;
        }

        while(durr!=NULL&&durr->next!=NULL){
            curr=curr->next;
            durr=durr->next->next;
            if(curr==durr){
                return true;
                break;
            }
        }
        return false;
    }
};