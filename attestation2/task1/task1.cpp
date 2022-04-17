#include <iostream>
#include <string>
#include <stack>

// input: arithmetic expression in postfix notation
// output: result of the expression

int main(){
    std::string chunk;
    std::stack<double> stack;
    
    while(std::cin >> chunk){
        if(chunk == "+"){
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            stack.push(a + b);
        }
        else if(chunk == "-"){
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            stack.push(b - a);
        }
        else if(chunk == "*"){
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            stack.push(a * b);
        }
        else if(chunk == "/"){
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            stack.push(b / a);
        }
        else{
            stack.push(std::stof(chunk));
        }
    }

    std::cout << stack.top() << std::endl;
//    std::cout << "size = " << stack.size() << std::endl;
    return 0;
}
