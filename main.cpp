/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Programming language concept
Chi Luong
HW3:
Write three functions in C or C++: one that declares a large array statically, one that declares the same large array on the stack, and one that creates the same large array from the heap. Call each of the subprograms a large number of times (at least 100,000) and output the time required by each;


*/
#include <iostream>
#include <stdio.h>
#include <time.h>

void static_array(void){
static int my_arr1[200000];
}

void stack_array(void){
int my_arr2[200000];
}
void heap_array(void){
int *my_arr3 = (int *) malloc(200000 * sizeof(int));  
}

int main (void)
{
int i, j, k;
  clock_t start = clock();
 
  for(i=0; i<150000; ++i){
      static_array();
}
 
  clock_t end = clock();
  double time_required_1 = ((double) (end - start)) / CLOCKS_PER_SEC;
 
  printf("static array took %f seconds to execute \n", time_required_1);

 start = clock();
 
  for(i=0; i<150000; ++i){
      stack_array();
}
 
  end = clock();
  double time_required_2 = ((double) (end - start)) / CLOCKS_PER_SEC;
 
  printf("stack array took %f seconds to execute \n", time_required_2);

start = clock();
 
  for(i=0; i<150000; ++i){
      heap_array();
}
 
  end = clock();
  double time_required_3 = ((double) (end - start)) / CLOCKS_PER_SEC;
 
  printf("heap array took %f seconds to execute \n", time_required_3);


}

