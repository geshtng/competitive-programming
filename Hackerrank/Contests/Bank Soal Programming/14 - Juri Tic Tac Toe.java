import java.util.*;

public class MyClass {
    static boolean check(char arr[][], int i, int j) {
        if (i == 0) {
            if (j == 0) {
                if (arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i][j+2]) return true;
                if (arr[i][j] == arr[i+1][j+1] && arr[i][j] == arr[i+2][j+2]) return true;
                if (arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+2][j]) return true;
            }
            
            if (j == 1) {
                if (arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+2][j]) return true;
            }
            
            if (j == 2) {
                if (arr[i][j] == arr[i+1][j-1] && arr[i][j] == arr[i+2][j-2]) return true;
                if (arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+2][j]) return true;
            }
        }
        
        if (i == 1) {
            if (arr[i][0] == arr[i][1] && arr[i][j] == arr[i][2]) return true;
        }
        
        if (i == 2) {
            if (arr[i][0] == arr[i][1] && arr[i][j] == arr[i][2]) return true;
        }
        
        return false;
    }
    
    public static void main(String args[]) {
        char arr[][] = new char[3][3];
      
        Scanner cin = new Scanner(System.in);
      
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = cin.next().charAt(0);
            }
        }
      
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (check(arr, i, j)) {
                    System.out.printf("%c menang\n", arr[i][j]);
                    return;
                }   
            }
        }
      
        System.out.println("Draw");
    }
}