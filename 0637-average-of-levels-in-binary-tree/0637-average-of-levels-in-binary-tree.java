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
    public List<Double> averageOfLevels(TreeNode root) {
      Queue<TreeNode> q = new LinkedList<>();
        List<Double> avglist =new ArrayList<>();

        q.add(root);
        q.add(null);

        while(q.peek()!=null){
            double sum = 0;
            int nodes =0;
            
            while(q.peek()!= null){
                TreeNode node = q.poll();
                sum +=node.val;
                nodes++;
            // level order traversal
                if(node.left!=null) q.add(node.left);
                if(node.right!=null) q.add(node.right);

            }

            q.add(q.poll());// add null to end of queue
            avglist.add(sum/nodes);
        }
    return avglist;  
    }
}