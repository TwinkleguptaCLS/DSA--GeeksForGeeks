int getMaxSum(Node *root) {
    if(root==NULL)
        return 0;
    int include_root = 0, exclude_root = 0;
    if(root->left){
        include_root+=  getMaxSum(root->left->left)+getMaxSum(root->left->right);
    }
    if(root->right)
        include_root+=  getMaxSum(root->right->left)+getMaxSum(root->right->right);
    include_root+= root->data;
    exclude_root = getMaxSum(root->left) + getMaxSum(root->right);
    return max(include_root,exclude_root);    
}
