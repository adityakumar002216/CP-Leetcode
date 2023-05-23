class Solution {
public:
int t=0;
     void preorder(TreeNode *x,TreeNode *y){
       if(x==NULL || y==NULL){
         if(x!=NULL && y==NULL || x==NULL && y!=NULL )
          t=1;
          
       return;
       }
        if(x->val!=y->val)
          t=1;
          preorder(x->left,y->left);
          preorder(x->right,y->right);
       
     }
    bool isSameTree(TreeNode* p, TreeNode* q) {
      preorder(p,q);
      if(t==1)
      return false;
      return true;
        
    }
};
