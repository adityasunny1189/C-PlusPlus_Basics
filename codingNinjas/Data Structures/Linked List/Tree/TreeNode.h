#include<vector>
using namespace std;
template <typename T>
class TreeNode {
	public:
	//----------------------------------------------------->Data Members<----------------------------------
		T data;
		vector<TreeNode *> children;
	//------------------------------------------------------>Constructor<----------------------------------
		TreeNode(T data) {
			this -> data = data;
		}
};
