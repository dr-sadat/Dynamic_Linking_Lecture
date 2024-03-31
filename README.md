# Dynamic_Linking_Lecture

The commands listed below will work on Ubuntu. Please put all the source files (.c) in the same directory/folder. 

1. Compile the target program (target.c) with dynamic linking enabled:
`gcc target.c -o dynamic`

2. Create a library contatining the fake sleep() function: 
`gcc fakesleep.c -shared -fPIC -o mylib.so`

3. Set LD_PRELOAD:
`export LD_PRELOAD=./mylib.so`

4. Run the target program:
`./dynamic`
