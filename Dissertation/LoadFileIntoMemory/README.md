# LoadFileIntoMemory
This Code can be used to load executable binary of a file into memory without opening the file.

For this we copy loadfiles.c in a code editor and make sure we have a proper C compiler installed.
Then we put the full address of the file we want to open (in this case - Cheat Engine) and we pass that address in parameter of fopen function.
If our code fails to load the binary into the memory then we print a standard error message to the console.
Otherwise we print a message in an infinite loop that tells us that our code is running.
