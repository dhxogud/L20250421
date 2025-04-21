#include <iostream>
#include <vector>
#include <list>	// �߰�, ���� ������, �˻� ����� ��δ� (Linked List ���, ������ �ּҷ� ã�ư��� ������)
#include <map>
#include <set>
#include <stack>
#include <queue>


#include "World.h"
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"
#include "Player.h"

using namespace std;

// STL, Standard Template Library
// 
// (C++ -> template) == (java, C# -> Generic), (C++ -> container) == (java -> collection) �� ���� ���� �ٸ����մ�


//meta programming
//C++ -> complier -> (template) + make -> object : ���� ������Ҷ� �Ⱥ�����, �������� ���� make �����ϱ� ������ �����ľ��� ����


// ���� ���ø� Ŭ������ �ۼ��Ҷ� ������Ͽ��ٰ� �����ʰ� cpp�� ���Ƽ� �����Ѵ�. <vector> �����̳ʵ� ���� ������Ͽ� ���ø� ������ ���� �ʾҴ�.

//�����ε��� (1. �Լ��̸��� �Ȱ��� 2. ������ ���� Ÿ���� �޶�߸� �Ѵ�.)
//template <typename T>
//T Add(T A, T B)
//{
//	return A + B;
//}


int main()
{

	UWorld* MyWorld = new UWorld();

	MyWorld->SpawnActor(new ASlime());
	MyWorld->SpawnActor(new AGoblin());
	
	//Player, Boar
	MyWorld -> SpawnActor(new APlayer());
	MyWorld -> SpawnActor(new ABoar());

	MyWorld->Run();


	delete MyWorld;
	MyWorld = nullptr;


	return 0;
}