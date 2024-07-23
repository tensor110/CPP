#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){};
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){};
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){};
};

// Using two stacks 
vector<int> postorderTraversal1(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    stack<TreeNode *> st1, st2;
    st1.push(root);
    while (!st1.empty())
    {
        TreeNode *node = st1.top();
        st1.pop();
        st2.push(node);
        if (node->left != NULL)
            st1.push(node->left);
        if (node->right != NULL)
            st1.push(node->right);
    }
    while(!st2.empty()){
        ans.push_back(st2.top()->val);
        st2.pop();
    }
    return ans;
}

// Using One Stack 
void postorder(TreeNode* root, vector<int>& arr){
    if(root==NULL) return;
    postorder(root->left, arr);
    postorder(root->right, arr);
    arr.push_back(root->val);
}
vector<int> postorderTraversal2(TreeNode* root){
    vector<int> arr;
    postorder(root, arr);
    return arr;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

// vector<int> traversal = postorderTraversal(root);
vector<int> traversal = postorderTraversal2(root);

    for (int num : traversal) {
        cout << num << " ";
    }
    cout << endl;
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
}