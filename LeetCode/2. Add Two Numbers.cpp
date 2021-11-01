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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = NULL;
        ListNode* tmp1 = new ListNode();
        ListNode* tmp2 = new ListNode();
        ListNode* sum_head = new ListNode(l1->val + l2->val);
        ListNode* sum_prev = new ListNode();
        tmp1 = l1->next;
        tmp2 = l2->next;
        sum_prev = sum_head;
        int carry;
        if(sum_head->val >= 10) {
            carry = 1;
            sum_head->val -= 10;
        } else {
            carry = 0;
        }
        while(tmp1 != NULL || tmp2 != NULL) {
            if(tmp1 != NULL && tmp2 != NULL) {
                //cout<<carry<<'\n';
                sum = new ListNode(tmp1->val + tmp2->val + carry);
                tmp1 = tmp1->next;
                tmp2 = tmp2->next;
                
            } else if(tmp1 == NULL) {
                sum = new ListNode(tmp2->val + carry);
                tmp2 = tmp2->next;
            } else {
                sum = new ListNode(tmp1->val + carry);
                tmp1 = tmp1->next;
            }
            if(carry == 1) 
                carry = 0;
            if(sum->val >= 10) {
                carry = 1;
                sum->val -= 10;
            }
            sum_prev->next = sum;
            sum_prev = sum_prev->next;
        }
        if(carry == 1) {
            sum = new ListNode(1);
            sum_prev->next = sum;
        }
        return sum_head;
    }
};
