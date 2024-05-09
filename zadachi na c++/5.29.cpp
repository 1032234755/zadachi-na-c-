def average_of_range(start, end) :
    return sum(range(start, end + 1)) / (end - start + 1)

    # а) Среднее арифметическое всех целых чисел от 1 до 750
    average_a = average_of_range(1, 750)
    print("Среднее арифметическое от 1 до 750:", average_a)

    # б) Значение b вводится с клавиатуры
    b = int(input("Введите b (b > 150): "))
    average_b = average_of_range(150, b)
    print(f"Среднее арифметическое от 150 до {b}:", average_b)

    # в) Значение а вводится с клавиатуры
    a = int(input("Введите a (a <= 200): "))
    average_c = average_of_range(a, 200)
    print(f"Среднее арифметическое от {a} до 200:", average_c)

    # г) Значения a и b вводятся с клавиатуры
    a = int(input("Введите a: "))
    b = int(input("Введите b (b >= a): "))
    average_d = average_of_range(a, b)
    print(f"Среднее арифметическое от {a} до {b}:", average_d)