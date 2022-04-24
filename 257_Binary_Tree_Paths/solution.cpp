
#include "header.h"

static void helper(vector<string>& result, string& path, TreeNode* node);

vector<string> binaryTreePaths(TreeNode* root)
{
    vector<string> result;
    string path;

    helper(result, path, root);

    return result;
}


void helper(vector<string>& result, string& path, TreeNode* node)
{
    if (node != nullptr)
    {
        // Add crrent phase to path
        if (path.length() > 0)
        {
            path += "->";
        }
        path += std::to_string(node->val);

        // Add path to result
        if (node->left == nullptr && node->right == nullptr)
        {
            result.push_back(path);
        }

        size_t size = path.length();

        helper(result, path, node->left);
        path.erase(size);

        helper(result, path, node->right);
        path.erase(size);
    }
}