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

            std::cout << "[debug] " << b << " + " << a << " = " << a + b << std::endl;
        }
        else if(chunk == "-"){
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            stack.push(b - a);
            std::cout << "[debug] " << b << " - " << a << " = " << b - a << std::endl;
        }
        else if(chunk == "*"){
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            stack.push(a * b);
            std::cout << "[debug] " << b << " * " << a << " = " << a * b << std::endl;
        }
        else if(chunk == "/"){
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            stack.push(b / a);
            std::cout << "[debug] " << b << " / " << a << " = " << b / a << std::endl;
        }
        else{
            stack.push(std::stof(chunk));
        }
    }

    std::cout << stack.top() << std::endl;
//    std::cout << "size = " << stack.size() << std::endl;
    return 0;
}
