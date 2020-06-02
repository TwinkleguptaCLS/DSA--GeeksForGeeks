bool funcount(Node*root,int k)
{
if(root==NULL)
return false;
if(!root->left&&!root->right&&!k)
{
return true;
}
return funcount(root->left,k-1)||funcount(root->right,k-1);
}
int printKDistantfromLeaf(Node* root, int k)
{
int count=0;
if(root==NULL)
return 0;
if(funcount(root,k))
return 1+printKDistantfromLeaf(root->left,k)+printKDistantfromLeaf(root->right,k);
else
return printKDistantfromLeaf(root->left,k)+printKDistantfromLeaf(root->right,k);

}
