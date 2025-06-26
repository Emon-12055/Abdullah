
#include<stdio.h>

int main()
{
  int num[]={10,15,20,25,30,35,40}; // 7 number
  int value;
  printf("Enter the value you want to search : ");
  scanf("%d", &value);

  int position= -1;
  for(int i=0; i<=7; i++)
  {
      if(value==num[i])
      {
          position=i+1;
          break;
      }
  }
  if(position== -1)
  {
      printf("Iteam is not found ");
  }
  else
  {
      printf("The valu is found at %d possition ", position);
  }


    return 0;
}
