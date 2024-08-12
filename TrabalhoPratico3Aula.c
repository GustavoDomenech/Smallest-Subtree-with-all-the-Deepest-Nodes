struct TreeNode* subtreeWithAllDeepest(struct TreeNode* root) {
    if (root->left == NULL && root->right == NULL) {
    return root;
    } // 2
    
    /*// caso a caso
    if(root->left != NULL && root->right != NULL){
       return root->left->right;
    }if(root->left == NULL && root->right != NULL){
       return root->right->right->right;
    }if(root->right == NULL && root->left != NULL){
        return root->left;
    } *///obviamente não é ideal
    
    while (root->left != NULL) {
        root = root->left;
        root->left = root->right;
            return root->right;
    }
    while (root->left != NULL) {
        root = root->left;
        if (root->left == NULL) {
            return root;
        }
    }
    while (root->right != NULL) {
        root = root->right;
        if (root->right == NULL) {
            return root;
        }
    }
    return 0;
}
