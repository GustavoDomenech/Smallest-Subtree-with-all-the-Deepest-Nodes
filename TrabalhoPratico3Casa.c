struct TreeNode* subtreeWithAllDeepest( struct TreeNode* root ) {
    struct TreeNode* Deepest( struct TreeNode * node, int* depth ) {
        if ( node == NULL ) {
            *depth = 0;
            return NULL;
        }

        int leftDepth = 0, rightDepth = 0;
        struct TreeNode* leftNode = Deepest( node->left, &leftDepth );
        struct TreeNode* rightNode = Deepest( node->right, &rightDepth );

        if ( leftDepth > rightDepth ) {
            *depth = leftDepth + 1;
        } else {
            *depth = rightDepth + 1;
        }

        if ( leftDepth > rightDepth ) {
            return leftNode;
        } else if ( rightDepth > leftDepth ) {
            return rightNode;
        } else {
            return node;
        }
    }

    int depth = 0;
    return Deepest( root, &depth );
}
