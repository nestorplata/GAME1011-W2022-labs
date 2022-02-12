#include "Eskeleton.h"
#include "Dark Orc.h"
#include "Troll.h"

int main()
{
	Enemy* m_skeleton = new Eskeleton();
	Enemy* m_troll = new Troll();
	Enemy* m_orc = new Orc();
	Enemy* m_DarkOrc = new DarkOrc();
	Enemy* Object[4];
	
	m_skeleton->Attack();
	m_troll->Attack();
	m_orc->Attack();
	m_DarkOrc->Attack();

	system("pause");
	return 0;

}