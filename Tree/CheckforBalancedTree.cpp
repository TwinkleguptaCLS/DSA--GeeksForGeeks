int solve(Node* root,bool &check)
{
    if(!root)
        return 0;
    
    int l=solve(root->left,check);
    int r=solve(root->right,check);
    
    if(abs(l-r)>1)
        check=false;
    
    return (max(l,r)+1);    
    
}


bool isBalanced(Node *root)
{
    bool check=true;
    solve(root,check);
    
    return check;
}
