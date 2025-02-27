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
1.

---

## ex:02 -  HI THIS IS BRAIN

### Plan
1. **Step1**

### Lessons Learned
- **Lesson**

---
## ex:03 - Unnecessary violence

### Plan
1. **Step1**

### Lessons Learned
- **Lesson**

---
## ex:04 - Sed is for losers

### Plan
1. **Step1**

### Lessons Learned
- **Lesson**

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


