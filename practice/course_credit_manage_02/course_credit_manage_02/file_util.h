#ifndef __FILE_H__
#define __FILE_H__

extern void fileWrite(LECTURE lect);
extern void fileRead();
void fileDelete();
void fileChange();
void fileSearch();
void fileInit(); //�ʱ�ȭ
void lect_delete(char* name);
void dataProd(int a);

//���Ͽ� �����Ͱ� �ִ� �� Ȯ��
void fileChacking(LECTURE le, FILE* fr);

#endif 

