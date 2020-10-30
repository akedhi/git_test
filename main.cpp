#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

class Monster {	// モンスタークラス
protected:
	int   hp;
	int   atk;
public:
	virtual void inputData(void);
	virtual void outputData(void);
	Monster(void);		// コンストラクタ
	virtual ~Monster(void);		// デストラクタ
};

class Slime : public Monster {	// スライムクラス
	int   walkSpd;
public:
	void inputData(void);
	void outputData(void);
	Slime(void);		// コンストラクタ
	~Slime(void);		// デストラクタ
};

class Dragon : public Monster {	// ドラゴンクラス
	int   flySpd;
public:
	void inputData(void);
	void outputData(void);
	Dragon(void);		// コンストラクタ
	~Dragon(void);		// デストラクタ
};

class Wizard : public Monster {	// 魔導士クラス
	int   mp;
	int   magicAtk;
	int   walkSpd;
public:
	void inputData(void);
	void outputData(void);
	Wizard(void);		// コンストラクタ
	~Wizard(void);		// デストラクタ
};

Monster::Monster(void)
{
	hp = 0;
	atk = 0;
}

Monster::~Monster(void)
{

}

Slime::Slime(void)
{
	walkSpd = 0;
}

Slime::~Slime(void)
{

}

Dragon::Dragon(void)
{
	flySpd = 0;
}

Dragon::~Dragon(void)
{

}

Wizard::Wizard(void)
{
	mp = 0;
	magicAtk = 0;
	walkSpd = 0;
}

Wizard::~Wizard(void)
{

}

int main(void)
{
	Monster* obj[3];
	int select = 0;

	printf("su\n");

	for (int i = 0; i < 3; i++)
	{
		printf("スライム:1 or ドラゴン:2 or 魔導士:3を選択して下さい\n");

		do
		{
			printf("%d体目:", i + 1);
			scanf("%d", &select);
			rewind(stdin);
		} while (select < 1 || select > 3);

		if (select == 1)
		{
			obj[i] = new Slime;
			printf("スライムを選択しました\n");
			obj[i]->inputData();
		}

		if (select == 2)
		{
			obj[i] = new Dragon;
			printf("ドラゴンを選択しました\n");
			obj[i]->inputData();
		}

		if (select == 3)
		{
			obj[i] = new Wizard;
			printf("魔導士を選択しました\n");
			obj[i]->inputData();
		}
	}

	printf("\n************ 作成結果 ***************\n");

	for (int i = 0; i < 3; i++)
	{
		printf("--- %d体目 ---\n", i + 1);
		obj[i]->outputData();
	}
	printf("\n*************************************\n");

	for (int i = 0; i < 3; i++)
	{
		delete obj[i];
	}

	rewind(stdin);
	getchar();

	return 0;
}

void Monster::inputData()
{

}

void Monster::outputData()
{

}

void Slime::inputData()
{
	printf("スライムのＨＰを入力->");
	scanf("%d", &hp);
	rewind(stdin);

	printf("スライムの攻撃力を入力->");
	scanf("%d", &atk);
	rewind(stdin);

	printf("スライムの歩行スピードを入力->");
	scanf("%d", &walkSpd);
	rewind(stdin);

	printf("\n");
}

void Slime::outputData()
{
	printf("スライム ＨＰ:%d\n", hp);
	printf("スライム 攻撃力:%d\n", atk);
	printf("スライム 歩行スピード：%d\n", walkSpd);
}

void Dragon::inputData()
{
	printf("ドラゴンのＨＰを入力->");
	scanf("%d", &hp);
	rewind(stdin);

	printf("ドラゴンの攻撃力を入力->");
	scanf("%d", &atk);
	rewind(stdin);

	printf("ドラゴンの飛行スピードを入力->");
	scanf("%d", &flySpd);
	rewind(stdin);

	printf("\n");
}

void Dragon::outputData()
{
	printf("ドラゴン ＨＰ:%d\n", hp);
	printf("ドラゴン 攻撃力:%d\n", atk);
	printf("ドラゴン 飛行スピード：%d\n", flySpd);
}

void Wizard::inputData()
{
	printf("魔導士のＨＰを入力->");
	scanf("%d", &hp);
	rewind(stdin);

	printf("魔導士の攻撃力を入力->");
	scanf("%d", &atk);
	rewind(stdin);

	printf("魔導士のＭＰを入力->");
	scanf("%d", &mp);
	rewind(stdin);

	printf("魔導士の魔法攻撃力を入力->");
	scanf("%d", &magicAtk);
	rewind(stdin);

	printf("魔導士の歩行スピードを入力->");
	scanf("%d", &walkSpd);
	rewind(stdin);

	printf("\n");
}

void Wizard::outputData()
{
	printf("魔導士 ＨＰ:%d\n", hp);
	printf("魔導士 攻撃力:%d\n", atk);
	printf("魔導士 ＭＰ:%d\n", mp);
	printf("魔導士 魔法攻撃力：%d\n", magicAtk);
	printf("魔導士 歩行スピード:%d\n", walkSpd);
}