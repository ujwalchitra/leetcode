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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        stack<int> st;
        vector<int> v;

        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> ans(v.size(), 0);
        for (int i = v.size() - 1; i >= 0; i--) {
            if (!st.empty() && v[i] < st.top()) {
                ans[i] = st.top();
                st.push(v[i]);
            }
            while (!st.empty() && st.top()<=v[i]) {
                st.pop();
                if (!st.empty() && v[i] < st.top()) {
                    ans[i] = st.top();
                }
            }
            st.push(v[i]);
        }

        return ans;
    }
};