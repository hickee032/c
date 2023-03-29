#ifndef __FILE_H__
#define __FILE_H__

extern void fileWrite(LECTURE lect);
extern void fileRead();
void fileDelete();
void fileChange();
void fileSearch();
void fileInit(); //초기화
void lect_delete(char* name);
void dataProd(int a);

//파일에 데이터가 있는 지 확인
void fileChacking(LECTURE le, FILE* fr);

#endif 

