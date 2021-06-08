
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
Solution 1:
Time O(N+M) space(N+M)

Approach :
Find inorder traversal of both tree
now make an answer vector and insert values of both tree using two pointer technique




class Solution {
public:
        void inorder(TreeNode* r,vector<int> &a)
        {
                if(!r) return;
                
                inorder(r->left,a);
                a.push_back(r->val);
                inorder(r->right,a);
                
        }
    vector<int> getAllElements(TreeNode* r, TreeNode* rr) {
            
            vector<int> ansr;
            vector<int> ansrr;
            vector<int> ans;
            inorder(r,ansr);
            inorder(rr,ansrr);
            
            int i=0;
            int j=0;
            int n=ansr.size();
            int m=ansrr.size();
            while(i<n && j<m)
            {
                    if(ansr[i]>ansrr[j])
                    {
                            ans.push_back(ansrr[j]);
                            j++;
                    }
                    else
                    {
                            ans.push_back(ansr[i]);
                            i++;
                    }
            }
            
            
            while(i<n)
            {
                    ans.push_back(ansr[i++]);
            }
            while(j<m)
            {
                    ans.push_back(ansrr[j++]);
            }
            
            
            return ans;
        
    }
};
