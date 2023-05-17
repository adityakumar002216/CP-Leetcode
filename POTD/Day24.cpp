class Solution {
public:
    int pairSum(ListNode* head) {
        struct ListNode *p;
        struct ListNode *q;
        struct ListNode *r;
        int sum=0;
        int c=0;
        p=head;
        q=head;
        r=head;
        int k=1;
        while(p->next!=NULL){
          p=p->next;
          k++;
        }
        int size=k;
        cout<<k;
        int i=0;
        while( i<size/2){
           i++;
          r=r->next;
        }
         struct ListNode *prenode,*currentnode,*nextnode;
        prenode=nextnode=NULL;
        currentnode=head;
        i=0;
        while( i<size/2){
           nextnode=currentnode->next;
          currentnode->next=prenode;
          prenode=currentnode;
          currentnode=nextnode;
          i++;
        }
       q=prenode;
       
       while(r){
         sum=q->val+r->val;
         if(c<sum)
         c=sum;
         q=q->next;
         r=r->next;
       }
       
        cout<<p->val;
        return c;
    }
};
