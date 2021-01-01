int height(Node * node)
{
    if(node == NULL)
        return 0;
    else
    {
        int lheight=height(node->left);
        int rheight=height(node-<right);
        if(lheight > rheight)
            return lheight+1;
        return rheight +1;
    }
}
