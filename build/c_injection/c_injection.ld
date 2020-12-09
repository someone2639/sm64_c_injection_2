SECTIONS
{
    __romPos = 0x0;
    .name 0x80000000 : AT(__romPos){
        build/c_injection/final.o(.text*);
        build/c_injection/final.o(.data*);
        build/c_injection/final.o(.rodata*);
        build/c_injection/final.o(.bss*);
    }
    /DISCARD/ :
    {
        *(*);
    }
}
