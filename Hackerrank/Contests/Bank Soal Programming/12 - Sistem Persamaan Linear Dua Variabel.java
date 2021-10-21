import java.util.*;

public class MyClass {
    public static void main(String args[]) {
        int x1, y1, z1;
        int x2, y2, z2;
    
        Scanner cin = new Scanner(System.in);
    
        x1 = cin.nextInt();
        y1 = cin.nextInt();
        z1 = cin.nextInt();
        
        x2 = cin.nextInt();
        y2 = cin.nextInt();
        z2 = cin.nextInt();

        int x1y2 = x1 * y2;
        int x1z2 = x1 * z2;
        int x2y1 = x2 * y1;
        int x2z1 = x2 * z1;
        
        int difX = x2y1 - x1y2;
        int difY = x2z1 - x1z2;
        
        if (difX == 0 || difY == 0) {
            System.out.println("Tidak ada solusi");
            return;
        }
        
        double y = (double) difY / difX;
        double x = (double) (z2 - y2 * y) / x2;
       
        System.out.printf("%.2f %.2f\n", x, y);
    }
}