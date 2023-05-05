#include <stdio.h>

int main () {

  float a1, a2, a3;
  float average;

  printf("GPA Program -> Grade Point Average");
  
  printf("\nEnter grade 1: ");
  scanf("%f", &a1);
  
  printf("\nEnter grade 2: ");
  scanf("%f", &a2);

  printf("\nEnter grade 3: ");
  scanf("%f", &a3);

  printf("\nMininum average of grades required: 6.00");
  average = (a1+a2+a3)/3;
  printf("\nYour grade average: %.2f", average);
  
  if (average >= 6) { 
    printf("\nStatus \033[1m-> Approved =)\033[0m");
  }
  else {
    printf("\nStatus \033[1m-> Reproved ;(\033[0m");
  }  
}
