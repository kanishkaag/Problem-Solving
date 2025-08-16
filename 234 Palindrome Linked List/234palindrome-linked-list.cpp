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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!= NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newhead = reversell(slow->next);

        ListNode* first = head;
        ListNode* second = newhead;
        while(second!= NULL){
            if(first->val != second->val){
                reversell(newhead);
                return false;
            }
            else{
                first= first->next;
                second = second->next;
            }
        }
        reversell(newhead);

    return true;
}
        
    
    ListNode *reversell(ListNode* head){
        ListNode* prev = NULL;
        ListNode* temp = head;
        
        while(temp!=NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

};