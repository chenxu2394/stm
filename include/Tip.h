#define TIP_BABY_WAIT_1   10000
#define TIP_BABY_WAIT_2   5000

#define TUNNELING_MIN_MIN       1
#define TUNNELING_MIN_MAX       10000
#define TUNNELING_MIN_DELT      10
#define TUNNELING_MIN_DDELT     200

#define TIP_IDLE                0
#define TIP_APPROACHING         1
#define TIP_STEPING_UP          2
#define TIP_STEPING_DOWN        3
#define TIP_STOP_NOW            4

#define TIP_GIANT_DELT  1
#define TIP_GIANT_DDELT  5
#define TIP_GIANT_MIN   1
#define TIP_GIANT_MAX   50

#define TIP_BABY_DELT  1
#define TIP_BABY_DDELT  5
#define TIP_BABY_MIN   1
#define TIP_BABY_MAX   20

#define TIP_DOWN_X_STEP_DEF    511
#define TIP_DOWN_ACCEL_DEF        10
#define TIP_DOWN_Z_STEP_DEF    511
#define TIP_UP_X_STEP_DEF    511
#define TIP_UP_ACCEL_DEF        10
#define TIP_UP_Z_STEP_DEF    511

#define BABY_STEP_SIZE  2       /* Size for baby step increments (bits) */
#define TUNNELING_MIN   400     /* (Change) Minimum detected tunneling current (bits) */

#define UP      1
#define DOWN    -1

#define tip_number_min	1
#define tip_number_max	30000
#define tip_number_delt	1
#define tip_number_ddelt 100

#define tip_accel_min   1
#define tip_accel_max   100
#define tip_accel_delt  1
#define tip_accel_ddelt 10

#define tip_delay_min           1
#define tip_delay_max           100
#define tip_delay_delt          1
#define tip_delay_ddelt         10

#define tip_x_step_min          1
#define tip_x_step_max          2047
#define tip_x_step_delt         1
#define tip_x_step_ddelt        10

#define tip_zo_step_min         1
#define tip_zo_step_max         2047
#define tip_zo_step_delt        1
#define tip_zo_step_ddelt       10

#define BIAS_SQUARE_MIN         0.5
#define BIAS_SQUARE_MAX         1
#define BIAS_SQUARE_DELAY       10000

void tip_approach(HWND,unsigned int);
void giant_steps(unsigned int,unsigned int,unsigned int *);
unsigned int baby_steps(HWND,unsigned int,unsigned int *);
void tip_step(HWND,int);
void pre_tip();
void post_tip();
void repaint_z();
void repaint_accel(HWND,unsigned int);
void repaint_number(HWND,unsigned int);
void repaint_delay(HWND,unsigned int);
void repaint_x_step(HWND,unsigned int);
void repaint_zo_step(HWND,unsigned int);
void square_wave();
void tip_update_status(HWND,char *,int);
