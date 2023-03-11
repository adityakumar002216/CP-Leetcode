class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      cout<<head;
       if ( head==NULL || head->next == NULL){
            return head;
        }
        ListNode* prev = head;
        ListNode* temp = head->next;

        while(temp!=NULL){
            if(prev->val==temp->val){
                temp=temp->next;
            }else{
                prev->next=temp;
                prev=temp;
                temp=temp->next;
            }

        }

        prev->next=temp;
        prev=temp;

        return head;
        
    }
};
