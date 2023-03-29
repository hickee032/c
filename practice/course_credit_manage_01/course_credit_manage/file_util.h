#ifndef __FILE_UTIL_H__
#define __FILE_UTIL_H__

extern void lect_write(LECTURE lect);
extern void lect_read();
extern void lect_init();
extern void lect_search(char name[]);
extern void lect_search2(char* name);
extern void lect_delete(char* name);
extern void lect_rand_write(LECTURE lect[]);
void lect_update(char* src_name, char* dst_name);

#endif