Node *head=NULL;
Node *temp=NULL;
void in(Node *root)
{
if(root==NULL)
{
return;
}
in(root->left);
if(head==NULL)
{
head=root;
temp=head;
}
else
{
temp->right=root;
temp->right->left=temp;
temp=temp->right;
}
in(root->right);
}
Node *bTreeToCList(Node *root)
{
if(root==NULL)
{
return NULL;
}

in(root);
temp->right=head;
head->left=temp;
Node *x=head;
head=NULL;
return x;
}
