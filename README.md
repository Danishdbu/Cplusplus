# C++ Programming Notes

## 1. Introduction
C++ is a powerful, general-purpose programming language developed by Bjarne Stroustrup in 1979 at Bell Labs. It extends C with object-oriented, generic, and functional programming features, making it versatile for system programming, game development, and high-performance applications. C++ is compiled, statically typed, and supports both procedural and object-oriented programming paradigms.

**Key Features**:
- High performance and low-level memory manipulation.
- Object-Oriented Programming (OOP) support.
- Standard Template Library (STL) for data structures and algorithms.
- Cross-platform compatibility.

**Example**: A simple "Hello, World!" program.
```cpp
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```
**Output**:
```
Hello, World!
```
**How it Works**:
- `#include <iostream>` includes the input/output stream library.
- `using namespace std;` avoids prefixing `std::` for standard library components.
- `cout` is used to print output, and `endl` adds a newline.

## 2. Keywords and Identifiers
**Keywords** are reserved words in C++ with predefined meanings (e.g., `int`, `class`, `if`, `return`). They cannot be used as variable names.

**Identifiers** are user-defined names for variables, functions, or classes. Rules:
- Must start with a letter or underscore (`_`).
- Can contain letters, digits, or underscores.
- Case-sensitive (e.g., `myVar` ≠ `MyVar`).
- Cannot be a keyword.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    int myVariable = 10; // Valid identifier
    // int class = 5; // Error: 'class' is a keyword
    cout << "Value: " << myVariable << endl;
    return 0;
}
```
**Output**:
```
Value: 10
```
**How it Works**:
- `myVariable` is a valid identifier following the naming rules.
- Attempting to use `class` as an identifier causes a compilation error.

## 3. Variables, Literals, and Constants
**Variables** are named memory locations to store data. They must be declared with a data type before use.

**Literals** are fixed values assigned to variables (e.g., `42`, `3.14`, `'A'`).

**Constants** are variables whose values cannot be changed after initialization, declared using `const`.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    int age = 25; // Variable
    float pi = 3.14; // Literal assigned to variable
    const int MAX_AGE = 100; // Constant
    cout << "Age: " << age << ", Pi: " << pi << ", Max Age: " << MAX_AGE << endl;
    // MAX_AGE = 120; // Error: cannot modify const
    return 0;
}
```
**Output**:
```
Age: 25, Pi: 3.14, Max Age: 100
```
**How it Works**:
- `age` is a variable that can change.
- `pi` is assigned a floating-point literal.
- `MAX_AGE` is a constant; attempting to modify it results in a compilation error.

## 4. Data Types
C++ has several built-in data types to define the type of data a variable can hold:
- **Integer**: `int` (e.g., `42`), `short`, `long`, `long long`.
- **Floating-point**: `float` (e.g., `3.14`), `double`.
- **Character**: `char` (e.g., `'A'`).
- **Boolean**: `bool` (`true` or `false`).
- **Void**: Represents no type, used in functions.
- **String**: `string` (requires `#include <string>`).

**Example**:
```cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    int num = 42;
    float price = 19.99;
    char grade = 'A';
    bool isValid = true;
    string name = "Alice";
    cout << "Num: " << num << ", Price: " << price << ", Grade: " << grade
         << ", Valid: " << isValid << ", Name: " << name << endl;
    return 0;
}
```
**Output**:
```
Num: 42, Price: 19.99, Grade: A, Valid: 1, Name: Alice
```
**How it Works**:
- Each variable is declared with a specific data type, determining its size and valid operations.
- `bool` outputs as `1` (true) or `0` (false).

