# Variables and Types
- **Character types** &rarr; they are represented by a single character (ex: 'a'). Most basic type is char, a one-byte character
- **Numerical integer types** &rarr; they store whole number values such as 1 or 17. they can be **signed** or **unsigned** depending on if they support negative values.
- **Floating-point types** &rarr; they can represent real values such as 3.14 orf 0.178, with different levels of precision based on which of the three floating-point types is used.
- **Boolean type** &rarr; known as bool in c++ and is represented by either true or false.
| Group                   | Type names            | Notes                                           |
|-------------------------|-----------------------|-------------------------------------------------|
| Character Types         | char                  | exactly one byte in size. 8 bits at least       |
| Character Types         | char16_t              | not smaller than char. at least 16 bits         |
| Character Types         | char32_t              | not smaller than char16_t. at least 32 bits     |
| Character Types         | wchar_t               | can represent the largest supported character set|
| Integer Types (signed)  | signed char           | same sizes as char                              |
| Integer Types (signed)  | signed short int      | not smaller than char. at least 16 bits         |
| Integer Types (signed)  | signed int            | not smaller than short. at least 16 bits.       |
| Integer Types (signed)  | signed long int       | not smaller than int. at least 32 bits.         |
| Integer Types (signed)  | signed long long int  | not smaller than long. at least 64 bits.        |
| Integer Types (unsigned)| unsigned char         | same as signed counterpart                      |
| Integer Types (unsigned)| unsigned short int    | same as signed counterpart                      |
| Integer Types (unsigned)| unsigned int          | same as signed counterpart                      |
| Integer Types (unsigned)| unsigned long int     | same as signed counterpart                      |
| Integer Types (unsigned)| unsigned long long int| same as signed counterpart                      |
| Floating-point Types    | float                 |                                                 |
| Floating-point Types    | double                | precision not less than float                   |
| Floating-point Types    | long double           | precision not less than double                  |
| Boolean Type            | bool                  |                                                 |
| Void Type               | void                  | no storage                                      |
| Null Pointer            | decltype(nullptr)     |                                                 |
- only difference between type is their size
- first type in each group is the smallest, last is the largest

| Size | Unique representable value| Notes|
| ---- | ------------------------- | ---- |
| 8-bit | 256 | = 2^8|
| 16-bit| 65 536 | =2^16 |
| 32-bit| 4 294 967 296 | =2^32 (~4 billion)|
| 64-bit| 18 446 744 073 709 551 616 | =2^64 (~18 billion)|
- a 16-bit unassigned integer would be able to represent 65536 values in the range 0 - 65536
- a 16-bit signed integer would be able to represent the same but ranging from -32768 and 32767
- for floating-point types their sizes is based on their precision
- arithmetic types &rarr; characters, integers, floating-point, and boolean
- lack of type &rarr; void
- type of pointer &rarr; nullptr
- void &rarr; type with an empty set of values, an incomplete type that cannot be completed
