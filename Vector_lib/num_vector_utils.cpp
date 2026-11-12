#include "num_vector_utils.h"

string render_num_vector(const vector<int>& vect) {
    string s = "";
    for (int i =0; i < vect.size(); i ++){
        s += to_string(vect[i]);
        
        if (i < vect.size() - 1){
            s += " ";  
        }
    }
    return s;
}
int num_vector_sum(const vector<int>& nums) {
int sum = 0;
for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    }
    return sum;
}
