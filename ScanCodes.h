
// kbd scan codes. <0xff ASCII -  =0xff blank  - >0xff special keys
//normal
uint16_t keys[64*6]={ 0    ,'\\' ,'z'  ,'x'  ,'c'  ,'v'  ,' '  ,0, //7
                      0    ,'a'  ,'s'  ,'d'  ,'f'  ,'g'  ,'h'  ,0, //15
                      0x10f,'q'  ,'w'  ,'e'  ,'r'  ,'t'  ,'y'  ,0, //23
                      '~'  ,'1'  ,'2'  ,'3'  ,'4'  ,'5'  ,'6'  ,0, //31
                      0x08 ,'='  ,'-'  ,'0'  ,'9'  ,'8'  ,'7'  ,0, //39
                      0x0d ,']'  ,'['  ,'p'  ,'o'  ,'i'  ,'u'  ,0, //47
                      '#'  ,0    ,','  ,';'  ,'l'  ,'k'  ,'j'  ,0, //55
                      0    ,'/'  ,'.'  ,','  ,'m'  ,'n'  ,'b'  ,0, //63
//shifted
                      0    ,'|'  ,'Z'  ,'X'  ,'C'  ,'V'  ,' '  ,0, //7
                      0    ,'A'  ,'S'  ,'D'  ,'F'  ,'G'  ,'H'  ,0, //15
                      0x10f,'Q'  ,'W'  ,'E'  ,'R'  ,'T'  ,'Y'  ,0, //23
                      '~'  ,'!'  ,'\"' ,0x9c ,'$'  ,'%'  ,'^'  ,0, //31
                      0x08 ,'+'  ,'_'  ,')'  ,'('  ,'*'  ,'&'  ,0, //39
                      0x0d ,'}'  ,'{'  ,'P'  ,'O'  ,'I'  ,'U'  ,0, //47
                      '\\' ,0    ,'@'  ,':'  ,'L'  ,'K'  ,'J'  ,0, //55
                      0    ,'?'  ,'>'  ,'<'  ,'M'  ,'N'  ,'B'  ,0, //63
//ctrl
                      0    ,0    ,26   ,24   ,3    ,22   ,' '  ,0, //7
                      0    ,1    ,19   ,4    ,6    ,7    ,8    ,0, //15
                      0    ,17   ,23   ,5    ,18   ,20   ,25   ,0, //23
                      0    ,0    ,0    ,0    ,0    ,0    ,0    ,0, //31
                      0x08 ,0    ,0    ,0    ,0    ,0    ,0    ,0, //39
                      0x0d ,0    ,0    ,16   ,15   ,9    ,21   ,0, //47
                      0    ,0    ,0    ,0    ,12   ,11   ,10   ,0, //55
                      0    ,0    ,0    ,0    ,13   ,14   ,2    ,0, //63
//func
                      0    ,0    ,0    ,0    ,0    ,0    ,0    ,0,
                      0    ,0    ,0    ,0    ,0    ,0    ,0    ,0,
                      0    ,0    ,0    ,0    ,0    ,0    ,0    ,0,
                      0    ,0x101,0x102,0x103,0x104,0x105,0    ,0, //fkeys 1-6
                      0    ,0    ,0    ,0x100,0x109,0x108,0x107,0, //fkeys 0987
                      0    ,0    ,0    ,0    ,0    ,0    ,0    ,0,
                      0    ,0    ,0    ,0    ,0    ,0    ,0    ,0,
                      0    ,0    ,0    ,0    ,0    ,0    ,0    ,0,

//alt
                      0  ,0  ,0  ,0  ,0  ,0  ,0  ,0,
                      0  ,0  ,0  ,0  ,0  ,0  ,0  ,0,
                      0  ,0  ,0  ,0  ,0  ,0  ,0  ,0,
                      0  ,0  ,0  ,0  ,0  ,0  ,0  ,0,
                      0  ,0  ,0  ,0  ,0  ,0  ,0  ,0,
                      0  ,0  ,0  ,0  ,0  ,0  ,0  ,0,
                      0  ,0  ,0  ,0  ,0  ,0  ,0  ,0,
                      0  ,0  ,0  ,0  ,0  ,0  ,0  ,0,
//caps
                      0    ,'\\' ,'Z'  ,'X'  ,'C'  ,'V'  ,' '  ,0, //7
                      0    ,'A'  ,'S'  ,'D'  ,'F'  ,'G'  ,'H'  ,0, //15
                      0x10f,'Q'  ,'W'  ,'E'  ,'R'  ,'T'  ,'Y'  ,0, //23
                      '~'  ,'1'  ,'2'  ,'3'  ,'4'  ,'5'  ,'6'  ,0, //31
                      0x08 ,'='  ,'-'  ,'0'  ,'9'  ,'8'  ,'7'  ,0, //39
                      0x0d ,']'  ,'['  ,'P'  ,'O'  ,'I'  ,'U'  ,0, //47
                      '\\' ,0    ,'\''  ,';'  ,'L'  ,'K'  ,'J'  ,0, //55
                      0    ,'/'  ,'.'  ,','  ,'M'  ,'N'  ,'B'  ,0 //63
                      };

#define lshiftkey 8
#define rshiftkey 8
#define lctrlkey 56
#define rctrlkey 56
#define funckey 49
