if(root==0) {return 0;}
    if(root->data==x) {return 1;}
    else return search(root->left,x)||search(root->right,x);
}
