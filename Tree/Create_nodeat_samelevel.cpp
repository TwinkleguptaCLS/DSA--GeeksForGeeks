void util(Node *p, int l, map<int , vector<Node * > > &m ){
    if(!p)return;
    m[l].push_back(p);
    util(p->left, l+1,m);
    util(p->right, l+1, m);
}
void connect(Node *p)
{
    if(!p)return;
    map<int , vector<Node *> >m;
    util(p,0,m);
    for(auto it = m.begin(); it != m.end(); it++){
        for(int i=0; i< (it->second).size() ; i++){
            if(i !=  (it->second).size() -1){
                it->second[i]->nextRight = it->second[i+1];
            }
            else{
                it->second[i]->nextRight = NULL;
                
            }
        }
    }
}
