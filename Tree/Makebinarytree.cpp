void convert(Node *head, TreeNode *&root) {
   TreeNode *newnode=new TreeNode(head->data);
  
   root=newnode;
   queue<TreeNode*>q;
   q.push(root);
   Node *temp=head->next;
    TreeNode *new1;
     TreeNode *new2;
   while(temp!=NULL)
   {  
     new1=new  TreeNode(temp->data);
     TreeNode *t=q.front();
        q.pop();
        t->left=new1;
        q.push(t->left);
       temp=temp->next;
       if(temp!=NULL)
     { new2=new  TreeNode(temp->data);
  t->right=new2;
        q.push(t->right);}
       
       
        if(temp!=NULL)
        temp=temp->next;
       
   }
    // Your code here
}
