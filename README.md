# Random-Test-Generator
CPP programs to generate Random test cases. Useful during Competitive Programming Competitions to check if your code works for corner test cases.

The following programs generate test cases based on seeds. So you need to enter a integer while executing it.  
Example:   **./gen 1**

gen.cpp - To generate a random sequence of N integers.  
          5  
          7 4 4 7 1  
          
gen_r.cpp - To generate a random sequence of N distinct integers.  
          5  
          7 4 2 3 1  
          
gen_mat.cpp - To generate a random matrix of N X M Size.  
          2 3  
          7 4 1  
          7 8 9  
          
gen_str.cpp - To generate a random string having N characters.  
          5  
          sdfgs  
         
gen_strr.cpp - To generate a random string having N distinct characters. (The value of N will be between 1 and 26)  
          5  
          sdfgh  
