Node* insert(Node* root, int Key)
{

if(!root){
Node* t=new Node(Key);
return t;
}
if(root -> data == Key) return root;
if(Key < root->data)
root->left=insert(root->left,Key);
else
root->right=insert(root->right,Key);

return root;
}
