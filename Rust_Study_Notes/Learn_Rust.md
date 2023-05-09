# Cargo
> Cargo is Rust's build system and package manager.
---
# Printing & Formatting
> This prints "Hello, world!" to the console.
- `println!("Hello, world!");`
> This prints "31 days" by using a placeholder {}. Placeholders are replaced by the arguments listed after the format string.
- `println!("{} days", 31);`
> This prints "Brad is from Mass" by using multiple placeholders.
- `println!("{} is from {}.", "Brad", "Mass");`
> Place holders using positional arguments. This prints "Brad is from Mass and likes to code." The arugments are indexed starting at 0.
- `println!("{0} is from {1} and {0} likes to {2}.", "Brad", "Mass", "code");`
> Place holders using named argurments. This prints "John likes to play baseball." by naming the arguments.
- `println!("{name} likes to play {activity}.", name = "John", activity = "baseball");`
>Place holder traits. This will print 10 in binary, hex, and octal.
- `println!("Binary: {:b} Hex: {:x} Octal: {:o}", 10, 10, 10);`
> Basic math. This prints 20 using an addition expression.
- `println!("10 + 10 = {}", 10 + 10);`
---
# Variables
- Variables hold primitive data or references to data.
- Variables are immutable by default.
- Rust is a block-scoped language.
> This assigns "Brad" to the variablle "name". 
- `let name = "Brad";`
> This assigns 37 to the variable "age".
- `let age = 37;`
> The "mut" keyword allows us to change the value of the variable "age".
- `let mut age = 37;`
> This is how you declare a constant variable. 
- `const ID: i32 = 001;`
> This how you assign multiple variables at once.
- `let (my_name, my_age) = ("Brad", 37);`
---
# Constants
- Constants are always immutable, must be set to a constant expression instead of result that can only be computed at runtime.
> This is how you declare a constant variable. 
- `const ID: i32 = 001;`
---
# Data Types
1. Integers: u8, i8, u16, i16, u32, i32, u64, i64, u128, i128 (number of bits they take in memory)
2. Floats: f32, f64
3. Boolean (bool)
4. Characters (char)
5. Tuples
6. Arrays
- Rust is a statically typed language, which means that it must know the types of all variables at compile time, however, the compiler can usually infer what type we want to use based on the value and how we use it.
> This instantiates a variable with a 32-bit integer.
- `let x = 1;`
> This instantiates a variable with a 64-bit float.
- `let y = 2.5;`
> This instantiates a variable with a boolean.
- `let is_active = true;`
> This instatntiates a variable with a boolean explicitly.
- `let is_active: bool = true;`
> This instantiates a variable with a boolean using an expression.
- `let is_greater: bool = 10 < 5;`
> This instantiates a variable with a character.
- `let a1 = 'a';`
> This instantiates a variable with a unicode character.
- `let face = '\u{1F600}';`
> This instantiates a variable with a tuple.
- `let tup: (i32, f64, u8) = (500, 6.4, 1);`
> This instantiates a variable with an array.
- `let arr = [1, 2, 3];`
> This instantiates a variable with an array with a fixed size of 5.
- `let arr = [1, 2, 3, 4, 5];`
> This instantiates a variable with an array with a fixed size of 5 and all values are 1.
- `let arr = [1; 5];`
---
# Strings
- Primitive str = Immutable fixed-length string somewhere in memory
- String = Growable, heap-allocated data structure - Use when you need to modify or own string data
> Instantiates a variable with a growable string.
- `let mut hello = String::from("Hello ");`
> Get length of string. Returns a number.
- `println!("Length: {}", hello.len());`
> Push a character to the string. Returns nothing.
- `hello.push('W');`
> Push a string to the string. Returns nothing.
- `hello.push_str("orld!");`
> Capacity in bytes. Returns a number.
- `println!("Capacity: {}", hello.capacity());`
> Check if empty. Returns a boolean.
- `println!("Is Empty: {}", hello.is_empty());`
> Contains. Returns a boolean.
- `println!("Contains 'World' {}", hello.contains("World"));`
> Replace. Returns the replaced string.
- `println!("Replace: {}", hello.replace("World", "There"));`
> Loop through string by whitespace. Prints each word line by line.
``` 
  for word in hello.split_whitespace() {
    println!("{}", word);
  }
  ```
