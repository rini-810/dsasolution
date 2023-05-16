class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)return head;
        if(!head->next)return head;
        ListNode temp(0);
        temp.next = head;
        ListNode* current = &temp;
        while(current->next!=NULL && current->next->next!=NULL){
            ListNode* first = current->next;
            ListNode* second = current->next->next;
            first->next = second->next;
            current->next = second;
            current->next->next = first;
            current = current->next->next;
        }
        return temp.next;
    }
};