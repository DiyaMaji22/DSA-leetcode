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
    ListNode* Reverse(ListNode* head){
        ListNode*prev=NULL;
        ListNode*curr=head;
        while(curr!=NULL){
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* kthNode(ListNode*head,int k){
        ListNode*temp=head;
        k--;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;

        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1) return head;
        ListNode*temp=head;
        ListNode*prevLast=NULL;
        while(temp!=NULL){
            ListNode*kth=kthNode(temp,k);
            if(kth==NULL){
                if(prevLast) prevLast->next=temp;
                break;
            }
            ListNode*nextNode=kth->next;
            kth->next=NULL;
            ListNode*newHead=Reverse(temp);
            if(temp==head){
                head=newHead;
            }else{
                prevLast->next=newHead;
            }
            prevLast=temp;
            temp=nextNode;

        }
        return head;
        
    }
};