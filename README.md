# Random-Test-Generator
CPP programs to generate Random test cases. Useful during Competitive Programming Competitions to generate randon cases and check your program on those cases.

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
          
gen_matr.cpp - To generate a random matrix of N X M Size having distinct elements.  
          2 3  
          7 4 1  
          2 8 9  
          
gen_pair.cpp - To generate a random array of N pairs .  
          2   
          7 4   
          7 8   
   
gen_pairr.cpp - To generate a random array of N pairs having distinct elements .  
          2   
          7 4   
          2 8  
          
gen_pairs.cpp - To generate a random array of N pairs having first element smaller than the second .  
          2   
          3 4   
          7 8  
          
gen_str.cpp - To generate a random string having N characters.  
          5  
          sdfgs  
         
gen_strr.cpp - To generate a random string having N distinct characters. (The value of N will be between 1 and 26)  
          5  
          sdfgh  
