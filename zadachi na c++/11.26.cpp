# ����� ������ �������
array = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]

# �) �������� ������, �������� � �.�.��������
print("������, ��������� � �.�. ��������:")
for i in range(1, len(array), 2) :
    print(array[i], end = ' ')
    print()

    # �) �������� ������, ������ � �.�.��������
    print("������, ������ � �.�. ��������:")
    for i in range(2, len(array), 3) :
        print(array[i], end = ' ')
        print()