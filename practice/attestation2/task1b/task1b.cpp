#include <iostream>
#include <string>
#include <stack>
#include <map>

// input: arithmetic expression in postfix notation
// output: result of the expression

template <typename Type, typename Functor>
bool contains(const std::map<Type, Functor> &m, const Type &v)
{
    return m.count(v) == 1;
}

typedef double (*operand)(double, double);

double plus(double a, double b)
{
    return (a + b);
}

double minus(double a, double b)
{
    return (a - b);
}

double product(double a, double b)
{
    return (a * b);
}

double divide(double a, double b)
{
    return (a / b);
}

const std::map<std::string, operand> operands = {
    {"+", plus},
    {"-", minus},
    {"*", product},
    {"/", divide}};

int main()
{
    std::string chunk;
    std::stack<std::string> stack;

    while (std::cin >> chunk)
    {
        if (contains(operands, chunk))
        {
            stack.push(chunk);
        }
        else
        {
            std::string aux = stack.top();
            while(contains(operands, aux) == false)
            {
                double b = std::stod(chunk);
                double a = std::stod(aux);
                stack.pop();
                std::string op = stack.top();
                stack.pop();
                double result = operands.at(op)(a, b);
                chunk = std::to_string(result);
                if(stack.empty()) {
                    break;
                }
                aux = stack.top();
            }
            stack.push(chunk);
        }
    }

    std::cout << std::stod(stack.top()) << std::endl;
    return 0;
}
