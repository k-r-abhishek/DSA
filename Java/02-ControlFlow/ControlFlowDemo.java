// Control Flow in Java - Notes & Revision
public class ControlFlowDemo {
    
    public static void main(String[] args) {
        System.out.println("Starting the program...");

        // 1️⃣ Sequential Execution (Top to Bottom)
        System.out.println("This statement runs sequentially.");

        // 2️⃣ Decision Making (if-else)
        int number = 10;
        if (number > 0) {
            System.out.println("Positive Number");
        } else {
            System.out.println("Negative Number");
        }

        // 3️⃣ Nested if
        int age = 20;
        if (age >= 18) {
            if (age >= 21) {
                System.out.println("Eligible to drink alcohol.");
            } else {
                System.out.println("Eligible to vote but not drink.");
            }
        }

        // 4️⃣ Switch case (multiple conditions)
        int day = 3;
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            default:
                System.out.println("Invalid Day");
        }

        // 5️⃣ Loops in Java

        // (a) For Loop
        System.out.println("For Loop Output:");
        for (int i = 1; i <= 5; i++) {
            System.out.print(i + " "); // Prints 1 2 3 4 5
        }
        System.out.println(); // New line

        // (b) While Loop
        System.out.println("While Loop Output:");
        int i = 1;
        while (i <= 5) {
            System.out.print(i + " ");
            i++;
        }
        System.out.println();

        // (c) Do-While Loop (Runs at least once)
        System.out.println("Do-While Loop Output:");
        int j = 6;
        do {
            System.out.print(j + " "); // Runs once even if condition is false
            j++;
        } while (j <= 5);
        System.out.println();

        // 6️⃣ Branching Statements

        // (a) Break (Stops the loop)
        System.out.println("Break Statement Output:");
        for (int x = 1; x <= 5; x++) {
            if (x == 3) break; // Loop stops when x == 3
            System.out.print(x + " "); // Prints 1 2
        }
        System.out.println();

        // (b) Continue (Skips iteration)
        System.out.println("Continue Statement Output:");
        for (int y = 1; y <= 5; y++) {
            if (y == 3) continue; // Skips when y == 3
            System.out.print(y + " "); // Prints 1 2 4 5
        }
        System.out.println();

        // (c) Return Statement (Exits from function)
        System.out.println("Calling function with return:");
        testReturn();
        
        System.out.println("End of Program.");
    }

    // Method to demonstrate return statement
    public static void testReturn() {
        System.out.println("Before return statement.");
        return; // Exits function early
        // System.out.println("This will never execute.");
    }
}