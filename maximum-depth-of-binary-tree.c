int maxDepth(struct TreeNode* root){
    int depth=0;
    if (root==NULL) {
        return depth;
    }
    
    int left_depth = maxDepth(root->left);
    int right_depth = maxDepth(root->right);
    
    if (left_depth > right_depth) {
        return 1+left_depth;
    }
    return 1+right_depth;
}
