Node *buildTreeUtil(int in[],int post[],int in_st,int in_end,int post_st,int post_end)
{
    if(in_end<in_st) return NULL;
    Node * root = new Node(post[post_end]);
    if(in_st == in_end) return root;
    
    int ind = -1;
    for(int i=in_st;i<=in_end;i++)
    {
        if(in[i]==root->data) 
        {
            ind = i;
            break;
        }
    }
    
    root->left = buildTreeUtil(in,post,in_st,ind-1,post_st,post_st+ind-in_st-1);
    root->right = buildTreeUtil(in,post,ind+1,in_end,post_st+ind-in_st,post_end-1);
    return root;
}
Node *buildTree(int in[], int post[], int n)
{
    return(buildTreeUtil(in,post,0,n-1,0,n-1));
}
