# C++ Module 01 - Memory Allocation, Pointers, and References

## 🔍 Overview
This module focuses on memory allocation, pointers to members, references, and switch statements in C++98. You’ll explore stack vs. heap allocation, references, and deeper object management techniques.

## 📜 General Rules
- Compilation: Use c++ -Wall -Wextra -Werror and ensure compatibility with -std=c++98.

- Naming Conventions:
    - Class names follow UpperCamelCase.

    - Header files match class names (ClassName.hpp).

- Forbidden Features:
    - `using namespace <ns_name>` and `friend` keywords.

    - STL (Vectors, Lists, Maps, etc.) until Module 08.

    - `std::string::replace` in Exercise 04.

- Memory Management: Avoid memory leaks when using new.

- Include Guards: Use `#ifndef / #define` to prevent double inclusion.

## Exercises

### 🧠 Exercise 00 - BraiiiiiiinnnzzzZ
Objective: Implement a Zombie class with a `name` attribute and an `announce()` function.
- Implement two functions:
    - `Zombie* newZombie(std::string name);` (allocates on the heap)

    - `void randomChump(std::string name);` (allocates on the stack)

- Zombies must be properly destroyed, and the destructor should log their deletion.

### 🧟‍♂️ Exercise 01 - Moar brainz!
Objective: Implement a zombie horde by allocating multiple Zombie objects in one allocation.

- Implement `Zombie* zombieHorde(int N, std::string name);`.

- Ensure proper initialization and destruction.

- Call `announce()` for all zombies and check for memory leaks.

### 🧵 Exercise 02 - HI THIS IS BRAIN
Objective: Learn about references and pointers by manipulating a string.

- Create a string variable initialized to `"HI THIS IS BRAIN"`.

- Create a pointer (`stringPTR`) and a reference (`stringREF`) to the string.

- Print the memory addresses and values for each.

### ⚔️ Exercise 03 - Unnecessary Violence
Objective: Implement a Weapon class and two Human classes (HumanA and HumanB).

- `Weapon` class has:

- `std::string type`

- `getType()` and `setType()`

- `HumanA` and `HumanB` both have a weapon and an `attack()` function:

    - `HumanA` always has a weapon.

    - `HumanB` might not have a weapon.

- Investigate pointer vs. reference use cases.

### 📄 Exercise 04 - Sed is for losers
Objective: Implement a program to replace occurrences of a string in a file.

- Takes three arguments: `filename`, `s1`, `s2`.

- Reads the file and writes the modified content to `filename.replace`.

- Forbidden: `std::string::replace`.

- Handle errors and unexpected inputs.

### 😡 Exercise 05 - Harl 2.0
Objective: Implement a Harl class that outputs different complaint messages based on log levels.

- Log levels: `DEBUG`, `INFO`, `WARNING`, `ERROR`.

- Use **pointers to member functions** instead of if-else chains.

- Implement `void complain(std::string level);`.

### 🔇 Exercise 06 - Harl filter
Objective: Extend Harl to filter complaints above a given level.

- Takes a log level as a **command-line argument**.

- Prints messages **from that level and higher**.

- Uses a `switch` statement instead of `if-else` chains.

- Implement the executable as `harlFilter`.

## 🎯 Conclusion

By completing this module, you'll deepen your understanding of:
✅ Memory allocation (stack vs. heap)

✅ References and pointers

✅ Class structures and relationships

✅ File manipulation and error handling

✅ Pointers to member functions and switch statements

These exercises build a solid foundation for more advanced C++ concepts.

## 👥 Author
[**Tudor Ursescu**](https://github.com/Tudor-Ursescu)
## 📜 License
This is an open-source project, and you are free to use, modify, and distribute it as you see fit.