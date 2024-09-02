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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int count=0;

        while(temp){
            count++;
            temp=temp->next;
        }
        int index = count-n;
        if(index == 0){
            ListNode *ToDelete = head;
            head=head->next;
            delete ToDelete;

            return head;
        }
        
        ListNode *curr = head , *prev=NULL;

        while(index--){
         prev=curr;
         curr=curr->next;
        }
        
        prev->next = curr->next;
        delete curr;
        return head;

    }
};