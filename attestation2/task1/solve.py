stack = []

for elem in input().split():
    if elem in '+-*/':
        a = stack[-2]
        b = stack[-1]
        stack.pop()
        stack.pop()
        if elem == '+':
            r = a + b
        elif elem == '-':
            r = a - b
        elif elem == '*':
            r = a * b
        else:
            r = a / b
        stack.append(r)
    else:
        stack.append(int(elem))
print(stack[0])