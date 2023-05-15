class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        struct ListNode *p,*q,*r;
        int i=1;
        p=head;
        q=head;
        r=head;
        int j=0;
        while(q){
          j++;
          q=q->next;
        }
        int s=j-k;
        int u=0;
        while(u<s){
          r=r->next;
          u++;
        }
        int y=r->val;
        cout<<y;
        while(i<k){
        p=p->next;
        i++;
        }
        int x=p->val;
         cout<<x;
        int temp = p->val;
         p->val=r->val;
         r->val=temp;
        return head;
    }
};
