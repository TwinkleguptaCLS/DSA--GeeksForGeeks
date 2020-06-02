void levelOrder(Node* root)
{
    queue<Node*>q;
    q.push(root);
    cout<<root->data<<" ";
    while(!q.empty())
    {
        int g=q.size();
        while(g--)
        {
            if(q.front()->left)
            { cout<<q.front()->left->data<<" "; q.push(q.front()->left);}
            if(q.front()->right)
           { cout<<q.front()->right->data<<" "; q.push(q.front()->right); }
            q.pop();
        }
    }
    
}
