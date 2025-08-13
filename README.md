# C++ Module 04

# Concepts:

- Subtyping
- Abstract classes
- Pure virtual functions
- Virtual Destructors
- Deep copies

# ex00

Introduced runtime polymorphism with a base `Animal` class and derived `Dog` and `Cat` classes, showcasing virtual methods and the effects of incorrect inheritance via `WrongAnimal`/`WrongCat`.

Usage:
```
make
```
```
./animal
```

# ex01

Added a `Brain` class with dynamic allocation inside `Dog` and `Cat`, implementing deep copies and proper destructor behavior to manage resources without leaks.

Usage:
```
make
```
```
./brain
```

# ex02

Made `Animal` abstract to prevent instantiation, reinforcing the use of pure virtual methods in base classes.

Usage:
```
make
```
```
./abstract
```

# ex03

Implemented a Materia system with abstract interfaces (`ICharacter`, `IMateriaSource`) and concrete classes (`Ice`, `Cure`, `Fire`, `Thunder`, `Character`, `MateriaSource`), combining inheritance, polymorphism, deep copying, and resource management.

Usage:
```
make
```
```
./materia
```

-----
⏪️ Go back to [C++ Module 03](https://github.com/ricvrdv/cpp-03/tree/main) - inheritance between classes
