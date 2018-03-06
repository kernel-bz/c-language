/**
[C���] �ý��� ���α׷���#6(���� ��Ʈ������ Ȱ��)

�ȳ��ϼ���?
�̹��� �̾߱��� ���� ������ ���� C����� ���� ��Ʈ������ Ȱ���Դϴ�.
AND: &
OR:  |
XOR: ^
LEFT SHIFT: <<
RIGHT SHIFT: >>

�Ʒ��� ���� ������ ������ ��� �ڵ��ϸ� �������?

����: ��ġ��ũ���� 8���� ������ �ִµ� 
      ����ڰ� 8�� ������ ��� �������� ���α׷��� �����϶�.

������ ���Ͽ� ���� ��ġ �ε������� 0������ 7������ �Էµȴٰ� �����սô�.
��� ������ ������.
...
���α׷��� �ڵ��ϴ� ���� �̷� ������ �������� ���� �߻��ϰ�,
��κ� �Ʒ��� ���� �ڵ� �Ͻǵ� �մϴ�.
*/

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

/**
���� ������ �� ���ø�, �Ʒ��� ���� �迭�� ����� �� �ֽ��ϴ�.
*/

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

/**
������, ���� ��Ʈ�����ڸ� Ȱ���ϸ� �� ȿ������ �ڵ尡 ����� ���ϴ�.
*/

int IsAll;

int touch_all(void)
{
	int idx, bit;

	idx = touch_input();
	bit = 1 << idx;
	IsAll |= bit;

	if (IsAll == 0xFF) return 1;	//8�� ������ ��� ��������.
	else return 0;
}

/**
���⼭ �Ѱ��� ��, 
��ġ������ ��� ���� ������ �Ǵ��ϴ� touch_all() �Լ� �ܺο� IsAll �̶�� 
���������� ����߽��ϴ�. �̰� �� ���ڰ� ���Դϴ�.
������ touch_all() �Լ��� ������� �����ٸ� ���������� ���ȭ�� ����Ǿ�
multi processing�� �����ϴ� ������ �˴ϴ�.
�׷��� ������ ���� static �� ����մϴ�.
*/

int touch_all(void)
{
	int idx, bit;
	static int Is_All;

	idx = touch_input();
	bit = 1 << idx;
	Is_All |= bit;

	if (Is_All == 0xFF) return 1;	//8�� ������ ��� ��������.
	else return 0;
}

/**
������� �ѹ��� ���� �ϼ̴ٸ� �̹� C�� ���� �⺻�Ⱑ źź�Ͻôٴ� �̴ϴ�.
Ȥ�� �ǽɵǴ� �κ��� �ִٸ� ���� �ڵ带 ���� �ǽ��Ͽ� ������ ��� ������.
�׷��� ���ذ� ���� ������ ������ ���ñ�...

�׵����� ������� �Ʒ� ��ũ�� �ֽ��ϴ�.
http://192.168.155.60/projects/os-kernel/coding

�׷� ���õ� �� �Ͻñ�...
*/


