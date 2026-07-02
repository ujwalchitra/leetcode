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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        vector<int> v;
        if(head==NULL){
            return NULL;
        }
        while (curr != NULL) {
            v.push_back(curr->val);
            curr = curr->next;
        }
        for (int i = 1; i < v.size(); i = i + 2) {
                swap(v[i], v[i - 1]);
            
        }
        ListNode* a = new ListNode(v[0]);
        ListNode* b = a;
        for (int i = 1; i < v.size(); i++) {
            a->next = new ListNode(v[i]);
            a = a->next;
        }
        a = b;
        return b;
    }
};