struct ListNode* middleNode(struct ListNode* head){
             struct ListNode *temp,*r;
                int k=0,t=0;
               temp=head;
               r=head;
          while(temp->next!=NULL){
               temp=temp->next;
               k++;
            }

             if(k%2!=0)
             r=r->next;
            while(t<k/2){
             r=r->next;
              t++;
       }
     return r;
}
