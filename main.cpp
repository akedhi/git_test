#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

class Monster {	// �����X�^�[�N���X
protected:
	int   hp;
	int   atk;
public:
	virtual void inputData(void);
	virtual void outputData(void);
	Monster(void);		// �R���X�g���N�^
	virtual ~Monster(void);		// �f�X�g���N�^
};

class Slime : public Monster {	// �X���C���N���X
	int   walkSpd;
public:
	void inputData(void);
	void outputData(void);
	Slime(void);		// �R���X�g���N�^
	~Slime(void);		// �f�X�g���N�^
};

class Dragon : public Monster {	// �h���S���N���X
	int   flySpd;
public:
	void inputData(void);
	void outputData(void);
	Dragon(void);		// �R���X�g���N�^
	~Dragon(void);		// �f�X�g���N�^
};

class Wizard : public Monster {	// �����m�N���X
	int   mp;
	int   magicAtk;
	int   walkSpd;
public:
	void inputData(void);
	void outputData(void);
	Wizard(void);		// �R���X�g���N�^
	~Wizard(void);		// �f�X�g���N�^
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
		printf("�X���C��:1 or �h���S��:2 or �����m:3��I�����ĉ�����\n");

		do
		{
			printf("%d�̖�:", i + 1);
			scanf("%d", &select);
			rewind(stdin);
		} while (select < 1 || select > 3);

		if (select == 1)
		{
			obj[i] = new Slime;
			printf("�X���C����I�����܂���\n");
			obj[i]->inputData();
		}

		if (select == 2)
		{
			obj[i] = new Dragon;
			printf("�h���S����I�����܂���\n");
			obj[i]->inputData();
		}

		if (select == 3)
		{
			obj[i] = new Wizard;
			printf("�����m��I�����܂���\n");
			obj[i]->inputData();
		}
	}

	printf("\n************ �쐬���� ***************\n");

	for (int i = 0; i < 3; i++)
	{
		printf("--- %d�̖� ---\n", i + 1);
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
	printf("�X���C���̂g�o�����->");
	scanf("%d", &hp);
	rewind(stdin);

	printf("�X���C���̍U���͂����->");
	scanf("%d", &atk);
	rewind(stdin);

	printf("�X���C���̕��s�X�s�[�h�����->");
	scanf("%d", &walkSpd);
	rewind(stdin);

	printf("\n");
}

void Slime::outputData()
{
	printf("�X���C�� �g�o:%d\n", hp);
	printf("�X���C�� �U����:%d\n", atk);
	printf("�X���C�� ���s�X�s�[�h�F%d\n", walkSpd);
}

void Dragon::inputData()
{
	printf("�h���S���̂g�o�����->");
	scanf("%d", &hp);
	rewind(stdin);

	printf("�h���S���̍U���͂����->");
	scanf("%d", &atk);
	rewind(stdin);

	printf("�h���S���̔�s�X�s�[�h�����->");
	scanf("%d", &flySpd);
	rewind(stdin);

	printf("\n");
}

void Dragon::outputData()
{
	printf("�h���S�� �g�o:%d\n", hp);
	printf("�h���S�� �U����:%d\n", atk);
	printf("�h���S�� ��s�X�s�[�h�F%d\n", flySpd);
}

void Wizard::inputData()
{
	printf("�����m�̂g�o�����->");
	scanf("%d", &hp);
	rewind(stdin);

	printf("�����m�̍U���͂����->");
	scanf("%d", &atk);
	rewind(stdin);

	printf("�����m�̂l�o�����->");
	scanf("%d", &mp);
	rewind(stdin);

	printf("�����m�̖��@�U���͂����->");
	scanf("%d", &magicAtk);
	rewind(stdin);

	printf("�����m�̕��s�X�s�[�h�����->");
	scanf("%d", &walkSpd);
	rewind(stdin);

	printf("\n");
}

void Wizard::outputData()
{
	printf("�����m �g�o:%d\n", hp);
	printf("�����m �U����:%d\n", atk);
	printf("�����m �l�o:%d\n", mp);
	printf("�����m ���@�U���́F%d\n", magicAtk);
	printf("�����m ���s�X�s�[�h:%d\n", walkSpd);
}