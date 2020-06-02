int maxpathsum(Node *root, bool isanytaken)
{
    if(root==NULL && isanytaken==false)
        return INT_MIN;
    if(root==NULL)
        return 0;
    if(isanytaken==false)
    {
        int op1 = root->data + maxpathsum(root->left,true);
        int op2 = root->data + maxpathsum(root->right,true);
        int op3 = root->data + maxpathsum(root->left,true) + maxpathsum(root->right,true);
        int op4 = max(maxpathsum(root->left,isanytaken),maxpathsum(root->right,isanytaken));        
        return max(op1,max(op2,max(op3,op4)));
    }
    int op1 = root->data + maxpathsum(root->left,true);
    int op2 = root->data + maxpathsum(root->right,true);
    int op3 = 0;
    return max(op1,max(op2,op3));
}
int findMaxSum(Node* root)
{
    // Your code goes here
    return maxpathsum(root,false);
}
