void printSpiral(Node *root)
{
    queue<Node*>q;q.push(root);
    int a=0;stack<Node*>s;
    while(q.size())
    {
        int t=q.size();a++;
        while(t--)
        {
            Node *p=q.front();q.pop();
            cout<<p->data<<" ";
            if(a%2==1)
            {
             if(p->right) s.push(p->right);
               if(p->left) s.push(p->left);
            }
            else if(a%2==0)
            {
                if(p->left) s.push(p->left);
                if(p->right) s.push(p->right);
            }
             
        }
        while(s.size())
               {
                   q.push(s.top()); s.pop();
               }
    }
}
