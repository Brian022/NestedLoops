#include <iostream>
#define MAX 4

double A[MAX][MAX]={
                    {0,1,2,3},
                    {4,5,6,7},
                    {8,9,10,11},
                    {12,13,14,15}
};

double x[MAX]={1,2,3,4};
double y[MAX]={0};

void firstLoop(){ 
  for(int i = 0; i < MAX; i++)
    {
      std::cout<<"\n";
      for (int j = 0; j < MAX; j++)
        {
          y[i] += A[i][j]*x[j];
          std::cout<<y[i]<<" ";
        }
    }
  double y[MAX]={0};
}
  
// Second pair of loops //
void secondLoop(){ 
for(int j = 0; j < MAX; j++)
  {
    std::cout<<"\n";
    for (int i = 0; i < MAX; i++)
      {
        y[i] += A[i][j]*x[j];
        std::cout<<y[i]<<" ";
      }
  }
double y[MAX]={0};
  
  
}
int main() {
  //firstLoop();
  secondLoop();
}