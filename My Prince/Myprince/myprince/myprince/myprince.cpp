/********************************************************
*�ļ�����main.cpp
*���ߣ����紨
*���ڣ�2019.11.8
*������C++��һ�׶���Ŀ��С�������ɼǡ�
*�޸��ˣ�
*���ڣ�
*�汾��1.0.0
*Copyright��C��2019 ���紨
********************************************************/
#include"StdAfx.h"

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<array>
#include <string>
#include<windows.h>

using namespace std;

// 1.Ϊ��Ůȡ����
// 2.ΪŮ��¼���ʼ��Ϣ���ա�����
// ����Ů����������������Ϸ�Ļ�������(���������������������¡�����)
// 3.��ʼ��Ϸ��ѭ��
//��Ϸ��1659��6�¿�ʼ
// 4.���ݸ���������ж���Ϸ���
int main()
{
	/**���׵�����**/
	string value_father_name;
	/**Ů��������**/
	string value_daughter_name;
	/**Ů���������·�**/
	int value_birth_month =6;
	/**Ů������������**/
	int value_birth_date =6;
	/**Ů��������**/
	string value_birth_constell;
	/**Ů�������������Ϣ�� ���������������������¡�����**/
	array<int, 5> value_array_baseinfo;
	/**�����������ֵ**/
	array<string, 5>value_array_baseinfo_names = {"����", "����", "����", "����", "����"};
	/**��ʼ���**/
	int value_daughter_gold = 500;
	/**������ά����**/
	string constell_names[12][2] = {
		{"ɽ����","ˮƿ��"},//һ��
		{"ˮƿ��","˫����"},//����
		{"˫����","������"},//����
		{"������","��ţ��"},//����
		{"��ţ��","˫����"},//����
		{"˫����","��з��"},//����
		{"��з��","ʨ����"},//����
		{"ʨ����","��Ů��"},//����
		{"��Ů��","�����"},//����
		{"�����","��Ы��"},//ʮ��
		{"��Ы��","������"},//ʮһ��
		{"������","ɽ����"}//ʮ����
	};
	int choice,temp1,temp2,temp3;

	cout << "���׵����֣�" ;
	cin >> value_father_name;
	cout << "Ů�������֣�";
	cin >> value_daughter_name;
	cout << "Ů��������(MM DD)��";
	cin >> value_birth_month >> value_birth_date;

	/**���·ݵĿ���������**/
	int constell_dates[] ={20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
	value_birth_constell = constell_names[value_birth_month-1][value_birth_date/constell_dates[value_birth_month-1]];

	cout << "\nŮ������Ϣ��" << endl;
	cout << "������" << value_daughter_name << endl;
	cout << "���գ�1659-" << value_birth_month << "-" << value_birth_date << endl;
	cout << "������" << value_birth_constell << endl;

	if("������" == value_birth_constell)
	{
		value_array_baseinfo[0] = 80;
		value_array_baseinfo[1] = 15;
		value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 11;
		value_array_baseinfo[4] = 21;
	}
	else if("��ţ��" == value_birth_constell)
	{
		value_array_baseinfo[0] = 80;
		value_array_baseinfo[1] = 15;
		value_array_baseinfo[2] = 28;
		value_array_baseinfo[3] = 25;
		value_array_baseinfo[4] = 11;
	}
	else if("˫����" == value_birth_constell)
	{
		value_array_baseinfo[0] = 50;
		value_array_baseinfo[1] = 35;
		value_array_baseinfo[2] = 23;
		value_array_baseinfo[3] = 26;
		value_array_baseinfo[4] = 8;
	}
	else if("��з��" == value_birth_constell)
	{
		value_array_baseinfo[0] = 40;
		value_array_baseinfo[1] = 31;
		value_array_baseinfo[2] = 33;
		value_array_baseinfo[3] = 23;
		value_array_baseinfo[4] = 17;
	}
	else if("ʨ����" == value_birth_constell)
	{
		value_array_baseinfo[0] = 85;
		value_array_baseinfo[1] = 9;
		value_array_baseinfo[2] = 11;
		value_array_baseinfo[3] = 28;
		value_array_baseinfo[4] = 20;
	}
	else if("��Ů��" == value_birth_constell)
	{
		value_array_baseinfo[0] = 35;
		value_array_baseinfo[1] = 28;
		value_array_baseinfo[2] = 36;
		value_array_baseinfo[3] = 19;
		value_array_baseinfo[4] = 18;
	}
	else if("�����" == value_birth_constell)
	{
		value_array_baseinfo[0] = 42;
		value_array_baseinfo[1] = 33;
		value_array_baseinfo[2] = 25;
		value_array_baseinfo[3] = 24;
		value_array_baseinfo[4] = 32;
	}
	else if("��Ы��" == value_birth_constell)
	{
		value_array_baseinfo[0] = 50;
		value_array_baseinfo[1] = 25;
		value_array_baseinfo[2] = 40;
		value_array_baseinfo[3] = 20;
		value_array_baseinfo[4] = 18;
	}
	else if("������" == value_birth_constell)
	{
		value_array_baseinfo[0] = 57;
		value_array_baseinfo[1] = 31;
		value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 26;
		value_array_baseinfo[4] = 19;
	}
	else if("ɽ����" == value_birth_constell)
	{
		value_array_baseinfo[0] = 56;
		value_array_baseinfo[1] = 21;
		value_array_baseinfo[2] = 16;
		value_array_baseinfo[3] = 22;
		value_array_baseinfo[4] = 25;
	}
	else if("ˮƿ��" == value_birth_constell)
	{
		value_array_baseinfo[0] = 43;
		value_array_baseinfo[1] = 43;
		value_array_baseinfo[3] = 20;
		value_array_baseinfo[4] = 27;
		value_array_baseinfo[5] = 23;
	}
	else if("˫����" == value_birth_constell)
	{
		value_array_baseinfo[0] = 41;
		value_array_baseinfo[1] = 20;
		value_array_baseinfo[3] = 29;
		value_array_baseinfo[4] = 25;
		value_array_baseinfo[5] = 23;
	}

	for(int year = 1659; year <= 1659 + 7; year++)
	{
		for(int month = (1659 == year) ? 6 : 1; month <= 12; month++)
		{
			//�жϱ����Ƿ�Ϊ����
			if(month == value_birth_month)
			{
				cout << "������" << value_daughter_name << "���գ�Ҫ��Ҫ��������?" << endl;
				//�����û�����������ж�
				cout << "1����Ǯ\n2����\n3����������" << endl;
				cout << "��ѡ��"<<endl;
				cin >> choice;
				if(1 == choice) //��Ǯ
				{
					value_daughter_gold += temp3 = rand()%101;
					cout << "\nͨ��������������" << temp3 << "���!" << endl;
				}
				else if(2 == choice) //��
				{
					value_array_baseinfo[1] += temp1 = 10;
					cout << "\nͨ��������������" << temp3 << "����!" << endl;
				}
				else if(3 == choice) //û��
				{
					cout << "\nû����������" << endl;
				}
				else
				{

				}

			}

			//��ʾ��Ϸ���˵�
			cout << "\n1���鿴״̬\n2�������г�\n3������̸��\n4���浵\n5������\n" << endl;
			cin >> choice;
			switch(choice)
			{
				case 1:
						cout << "\nŮ������Ϣ:" << endl;
						cout << "������" << value_daughter_name << endl;
						cout << "���գ�1659-" << value_birth_month << "-" << value_birth_date << endl;
						cout << "������" << value_birth_constell << endl;
						cout << "��ң�" << value_daughter_gold << endl;
						//��ӡ��������
						cout << left;
						for(int i = 0;i < 5;i++)
						{
							cout << value_array_baseinfo_names[i] << "��" << setw(2) << value_array_baseinfo[i];

							int SolidCount = value_array_baseinfo[i]/10;
							for(int j = 0; j < 10; j++)
							{
								if(j <= SolidCount)
									cout << "+";
								else
									cout << "-";
							}
							cout << endl;
						}

						break;
				case 2:
					{	//�����г̣�һ������ల�������г�
						string month_parts[] = {"��Ѯ", "��Ѯ", "��Ѯ"};
						for(int i = 0;i < 3;i++)
						{
							cout << "\n������--" << month << "��--" << month_parts[i] << endl;
							cout << "1��ѧϰ����\n2����˽��\n3��ѧϰ��\n4����������\n5����׬Ǯ" << endl;
							cout << "��ѡ��"<<endl;
							cin >> choice;
							//����ע����Ҫ�ж�ûǮ�������ǿ�ƴ�
							srand(time(NULL));
							if(1 == choice) //ѧϰ����
							{
								//+����+���� -��Ǯ
								value_array_baseinfo[0] += temp1 = rand()%11;
								value_array_baseinfo[2] += temp2 = rand()%11;
								value_daughter_gold -= temp3 = rand()%51;
								cout << "\nѧϰ���޼ɺð���!" << endl;
								cout << "����+" << temp1 << ", ����+" << temp2 << ", ��Ǯ-" << temp3 <<endl;
							}
							else if(2 == choice)//��˽��
							{

								//+���� +���� +���� -��Ǯ
								value_array_baseinfo[1] += temp1 = rand()%11;
								value_array_baseinfo[2] += temp2 = rand()%11;
								value_array_baseinfo[4] += temp2 = rand()%11;
								value_daughter_gold -= temp3 = rand()%51;
								cout << "\n�ú�ѧϰ" << endl;
								cout << "����+" << temp1 << ", ����+" << temp2 << ", ��Ǯ-" << temp3 <<endl;
							}
							else if(3 == choice)//ѧϰ��
							{
								//+����+���� -��Ǯ
								value_array_baseinfo[2] += temp2 = rand()%11;
								value_array_baseinfo[3] += temp1 = rand()%11;
								value_daughter_gold -= temp3 = rand()%51;
								cout << "\n�������" << endl;
								cout << "����+" << temp1 << ", ����+" << temp2 << ", ��Ǯ-" << temp3 <<endl;
							}
							else if(4 == choice)//��������
							{
								//+����+���� -��Ǯ
								value_array_baseinfo[0] += temp1 = rand()%11;
								value_array_baseinfo[1] += temp2 = rand()%11;
								value_daughter_gold -= temp3 = rand()%51;
								cout << "\n��������" << endl;
								cout << "����+" << temp1 << ", ����+" << temp2 << ", ��Ǯ-" << temp3 <<endl;
							}
							else if(5 == choice)//��׬Ǯ
							{
								value_daughter_gold += temp3 = rand()%101;
								cout << "\nͨ��Ŭ����׬����" << temp3 << "���!" << endl;
							}

						}
						break;
					}
				case 3:
					{
						value_daughter_gold += temp3 = rand()%101;
						cout << "�õ����㻨Ǯ" << temp3 << "���!" << endl;
						break;
					}
				case 4:
						break;
				case 5:
						break;
				default:
						break;

			}


		}
	}

	int sum = 0;
	for(int i = 0;i < 5;i++)
	{
		sum += value_array_baseinfo[i];
	}

	if(sum >= 2000)
	{
		cout << "������Ϸ���: �ǻ�ΪŮ������" << endl;

}
	else if(sum >= 1800 && sum < 2000)
	{
		cout << "������Ϸ�������Ϊ����" << endl;
	}
	else if(sum >= 1600 && sum < 1800)
	{
		cout << "������Ϸ�������ΪŮ����"<< endl;
	}
	else if(sum >= 1200 && sum < 1600)
	{
		int MaxValue = value_array_baseinfo[0];
		int MaxIndex = 0;
		for(int i = 1; i < 5; i++)
		{
			if(MaxValue < value_array_baseinfo[i])
			{
				MaxValue = value_array_baseinfo[i];
				MaxIndex = i;
			}
		}
		//	/**Ů�������������Ϣ�� ����0������1������2������3������4**/
		//�߼���˾����������1200-1600��������ߣ������� > ����
		if("����" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[2] > value_array_baseinfo[2])
		{
			cout << "�������ڵ�ѵ����"<< value_daughter_name << "�ɳ���Ϊһ�����ٵļ�˾" << endl;
		}

		//�ʼ�ѧԺ�ܲã���������1200-1600��������ߣ������� > ����
		if("����" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[0] > value_array_baseinfo[1])
		{
			cout << "�������ڵ�ѵ����"<< value_daughter_name << "�ɳ���Ϊһ���ʼ�ѧԺ�ܲ�" << endl;
		}

		//��������������1200-1600��������ߣ������� > ����
		if("����" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[0] > value_array_baseinfo[1])
		{
			cout << "�������ڵ�ѵ����"<< value_daughter_name << "�ɳ���Ϊһ������" << endl;
		}

		//������ʿ���ų�����������1200-1600��������ߣ������� > ����
		if("����" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[0] > value_array_baseinfo[1])
		{
			cout << "�������ڵ�ѵ����"<< value_daughter_name << "�ɳ���Ϊһ��������ʿ���ų�" << endl;
		}
		//�����ĳ�������������1200-1600��������ߣ������� > ����
		if("����" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[0] > value_array_baseinfo[1])
		{
			cout << "�������ڵ�ѵ����"<< value_daughter_name << "�ɳ���Ϊһ�������ĳ���" << endl;
		}
	}
	system("pause");
	return 0;
}
