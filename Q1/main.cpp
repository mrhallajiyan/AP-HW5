#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<iterator>
//#include<execution>

template<typename T>
void Disp(std::vector<T> const &);

bool IsOdd(int i){return (i % 2) == 1;}

int main(){

//a
    std::vector<int> vec1(100);
    std::iota(std::begin(vec1), std::end(vec1), 1);
   //Disp(vec1);
    
    std::vector<int> vec2(10);
    std::iota(std::begin(vec2), std::end(vec2), 1);
    //Disp(vec2);

//b
    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));
    //Disp(vec2);

//c
    std::vector<int> odd;
    auto it = std::partition (vec1.begin(), vec1.end(), IsOdd);
    odd.assign(vec1.begin(),it);
    //Disp(odd);

//d
    std::vector<int> reverse_vec(100);  
    std::reverse_copy(vec1.begin(), vec1.end(), reverse_vec.begin());
    //Disp(reverse_vec);  

//e
    //std::sort(vec2.begin(), vec2.end());
    //Disp(vec2);
    //std::sort(std::execution::par, vec2.begin(), vec2.end());
    //Disp(vec2);
   
}

template<typename T>
void Disp(std::vector<T> const &vec){
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
}