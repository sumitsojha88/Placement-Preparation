 string Solution::intToRoman(int A){
        string s;
        while(A!=0)
        {
           if(A>=1000)
          { A-=1000;
           s.push_back('M');
           continue;
          }
          if(A>=900)
          {
              A-=900;
              s.push_back('C');
              s.push_back('M');
              continue;
          }
          if(A>=500)
          {
              A-=500;
              s.push_back('D');
              continue;
          }
           if(A>=400)
           {
               A-=400;
               s.push_back('C');
               s.push_back('D');
               continue;
           }
            if(A>=100)
            {
              A-=100;
              s.push_back('C');
              continue;
            } if(A>=90)
            {
                A-=90;
                s.push_back('X');
                s.push_back('C');
                continue;
            }
            
            if(A>=50)
            {
                A-=50;
                s.push_back('L');
                continue;
                
            }
            if(A>=40)
            {
                A-=40;
                s.push_back('X');
                s.push_back('L');
                continue;
            }
            if(A>=10)
            {
                A-=10;
                s.push_back('X');
                continue;
            }
            
            if(A>=9)
            {
                A-=9;
                s.push_back('I');
                s.push_back('X');
                continue;
            }
           if(A>=5)
            {
                A-=5;
                s.push_back('V');
                continue;
            }
            if(A>=4)
            {
                A-=4;
                s.push_back('I');
                s.push_back('V');
                continue;
            }
              if(A>=1)
            {
                A-=1;
                s.push_back('I');
                continue;
            }
            
            
        }
        return s;
        
    }