## 5. Type Modifiers
Type modifiers alter the properties of basic data types:
- `signed`: Allows positive and negative values (default for `int`).
- `unsigned`: Only non-negative values, increases range.
- `short`: Reduces storage size.
- `long`: Increases storage size.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    unsigned int positive = 4294967295; // Max value for unsigned int (32-bit)
    long long bigNum = 9223372036854775807; // Max value for long long
    cout << "Unsigned: " << positive << ", Long long: " << bigNum << endl;
    return 0;
}
```
**Output**:
```
Unsigned: 4294967295, Long long: 9223372036854775807
```
**How it Works**:
- `unsigned int` stores only positive values, maximizing the range.
- `long long` extends the range for large integers.

## 6. Constants
Constants are immutable values, declared using `const` or defined using `#define`.

**Example**:
```cpp
#include <iostream>
#define PI 3.14159 // Macro constant
using namespace std;
int main() {
    const int MAX_USERS = 100; // Const variable
    cout << "PI: " << PI << ", Max Users: " << MAX_USERS << endl;
    return 0;
}
```
**Output**:
```
PI: 3.14159, Max Users: 100
```
**How it Works**:
- `#define` creates a macro constant, replaced during preprocessing.
- `const` variables are type-safe and scoped, preferred over macros.

## 7. Input/Output
C++ uses `cin` for input and `cout` for output, defined in `<iostream>`.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    string name;
    int age;
    cout << "Enter name and age: ";
    cin >> name >> age;
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
```
**Input**:
```
Alice 25
```
**Output**:
```
Enter name and age: Hello, Alice! You are 25 years old.
```
**How it Works**:
- `cin` reads input from the user, separated by whitespace.
- `cout` prints formatted output to the console.

## 8. Operators
C++ supports various operators:
- **Arithmetic**: `+`, `-`, `*`, `/`, `%`.
- **Assignment**: `=`, `+=`, `-=`, etc.
- **Increment/Decrement**: `++`, `--`.
- **Comparison**: `==`, `!=`, `<`, `>`, `<=`, `>=`.
- **Logical**: `&&`, `||`, `!`.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 3;
    cout << "a + b = " << a + b << endl;
    cout << "a % b = " << a % b << endl;
    a += 5; // a = a + 5
    cout << "a after += 5: " << a << endl;
    return 0;
}
```
**Output**:
```
a + b = 13
a % b = 1
a after += 5: 15
```
**How it Works**:
- Arithmetic operators perform mathematical operations.
- Assignment operators modify variables.
- `%` returns the remainder of division.

## 9. Relational and Logical Operators
**Relational Operators** compare values: `==`, `!=`, `<`, `>`, `<=`, `>=`.
**Logical Operators** combine conditions: `&&` (AND), `||` (OR), `!` (NOT).

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 10;
    bool result = (a < b) && (b > 0); // true
    cout << "a < b && b > 0: " << result << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "!result: " << !result << endl;
    return 0;
}
```
**Output**:
```
a < b && b > 0: 1
a == b: 0
!result: 0
```
**How it Works**:
- `&&` requires both conditions to be true.
- `||` requires at least one condition to be true.
- `!` negates the boolean result.

## 10. if, if...else, and Nested if...else
Conditional statements control program flow based on conditions.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    int score;
    cout << "Enter score: ";
    cin >> score;
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: C" << endl;
    }
    // Nested if
    if (score > 50) {
        if (score >= 90) {
            cout << "Excellent!" << endl;
        } else {
            cout << "Good!" << endl;
        }
    }
    return 0;
}
```
**Input**:
```
95
```
**Output**:
```
Enter score: Grade: A
Excellent!
```
**How it Works**:
- `if` checks a condition; if true, executes the block.
- `else if` checks additional conditions if the previous `if` is false.
- `else` handles all other cases.
- Nested `if` statements allow complex condition hierarchies.

