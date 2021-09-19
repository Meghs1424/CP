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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
            return NULL;
        ListNode* res = NULL;
        ListNode* head = new ListNode();
        while(l1 != NULL || l2 != NULL) {
            ListNode* newNode = new ListNode();
            if(l1 == NULL) {
                newNode->val = l2->val;
                l2 = l2->next;
            }
            else if(l2 == NULL) {
                newNode->val = l1->val;
                l1 = l1->next;
            }
            else {
                if(l1->val < l2->val) {
                    newNode->val = l1->val;
                    l1 = l1->next;
                }
                else {
                    newNode->val = l2->val;
                    l2 = l2->next;
                }
            }
            if(res == NULL) {
                res = new ListNode(newNode->val);
                head = res;
            }
            else {
                res->next = newNode;
                res = res->next;
            }
            //cout<<newNode->val<<" ";
        }
        
        return head;
    }
};
