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
    int getDecimalValue(ListNode* head) {
       ListNode* x = head;
       int cnt = 0;
        while(x != nullptr) {
            cout << x->val << endl;
            cnt*=2;
            if(x->val) cnt++;
            x = x->next;
        }
       return cnt; 
    }
};