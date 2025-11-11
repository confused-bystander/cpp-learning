# Simple Math Program
A program that does multiplication, division, addition, subtraction and GCD of two user inputed integers.

## Thoughts:
- So far everything is fairly similar to Java.
- I'm not used to not listing visibility for variables.
- Using multiple files is similar to Java which is nice - though forward declarations are needed, which makes sense for a one-pass compiler.
- The usage of insertion (<<) and extraction (>>) on character input and output is new and interesting.

- Header guards are interesting. I'll probably stick to #pragma once instead of doing the standard include guard since Visual Studio uses it and after doing some reading, it'll fail if I have the same file name across several directories which I will likely avoid.