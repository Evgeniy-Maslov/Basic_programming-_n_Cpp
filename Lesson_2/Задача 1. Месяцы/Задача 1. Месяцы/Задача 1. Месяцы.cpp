#include <iostream>

enum class months
{
	����,
	������,
	�������,
	����,
	������,
	���,
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������
};
void print_month(int x)
{
	switch (x)
	{
		case static_cast<int>(months::����):
			std::cout << "�� ��������\n";
			break;
		case static_cast<int>(months::������):
			std::cout << "������\n";
			break;
		case static_cast<int>(months::�������):
			std::cout << "�������\n";
			break;
		case static_cast<int>(months::����):
			std::cout << "����\n";
			break;
		case static_cast<int>(months::������):
			std::cout << "������\n";
			break;
		case static_cast<int>(months::���):
			std::cout << "���\n";
			break;
		case static_cast<int>(months::����):
			std::cout << "����\n";
			break;
		case static_cast<int>(months::����):
			std::cout << "����\n";
			break;
		case static_cast<int>(months::������):
			std::cout << "������\n";
			break;
		case static_cast<int>(months::��������):
			std::cout << "��������\n";
			break;
		case static_cast<int>(months::�������):
			std::cout << "�������\n";
			break;
		case static_cast<int>(months::������):
			std::cout << "������\n";
			break;
		case static_cast<int>(months::�������):
			std::cout << "�������\n";
			break;
		default:
			std::cout << "������������ �����!\n";
			break;
	}
}
int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	int a;
	do
	{
		std::cout << "������� ����� ������: ";
		std::cin >> a;
		print_month(a);
	} while (a);
	return 0;
}