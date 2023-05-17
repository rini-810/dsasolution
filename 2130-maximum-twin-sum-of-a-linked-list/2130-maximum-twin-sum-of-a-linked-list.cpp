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
    int pairSum(ListNode* head) {
        stack<int> st;
        ListNode* tortoise=head;
        ListNode* rabbit=head;
        
        while(tortoise!=NULL && tortoise->next!=NULL){
            st.push(rabbit->val);
            rabbit=rabbit->next;
            tortoise=tortoise->next->next;
        }
        
        int res=INT_MIN;
        while(rabbit){
              if(rabbit->val+st.top()>res){
                  res=rabbit->val+st.top();
              }
            st.pop();
            rabbit=rabbit->next;
        }
        
        return res;
    }
};