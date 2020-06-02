map<int,int>mp;
int getMaxWidth(Node* root)
{
mp.clear();
if(!root) return 0;
pair<Node*,int>p;
queue<pair<Node*,int>>q;
q.push(make_pair(root,0));
while(!q.empty()){
p=q.front();
mp[p.second]++;
q.pop();
if(p.first->left){
q.push(make_pair(p.first->left,p.second+1));
}
if(p.first->right){
q.push(make_pair(p.first->right,p.second+1));
}
}
int val=1;
for(auto it=mp.begin();it!=mp.end();it++) val=max(val,it->second);
return val;
}
