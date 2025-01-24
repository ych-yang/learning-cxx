#include <iostream>
#include <cstdlib>
void func(int);
using namespace std;
#define ASSERT(cond, msg) if (!(cond)) { std::cerr << msg << std::endl; exit(1); }

int main(int argc, char **argv) {
// TODO: 为下列 ASSERT 填写正确的值
    auto arg = 99;
    ASSERT(arg == 99, "arg should be 99");
    std::cout << "befor func call: " << arg << std::endl;
    func(arg);
    ASSERT(arg == 99, "arg should be 99");
    std::cout << "after func call: " << arg << std::endl;
    return 0;
}

// TODO: 为下列 ASSERT 填写正确的值
void func(int param) {
    ASSERT(param == 99, "param should be 99");
    std::cout << "before add: " << param << std::endl;
    param += 1;
    ASSERT(param == 100, "param should be 100");
    std::cout << "after add: " << param << std::endl;
}