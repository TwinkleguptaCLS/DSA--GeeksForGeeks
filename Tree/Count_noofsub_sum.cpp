int countSubtreesWithSumX(Node* root, int x){
    if(root){
        int a = countSubtreesWithSumX(root->left,x);
        int b = countSubtreesWithSumX(root->right,x);
        if(root->left)
            root->data += root->left->data;
        if(root->right)
            root->data += root->right->data;
        int ans = a+b;
        if(root->data==x)
            ans++;
        return ans;
    }
    return 0;
}
