// Create other necessary functions here
__global__ void gpuMultiply(int n, int *A, int *B, int *O){
        int i = threadIdx.x + blockDim.x*blockIdx.x; //output index
        
        //k and l are used for computing the starting row of matrix A
        int k = i%n;
        int l = i/n;
        
        //Computing the result for index i of output matirx
        for(int j = l*(k+1) ; j <= min(i,n-1) ; j++){
                O[i] += A[j*n + i-j] * B[(i-j)*n + n-j-1];
        }
        
        __syncthreads(); //synchronizing the threads
}

// Fill in this function
void gpuThread(int N, int *matA, int *matB, int *output){
        //initialinzing the pointers for matrices
        int *A, *B, *O;
        
        //Size of matrices
        int int_size = sizeof(int);
        int mat_size = int_size * N * N;
        int out_size = int_size * (2*N - 1);

        int tpb = 256; //threads per block
        int bpg = (2*N + tbp - 1) / tpb; //blocks per grid
	
	//Allocating the memory
        cudaMalloc((void **)&A, mat_size);
        cudaMalloc((void **)&B, mat_size);
        cudaMalloc((void **)&O, out_size);

	//Copying the data from host to device
        cudaMemcpy(A, matA, mat_size, cudaMemcpyHostToDevice);
        cudaMemcpy(B, matB, mat_size, cudaMemcpyHostToDevice);
        cudaMemcpy(O, output, out_size, cudaMemcpyHostToDevice);
	
	//Invoking kernel 
        gpuMultiply<<<bpg, tpb>>>(N, A, B, O);
        
        //COpying the computed result back to output matrix (device to host)
        cudaMemcpy(output, O, out_size, cudaMemcpyDeviceToHost);
	
	//Freeing the memory
        cudaFree(O);
        cudaFree(A);
        cudaFree(B);
}
