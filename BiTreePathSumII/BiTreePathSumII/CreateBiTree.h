#pragma once
#include<iostream>
#include"TreeNode.h"
#include<queue>
using namespace std;

class CreateBiTree {
public:
	TreeNode* CreateBiTreeByLevel() {
		int val;
		if (!(cin >> val)) return nullptr;
		TreeNode* root = new TreeNode(val),*temp;
		queue<TreeNode*> Level;
		int len;
		Level.push(root);
		while (!Level.empty()) {
			len = Level.size();
			while (len) {
				temp = Level.front();
				if (cin >> val) {
					temp ->left = new TreeNode(val);
					Level.push(temp ->left);
				}
				else cin.clear(), cin.ignore();
				if (cin >> val) {
					temp ->right = new TreeNode(val);
					Level.push(temp ->right);
				}
				else cin.clear(), cin.ignore();
				Level.pop(), len--;
			}
		}
		return root;
	}
	TreeNode* CreateBiTreeByDFS() {
		int val;
		if (!(cin >> val)) return nullptr;
		TreeNode* root = new TreeNode(val);
		root->left = CreateBiTreeByDFS();
		root->right = CreateBiTreeByDFS();
		return root;
	}
};