> Create string with capacity.
- `let mut s = String::with_capacity(10);`
> Assertion testing.
- `assert_eq!(11, s.len());`
> Assertion testing.
- `assert_eq!(20, s.capacity());`
---
# Tuples
- Tuples are groups of values of different types with a max of 12 elements. You have to delcare the type of each element in the tuple.
> Instantiate a tuple.
- `let person: (&str, &str, i8) = ("Brad", "Mass", 37);`
> Accessing tuple values.
- `println!("{} is from {} and is {}", person.0, person.1, person.2);`
---
# Arrays
- Arrays are groups of values of the same type with a max of 32 elements. You have to delcare the type of each element in the array.
> Instantiate an array.
- `let mut numbers: [i32; 5] = [1, 2, 3, 4, 5];`
> Printing the array.
- `println!("{:?}", numbers);`
> An error is thrown if we have 4 elements instead of 5.
- `let numbers: [i32; 5] = [1, 2, 3, 4];`
> An error is thrown if we have a value that is not an integer.
- `let numbers: [i32; 5] = [1, 2, 3, 4, "5"];`
> Get a single value from the array. 
- `println!("Single Value: {}", numbers[0]);`
> Changing a value in the array.
- `numbers[0] = 20;`
> Get length of the array.
- `println!("Array Length: {}", numbers.len());`
> Get memory size of the array. They are stack allocated.
- `println!("Array occupies {} bytes", std::mem::size_of_val(&numbers));`
> Get slice from the array. This will slice the array from index 0 to 2.
- `let slice: &[i32] = &numbers[0..2];`
> Print the slice.
- `println!("Slice: {:?}", slice);`
---
# Vectors
- Vectors are resizable arrays.
> Instantiate a vector.
- `let mut numbers: Vec<i32> = vec![1, 2, 3, 4, 5];`
- You can do everything that the array can do.
> Add on to vector.
- `numbers.push(6);`
> Pop off last value. 
- `numbers.pop();`
> Loop through vector values.
```
for x in numbers.iter() {
  println!("Number: {}", x);
}
```
> Loop and mutate values.
```
for x in numbers.iter_mut() {
  *x *= 2;
}
```
---
# Conditionals
- Conditionals are used to check the condition of something and act on the result.
> If/Else
```
let age: u8 = 18;
let check_id: bool = true;
let knows_person_of_age = true;

if age >= 21 && check_id || knows_person_of_age {
  println!("Bartender: What would you like to drink?");
} else if age < 21 && check_id {
  println!("Bartender: Sorry you have to leave");
} else {
  println!("Bartender: I'll need to see your ID");
}
```
> Shorthand
```
let is_of_age = if age >= 21 { true } else { false };
println!("Is Of Age: {}", is_of_age);
```
# Loops
- Loops are used to iterate until a condition is met.
> Infinite Loop
```
let mut x = 1;

loop {
  if x == 20 {
    break;
  }

  x += 1;
}
```
> While Loop
```
let mut x = 1;
while x <= 100{
    if x % 15 == 0 {
        println!("fizzbuzz");
    } else if x % 3 == 0 {
        println!("fizz");
    } else if x % 5 == 0 {
        println!("buzz");
    } else {
        println!("{}", x);
    }
    
    x += 1;
}
```
> For Range
```
for x in 0..100 {
  println!("{}", x);
}
```
# Functions
- Functions are used to store blocks of code for re-use.
> Function declaration
```
fn greet(greeting: &str, name: &str) {
  println!("{} {}, nice to meet you!", greeting, name);
}
```
> Add function; no semicolon means that it is an expression we want to return. 
```
fn add(x: i32, y: i32) -> i32 {
  x + y
}
```
> Bind function values to variables.
```
let get_sum = add(5, 5);
println!("Sum: {}", get_sum);
```
> Closure
```
let z = 100; 
let add_nums = |x: i32, y: i32| x + y + z;
println!("C Sum: {}", add_nums(3, 3));
```
---
# Pointers & References
> Primitive Array
```
let arr1 = [1, 2, 3];
let arr2 = arr1;
```
> Non-primitive Vector. With non primitives, if you assign another variable to a piece of data, the first variable will no longer hold that value. You'll need to use a reference (&) to point to the resource.
```
let vec1 = vec![1, 2, 3];
let vec2 = &vec1;
println!("Values: {:?}", (&vec1, vec2));
```
---
# Structs
- Structs are used to create custom data types.
> Struct
```
struct Color {
  red: u8,
  green: u8,
  blue: u8,
}
```
> Creating an instance of a struct.
```
let mut bg = Color { red: 255, green: 70, blue: 0 };
```
> Print
```
println!("BG: {} {} {}", bg.red, bg.green, bg.blue);
```
> Tuple struct; use bg.# to access the values since we did not name them.
```
struct Color(u8, u8, u8);
let mut bg = Color(255, 70, 0);
println!("BG: {} {} {}", bg.0, bg.1, bg.2);
```
> Struct Method
```
struct Person {
  first_name: String,
  last_name: String,
}
impl Person {
  // Construct person
  fn new(first: &str, last: &str) -> Person {
    Person {
      first_name: first.to_string(),
      last_name: last.to_string(),
    }
  }
  // Get full name
  fn full_name(&self) -> String {
    format!("{} {}", self.first_name, self.last_name)
  }
  // Set last name
  fn set_last_name(&mut self, last: &str) {
    self.last_name = last.to_string();
  }
  // Name to tuple
  fn to_tuple(self) -> (String, String) {
    (self.first_name, self.last_name)
  }
}
```
---
# Enums
- Enums are used to create custom data types that can be one of several variants.
> Creating an enum
```
enum Movement {
  // Variants
  Up,
  Down,
  Left,
  Right,
}
```
> Using an enum
```
fn move_avatar(m: Movement) {
  // Perform action depending on info
  match m {
    Movement::Up => println!("Avatar moving up"),
    Movement::Down => println!("Avatar moving down"),
    Movement::Left => println!("Avatar moving left"),
    Movement::Right => println!("Avatar moving right"),
  }
}
```
> Main
```
let avatar1 = Movement::Left;
let avatar2 = Movement::Up;
let avatar3 = Movement::Down;
let avatar4 = Movement::Right;
```
# Fun facts about Rust
- Rust was invented by Graydon Hoare, a Mozilla employee, in 2006.
- Rust is a compiled and an imperative language.
- The benefits of using Rust is that it is fast, memory safe, and thread safe.
- Rust is for systems programming.
