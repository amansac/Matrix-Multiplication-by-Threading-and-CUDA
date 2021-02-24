/*
// Optimize this function
void singleThread(int N, int *matA, int *matB, int *output)
{
    // Iterate over first half of output elements
    for(int i = 0; i < N; ++i) {
        int temp = 0;
        // Iterate over diagonal elements
        for(int j = 0; j < i + 1; ++j) {
            int rowA = j;
            int colA = i - j;
            int rowB = i - j;
            int colB = N - j - 1;
            temp += matA[rowA * N + colA] * matB[rowB * N + colB];
        }
        output[i] = temp;
    }
    
    // Iterate over second half of output elements
    for(int i = N; i < 2 * N - 1; ++i) {
        int temp = 0;
        // Iterate over diagonal elements
        for(int j = 0; j < 2 * N - (i + 1); ++j) {
            int rowA = i + 1 + j - N;
            int colA = N - j - 1;
            int rowB = N - j - 1;
            int colB = 2 * N - j - 2 - i;
            temp += matA[rowA * N + colA] * matB[rowB * N + colB];
        }
        output[i] = temp;
    }
}
*/

// FUNCTION CALLED
void singleThread(int N, int *matA, int *matB, int *output){
	int block_size = 16;
	for(int i = 0; i < N; i += block_size){ 
		for(int j = 0; j < N ; j += block_size){
			// FIRST COMPUTE THE BLOCKS OF 16*16 COMPLETELY THEN MOVE TO NEXT BLOCK
			for(int k = i ; k < i+block_size; k++){
				//for(int l = j; l < j+block_size; l++){
					// LOOP UNROLLING
					
					int t1 = k*N + j ;
					int t2 = j*N + N - k - 1;
					int t3 = k + j;
					
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
					t2 += N;
					output[t3++] += matA[t1++] * matB[t2];
				//}
			}
		}
	}
}
