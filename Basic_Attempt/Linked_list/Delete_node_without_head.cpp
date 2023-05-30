void deleteNode(struct ListNode* Node) {
   
Node->val=Node->next->val;
Node->next=Node->next->next;

}
