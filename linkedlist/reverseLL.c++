class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      if(head==NULL && head->next=NULL){
        return head;
      }
      Node* newhead=reverseList(head->next);
      Node* front=head->next;
      front->next=head;
      head->next=NULL;
      return newhead;
    }
};
