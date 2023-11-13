Final .c file is binary_clock.c

The basic working principle has been developed in the following steps:

- a string representing time in 24 hour format is taken as input in the main() function

- main function puts the digits of the input string into an array of chars and calls the binclock function

- binclock function takes the input of array of chars, converts it into integers and represents time in 24 hour decimal entries in a binary representation with .s and *s

The example given in the code description was used. A 4x6 matrix was imagined and nested for loops are being used to iterate through the row and column positions. 4 different masks were used to identify the value of each position [i.e ./*] and was put into another array of characters. Each time, 6 values were filled up, that array was printed out, before it got rewritten for the next set of 6 values.