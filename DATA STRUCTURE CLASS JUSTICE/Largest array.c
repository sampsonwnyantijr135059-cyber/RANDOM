#include <stdio.h>
int main() {
  int n,i;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest Elements are as follow = %.21f", arr[0]);
{
printf("\nSorted Elements are as follows\n");
for(int i = 1; i < n; ++i);

  return 0;
}
}



