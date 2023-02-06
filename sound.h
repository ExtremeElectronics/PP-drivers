
uint PWMslice;
uint8_t SPO256Port;
uint8_t SPO256FreqPort;
volatile static uint8_t SPO256DataOut;
volatile static uint8_t SPO256DataReady;
volatile static uint8_t SPO256FreqPortData;

uint8_t BeepPort;
volatile static uint8_t BeepDataOut;
volatile static uint8_t BeepDataReady;


void PlayAllophone(int al);

void PlayAllophones(uint8_t *alist,int listlength);

void SetPWM(void);

void Beep(uint8_t note);

