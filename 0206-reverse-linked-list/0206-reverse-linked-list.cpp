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
typedef ListNode*Node;
    ListNode* reverseList(ListNode* head) {
        Node prev=NULL;
        Node curr=head;
        while(curr!=NULL){
            Node temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;

        }

       return prev; 
    }
};