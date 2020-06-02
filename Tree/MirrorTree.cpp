Node * treemirror(Node *P)
{
Node *tmp=nullptr;

if(!P || (!P->left && !P->right)) return P;
else
{
tmp=P->right;
P->right=treemirror(P->left);
P->left=treemirror(tmp);
}

return P;
}
void mirror(Node* node)
{
node=treemirror(node);
}
