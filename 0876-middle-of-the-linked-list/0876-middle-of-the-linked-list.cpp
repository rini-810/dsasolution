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
    ListNode* middleNode(ListNode* head) {
            ListNode *temp=head;
        ListNode* rabbit=head;
        return middle(temp,rabbit);
        
         
    }
    ListNode* middle(ListNode* temp,ListNode* rabbit){
         if(rabbit->next==NULL)
             return temp;
        if(rabbit->next->next==NULL)
            return middle(temp->next,rabbit->next);
        else
        return middle(temp->next,rabbit->next->next);
    }
};