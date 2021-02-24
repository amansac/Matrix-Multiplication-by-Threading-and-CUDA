# Matrix-Multiplication-by-Threading-and-CUDA

**Problem Statement**<br/>
**Input:** Two n*n matrices. n = 2^k, where k is a natural number.<br/>
**Output:** A vector of length 2n-1.<br/>
**Sample:**<br/>
![alt text](https://github.com/amansac/Matrix-Multiplication-by-Threading-and-CUDA/blob/main/sample/dmm.png)

There are three major activities in this...<br/>
1. Single-Threading DMM (CPU): In this part, I have optimized the single-threaded implementation provided. I have used hardware performance counters (perf) and optimized the source.<br/>
2. Multi-Threading DMM (CPU): In this part, I have implemented a multi-threaded version of DMM. By using "pthreads" for multi-threaded implementation.<br/>
3. DMM in CUDA (GPU): In this part, I have implemented DMM for a GPU using CUDA.
