#include "include.h"
Player player;
void PlayerInit()
{
	player.bColor = BLACK;
	player.fColor = WHITE;
	player.x = 60;
	player.y = 15;
	player.body = 'A';
}

void PlayerUpdate()
{
	
		PlayerMove();
		PlayerClipping();

		if (GetAsyncKeyState)(VK_SPACE))
		{
			CreateBullet(player.x, player.y);
	}
	
}

void PlayerDraw()
{
	DrawChar(player.x, player.y, player.body, player.fColor, player.bColor);
}

void PlayerMove()
{
	// 0,0(������) ~ 119, 29(�����ʾƷ�)
	if (GetAsyncKeyState('W'))
		player.y--;

	if (GetAsyncKeyState('A'))
		player.x--;

	if (GetAsyncKeyState('S'))
		player.y++;

	if (GetAsyncKeyState('D'))
		player.x++;
}

void PlayerClipping()
{
	// �Ѿ� ���� -> �����̽�Ű(VK_SPACE)�� ������ �÷��̾� ��ġ�� �Ѿ� ����
	// �Ѿ��� ���� �̵�(�ڵ����� ��� ���� �ö�)

	if (player.x < 0)
		player.x = 0;

	if (player.x > 119)
		player.x = 119;

	if (player.y < 0)
		player.y = 0;

	if (player.y > 29)
		player.y = 29;
}