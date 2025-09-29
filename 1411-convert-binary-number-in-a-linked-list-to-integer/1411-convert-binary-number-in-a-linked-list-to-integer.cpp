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
        /*int count = 0, sum = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL && count >= 0) {
            count--;
            sum += (temp->val)*pow(2, count);
            temp = temp->next;
        }
        return sum;*/

        // Better Approach using Bitwise Operators
        int num = 0;
        while (head != NULL) {
            num = (num << 1) | head->val;
            head = head->next;
        }
        return num;
    }
};