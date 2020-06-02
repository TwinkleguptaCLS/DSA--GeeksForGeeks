void vertical_width(Node *root,set<int> &s,int hd)
{
    if(root)
    {
        s.insert(hd);
        vertical_width(root->left,s,hd-1);
        vertical_width(root->right,s,hd+1);
    }
}

int verticalWidth(Node* root)
{
    set<int> s;
    vertical_width(root,s,0);
    return s.size();
}
