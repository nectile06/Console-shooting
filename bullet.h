#pragma once
struct Bullet 
{
	bool isAlive; //true -> �����, false -> �̻��(������)
	int x;
	int y; 
	char body;
	WORD fColor;
	WORD bColor;
};

void Bulletlnit();
void BulletUpdate();
void BulletDraw();
void BulletMove();
void BulletClipping();
void CreateBullet(int x, int y);


extern Bullet bullet[D_BULLET_MAX];
