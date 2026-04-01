/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node *reverse(Node*head){
        Node*prev=NULL;
        Node*curr=head;
        while(curr!=NULL){
            Node*newNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newNode;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        // Your Code here
        head=reverse(head);
        int sum=0;
        int carry=1;
        Node*curr=head;
        while(curr!=NULL){
            sum=curr->data+carry;
            curr->data=sum%10;
            carry=sum/10;
            if(carry==0){
                break;
            }
            if(curr->next==NULL && carry>0){
                Node*newNode=new Node(carry);
                curr->next=newNode;
                carry=0;
                break;
            }
            curr=curr->next;
        }
        head=reverse(head);
        return head;
        
    }
};