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
        int count = 1;
        ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
            count++;
        }
        int mid = (count/2) + 1;
        ListNode* middle = head;
        for (int i = 1; middle != NULL && i < mid; i++){
            middle = middle->next;
        }
        return middle;
    }
};