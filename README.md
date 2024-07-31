# Bitwise-Operators
## AIM
To study the basics of Bitwise operators.
## Theory 
These operators are used to perform bit-level operations on the operands. The operators are first converted to bit-level and then the calculation is performed on the operands. Mathematical operations such as addition, subtraction, multiplication, etc. can be performed at the bit level for faster processing.   

Name	Symbol	Description	Example  
Binary AND	&	Copies a bit to the evaluated result if it exists in both operands	  
int a = 2, b = 3;  

(a & b); //returns 2  

Binary OR	|	Copies a bit to the evaluated result if it exists in any of the operand	  
int a = 2, b = 3;  
  
(a | b); //returns 3  

Binary XOR	^	Copies the bit to the evaluated result if it is present in either of the operands but not both	  
int a = 2, b = 3;  

(a ^ b); //returns 1  

Left Shift	<<	Shifts the value to left by the number of bits specified by the right operand.	  
int a = 2, b = 3;  
 
(a << 1); //returns 4  

Right Shift	>>	Shifts the value to right by the number of bits specified by the right operand.	  
int a = 2, b = 3;  

(a >> 1); //returns 1  

One’s Complement	~	Changes binary digits 1 to 0 and 0 to 1	  
int b = 3;  

(~b); //returns -4  
