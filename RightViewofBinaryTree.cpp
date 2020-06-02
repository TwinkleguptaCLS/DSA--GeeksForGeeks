void traversal(Node*root, map<int,int>&m,int dist)
{
if(root==NULL) return;
m[dist]=root->data;
traversal(root->left,m,dist+1);
traversal(root->right,m,dist+1);
}
void rightView(Node *root)
{
map<int,int>m;
traversal(root,m,0);
for(auto i=m.begin(); i!=m.end(); i++)
cout << i->second << " ";
}
