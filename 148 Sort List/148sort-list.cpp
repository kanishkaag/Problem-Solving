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
    ListNode* sortList(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        // Implementing the concept of merge sort

        ListNode* middle = findMiddle(head);

        ListNode* leftHead = head;
        ListNode* rightHead = middle->next;
        middle->next = NULL;

        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);

        return merge2(leftHead, rightHead);
    }
    // Implementing the Tortoise and Hare with minor changes to get first middle
    // in even number of nodes for a LL
    ListNode* findMiddle(ListNode* head) { 
        
        ListNode* slow = head;
        ListNode* fast = head ->next;  //Just to get the first middle in even LL
        while(fast!= NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast ->next->next;
        }
        return slow;
    }

    ListNode* merge2(ListNode* list1,ListNode* list2){
        ListNode* dummyNode = new ListNode(-1,NULL);
        ListNode* temp = dummyNode;
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2 -> val){
                temp -> next = list1;
                temp = list1;
                list1 = list1->next;
            }
            else{
                temp -> next = list2;
                temp = list2;
                list2 = list2->next;
            }
        }
        if(list1) temp -> next = list1;
        else temp -> next = list2;

        ListNode* merge = dummyNode -> next;
        return merge;
    }
};