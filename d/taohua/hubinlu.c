inherit ROOM;
 
void create()
{
        set("short", "����·");
        set("long",@LONG
����̫�����ϵ�һ��С·��·����ʮ�ɴ���һҶ����ͣ��
���У�һ���������ڴ�ͷ��������β�и�Сͯ���̲�������һ
�Ͷ���������һ��ˮīɽˮһ�㡣
LONG );
        set("exits", ([
  "east" : __DIR__"taihu",
  "southwest" : __DIR__"hubinlu1",
]));
        set("outdoors", "taohua");
 
        setup();
}