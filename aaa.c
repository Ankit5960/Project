#include <stdio.h>

char board[3][3]={{' ' , ' ' , ' '},{' ' , ' ' , ' '},{' ' , ' ' , ' '}};
void draw()
{
    printf("\t\t\t\t\t\t\t");
    printf(" %c %c %C %C %C \n", board[0][1],186,board[0][1],186,board[0][2]);
    printf("\t\t\t\t\t\t\t");
    printf("%C%C%C%C%C%C%C%C%C%c%C\n",205,205,205,206,205,205,205,206,205,205,205);
    printf("\t\t\t\t\t\t\t");
    printf(" %c %c %C %C %c  \n", board[1][0],186,board[1][1],186,board[1][2]);
    printf("\t\t\t\t\t\t\t");
    printf("%C%C%C%C%C%C%C%C%C%c%C\n",205,205,205,206,205,205,205,206,205,205,205);
    printf("\t\t\t\t\t\t\t");
    printf(" %c %c %C %C %c  \n", board[2][0],186,board[2][1],186,board[2][2]);


} 
int check(){
  
  // return 1 win 
  // return 0 draw/ fail/ continue 
   
  //check for x  
  //horizontal

  if((board[0][0] == 'x') && (board[0][1]=='x')&&(board[0][2]=='x'))
  {
    return 1;
  }
  else if ((board[1][0] == 'x') && (board[1][1]=='x')&&(board[1][2]=='x'))
  {
    return 1;
  }
   else if ((board[2][0] == 'x') && (board[1][1]=='x')&&(board[2][2]=='x'))
  {
    return 1;
  }
  //vertical
   else if ((board[0][0] == 'x') && (board[1][0]=='x')&&(board[2][0]=='x'))
  {
    return 1;
  }
   else if ((board[0][1] == 'x') && (board[1][1]=='x')&&(board[2][1]=='x'))
  {
    return 1;
  }
   else if ((board[0][2] == 'x') && (board[1][2]=='x')&&(board[2][2]=='x'))
  {
    return 1;
  }
  // diagonal
    else if ((board[0][0] == 'x') && (board[1][1]=='x')&&(board[2][2]=='x'))
  {
    return 1;
  }
   else if ((board[0][2] == 'x') && (board[1][1]=='x')&&(board[2][0]=='x'))
  {
    return 1;
  }
  
  // check for o

  // horinzontal
  
  if((board[0][0] == 'o') && (board[0][1]=='o')&&(board[0][2]=='o'))
  {
    return 1;
  }
  else if ((board[1][0] == 'o') && (board[1][1]=='o')&&(board[1][2]=='o'))
  {
    return 1;
  }
   else if ((board[2][0] == 'o') && (board[1][1]=='o')&&(board[2][2]=='o'))
  {
    return 1;
  }
  //vertical 
   else if ((board[0][0] == 'o') && (board[1][0]=='o')&&(board[2][0]=='o'))
  {
    return 1;
  }
   else if ((board[0][1] == 'o') && (board[1][1]=='o')&&(board[2][1]=='o'))
  {
    return 1;
  }
   else if ((board[0][2] == 'o') && (board[1][2]=='o')&&(board[2][2]=='o'))
  {
    return 1;
  }

  // diagonal 

    else if ((board[0][0] == 'o') && (board[1][1]=='o')&&(board[2][2]=='o'))
  {
    return 1;
  }
   else if ((board[0][2] == 'o') && (board[1][1]=='o')&&(board[2][0]=='o'))
  {
    return 1;
  }
   return 0;
}
int main()
{
   
for (int i= 0; i<2; i++)
{
      draw();
}
    
   
}