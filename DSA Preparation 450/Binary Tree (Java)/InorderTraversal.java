import java.util.*;
// definition of node tree.
class TreeNode {
         int val;
         TreeNode left;
         TreeNode right;
         TreeNode() {}
         TreeNode(int val) { this.val = val; }
         TreeNode(int val, TreeNode left, TreeNode right) {
             this.val = val;
             this.left = left;
             this.right = right;
         }
}

public class InorderTraversal {
    List<Integer> list;
    public List<Integer> inorder(TreeNode root) {
        list = new ArrayList<>();
        //if(root == null) return list;
        System.out.println(list.size());
        return list;
    }
    public void solve(TreeNode root){
        if(root==null) return;
        solve(root.left);
        list.add(root.val);
        solve(root.right);
    }
}