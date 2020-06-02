bool areMirror(Node* left, Node* right){
if(left==NULL && right==NULL)
return true;
if(left==NULL|| right==NULL)
return false;
return areMirror(left->left,right->right) && areMirror(left->right, right->left);
}
bool IsFoldable(Node* root)
{
if(!root)
return true;
return areMirror(root->left,root->right);

}
