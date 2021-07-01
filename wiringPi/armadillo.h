#ifndef	__ARMADILLO_H__
#define	__ARMADILLO_H__

#define GPIO(x, y) (((x - 1) * 32) + y)

// Armadillo board identifier
#define NOT_ARMADILLO		-1
#define ARMADILLO_640		0

extern int is_armadillo        (void) ;
extern int get_board_armadillo (void) ;

// Armadillo always has wiringPiMode=WPI_MODE_GPIO_SYS,
// so it does not convert the physical pin number or wpi pin number to GPIO number.
static int  pinToGpioArmadillo [64] = {-1} ;
static int physToGpioArmadillo [64] = {-1} ;

#endif
