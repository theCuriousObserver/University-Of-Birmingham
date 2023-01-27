# LoadDLLIntoMem

The prerequisite tools to run this code and load all the DLLs of an exe file into memory are - Process Monitor (https://docs.microsoft.com/en-us/sysinternals/downloads/procmon), a code editor.
We turn Process Monitor on. Using filters in Process Monitor we find the executable file of our choice (in our case - Cheat Engine) using the Process ID (We can find PID in task manager -> details tab).
We should be able to see a list of different processes, DLLs, registry files that are loaded by the exe file. Then, we put our next filter where the path name ends with the .dll file extension. 
This filtering leaves us with our required set of DLLs that the exe loads. 
We save this list of DLLs as a ProcMon Log File, so we are spared from repeating this process.

We come to our loadDLL.cpp file and we replace the DLLs in callDLL() function with the DLLs that we find in the last step. 
Then, we run the code and using process monitor (search for PID of the code exe in Task Manager) repeat the process of searching DLLs. 
We save it as a ProcMon Log File and compare two results. 

Then we run Valorant and observe the interaction of the code exe and Valorant.
