# New Class Code Playbook 🎉

## 1. Welcome to the Orthodox Canonical Form Club! 🎓
From now on, all your classes must join the exclusive ranks of the Orthodox Canonical Form, unless you receive special clearance otherwise.

## 2. The Fantastic Four! 👑
To join the club, each class must feature these four superstar members:
- **Default constructor** (The magic opener 🪄)
- **Copy constructor** (The clone master 🧬)
- **Copy assignment operator** (The switcheroo artist 🔄)
- **Destructor** (The clean-up crew 🧹)

## 3. Divide and Conquer! ⚔️
- **Header file (.hpp/.h):** Contains the class's royal decree (definition).
- **Source file (.cpp):** Implements the class's grand plan (implementation).

# You Think You Know Numbers? Think Again! 😏

## Step 1: The Basics 🤔
Up until now, you've been working with:
- **Integers** and their buddies (short, char, long, etc.)
- **Floating-point numbers** and their cousins (float, double, etc.)

These have been your go-to number types in coding.

## Step 2: Opposite Characteristics ⚖️
Integers and floating-point numbers couldn't be more different in their characteristics. It’s a classic case of opposites attract.

## Step 3: Meet the Game Changer 🚀
Introducing **fixed-point numbers**—your new best friend in coding! Fixed-point numbers strike the perfect balance between:
- **Performance** 💨
- **Accuracy** 🎯
- **Range** 📏
- **Precision** 🔬

## Why Should You Care? 🤷‍♂️
Fixed-point numbers are particularly useful in:
- **Computer graphics** 🎨: For flawless visual calculations.
- **Sound processing** 🎵: Keeping your audio crisp and clear.


Sure thing! Here's everything compiled into one Markdown file:

```markdown
# Exercises for Fixed-Point Number Class

## Exercise 00: My First Class in Orthodox Canonical Form 🎓

### The Journey Begins
Your first steps into the world of class design were promising, but our class currently represents a grand total of... 0.0. 🥲 Time to spice things up! 🌶️

### Level Up: Constructor Edition 🚀
Add these public constructors and member functions to your class:
- **Integer Constructor** 🧮: Takes a constant integer and converts it to a fixed-point value with 8 fractional bits.
   ```cpp
   Fixed(const int value);
   ```
- **Floating-Point Constructor** 🌊: Takes a constant floating-point number and converts it to a fixed-point value with 8 fractional bits.
   ```cpp
   Fixed(const float value);
   ```
- **Convert to Float** 🧊: `float toFloat(void) const;` Transforms the fixed-point value into a floating-point value.
   ```cpp
   float toFloat(void) const;
   ```
- **Convert to Int** 🏃‍♂️: `int toInt(void) const;` Transforms the fixed-point value into an integer value.
   ```cpp
   int toInt(void) const;
   ```

### Stream Magic ✨
Add an overload of the insertion (`<<`) operator to insert a floating-point representation of the fixed-point number into the output stream object passed as a parameter.
   ```cpp
   friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
   ```

## Exercise 01: Towards a More Useful Fixed-Point Number Class 💡

### Enhancing the Foundation
Our previous class was a humble beginning, but let's push its boundaries. 🌟 Here’s how to level up:

### Constructor Upgrades 🛠️
- **Integer Constructor** 🧮: Transforms a constant integer into a fixed-point value with 8 fractional bits.
   ```cpp
   Fixed(const int value);
   ```
- **Floating-Point Constructor** 🌊: Converts a constant floating-point number into a fixed-point value with 8 fractional bits.
   ```cpp
   Fixed(const float value);
   ```

### Transformation Skills 🔄
- **Convert to Float** 🧊: `float toFloat(void) const;` Transforms the fixed-point value into a floating-point value.
   ```cpp
   float toFloat(void) const;
   ```
- **Convert to Int** 🏃‍♂️: `int toInt(void) const;` Transforms the fixed-point value into an integer value.
   ```cpp
   int toInt(void) const;
   ```

### Stream Magic ✨
Add an overload of the insertion (`<<`) operator to insert a floating-point representation of the fixed-point number into the output stream object passed as a parameter.
   ```cpp
   friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
   ```

## Exercise 02: Now We’re Talking 🗣️

### Operator Overload Party 🎉
Add public member functions to overload these operators:
- **Comparison Operators**: `>`, `<`, `>=`, `<=`, `==`, and `!=`.
   ```cpp
   bool operator>(const Fixed &other) const;
   bool operator<(const Fixed &other) const;
   bool operator>=(const Fixed &other) const;
   bool operator<=(const Fixed &other) const;
   bool operator==(const Fixed &other) const;
   bool operator!=(const Fixed &other) const;
   ```
- **Arithmetic Operators**: `+`, `-`, `*`, and `/`.
   ```cpp
   Fixed operator+(const Fixed &other) const;
   Fixed operator-(const Fixed &other) const;
   Fixed operator*(const Fixed &other) const;
   Fixed operator/(const Fixed &other) const;
   ```
- **Increment/Decrement Operators**: Pre-increment, post-increment, pre-decrement, and post-decrement, adjusting the fixed-point value by the smallest representable ϵ.
   ```cpp
   Fixed &operator++();      // Pre-increment
   Fixed operator++(int);    // Post-increment
   Fixed &operator--();      // Pre-decrement
   Fixed operator--(int);    // Post-decrement
   ```

### Superpowers: Min and Max 🏅
Add these public overloaded member functions to your class:
- **Static Min**: Takes two references to fixed-point numbers and returns a reference to the smallest one.
   ```cpp
   static Fixed &min(Fixed &a, Fixed &b);
   ```
- **Static Min (Const)**: Takes two references to constant fixed-point numbers and returns a reference to the smallest one.
   ```cpp
   static const Fixed &min(const Fixed &a, const Fixed &b);
   ```
- **Static Max**: Takes two references to fixed-point numbers and returns a reference to the greatest one.
   ```cpp
   static Fixed &max(Fixed &a, Fixed &b);
   ```
- **Static Max (Const)**: Takes two references to constant fixed-point numbers and returns a reference to the greatest one.
   ```cpp
   static const Fixed &max(const Fixed &a, const Fixed &b);
   ```

## Exercise 03: BSP - Bonus 🎁

### Putting It All Together
Now that your Fixed class is fully functional, let’s put it to use! Implement a function that indicates whether a point is inside a triangle or not. 🛠️
```

- **Scientific programming** 🔬: Ensuring your data remains spot on.

Fixed-point numbers are here to elevate your coding game. Embrace the change and enjoy the ride! 🎉
