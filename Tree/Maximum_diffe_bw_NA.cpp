int Traverse(Node *root, int &maxm){
  if(root == nullptr)
    return INT_MAX;
  int mini = min(Traverse(root->left, maxm), Traverse(root->right, maxm));
  maxm = max(maxm, root->data-mini);
  mini = min(mini, root->data);
  return mini;
}

int maxDiff(Node* root){
  int maxm = INT_MIN;
  Traverse(root, maxm);
  return maxm;
}
