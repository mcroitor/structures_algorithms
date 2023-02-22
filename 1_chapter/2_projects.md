# Организация кода на С++

Если в процессе написания программы вам приходиться создавать несколько структур данных, приходится задумываться об организации кода. Хорошей практикой является определение каждой структуры в отдельном файле. 

Касательно же языков С / С++ создают таких файлов 2:

1. заголовочный файл (h, hxx, hpp), в котором объявляют структуру данных, функции, константы и переменные;
2. исходный файл (c, cxx, cpp), в котором определяют тела функций, методов, значения переменных.

Пример, файл `mymath.h`:

```c
int myabs(int);
int mymin(int, int);
```

и соответстветствующий файл `mymath.c`:

```c
#include "mymath.h"

int myabs(int number) {
    return number < 0 ? -number : number;
}

int mymin(int left, int right) {
    return left < right ? left : right;
}
```

Заголовочные файлы могут включаться в проект несколько раз. Это может вызывать избыточное определение типов данных и переменных, что будет приводить к ошибкам компиляции. Именно поэтому описание ресурсов библиотек в заголовочных файлах заключается между директивами препроцессора

```cpp
#ifndef CONSTANT_NAME
#define CONSTANT_NAME

// your declaration code here

#endif
```

`CONSTANT_NAME` это произвольное, придуманное программистом имя препроцессорной константы.

Эти директивы на этапе препроцессирования программного кода позволяют включать определения ресурсов только один раз. 

_Компиляторы фирмы Microsoft (и Intel) позволяют использовать вместо конструкции ветвления препроцессора конструкцию_

```cpp
#pragma once
```

Что является предписанием компилятору, что данный файл подключается только раз.

## пример организации кода

Заголовочный файл `man.h`:

```cpp
#ifndef _MAN_DEFINITION_H_
#define _MAN_DEFINITION_H_

#include <string>

class Man {
    std::string first_name;
    std::string last_name;
public:
    Man() = default;
    Man(const std::string&, const std::string&);
    std::string ToString() const;
};

#endif
```

Исходный файл `man.cpp`:

```cpp
#include "man.h"

Man::Man(const std::string& f, const std::string& l): first_name(f), last_name(l) {}

std::string Man::ToString() const {
    return firs_tname + " " + last_name;
}
```

Исходный файл `main.cpp`:

```cpp
#include <iostream>
#include <string>
#include "man.h"

int main() {
    std::string firstName, lastName;
    std::cin >> firstName >> lastName;

    Man man(firstName, lastName);

    std::cout << man.ToString();
    return 0;
}
```
