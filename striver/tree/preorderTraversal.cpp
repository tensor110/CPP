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

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        TreeNode *node = st.top();
        st.pop();
        ans.push_back(node->val);
        if (node->right != NULL)
            st.push(node->right);
        if (node->left != NULL)
            st.push(node->left);
    }
    return ans;
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

vector<int> traversal = preorderTraversal(root);

    for (const auto &level : traversal)
    {
            cout << level << " ";
        }

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
}