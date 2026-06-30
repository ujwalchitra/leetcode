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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp=head;
        vector<int>v;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        swap(v[k-1],v[v.size()-k]);
        ListNode *a=new ListNode(v[0]);
        ListNode *b=a;
        for(int i=1;i<v.size();i++){
            a->next=new ListNode(v[i]);
            a=a->next;
        }
        a=b;
        return b;
    }
};