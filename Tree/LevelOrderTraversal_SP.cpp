void levelorder(Node * root,map<int,vector<pair<int,int> > >&m,int lvl,int hd)
{
    if(root==NULL) return;
    m[lvl].push_back({hd,root->data});
    levelorder(root->left,m,lvl+1,hd-1);
    levelorder(root->right,m,lvl+1,hd+1);
}

void printSpiral(Node *root)
{
    map<int,vector<pair<int,int> > >  m;
    int lvl=0;
    int hd=0;
    levelorder(root,m,lvl,hd);
     map<int,vector<pair<int,int> > > :: iterator it;
    
     int temp=0;
    for(it=m.begin();it!=m.end();it++)
    {
         //sort(((*it).second).begin(),((*it).second).end());
        if(temp%2==0)
        {
            for(int i=(*it).second.size()-1;i>=0;i--)
            {
                cout<<((*it).second)[i].second<<" ";
            }
        }
        else
        {
             for(int i=0;i<(*it).second.size();i++)
            {
                cout<<((*it).second)[i].second<<" ";
            }
        }
        temp++;
    }
    
}
