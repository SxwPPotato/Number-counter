#include <iostream>
#include <vector>

class Num_counter_functor {
    std::vector<int> vec_;
    int sum = 0;
    int count = 0;
    public:
        Num_counter_functor(std::vector<int> vec) : vec_(vec) {
        
        }

        int get_sum() {
            for (int i : vec_) {
                if (i % 3 == 0) sum += i;
            }
            return sum;

        }

        int get_count() {
            for (int i : vec_) {
                if (i % 3 == 0) count += 1;
            }
            return count;
        }


};


int main()
{
    std::vector<int> vec = { 4, 1, 3, 6, 25, 54 };
    Num_counter_functor counter(vec);
    std::cout << "get_sum() = " << counter.get_sum() << "\n";
    std::cout << "get_count() = " << counter.get_count() << "\n";
    return 0;
}
