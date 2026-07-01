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
    ListNode* mergeNodes(ListNode* head) {
     ListNode *temp=head;
     vector<int>v;
     while(temp!=nullptr){
          v.push_back(temp->val);
          temp=temp->next;
        
     }  
      vector<int>c;
      int sum=0;
      for(int i=1;i<v.size();i++){
          sum=sum+v[i];
          if(v[i]==0){
            c.push_back(sum);
            sum=0;
          }
      }
      ListNode *a=new ListNode(c[0]);
        ListNode *b=a;
        for(int i=1;i<c.size();i++){
            a->next=new ListNode(c[i]);
            a=a->next;
        }
        a=b;
        return b;
    }
};