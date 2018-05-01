   // C++14 "auto" demo code	
   #include <iostream>
     #include <vector>
 
     auto& add_one(std::vector<int>& v) {
         for(auto& it : v) {
             it += 1;
         }
         return v;
     }
 
     void multiply_by_two(std::vector<int>& v) {
         for(auto& it : v) {
            it *= 2;
         }    
     }
 
     void print_vec(const std::vector<int>& v) {
         for(const auto& e: v) {
             std::cout << e << std::endl;
         }   
         std::cout << std::endl;     
     }
 
     int main() {
         // Add one and multiply by two a vector of integers
         std::vector<int> my_vector{-1, 2, 3, 5};
         multiply_by_two(add_one(my_vector));    
         print_vec(my_vector);
 
         return 0;
     } 
