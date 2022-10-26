#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);

   for (int i = 0; i < N - 1; i++) {
      A[i] = lrand48() % N;
   }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);

   int64_t sum = 0;

   int64_t index = A[0];

   for (int i = 0; i < N - 1; i++) {
      sum += A[index];
      index = A[index];
   }

   return sum;
}

