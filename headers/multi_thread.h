#include <pthread.h>

#define blocksize 64
#define num_threads 256

// GLOBAL VARIABLES
int *A, *B, *O, n;

// STRUCTURE FOR EACH THREAD
struct arg_struct{
    int id;
    int* arr;
};

// EVERY THREAD WILL EXECUTE THIS BLOCK OF CODE
void* thread_code(void* arg){
    
    struct arg_struct *args = (struct arg_struct*) arg; 
    (args->arr) = (int*)malloc((2*n-1)*sizeof(int)); //personalised array for each thread
    
    //selects the rows
    for(int i = 0 ; i < n; i += blocksize){ 
      //selects the columns
      for(int j = 0; j < n; j += blocksize){
      	// WILL EXECUTE 64*64 BLOCK AND THEN MOVE TO NEXT 64*64 BLOCK
        if(args->id == (i+j) % num_threads){
          for(int k = i; k < i+blocksize; k++){
            for(int l = j; l < j+blocksize; l++){
            	// LOOP UNROLLING
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            	l++;
            	*((args->arr)+k+l) += A[k*n + l] * B[l*n + n-k-1];
            }
          }
        }
      }
    }
    pthread_exit(0);
}

// FUNCTION CALLED
void multiThread(int N, int *matA, int *matB, int *output){
   A = matA;
   B = matB;
   O = output;
   n = N;
   pthread_t tids[num_threads];
   struct arg_struct args[num_threads];
   // THREAD CALLING
   for(int i = 0 ; i < num_threads;i++){
      args[i].id = i;
      pthread_create(&tids[i], NULL, thread_code, &args[i]);
   }
   // WAITING FOR OTHER THREADS
   for(int i = 0; i<num_threads;i++){
      pthread_join(tids[i],NULL);
      // SUMMING THE RESULT COMPUTED
      for(int j = 0;j<2*N-1;j++){
         output[j] += args[i].arr[j];
      }
   }
}
