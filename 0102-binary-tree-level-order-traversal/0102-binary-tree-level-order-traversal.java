/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
     if(root == null) return new ArrayList<>();

        List <List<Integer>> a1 = new ArrayList<>();
        Queue <TreeNode> q = new LinkedList<>();
        q.add(root);
        q.add(null);

        List <Integer> a = new ArrayList<>();

        while(! q.isEmpty())
        {
            TreeNode n = q.remove();
            if(n != null)
            {
                if(n.left != null) q.add(n.left);

                if(n.right != null) q.add(n.right);

                a.add(n.val);

            }
            else
            {
                a1.add(a);
                a = new ArrayList<>();

                if(q.peek() == null) break;

                q.add(null);
            }
        }
        return a1;   
    }
}