## 11. Loops
C++ supports three loop types:
- **for**: Known number of iterations.
- **while**: Condition-based iteration.
- **do-while**: Executes at least once, then checks the condition.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    // for loop
    cout << "For loop: ";
    for (int i = 1; i <= 3; i++) {
        cout << i << " ";
    }
    cout << endl;
    // while loop
    cout << "While loop: ";
    int j = 1;
    while (j <= 3) {
        cout << j << " ";
        j++;
    }
    cout << endl;
    // do-while loop
    cout << "Do-while loop: ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 3);
    cout << endl;
    return 0;
}
```
**Output**:
```
For loop: 1 2 3
While loop: 1 2 3
Do-while loop: 1 2 3
```
**How it Works**:
- `for (init; condition; update)` initializes, checks, and updates a loop variable.
- `while (condition)` executes as long as the condition is true.
- `do { } while (condition);` ensures at least one execution.

## 12. Statements
C++ statements include:
- **Expression statements**: Evaluate expressions (e.g., `x = 5;`).
- **Compound statements**: Blocks of code in `{}`.
- **Control statements**: `if`, `switch`, loops.
- **Jump statements**: `break`, `continue`, `return`, `goto`.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue; // Skip 3
        if (i == 5) break; // Exit loop
        cout << i << " ";
    }
    return 0;
}
```
**Output**:
```
1 2 4
```
**How it Works**:
- `continue` skips the current iteration.
- `break` exits the loop.
- `return` exits the function.

## 13. Ternary Operator
The ternary operator (`?:`) is a concise alternative to `if-else`.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    int num = 10;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << num << " is " << result << endl;
    return 0;
}
```
**Output**:
```
10 is Even
```
**How it Works**:
- Syntax: `condition ? expression1 : expression2`.
- If `condition` is true, evaluates `expression1`; otherwise, `expression2`.

## 14. Functions
Functions are reusable blocks of code performing specific tasks.

### User-defined Function Types
- **No return, no arguments**:
```cpp
void sayHello() {
    cout << "Hello!" << endl;
}
```
- **With return, with arguments**:
```cpp
int add(int a, int b) {
    return a + b;
}
```

### Function Overloading
Functions with the same name but different parameters.

### Inline Functions
Functions prefixed with `inline` suggest the compiler to insert the function body directly, reducing overhead.

### Recursion
A function calling itself to solve smaller instances of a problem.

**Example**:
```cpp
#include <iostream>
using namespace std;

// Function with return and arguments
int add(int a, int b) {
    return a + b;
}

// Function Overloading
float add(float a, float b) {
    return a + b;
}

// Inline Function
inline int square(int x) {
    return x * x;
}

// Recursive Function
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << "Add integers: " << add(3, 4) << endl;
    cout << "Add floats: " << add(3.5f, 4.5f) << endl;
    cout << "Square: " << square(5) << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;
    return 0;
}
```
**Output**:
```
Add integers: 7
Add floats: 8
Square: 25
Factorial of 5: 120
```
**How it Works**:
- `add` is overloaded for `int` and `float`.
- `inline` function `square` avoids function call overhead.
- `factorial` recursively calculates `n!` by calling itself.

## 15. Object-Oriented Programming (OOP)
OOP is a paradigm based on objects and classes. A **class** defines properties (data members) and behaviors (member functions), while an **object** is an instance of a class.

### Encapsulation
Encapsulation binds data and methods together, restricting direct access to protect data integrity. Use `private` and `public` access specifiers.

**Example**:
```cpp
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student s1;
    s1.setDetails("Alice", 20);
    s1.display();
    // s1.name = "Bob"; // Error: name is private
    return 0;
}
```
**Output**:
```
Name: Alice, Age: 20
```
**How it Works**:
- `private` members (`name`, `age`) are accessible only through `public` methods.
- Encapsulation ensures controlled access, preventing invalid modifications.

### Inheritance
Inheritance allows a class (derived) to inherit properties and methods from another class (base).

**Example**:
```cpp
#include <iostream>
using namespace std;
class Person {
public:
    string name;
    void introduce() {
        cout << "Hi, I'm " << name << endl;
    }
};
class Employee : public Person {
public:
    int id;
    void show() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};
