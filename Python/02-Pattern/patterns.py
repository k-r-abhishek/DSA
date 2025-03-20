def print_square_pattern():
    print("\nSquare Pattern")
    for i in range(5):
        print("* " * 5)

def print_number_square():
    print("\nNumber Square Pattern")
    for i in range(1, 6):
        print((str(i) + "  ") * 5)

def print_another_number_square():
    print("\nAnother Number Square Pattern")
    for i in range(1, 6):
        print("  ".join(str(j) for j in range(1, 6)))

def print_inverted_number_square():
    print("\nInverted Number Square Pattern")
    for i in range(1, 6):
        print("  ".join(str(j) for j in range(5, 0, -1)))

def print_counting_square():
    print("\nCounting Square Pattern")
    counter = 1
    for i in range(5):
        print("  ".join(str(counter + j) for j in range(5)))
        counter += 5

def print_triangle_pattern():
    print("\n90 Degree Triangle Pattern")
    for i in range(1, 6):
        print("* " * i)

def print_counting_triangle():
    print("\n90 Degree Counting Triangle Pattern")
    for i in range(1, 6):
        print(" ".join(str(j) for j in range(i, 2 * i)))

def print_inverted_counting_triangle():
    print("\n90 Degree Inverted Counting Triangle Pattern")
    for i in range(1, 6):
        print(" ".join(str(j) for j in range(i, 0, -1)))

def print_alphabetic_square():
    print("\nAlphabetic Square Pattern")
    for i in range(5):
        print(" ".join(chr(65 + i) for _ in range(5)))

def print_alphabetic_triangle():
    print("\nAlphabetic Triangle Pattern")
    for i in range(5):
        print(" ".join(chr(65 + i) for _ in range(i + 1)))

def print_inverted_alphabetic_triangle():
    print("\nInverted Alphabetic Triangle Pattern")
    for i in range(5, 0, -1):
        print(" ".join(chr(65 + j) for j in range(i)))

def print_right_angle_inverted_char_triangle():
    print("\nRight Angle Inverted Character Triangle Pattern")
    for i in range(5):
        print(" ".join(chr(65 + j) for j in range(i, -1, -1)))

def print_right_angle_reverse_char_triangle():
    print("\nRight Angle Reverse Character Triangle Pattern")
    for i in range(5):
        print(" ".join(chr(65 + j) for j in range(i + 1)))

def print_number_pyramid():
    print("\nNumber Pyramid Pattern")
    for i in range(1, 6):
        print(" ".join(str(j) for j in range(1, i + 1)))

def print_dabangg_pattern():
    print("\nDabangg Pattern")
    for i in range(5, 0, -1):
        print(" ".join(str(j) for j in range(1, i + 1)))

if __name__ == "__main__":
    print_square_pattern()
    print_number_square()
    print_another_number_square()
    print_inverted_number_square()
    print_counting_square()
    print_triangle_pattern()
    print_counting_triangle()
    print_inverted_counting_triangle()
    print_alphabetic_square()
    print_alphabetic_triangle()
    print_inverted_alphabetic_triangle()
    print_right_angle_inverted_char_triangle()
    print_right_angle_reverse_char_triangle()
    print_number_pyramid()
    print_dabangg_pattern()