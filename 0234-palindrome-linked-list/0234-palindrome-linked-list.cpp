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
    ListNode *reverse(ListNode*head){
     ListNode*  curr=head , *prev=NULL;
        while(curr){
            ListNode*future = curr->next;
            curr->next=prev;

            prev=curr;
            curr=future;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // mid
        ListNode* slow=head , *fast=head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *secondHalf=reverse(slow);
        ListNode *firstHalf=head;
        while(secondHalf){
            if(secondHalf->val != firstHalf->val)
            return false;

            firstHalf=firstHalf->next;
            secondHalf=secondHalf->next;
        }
        
         
        return true;
    }
};