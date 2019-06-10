/*
 * @lc app=leetcode id=968 lang=c
 *
 * [968] Binary Tree Cameras
 *
 * https://leetcode.com/problems/binary-tree-cameras/description/
 *
 * algorithms
 * Hard (35.20%)
 * Total Accepted:    6.9K
 * Total Submissions: 19.5K
 * Testcase Example:  '[0,0,null,0,0]'
 *
 * Given a binary tree, we install cameras on the nodes of the tree. 
 * 
 * Each camera at a node can monitor its parent, itself, and its immediate
 * children.
 * 
 * Calculate the minimum number of cameras needed to monitor all nodes of the
 * tree.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * 
 * Input: [0,0,null,0,0]
 * Output: 1
 * Explanation: One camera is enough to monitor all nodes if placed as
 * shown.
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [0,0,null,0,null,0,null,null,0]
 * Output: 2
 * Explanation: At least two cameras are needed to monitor all nodes of the
 * tree. The above image shows one of the valid configurations of camera
 * placement.
 * 
 * 
 * 
 * Note:
 * 
 * 
 * The number of nodes in the given tree will be in the range [1, 1000].
 * Every node has value 0.
 * 
 * 
 * 
 * 
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minCameraCover(struct TreeNode* root){

}