int main() {
    Employee e1;
    e1.name = "Bob";
    e1.id = 101;
    e1.introduce();
    e1.show();
    return 0;
}
```
**Output**:
```
Hi, I'm Bob
ID: 101, Name: Bob
```
**How it Works**:
- `Employee` inherits `name` and `introduce` from `Person`.
- `public` inheritance allows `Employee` to access `Person`’s public members.

### Polymorphism
Polymorphism allows methods to act differently based on the object calling them. Achieved via:
- **Function Overriding**: Using virtual functions.
- **Function Overloading**: Covered earlier.

**Example** (Virtual Functions):
```cpp
#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() {
        cout << "Some sound" << endl;
    }
};
class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark" << endl;
    }
};
int main() {
    Animal* a = new Dog();
    a->sound(); // Calls Dog's sound
    delete a;
    return 0;
}
```
**Output**:
```
Bark
```
**How it Works**:
- `virtual` enables runtime polymorphism.
- The derived class (`Dog`) overrides the base class (`Animal`) method.
- A base class pointer calls the derived class method.

### Abstraction
Abstraction hides complex implementation details, exposing only necessary interfaces. Achieved using abstract classes (with pure virtual functions).

**Example**:
```cpp
#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};
int main() {
    Shape* s = new Circle();
    s->draw();
    delete s;
    return 0;
}
```
**Output**:
```
Drawing Circle
```
**How it Works**:
- `Shape` is an abstract class with a pure virtual function (`draw`).
- `Circle` provides the implementation.
- Users interact with the interface without knowing the implementation details.

## 16. Pointers
Pointers store memory addresses of variables. Declared with `*` and accessed using `*` (dereference) or `&` (address-of).

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int* ptr = &x; // Pointer to x
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Value at ptr: " << *ptr << endl;
    *ptr = 20; // Modify x via pointer
    cout << "New value of x: " << x << endl;
    return 0;
}
```
**Output** (addresses vary):
```
Value of x: 10
Address of x: 0x7ffee4c0a4ac
Value at ptr: 10
New value of x: 20
```
**How it Works**:
- `&x` gets the address of `x`.
- `*ptr` accesses or modifies the value at the address.

## 17. Arrays
Arrays store multiple elements of the same type. Types include:
- **C-style arrays**: Fixed-size, e.g., `int arr[5];`.
- **Character arrays**: Store strings, e.g., `char str[10];`.
- **Strings**: `std::string` for dynamic strings.
- **Vectors**: Dynamic arrays from STL (`<vector>`).

**Example**:
```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    // C-style array
    int arr[3] = {1, 2, 3};
    cout << "C-style array: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Character array
    char str[] = "Hello";
    cout << "Char array: " << str << endl;
    // String
    string s = "World";
    cout << "String: " << s << endl;
    // Vector
    vector<int> vec = {10, 20, 30};
    vec.push_back(40);
    cout << "Vector: ";
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
```
**Output**:
```
C-style array: 1 2 3
Char array: Hello
String: World
Vector: 10 20 30 40
```
**How it Works**:
- C-style arrays have fixed sizes.
- `char` arrays store null-terminated strings.
- `std::string` handles dynamic strings.
- `vector` resizes dynamically with methods like `push_back`.

## 18. Advanced Topics
### Exception Handling
Handles runtime errors using `try`, `catch`, and `throw`.

**Example**:
```cpp
#include <iostream>
using namespace std;
int main() {
    try {
        int age;
        cout << "Enter age: ";
        cin >> age;
        if (age < 0) throw "Invalid age";
        cout << "Age: " << age << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
    return 0;
}
```
**Input**:
```
-5
```
**Output**:
```
Enter age: Error: Invalid age
```
**How it Works**:
- `throw` raises an exception.
- `catch` handles the exception type.

### Standard Template Library (STL)
STL provides containers (`vector`, `map`), algorithms (`sort`), and iterators.

**Example**:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {5, 2, 9, 1};
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
```
**Output**:
```
Sorted vector: 1 2 5 9
```
**How it Works**:
- `vector` stores dynamic arrays.
- `sort` from `<algorithm>` sorts the vector using iterators.
