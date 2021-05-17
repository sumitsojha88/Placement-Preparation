


int Solution::evalRPN(vector<string> &A) {
    stack<int> nums;
    for(string& op: A){
        if(op=="+" || op=="-" || op=="*" || op=="/"){
            int b = nums.top();
            nums.pop();
            int a = nums.top();
            nums.pop();
            if(op=="-") nums.push(a-b);
            else if(op=="+") nums.push(a+b);
            else if(op=="*") nums.push(a*b);
            else if(op=="/") nums.push(a/b);
        } else {
            nums.push(stoi(op));
        }
    }
    return nums.top();
}
