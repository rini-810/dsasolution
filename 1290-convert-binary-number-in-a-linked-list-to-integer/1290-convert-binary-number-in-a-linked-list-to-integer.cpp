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
        string binary;
        // if(head->next==NULL)
        //     return head->val;
        while(head!=NULL){
            binary +=to_string(head->val);
            head=head->next;
        }
        return binarytodecimal(binary);
    }
    
    int binarytodecimal(string binary){
        int ans=0;
        int base=1;
        for(int i=binary.size()-1;i>=0;i--){
            if(binary[i]=='1'){
                ans +=base;
            }
            base=base*2;
        }
        return ans;
    }
};