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
        ListNode* start=head;
        ListNode* first;
        int a=1;
        while(start!=NULL){
            if(a==k){
              first=start;
                //ut<<first->val;
            }
            start=start->next;
            a++;
        }
        int b=a-k;
        ListNode* second=head;
        while(b>1){
            second=second->next;
            b--;
        }
        int temp=first->val;
        first->val=second->val;
        second->val=temp;
        
        return head;
    }
};