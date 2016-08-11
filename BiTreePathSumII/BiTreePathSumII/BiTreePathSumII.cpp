// BiTreePathSumII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"BiTreePathSumII.h"
#include"CreateBiTree.h"


int main()
{
	CreateBiTree CBT;
	TreeNode* TN =CBT.CreateBiTreeByLevel();
	PathSumII PS;
	int sum;
	cin >> sum;
	vector<vector<int>> vec(PS.pathSum(TN,sum));
	if (vec.empty())
		cout << "No Such Path!" << '\n';
	else for (int i = 0, row = vec.size(); i < row;cout <<'\n', i++)
		for (int j = 0, col = vec[i].size(); j < col; j++)
			cout << vec[i][j] << " ";
    return 0;
}

