class Solution
{
    int maxi = 0;
    int ans = 0;
    int solve(Node* root){
        if(!root)return -1;
        
        int L = solve(root->left);
        int R = solve(root->right);
        
        if( (L != -1 ) && (R != -1 )&& __gcd(L, R) > maxi){
            maxi = __gcd(L, R);
            ans = root->data;
        }
        return root->data;
    }
public:
    int maxGCD( Node* root){
        if(!root)return 0;
        solve(root);
        return ans;
    }
};
