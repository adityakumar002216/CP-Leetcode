class Solution {
public:
    int getDecimalValue(ListNode* head) {
       int sum=0;
       struct ListNode *temp;
       temp=head;
       int s=0,r=0;
       while (head->next!=NULL){
          head=head->next;
          s++;
       }
       while(r<=s){
         sum=sum+temp->val*pow(2,s);
         cout<<sum;
         temp=temp->next;
         s--;
       }
       return sum;

    }
};
