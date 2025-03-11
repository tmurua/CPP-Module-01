# CPP-Module-01

This repository contains my solutions for Module 01. Below is an overview of my approach for each exercise.

---

## ex:00 - BraiiiiiiinnnzzzZ

### Plan
1. **Create `Zombie` class** in `Zombie.hpp` with private name `std::string attribute`.
2. **Create `announce()`** member function/method in the `Zombie` class
```
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
```
3. **Create `Zombie* newZombie(std::string name);`** function in `newZombie.cpp` that uses new to allocate a `Zombie` on the `heap`.
4. **Create `void randomChump(std::string name);`** in `randomChump.cpp` to create a `Zombie` on the `stack` and make it announce itself.


### Lessons Learned
- **new Operator:** Dynamically allocates an object on the `heap` (see below), letting it live beyond the function scope until you delete it. I.e. the `new` operator creates an object that stays around even after the function ends, so it can ne used later (it must later be freed with the `delete` operator.)


  - **In practice:**
 In `Zombie* z = new Zombie("Foo");`, `new` creates a Zombie `z` named "Foo" by calling its constructor and returns a pointer to it. This way, the Zombie remains available outside the function until the memory is freed with `delete z;`. In the `newZombie()` function, using `new` ensures that the Zombie `z` persists beyond the function scope, so it can be used later.

- **Memory Concepts and the new Operator:**
  - **Stack:**
    Variables declared inside functions (like local variables) are stored on the `stack`. For example:
    ```cpp
    void example()
	{
        int x = 10;
	// 'x' is allocated on the stack and is automatically freed when function returns
    }
    ```
  - **Heap:**
    The `heap` is a memory area used for dynamic allocation. The `new` operator allocates memory on the `heap` and calls the constructor, so the object persists after the function ends. For example, in `newZombie()`:
    ```cpp
    Zombie* z = new Zombie("Foo");
	// allocates a Zombie on the heap; z remains valid outside function
    ```
    After using it, the object's memory must be freed by using `delete`:
    ```cpp
    delete z; // frees the memory allocated on the heap
    ```
    This ensures that the object doesn't get destroyed when a function ends, unlike stack-allocated variables.
  - **Static Memory:**
    Static or global variables exist for the entire lifetime of the program. They are not tied to a specific function's execution.
- **Destructor:**
    The destructor of a class cleans up when an object is destroyed. For Zombies created with new (on the heap), you must call delete to free the memory, which then automatically calls the destructor.

---

## ex:01 - Moar brainz!

### Plan
This exercise adds **arrays allocation** to the last one. Taking ex00 as a basis:
1. **Change the constructor** to take no parameters (default constructor) and create a set member function to give the object `Zombie` a `std::string name`.

2. **Implement `Zombie* zombieHorde(int N, std::string name);`** in `zombieHorde.cpp`:

   - Allocate an array of `N Zombies` using `new Zombie[N]`:
  ```
  Zombie*	horde = new Zombie[N];
  ```
   - Loop through the array to initialize each `Zombie`’s `name`
   - Return a pointer to the first `Zombie`

3. **In main.cpp**:
    Call `zombieHorde()` to create a horde.
    Use delete[] to free the allocated Zombies.

### Lessons Learned
- **array allocation using new and delete operators:**
  Using `new Zombie[N]` allocates multiple objects on the `heap`. These objects persist until explicitly freed with `delete[]`

---

## ex:02 -  HI THIS IS BRAIN

### Plan
1. **Step1**

### Lessons Learned
- **Lesson**

---
## ex:03 - Unnecessary violence

### Plan
1. **Weapon Class**:
   - Create a `Weapon` class in `Weapon.hpp` with a private string attribute type.
   - Implement `getType()` to return a constant reference to type.
   - Implement `setType()` to update type.

2. **HumanA Class**:
   - Create `HumanA` in `HumanA.hpp` with a `name` and a `Weapon`.
   - The constructor takes a `name` and a **`reference to a Weapon`** (HumanA is always armed).
   - Implement `attack()` to print:
  ```
  <name> attacks with their <weapon type>
  ```

1. **HumanB Class**:
   - Create `HumanB` in `HumanB.hpp` with a name and a **`Weapon pointer`**.
   - The constructor takes only a `name`; a `Weapon` can be set later with `setWeapon()`.
   - Implement `attack()` to print the attack message only if a weapon is set; otherwise, handle the unarmed case.

2. **Main Function**:
   - Test the functionality for both `HumanA` and `HumanB`.
   - Change the Weapon's type between attacks to verify that the updated weapon type is used.

### Lessons Learned
- **Pointers vs. References**:
  `HumanA` must always have a weapon, so a reference (passed as an argument and stored as a pointer) works well. `HumanB` may not always have a weapon, so storing a `Weapon pointer` that can be `null` is appropriate.

---
## ex:04 - Sed is for losers

### Plan
1. **Check arguments:**
   - Program should receive 3 parameters: filename, string `s1`, and string `s2`, i.e. `argc = 4;`
   - If not, display an usage message and exit.

2. **Read input file:**
   - Open input file using `std::ifstream` (input file stream).
   - Read file's `og_content` into a single `std::string` using `std::stringstream`.
   - Use the member function `rdbuf()` of `std::ifstream` to read the file's internal buffer.
   - Convert the stream buffer to a string using the `str()` member function of `std::stringstream`.

3. **Replace `s1` with `s2` (without using std::string::replace):**
  - Start with the full content of the input file stored in `og_content`.
  - Initialize a position marker `og_pos` at 0 (the start of the string).
  - Use `std::string::find(s1, og_pos)` to search for the first occurrence of `s1` in `og_content` starting at `og_pos`, mark the index of the occurence as `s1_found_index`.
  - While `s1` is found:
    - Extract the substring from `og_content` that lies between the current position (`og_pos`) and the `s1_found_index` and append this prefix segment, this `content_part` to a new string `new_content`.
    - Append `s2` (the replacement string) to `new_content` in place of the found occurrence of `s1`.
    - Update `og_pos` to `s1_found_index + s1.length()` so the next search starts after the replaced segment.
  - Once no further occurrence of `s1` is found (i.e., `find()` returns `std::string::npos`), append the remaining text (from `og_pos` to the end of `og_content`) to `new_content`.


1. **Writing to the output file:**
   - Create an output filename by appending `.replace` to the original filename.
   - Open a `std::ofstream` with the new filename.
   - Write the modified `new_content` (with `s1` replaced by `s2`) to this file.

2. **Error handling:**
   - Check that both input and output files open successfully. Can use a flag for this.
   - Handle unexpected errors gracefully by printing error messages.

### Lessons Learned
- **File I/O in C++:**
  Using the classes `std::ifstream` and `std::ofstream` and their member function `rdbuf()` for reading from and writing to files, respectively, instead of C-style file functions.
- **String manipulation:**
  Using the classes `std::string::find` and `std::string::substr`, to manually reconstruct a string with substitutions, reinforces an understanding of how string searching and slicing work.
- **Dynamic memory:**
  Reading a file's content into a `std::stringstream` using its member function `str()` in conjuction with `std::ifstream` to later write it to a new file exemplifies the use of dynamic memory allocation in C++.

---
## ex:05 - Harl 2.0

### Plan
1. **Step1**

### Lessons Learned
- **Lesson**

---
## ex:06 - Harl filter

### Plan
1. **Step1**

### Lessons Learned
- **Lesson**

---

## Final Thoughts


