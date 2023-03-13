class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        struct ListNode *prenode,*currentnode,*nextnode;
        prenode=NULL;
        currentnode=nextnode=head;
        while(currentnode!=NULL){
          nextnode=currentnode->next;
          currentnode->next=prenode;
          prenode=currentnode;
          currentnode=nextnode;
        }
        head=prenode;
        return head;
    }
};
