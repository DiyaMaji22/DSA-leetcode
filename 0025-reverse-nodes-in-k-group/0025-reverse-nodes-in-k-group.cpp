class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    ListNode* KthNode(ListNode* head, int k){
        ListNode* temp = head;
        k--; // fix

        while(temp != NULL && k > 0){
            temp = temp->next;
            k--;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || k == 1) return head;

        ListNode* temp = head;
        ListNode* prevLast = NULL; 

        while(temp != NULL){
            ListNode* kth = KthNode(temp, k);

            
            if(kth == NULL){
                if(prevLast) prevLast->next = temp;
                break;
            }

            ListNode* nextNode = kth->next;
            kth->next = NULL;

            ListNode* newHead = reverse(temp);

            if(temp == head){
                head = newHead;
            } else {
                prevLast->next = newHead;
            }

            prevLast = temp;
            temp = nextNode; 
        }

        return head;
    }
};