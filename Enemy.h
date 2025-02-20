#pragma once
struct Enemy
{
	bool isAlive; //true -> �����, false -> �̻��(������)
	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;
};

void Enemylnit();
void EnemyUpdate();
void EnemyDraw();
void EnemyMove();
void EnemyClipping();

void CreateEnemy(int x, int y);


extern Enemy bullet[D_BULLET_MAX];