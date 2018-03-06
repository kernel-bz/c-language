/**
[C언어] 시스템 프로그래밍#6(논리와 비트연산자 활용)

안녕하세요?
이번에 이야기할 것은 다음과 같은 C언어의 논리와 비트연산자 활용입니다.
AND: &
OR:  |
XOR: ^
LEFT SHIFT: <<
RIGHT SHIFT: >>

아래와 같은 문제가 주어졌다면 어떻게 코딩하면 좋을까요?

문제: 터치스크린에 8개의 버턴이 있는데 
      사용자가 8개 버턴을 모두 눌렀을때 프로그램을 종료하라.

각각의 버턴에 대한 터치 인덱스값은 0번에서 7번까지 입력된다고 가정합시다.
잠깐 생각해 보세요.
...
프로그램을 코딩하다 보면 이런 유사한 문제들이 많이 발생하고,
대부분 아래와 같이 코딩 하실듯 합니다.

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

	if (is_all > 7) return 1;	//8개 버턴이 모두 눌려졌음.
	else return 0;
}

좀더 생각을 해 보시면, 아래와 같이 배열을 사용할 수 있습니다.

int Touch[8];

int touch_all(void)
{
	int idx, is_all=0;

	idx = touch_input();
	Touch[idx] = 1;

	for (idx=0; idx<8; idx++)
		is_all += Touch[idx];

	if (is_all > 7) return 1;	//8개 버턴이 모두 눌려졌음.
	else return 0;

}

하지만, 논리와 비트연산자를 활용하면 더 효율적인 코드가 만들어 집니다.
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

	if (IsAll == 0xFF) return 1;	//8개 버턴이 모두 눌려졌음.
	else return 0;

}

int main(void)
{
	int i;

	for(i=0; i < 8; i++)
		touch_all(i);

	return 0;
}
