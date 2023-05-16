class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        struct ListNode *p;
        struct ListNode *q;
        p=head;
        if(p==NULL)
        return head;
        q=p->next;
        while(q!=NULL){
          swap(p->val,q->val);
          p=q->next;
         if(p==NULL)
          break;
          q=p->next;
            }
        return head;
    }
};
