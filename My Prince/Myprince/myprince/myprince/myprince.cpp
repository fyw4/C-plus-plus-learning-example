/********************************************************
*文件名：main.cpp
*作者：王晴川
*日期：2019.11.8
*描述：C++第一阶段项目《小公主养成记》
*修改人：
*日期：
*版本：1.0.0
*Copyright（C）2019 王晴川
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

// 1.为父女取名字
// 2.为女儿录入初始信息生日、星座
// 根据女儿的星座，设置游戏的基本参数(体力、智力、魅力、道德、气质)
// 3.开始游戏大循环
//游戏从1659年6月开始
// 4.根据各项参数，判定游戏结果
int main()
{
	/**父亲的姓名**/
	string value_father_name;
	/**女儿的姓名**/
	string value_daughter_name;
	/**女儿的生日月份**/
	int value_birth_month =6;
	/**女儿的生日日期**/
	int value_birth_date =6;
	/**女儿的星座**/
	string value_birth_constell;
	/**女儿的五项基本信息： 体力、智力、魅力、道德、气质**/
	array<int, 5> value_array_baseinfo;
	/**五项基本属性值**/
	array<string, 5>value_array_baseinfo_names = {"体力", "智力", "魅力", "道德", "气质"};
	/**初始金币**/
	int value_daughter_gold = 500;
	/**星座二维数组**/
	string constell_names[12][2] = {
		{"山羊座","水瓶座"},//一月
		{"水瓶座","双鱼座"},//二月
		{"双鱼座","白羊座"},//三月
		{"白羊座","金牛座"},//四月
		{"金牛座","双子座"},//五月
		{"双子座","巨蟹座"},//六月
		{"巨蟹座","狮子座"},//七月
		{"狮子座","处女座"},//八月
		{"处女座","天秤座"},//九月
		{"天秤座","天蝎座"},//十月
		{"天蝎座","射手座"},//十一月
		{"射手座","山羊座"}//十二月
	};
	int choice,temp1,temp2,temp3;

	cout << "父亲的名字：" ;
	cin >> value_father_name;
	cout << "女儿的名字：";
	cin >> value_daughter_name;
	cout << "女儿的生日(MM DD)：";
	cin >> value_birth_month >> value_birth_date;

	/**各月份的跨星座日期**/
	int constell_dates[] ={20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
	value_birth_constell = constell_names[value_birth_month-1][value_birth_date/constell_dates[value_birth_month-1]];

	cout << "\n女儿的信息：" << endl;
	cout << "姓名：" << value_daughter_name << endl;
	cout << "生日：1659-" << value_birth_month << "-" << value_birth_date << endl;
	cout << "星座：" << value_birth_constell << endl;

	if("白羊座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 80;
		value_array_baseinfo[1] = 15;
		value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 11;
		value_array_baseinfo[4] = 21;
	}
	else if("金牛座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 80;
		value_array_baseinfo[1] = 15;
		value_array_baseinfo[2] = 28;
		value_array_baseinfo[3] = 25;
		value_array_baseinfo[4] = 11;
	}
	else if("双子座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 50;
		value_array_baseinfo[1] = 35;
		value_array_baseinfo[2] = 23;
		value_array_baseinfo[3] = 26;
		value_array_baseinfo[4] = 8;
	}
	else if("巨蟹座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 40;
		value_array_baseinfo[1] = 31;
		value_array_baseinfo[2] = 33;
		value_array_baseinfo[3] = 23;
		value_array_baseinfo[4] = 17;
	}
	else if("狮子座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 85;
		value_array_baseinfo[1] = 9;
		value_array_baseinfo[2] = 11;
		value_array_baseinfo[3] = 28;
		value_array_baseinfo[4] = 20;
	}
	else if("处女座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 35;
		value_array_baseinfo[1] = 28;
		value_array_baseinfo[2] = 36;
		value_array_baseinfo[3] = 19;
		value_array_baseinfo[4] = 18;
	}
	else if("天秤座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 42;
		value_array_baseinfo[1] = 33;
		value_array_baseinfo[2] = 25;
		value_array_baseinfo[3] = 24;
		value_array_baseinfo[4] = 32;
	}
	else if("天蝎座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 50;
		value_array_baseinfo[1] = 25;
		value_array_baseinfo[2] = 40;
		value_array_baseinfo[3] = 20;
		value_array_baseinfo[4] = 18;
	}
	else if("射手座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 57;
		value_array_baseinfo[1] = 31;
		value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 26;
		value_array_baseinfo[4] = 19;
	}
	else if("山羊座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 56;
		value_array_baseinfo[1] = 21;
		value_array_baseinfo[2] = 16;
		value_array_baseinfo[3] = 22;
		value_array_baseinfo[4] = 25;
	}
	else if("水瓶座" == value_birth_constell)
	{
		value_array_baseinfo[0] = 43;
		value_array_baseinfo[1] = 43;
		value_array_baseinfo[3] = 20;
		value_array_baseinfo[4] = 27;
		value_array_baseinfo[5] = 23;
	}
	else if("双鱼座" == value_birth_constell)
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
			//判断本月是否为生日
			if(month == value_birth_month)
			{
				cout << "本月是" << value_daughter_name << "生日，要不要送礼物呢?" << endl;
				//根据用户的输入进行判断
				cout << "1、金钱\n2、书\n3、不送礼物" << endl;
				cout << "请选择："<<endl;
				cin >> choice;
				if(1 == choice) //金钱
				{
					value_daughter_gold += temp3 = rand()%101;
					cout << "\n通过生日礼物获得了" << temp3 << "金币!" << endl;
				}
				else if(2 == choice) //书
				{
					value_array_baseinfo[1] += temp1 = 10;
					cout << "\n通过生日礼物获得了" << temp3 << "智力!" << endl;
				}
				else if(3 == choice) //没有
				{
					cout << "\n没有生日礼物" << endl;
				}
				else
				{

				}

			}

			//显示游戏主菜单
			cout << "\n1、查看状态\n2、安排行程\n3、亲子谈话\n4、存档\n5、读档\n" << endl;
			cin >> choice;
			switch(choice)
			{
				case 1:
						cout << "\n女儿的信息:" << endl;
						cout << "姓名：" << value_daughter_name << endl;
						cout << "生日：1659-" << value_birth_month << "-" << value_birth_date << endl;
						cout << "星座：" << value_birth_constell << endl;
						cout << "金币：" << value_daughter_gold << endl;
						//打印核心属性
						cout << left;
						for(int i = 0;i < 5;i++)
						{
							cout << value_array_baseinfo_names[i] << "：" << setw(2) << value_array_baseinfo[i];

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
					{	//安排行程，一个月最多安排三个行程
						string month_parts[] = {"上旬", "中旬", "下旬"};
						for(int i = 0;i < 3;i++)
						{
							cout << "\n现在是--" << month << "月--" << month_parts[i] << endl;
							cout << "1、学习武艺\n2、上私塾\n3、学习礼法\n4、出城修行\n5、打工赚钱" << endl;
							cout << "请选择："<<endl;
							cin >> choice;
							//这里注意需要判断没钱的情况，强制打工
							srand(time(NULL));
							if(1 == choice) //学习武艺
							{
								//+体力+魅力 -金钱
								value_array_baseinfo[0] += temp1 = rand()%11;
								value_array_baseinfo[2] += temp2 = rand()%11;
								value_daughter_gold -= temp3 = rand()%51;
								cout << "\n学习张无忌好榜样!" << endl;
								cout << "体力+" << temp1 << ", 魅力+" << temp2 << ", 金钱-" << temp3 <<endl;
							}
							else if(2 == choice)//上私塾
							{

								//+智力 +魅力 +气质 -金钱
								value_array_baseinfo[1] += temp1 = rand()%11;
								value_array_baseinfo[2] += temp2 = rand()%11;
								value_array_baseinfo[4] += temp2 = rand()%11;
								value_daughter_gold -= temp3 = rand()%51;
								cout << "\n好好学习" << endl;
								cout << "体力+" << temp1 << ", 魅力+" << temp2 << ", 金钱-" << temp3 <<endl;
							}
							else if(3 == choice)//学习礼法
							{
								//+魅力+道德 -金钱
								value_array_baseinfo[2] += temp2 = rand()%11;
								value_array_baseinfo[3] += temp1 = rand()%11;
								value_daughter_gold -= temp3 = rand()%51;
								cout << "\n彬彬有礼" << endl;
								cout << "体力+" << temp1 << ", 魅力+" << temp2 << ", 金钱-" << temp3 <<endl;
							}
							else if(4 == choice)//出城修行
							{
								//+体力+智力 -金钱
								value_array_baseinfo[0] += temp1 = rand()%11;
								value_array_baseinfo[1] += temp2 = rand()%11;
								value_daughter_gold -= temp3 = rand()%51;
								cout << "\n锻炼体力" << endl;
								cout << "体力+" << temp1 << ", 魅力+" << temp2 << ", 金钱-" << temp3 <<endl;
							}
							else if(5 == choice)//打工赚钱
							{
								value_daughter_gold += temp3 = rand()%101;
								cout << "\n通过努力打工赚到了" << temp3 << "金币!" << endl;
							}

						}
						break;
					}
				case 3:
					{
						value_daughter_gold += temp3 = rand()%101;
						cout << "得到了零花钱" << temp3 << "金币!" << endl;
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
		cout << "最优游戏结果: 登基为女王陛下" << endl;

}
	else if(sum >= 1800 && sum < 2000)
	{
		cout << "次优游戏结果：成为王妃" << endl;
	}
	else if(sum >= 1600 && sum < 1800)
	{
		cout << "优秀游戏结果：成为女将军"<< endl;
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
		//	/**女儿的五项基本信息： 体力0、智力1、魅力2、道德3、气质4**/
		//高级祭司，属性总数1200-1600，道德最高，且魅力 > 气质
		if("道德" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[2] > value_array_baseinfo[2])
		{
			cout << "经过长期的训练，"<< value_daughter_name << "成长成为一名光荣的祭司" << endl;
		}

		//皇家学院总裁，属性总数1200-1600，智力最高，且体力 > 智力
		if("智力" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[0] > value_array_baseinfo[1])
		{
			cout << "经过长期的训练，"<< value_daughter_name << "成长成为一名皇家学院总裁" << endl;
		}

		//公主，属性总数1200-1600，气质最高，且魅力 > 体力
		if("气质" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[0] > value_array_baseinfo[1])
		{
			cout << "经过长期的训练，"<< value_daughter_name << "成长成为一名公主" << endl;
		}

		//近卫骑士团团长，属性总数1200-1600，气质最高，且气质 > 魅力
		if("体力" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[0] > value_array_baseinfo[1])
		{
			cout << "经过长期的训练，"<< value_daughter_name << "成长成为一名近卫骑士团团长" << endl;
		}
		//国王的宠妃，属性总数1200-1600，魅力最高，且气质 > 道德
		if("魅力" == value_array_baseinfo_names[MaxIndex] &&value_array_baseinfo[0] > value_array_baseinfo[1])
		{
			cout << "经过长期的训练，"<< value_daughter_name << "成长成为一名国王的宠妃" << endl;
		}
	}
	system("pause");
	return 0;
}
