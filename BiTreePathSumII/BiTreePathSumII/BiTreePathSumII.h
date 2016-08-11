#pragma once
#include"TreeNode.h"
#include<vector>

class PathSumII {
private:
	int SUM;
	void getPath(std::vector<std::vector<int>>& res, std::vector<int> temp, int total, TreeNode* root) {
		temp.push_back(root->val);
		total += root->val;
		if (!root->left && !root->right) {
			if (total == SUM)
				res.push_back(temp);
		}
		else {
			if (root->left)
				getPath(res, temp, total, root->left);
			if (root->right)
				getPath(res, temp, total, root->right);
		}
	}
public:
	std::vector<std::vector<int>> pathSum(TreeNode* root, int sum) {
		std::vector<std::vector<int>> result;
		if (!root) return result;
		this->SUM = sum;
		std::vector<int> tp;
		getPath(result, tp, 0, root);
		return result;
	}
};