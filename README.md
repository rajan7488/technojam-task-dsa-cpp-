﻿# technojam-task-dsa-cpp-

      #Easy1.cpp
       in this find the unique element in array show i can basically firstly ans=0 and then xor the array so find the unique element...
       Time Complexity=O(n)

     #detect cyclic nature in linklist
     #Approach
       so basically in this problem fibd the cycle in LL.
       so we can create a two node slow and fast both start from head 
         and then slow can move one step and fast can move two when slow ==fast then we can say in the LL there are loop
         
         Time Complexity=O(n),Space Comeplextiy=O(1);




         #pascle traingle
         #Approach
               in this my approach is 
              ncr use this for solve the question
              
              it is always start with 1 so i can ans=1 and the use the formula ans*(row-col)/col;
              and push in the array 
         Time Complexity=O(n);
         Space Complexity=O(1);


         #climb Stairs 
         #Approach
             1step=1;
             2step=2;
            3step=1+1+1,1+2,2+1;
            4 step=1+1+1+1,1+1+2,1+2+1,2+1+1,2+2
            the follow the fibonacci serirs

         Time Compleity=O(n), Space Complexity=O(1)

         #String comparison
               Two-Pointer method : Use two pointers:

               One pointer to traverse the original array (i).
               Another pointer to keep track of where to overwrite the compressed characters (index).
               Count Repeated Characters: For each character, count how many times it repeats consecutively.
               Update the Array: Write the character and, if it repeats more than once, write the number of repetitions next to it.

               Time Complexity=O(n)
               Space Complexity=O(1)
       
