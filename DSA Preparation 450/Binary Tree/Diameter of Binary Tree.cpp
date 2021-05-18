

int height(Node* x)
{
    if(x==nullptr)
    {
        return 0;
    }
    int left=height(x->left);
    int right=height(x->right);
    int maxi=max(left,right);
    int maximum=(maxi+1);
    return maximum;
}
int diameter(Node* node) {
    if(node==nullptr){
        return 0;
        
    }
    // when nodes through root
     int left_height=height(node->left);
     int right_height=height(node->right);
     int total_height=left_height+right_height+1;
    //when not through root
    int l_diameter=diameter(node->left);
    int r_diameter=diameter(node->right);
    int total_diameter=max(l_diameter,r_diameter);
    
    int res=max(total_height,total_diameter);
    
    return res;
    
    
}
