
string Solution::convertToTitle(int A) {
     int num;
        int number = A;
        string s, ss;
        while(number>0)
        {
            number = number-1;
            num = number%26;
            ss = 'A' + num;
            s = ss + s;
            number = number/26;
        }
        return s; 
        
}
