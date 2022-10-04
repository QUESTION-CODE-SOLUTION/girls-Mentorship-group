class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> li;
        for (int i=1; i<=n; i++){
            if(i%3==0 && i%5==0){
                li.push_back("FizzBuzz");
            }
            else if(i%3==0){
                li.push_back("Fizz");
            }
            else if(i%5==0){
                li.push_back("Buzz");
            }
            else{
                string v=to_string(i);
                li.push_back(v);
            }
        }
        return li;
        
    }
};
