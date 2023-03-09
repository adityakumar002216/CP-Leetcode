class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
      struct ListNode *temp,*rt;
      temp=head;
      int r=1,k=1;
      while(temp->next!= NULL){
        temp=temp->next;
        r++;
      }
      rt=head;
      if(r==1){
      head=head->next;
      }
       else{
       while(k<r/2){
         rt=rt->next;
         k++;
       }
       rt->next=rt->next->next;
       }
       return head;
    }
};
