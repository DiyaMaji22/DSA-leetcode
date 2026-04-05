/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node*zeroHead=new Node(-1);
        Node*zero=zeroHead;
        Node*oneHead=new Node(-1);
        Node*one=oneHead;
        Node*twoHead=new Node(-1);
        Node*two=twoHead;
        Node*temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                zero->next=temp;
                zero=zero->next;
                
                
            }
            else if(temp->data==1){
                one->next=temp;
                one=one->next;
            }
            else if(temp->data==2){
                two->next=temp;
                two=two->next;
            }
            temp=temp->next;
        }
        zero->next=(oneHead->next)?oneHead->next:twoHead->next;
        one->next=twoHead->next;
        two->next=NULL;
        Node*newHead=zeroHead->next;
        delete(oneHead);
        delete(twoHead);
        delete(zeroHead);
        return newHead;
        
    }
};