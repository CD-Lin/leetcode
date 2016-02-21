/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* save = new ListNode(0), *p = save, *tmp = NULL;
        save->next = head;
        head = save;
        while (head->next) {
            if (head->next->val < x) { 
                if (head->next == p->next) {
                    p = head = head->next;
                    continue;       
                }
                tmp = head->next;
                head->next = tmp->next;
                tmp->next = p->next;
                p->next = tmp;
                p = p->next;
            }
            else {
                head = head->next;
            }
        }
        
        head = save->next;
        delete save;
        return head;
    }
};