class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode *temp,*pre;
        if (head==NULL)
         return head;
         while (head && head->val == val)
        head = head->next;
         temp = head, 
          pre = nullptr;
        while(temp){
          if(temp->val==val){
            
          pre->next=temp->next;

          }
          else{
      
                pre=temp;
                
          }
          temp=temp->next;
          
        }
        return head;
    }
    
};
