#include <iostream>
#include <queue>

typedef std::queue<int> queue;

int input(queue &q);
void output(const queue &q);

int main()
{
    int n, k;
    queue q;
    int sum = 0;

    sum = input(q);

    std::cin >> n >> k;

    while (k--)
    {
        if (sum == n)
        {
            break;
        }

        int t = q.front();
        q.pop();

        if (sum > n)
        {
            sum -= t;
            t = t / 2;
        }
        else
        {
            sum -= t;
            t = t * 2 + 1;
        }
        sum += t;
        q.push(t);
    }
    output(q);
    return 0;
}

int input(queue &q)
{
    int n, x;
    int sum = 0;
    std::cin >> n;
    while (n --)
    {
        std::cin >> x;
        q.push(x);
        sum += x;
    }

    return sum;
}

void output(const queue &q)
{
    queue q_copy = q;
    int size = q_copy.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << q_copy.front() << " ";
        q_copy.pop();
    }
    std::cout << std::endl;
}