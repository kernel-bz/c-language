/**
[C���] �ý��� ���α׷���#6(���� ��Ʈ������ Ȱ��)

�ȳ��ϼ���?
�̹��� �̾߱��� ���� ������ ���� C����� ���� ��Ʈ������ Ȱ���Դϴ�.
AND: &
OR:  |
XOR: ^
LEFT SHIFT: <<
RIGHT SHIFT: >>

�Ʒ��� ���� ������ �־����ٸ� ��� �ڵ��ϸ� �������?

����: ��ġ��ũ���� 8���� ������ �ִµ� 
      ����ڰ� 8�� ������ ��� �������� ���α׷��� �����϶�.

������ ���Ͽ� ���� ��ġ �ε������� 0������ 7������ �Էµȴٰ� �����սô�.
��� ������ ������.
...
���α׷��� �ڵ��ϴ� ���� �̷� ������ �������� ���� �߻��ϰ�,
��κ� �Ʒ��� ���� �ڵ� �Ͻǵ� �մϴ�.

int Touch0, Touch1, Touch2, Touch3, Touch4, Touch5, Touch6, Touch7;

int touch_all(void)
{
	int idx, is_all;

	idx = touch_input();
	switch (idx) {
		case 0: Touch0 = 1;	break;
		case 1: Touch1 = 1;	break;
		case 2: Touch2 = 1;	break;
		case 3: Touch3 = 1;	break;
		case 4: Touch4 = 1;	break;
		case 5: Touch5 = 1;	break;
		case 6: Touch6 = 1;	break;
		case 7: Touch7 = 1;	break;
	}
	is_all = Touch0 + Touch1 + Touch2 + Touch3 + Touch4 + Touch5 + Touch6 + Touch7;

	if (is_all > 7) return 1;	//8�� ������ ��� ��������.
	else return 0;
}

���� ������ �� ���ø�, �Ʒ��� ���� �迭�� ����� �� �ֽ��ϴ�.

int Touch[8];

int touch_all(void)
{
	int idx, is_all=0;

	idx = touch_input();
	Touch[idx] = 1;

	for (idx=0; idx<8; idx++)
		is_all += Touch[idx];

	if (is_all > 7) return 1;	//8�� ������ ��� ��������.
	else return 0;

}

������, ���� ��Ʈ�����ڸ� Ȱ���ϸ� �� ȿ������ �ڵ尡 ����� ���ϴ�.
*/

//int IsAll;

int touch_all(int idx)
{
	//int idx;
	int bit;
	static int IsAll;

	//idx = touch_input();
	bit = 1 << idx;
	printf("bit=%d\n", bit);
	IsAll |= bit;
	printf("IsAll=%02X\n", IsAll);

	if (IsAll == 0xFF) return 1;	//8�� ������ ��� ��������.
	else return 0;

}

int main(void)
{
	int i;

	for(i=0; i < 8; i++)
		touch_all(i);

	return 0;
}
