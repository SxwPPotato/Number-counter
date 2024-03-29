﻿#include <iostream>
#include <algorithm>
#include <vector>

class Num_counter_functor {
    std::vector<int> vec_;
    int sum = 0;
    int count = 0;
    public:
        Num_counter_functor(std::vector<int> vec) : vec_(vec) {
        
        }

        Num_counter_functor() = default;

        int get_sum() {
            return sum;
        }

        void operator () (int a) {
                   if (a % 3 == 0) { count += 1; sum += a; }
        }

        int get_count() {
            
            return count;
        }


};


int main()
{
    std::vector<int> vec = { 4, 1, 3, 6, 25, 54 };
    //Num_counter_functor counter(vec);
    Num_counter_functor counter = std::for_each(vec.begin(), vec.end(), Num_counter_functor ());
    std::cout << "get_sum() = " << counter.get_sum() << "\n";
    std::cout << "get_count() = " << counter.get_count() << "\n";
    return 0;
}
