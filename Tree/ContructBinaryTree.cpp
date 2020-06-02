Node *createTree(int a[], int len)
{
    vector<pair<Node*,bool>> arr;
    for(int i=0;i<len;i++)
    {
        Node *temp = new Node(i);
        temp->left = NULL;
        temp->right = NULL;
        arr.push_back(make_pair(temp,false));
    }
    int ans;
    for(int i=0;i<len;i++)
    {
        if(a[i]==-1)
        {
            ans = i;
            continue;
        }
        int parent = a[i];
        bool dir = arr[parent].second;
        if(dir==false)
        {
            (arr[parent]).first->left = arr[i].first;
            (arr[parent]).second = true;
        }
        else
            (arr[parent].first)->right = arr[i].first;
    }
    return arr[ans].first;
}
