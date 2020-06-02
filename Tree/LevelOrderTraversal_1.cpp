void levelOrder(Node* node)
{   
    if (!node)  return;
    queue <Node*> q;
    q.push(node);
    q.push(NULL);
    
    while (q.size() > 1 ){
        
        Node *x = q.front();
        q.pop();
        
        if ( x == NULL ){
            cout<<"$ ";
            q.push(NULL);
        }
        
        else{
            cout<< x -> data <<" ";
            if ( x -> left != NULL )
                q.push( x -> left );
            if ( x -> right != NULL )
                q.push( x -> right );
                
        }
        
    }
    cout<<"$";
 
}
