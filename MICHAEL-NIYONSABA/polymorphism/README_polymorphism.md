# C++ Assignment 2: Runtime Polymorphism

## 1. Project description
This project demonstrates **runtime polymorphism** in C++ using a real-world example of animals making different sounds.

The program defines a parent class, `Animal`, and two derived classes, `Dog` and `Cat`. The derived classes override the virtual function `sound()`. A pointer to the base class is used to call the overridden function, showing that the same function call can produce different behaviours depending on the actual object.

## 2. Objectives
- Define a parent class with at least one virtual member function.
- Define at least two derived classes.
- Override the virtual function in each derived class.
- Demonstrate runtime polymorphism through a base-class pointer.
- Create objects and demonstrate inherited and locally defined member functions.
- Explain polymorphism with an illustration.

## 3. Technologies
- Language: C++
- Compiler: GCC/G++ (or another modern C++ compiler)
- Editor: Visual Studio Code (optional)

## 4. Class structure

### `Animal` — parent class
- `sound()` — virtual function with a default implementation.
- `display()` — inherited member function.
- Virtual destructor — good practice for a polymorphic base class.

### `Dog` — derived class
- Overrides `sound()` to display a barking sound.
- Defines `fetch()` as a class-specific function.

### `Cat` — derived class
- Overrides `sound()` to display a meowing sound.
- Defines `climb()` as a class-specific function.

## 5. How runtime polymorphism works
1. The program creates `Dog` and `Cat` objects.
2. It declares a base-class pointer: `Animal* ptr`.
3. The pointer is assigned the address of the dog object, then `ptr->sound()` is called.
4. The pointer is assigned the address of the cat object, then the same call, `ptr->sound()`, is made again.
5. Because `sound()` is virtual, C++ calls the implementation belonging to the actual object.

The same call therefore produces different results: the dog barks and the cat meows.

## 6. Compilation and execution

Save the source code as `polymorphism.cpp`.

Compile:

```bash
g++ polymorphism.cpp -o polymorphism
```

Run on Windows PowerShell:

```powershell
.\polymorphism.exe
```

Run on Linux/macOS:

```bash
./polymorphism
```

## 7. Sample output

```text
===== RUNTIME POLYMORPHISM IN C++ =====

--- Dog Object ---
Dog barks: Woof! Woof!
This is an animal.
The dog is fetching a ball.

--- Cat Object ---
Cat meows: Meow! Meow!
This is an animal.
The cat is climbing a tree.

--- Base Class Object ---
Animal makes a sound.

Polymorphism demonstration completed.
```

## 8. Assignment requirements covered

| Requirement | Demonstration |
|---|---|
| Parent class | `Animal` |
| Virtual member function | `virtual void sound()` |
| At least two derived classes | `Dog` and `Cat` |
| Overriding | Both classes override `sound()` |
| Runtime polymorphism | `ptr->sound()` |
| Base-class pointer | `Animal* ptr` |
| Suitable objects | `dog`, `cat`, and `animal` |
| Inherited member | `display()` |
| Locally defined members | `fetch()` and `climb()` |
| Illustration | Hand-drawn runtime-polymorphism diagram |

## 9. Illustration
See the accompanying file `polymorphism_handdrawn_illustration.png` for a visual explanation of the inheritance relationship and the same base-class pointer calling different implementations.

## 10. Conclusion
The project demonstrates runtime polymorphism using inheritance, virtual functions, function overriding, derived-class objects, and a base-class pointer. The same function call, `ptr->sound()`, produces different behaviour depending on whether the pointer refers to a `Dog` or a `Cat` object.
