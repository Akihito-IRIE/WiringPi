#ifndef	__ARMADILLO_H__
#define	__ARMADILLO_H__

#define GPIO(x, y) (((x - 1) * 32) + y)

// Armadillo board identifier
#define NOT_ARMADILLO		-1
#define ARMADILLO_640		0

extern int is_armadillo        (void) ;
extern int get_board_armadillo (void) ;

#endif
