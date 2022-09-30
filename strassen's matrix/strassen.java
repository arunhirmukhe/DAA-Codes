import java.util.Scanner;

public class strassen{
   static int[][] strassenfunction(int[][] A,int[][] B,int size) {
    int C[][]=new int[size][size];
    int p = (A[0][0] + A[1][1])*(B[0][0] + B[1][1]);
    int q = B[0][0]*(A[1][0] + A[1][1]);
    int r = A[0][0]*(B[0][1] - B[1][1]);
    int s = A[1][1]*(B[1][0] - B[0][0]);
    int t = B[1][1]*(A[0][0] + A[0][1]);
    int u = (A[1][0] - A[0][0])*(B[0][0] + B[0][1]);
    int v = (B[1][0] + B[1][1])*( A[0][1] - A[1][1]);

   C[0][0] = p + s - t + v;
   C[0][1] = r + t;
   C[1][0] = q + s;
   C[1][1] = p + r - q + u;

   return C;

  }
    public static void main(String[] args) {
      Scanner obj = new Scanner(System.in);
      System.out.print("Enter the size of matrix (eg:2,4):-");
      int size = obj.nextInt();
      int a[][]=new int[size][size];
      int b[][]=new int[size][size];
      int c[][]=new int[size][size];

      System.out.println("Enter the value of matrix 1:-");
      for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
          System.out.print(i+""+j+"->");
          a[i][j] = obj.nextInt(); 
        }
      }

      System.out.println("Enter the value of matrix 2:-");
      for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
          System.out.print(i+""+j+"->");
          b[i][j] = obj.nextInt(); 
        }
      }

      System.out.println("Display matrix 1:-");
      for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
          System.out.print(a[i][j]);
          System.out.print(" ");
        }
        System.out.println();
      }

      System.out.println("Display matrix 2:-"); 
      for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
          System.out.print(a[i][j]);
          System.out.print(" ");
        }
        System.out.println();
      }


      c = strassenfunction(a,b,size);
     
      System.out.println("Display multiplication of matrix 1 and matrix 2:-"); 
      for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
          System.out.print(c[i][j]);
          System.out.print(" ");
        }
        System.out.println();
      }

    }
  }