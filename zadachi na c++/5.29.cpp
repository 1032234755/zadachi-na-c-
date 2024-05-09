def average_of_range(start, end) :
    return sum(range(start, end + 1)) / (end - start + 1)

    # �) ������� �������������� ���� ����� ����� �� 1 �� 750
    average_a = average_of_range(1, 750)
    print("������� �������������� �� 1 �� 750:", average_a)

    # �) �������� b �������� � ����������
    b = int(input("������� b (b > 150): "))
    average_b = average_of_range(150, b)
    print(f"������� �������������� �� 150 �� {b}:", average_b)

    # �) �������� � �������� � ����������
    a = int(input("������� a (a <= 200): "))
    average_c = average_of_range(a, 200)
    print(f"������� �������������� �� {a} �� 200:", average_c)

    # �) �������� a � b �������� � ����������
    a = int(input("������� a: "))
    b = int(input("������� b (b >= a): "))
    average_d = average_of_range(a, b)
    print(f"������� �������������� �� {a} �� {b}:", average_d)