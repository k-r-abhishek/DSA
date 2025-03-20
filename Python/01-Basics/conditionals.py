"""
🔥 Python Program Demonstrating All Conditional Statements 🔥

✅ Covers All Key Concepts:
1️⃣ **Basic Conditional Statements**
    - if, if-else, if-elif-else
    - Nested if conditions
2️⃣ **Logical Operators Usage**
    - AND (and), OR (or), NOT (not)
    - Combining multiple conditions in different ways
3️⃣ **Match-Case Implementation (Equivalent to Switch-Case)**
    - Handling integer cases
    - Handling character cases
    - Using default case for unmatched values
4️⃣ **Ternary Operator**
    - Basic conditional assignment
    - Chained ternary for multiple conditions
5️⃣ **Character Classification**
    - Checking uppercase (`isupper()`)
    - Checking lowercase (`islower()`)
    - Checking digits (`isdigit()`)
6️⃣ **Loop Control Statements**
    - Using `break` to exit loops early
    - Using `continue` to skip iterations
7️⃣ **goto Statement Alternative (Using Function Jumps)**
"""

def main():
    a, b, x, y, z = 10, 5, -1, 0, 123
    ch = 'a'
    
    # 1️⃣ Simple if condition
    if a > b:
        print("a is greater than b")

    # 2️⃣ if-else condition
    print("x is non-negative" if x >= 0 else "x is negative")

    # 3️⃣ if-elif-else ladder
    if y > 0:
        print("y is positive")
    elif y < 0:
        print("y is negative")
    else:
        print("y is zero")

    # 4️⃣ Nested if condition
    if a > 0:
        if a % 2 == 0:
            print("a is positive and even")
        else:
            print("a is positive but odd")

    # 5️⃣ Match-Case (Equivalent to Switch-Case)
    num = 2
    match num:
        case 1:
            print("Number is One")
        case 2:
            print("Number is Two")
        case _:
            print("Number is neither One nor Two")

    # 6️⃣ Match-Case (Character case)
    match ch:
        case 'A' | 'a':
            print("Character is A or a")
        case 'B':
            print("Character is B")
        case _:
            print("Character is something else")

    # 7️⃣ Ternary operator example
    even_odd = "Even" if z % 2 == 0 else "Odd"
    print(f"z is {even_odd}")

    # 8️⃣ Chained Ternary Operator
    category = "Positive" if z > 0 else "Zero" if z == 0 else "Negative"
    print(f"z is {category}")

    # 9️⃣ Logical Operators (and, or, not)
    cond1 = a > 5 and b > 2  # true
    cond2 = x < 0 or y == 0  # true
    cond3 = not (a < b)       # true
    if cond1 and cond2 and cond3:
        print("All logical conditions are true")

    # 🔟 Check Uppercase, Lowercase, and Digit
    test_char = '5'
    if test_char.isupper():
        print("It's an uppercase letter")
    elif test_char.islower():
        print("It's a lowercase letter")
    elif test_char.isdigit():
        print("It's a digit")
    else:
        print("It's a special character")

    # 1️⃣1️⃣ Use of break statement inside loop
    for i in range(1, 6):
        if i == 3:
            break  # Exits the loop when i == 3
        print(f"Loop Iteration: {i}")

    # 1️⃣2️⃣ Use of continue statement inside loop
    for i in range(1, 6):
        if i == 3:
            continue  # Skips iteration when i == 3
        print(f"Loop Iteration (skip 3): {i}")

    # 1️⃣3️⃣ Use of goto alternative (function jump)
    value = -5
    if value < 0:
        goto_negative_label()
    print("This will not be printed if value is negative")

def goto_negative_label():
    print("Value is negative")

if __name__ == "__main__":
    main()