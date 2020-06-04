if(root==NULL)
return -1;

while(root->left!=NULL)
root=root->left;

return(root->data);
