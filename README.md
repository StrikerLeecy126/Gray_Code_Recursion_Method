# Gray Code Recursion Method
A C Program that output decimal numbers in Gray code order with specified bit length

**This is a coding question from a company admitting test**

### Algorithm Explain
If we list the gray code where maximum digit is consisted of 1,2,3 and 4 bits,
![image](https://github.com/StrikerLeecy126/Gray_Code_Recursion_Method/assets/76428637/dc25cd10-03db-4ced-9d6c-10466eeb9640)

we can notice that for the next column, the first half is the same as the previous column, and another half 
is created by writing the first half invertedly, such as 0,1,3,2 transforming into 2,3,1,0, then add 2<sup>n-1</sup> to each digit, 
where n is the length of bit where the maximum digit takes up.

for example, to get the 3-bit Gray code list from 2-bit Gary code list, we have the following table
![image](https://github.com/StrikerLeecy126/Gray_Code_Recursion_Method/assets/76428637/516f2294-0580-4ac6-a57c-7f6621f60aeb)

### How to use
The .c file is the source code that you can use it freely.
The .exe file is the compiled file that if you only want to generate a table of Gray code.
