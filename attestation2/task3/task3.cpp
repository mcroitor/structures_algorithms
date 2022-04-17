#include <iostream>
#include <queue>

typedef std::queue<int> queue;

int input(queue &q)
{
    int n;
    int sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        sum += x;
        q.push(x);
    }
    return sum;
}

void output(const queue &q)
{
    queue q_copy = q;
    queue::size_type size = q_copy.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << q_copy.front() << " ";
        q_copy.pop();
    }
    std::cout << std::endl;
}

int main()
{
    int sum_a = 0;
    int sum_b = 0;
    queue a;
    queue b;
    int k;

    sum_a = input(a);
    sum_b = input(b);

    std::cin >> k;

    while (k--)
    {
        // a
        int x = a.front();
        a.pop();
        sum_a -= x;

        if (sum_a == sum_b)
        {
            break;
        }
        if (sum_a > sum_b)
        {
            sum_b += x;
            b.push(x);
        }
        else
        {
            sum_a += x;
            a.push(x);
        }

        // b
        x = b.front();
        b.pop();
        sum_b -= x;

        if (sum_a == sum_b)
        {
            break;
        }
        if (sum_a > sum_b)
        {
            sum_b += x;
            b.push(x);
        }
        else
        {
            sum_a += x;
            a.push(x);
        }
    }

    output(a);
    output(b);

    return 0;
}
