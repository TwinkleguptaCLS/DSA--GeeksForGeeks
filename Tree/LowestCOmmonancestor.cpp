Node* lca(Node *root, int n1, int n2)
{
if(root==NULL)return NULL;
if((n1<root->data)&&(n2<root->data))
return lca(root->left,n1,n2);
if((n1>root->data)&&(n2>root->data))
return lca(root->right,n1,n2);

return root;
}
