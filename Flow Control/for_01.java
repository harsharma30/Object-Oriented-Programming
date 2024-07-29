--------------------

//Question: We have an array of numbers, num = {16, 8, 12, 5, 7, 10, 11, 9, 13, 15}, write a program that asks user to input a number and if number is present in num, print numbers from 1 to the value of input in separate lines, otherwise print “Not found”

import java.util.*;

class TestClass {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num[] = {16, 8, 12, 5, 7, 10, 11, 9, 13, 15};

        
        int user_input = scanner.nextInt();

        boolean found = false;

     
        for (int i = 0; i < num.length; i++) {
            if (num[i] == user_input) {
                found = true;
                break;
            }
        }

        if (found) {
          
            for (int i = 1; i <= user_input; i++) {
                System.out.println(i);
            }
        } else {
            System.out.println("Not found");
        }
    }
}
