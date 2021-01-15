/* 
 * In class example: your goal is to
 * make the solve_quadratic function better
 * by 
 */
#include <iostream>
#include <utility>
#include <math.h>

/*
 * Don't worry about this function - just use it
 * reads an int - we'll cover this in lecture 4
 * WARNING: does absolutely zero error-checking
 * terrible to use in your assignments or CS 106B.
 */
int read_int(std::string prompt) {
    int val;
    std::cout << prompt;
    std::cin >> val;
    return val;
}

struct Solution {
    double one;
    double two;
    bool has_solution;
};

// solves the quadratic equation using a, b, and c
// currently: returns true if a solution is found, false otherwise
// you might want to change that.
/* 
 * Will change function so that it returns an std::pair of the form
 * <does_solution_exist, <sol1, sol2>>;
 */
std::pair<std::pair<bool, <sol1, sol2>> solve_quadratic(int a, int b, int c) {
    double inside = b * b - (4 * a * c);
    std::pair<double,double> blank;
    if (inside < 0) return std::make_pair(false, blank);
    
    std::pair<double,double> answer = std::make_pair( (-b + sqrt(inside)) / 2,
                                                      (-b - sqrt(inside)) / 2);
    return std::make_pair(true, answer);
}

int main() {
    int a = read_int("Type in a: ");
    int b = read_int("Type in b: ");
    int c = read_int("Type in c: ");
    auto [found, roots] = solve_quadratic(a, b, c);
    if (found) {
        // if it's a double root (root1 == root2), this is fine as well
        auto [root1, root2] = roots;
        std::cout << "The roots are: " << root1 << " and " << root2 << std::endl;
    } else {
        std::cout << "No solutions found." << std::endl;
    }
    
}


// Summary of today
// std::pair, struct, std::tuple
// auto, structured binding
// multiple return value


// Next time
// uniform initialization
// overview of C++ classes (how to read documentation: std::vector)
// l-value references, what is a reference, returning references, 


// rules about in/out/in-out parameters


