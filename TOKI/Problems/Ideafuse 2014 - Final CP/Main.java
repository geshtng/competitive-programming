// There are some problem in TC

import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void checkChar(char ch) {
        String res = "";

        switch (ch) {
            case '.' : res += "1"; break;
            case ',' : res += "11"; break;
            case '?' : res += "111"; break;
            case '!' : res += "1111"; break;
            case '1' : res += "11111"; break;
    
            case 'a' : res += "2"; break;
            case 'b' : res += "22"; break;
            case 'c' : res += "222"; break;
            case '2' : res += "2222"; break;
    
            case 'd' : res += "3"; break;
            case 'e' : res += "33"; break;
            case 'f' : res += "333"; break;
            case '3' : res += "3333"; break;
    
            case 'g' : res += "4"; break;
            case 'h' : res += "44"; break;
            case 'i' : res += "444"; break;
            case '4' : res += "4444"; break;
    
            case 'j' : res += "5"; break;
            case 'k' : res += "55"; break;
            case 'l' : res += "555"; break;
            case '5' : res += "5555"; break;
    
            case 'm' : res += "6"; break;
            case 'n' : res += "66"; break;
            case 'o' : res += "666"; break;
            case '6' : res += "6666"; break;
    
            case 'p' : res += "7"; break;
            case 'q' : res += "77"; break;
            case 'r' : res += "777"; break;
            case 's' : res += "7777"; break;
            case '7' : res += "77777"; break;
    
            case 't' : res += "8"; break;
            case 'u' : res += "88"; break;
            case 'v' : res += "888"; break;
            case '8' : res += "8888"; break;
    
            case 'w' : res += "9"; break;
            case 'x' : res += "99"; break;
            case 'y' : res += "999"; break;
            case 'z' : res += "9999"; break;
            case '9' : res += "99999"; break;
        }

        System.out.print(res);
    }
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        String str;
        ArrayList<String> vs = new ArrayList<String>();

        while(cin.hasNextLine()) {
            str = cin.nextLine();
            vs.add(str);
        }

        boolean besar = false;

        for (int tc = 0; tc < vs.size(); tc++) {
            String baru = vs.get(tc);
            
            for(int i = 0; i < baru.length(); i++) {
                if (Character.isUpperCase(baru.charAt(i)) && !besar) {
                    System.out.print("*");
                    besar = true;
                }

                if (Character.isLowerCase(baru.charAt(i)) && besar) {
                    System.out.print("*");
                    besar = false;
                }

                if (baru.charAt(i) == ' ') {
                    System.out.print("0");
                }

                checkChar(Character.toLowerCase(baru.charAt(i)));

                if (i != vs.get(tc).length()-1 || tc != vs.size()-1) {
                    System.out.print(" ");
                }
            }

            if (tc != vs.size()-1) {
                System.out.print("# ");
            }
        }

        System.out.println(" #");
    }
}
