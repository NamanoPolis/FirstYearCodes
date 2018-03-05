
int64_t __set_app_type = 0x9644;

void __set_app_type(int64_t rcx) {
    goto __set_app_type;
}

int64_t _encode_pointer(int64_t rcx, ...) {
    return rcx;
}

/* .text */
int64_t text(int64_t rcx) {
    return 0;
}

struct s0 {
    signed char[1] pad1;
    void** f1;
};

int64_t strlen = 0x974a;

struct s0* strlen(void** rcx, void** rdx, void** r8) {
    goto strlen;
}

int64_t malloc = 0x9708;

void** malloc(void** rcx, ...) {
    goto malloc;
}

int64_t memcpy = 0x9712;

void memcpy(void** rcx, void** rdx, void** r8) {
    goto memcpy;
}

/* .bss */
int32_t bss;

/* .refptr.__CTOR_LIST__ */
int64_t* refptr___CTOR_LIST__ = reinterpret_cast<int64_t*>(0x4033c0);

/* .text */
int64_t text(int64_t rcx);

/* .text */
void text();

int64_t __main(void** rcx, void** rdx, void** r8) {
    int64_t rax4;
    int64_t* rsi5;
    int64_t rax6;
    int64_t rbx7;
    int64_t rdx8;
    int64_t rax9;
    int64_t rax10;
    int64_t rax11;
    int64_t rax12;

    *reinterpret_cast<int32_t*>(&rax4) = bss;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax4)) {
        return rax4;
    }
    bss = 1;
    rsi5 = refptr___CTOR_LIST__;
    rax6 = *rsi5;
    *reinterpret_cast<int32_t*>(&rbx7) = *reinterpret_cast<int32_t*>(&rax6);
    if (*reinterpret_cast<int32_t*>(&rax6) != -1)
        goto addr_0x4027e7_5;
    *reinterpret_cast<int32_t*>(&rbx7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    while (*reinterpret_cast<int32_t*>(&rdx8) = static_cast<int32_t>(rbx7 + 1), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0, rax9 = rdx8, !!rsi5[rdx8]) {
        *reinterpret_cast<int32_t*>(&rbx7) = *reinterpret_cast<int32_t*>(&rax9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    }
    addr_0x4027e7_5:
    if (*reinterpret_cast<int32_t*>(&rbx7)) {
        do {
            *reinterpret_cast<int32_t*>(&rax10) = *reinterpret_cast<int32_t*>(&rbx7);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
            rsi5[rax10]();
            *reinterpret_cast<int32_t*>(&rbx7) = *reinterpret_cast<int32_t*>(&rbx7) - 1;
        } while (*reinterpret_cast<int32_t*>(&rbx7));
    }
    rax11 = text(text);
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(-static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax11 == 0))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
    return rax12;
}

/* showmenu() */
int32_t _Z8showmenuv(void** rcx, void** rdx, void** r8, int64_t r9);

void puts(int64_t rcx, void** rdx, void** r8, int64_t r9);

/* .text */
void text(int32_t* rcx, void** rdx, void** r8, int64_t r9);

void exit(int64_t rcx, void** rdx, void** r8, ...);

void printf(int64_t rcx, void** rdx, void** r8, int64_t r9);

/* validate(int*, int*, char*) */
void _Z8validatePiS_Pc(int32_t* rcx, void** rdx, void** r8, int64_t r9);

/* allotlift(int*, int, int, char) */
void _Z9allotliftPiiic(uint32_t* rcx, uint32_t edx, void** r8, int64_t r9);

int64_t __iob_func = 0x9626;

void fflush(int64_t rcx, void** rdx, void** r8, int64_t r9);

void scanf(void** rcx, void** rdx, void** r8, int64_t r9);

int64_t main(void** rcx, void** rdx, void** r8) {
    void* rbp4;
    int64_t r9_5;
    int32_t eax6;
    uint32_t eax7;
    unsigned char v8;
    int64_t rax9;
    int64_t rax10;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    __main(rcx, rdx, r8);
    while (1) {
        eax6 = _Z8showmenuv(rcx, rdx, r8, r9_5);
        if (eax6 == 2) {
            puts("Current status of lifts: ", rdx, r8, r9_5);
            text(reinterpret_cast<int64_t>(rbp4) - 80, rdx, r8, r9_5);
        } else {
            if (eax6 == 3) {
                exit(0, rdx, r8, 0, rdx, r8);
                goto addr_0x401c60_6;
            } else {
                if (eax6 != 1) {
                    addr_0x401c60_6:
                    printf("Incorrect choice! try again!", rdx, r8, r9_5);
                } else {
                    puts("Allot lift: ", rdx, r8, r9_5);
                    _Z8validatePiS_Pc(reinterpret_cast<int64_t>(rbp4) - 8, reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffffff4, reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffffff3, r9_5);
                    eax7 = static_cast<uint32_t>(v8);
                    *reinterpret_cast<uint32_t*>(&rdx) = 0xffffffff;
                    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                    *reinterpret_cast<int32_t*>(&r9_5) = static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax7));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_5) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&r8) = -1;
                    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                    _Z9allotliftPiiic(reinterpret_cast<int64_t>(rbp4) - 80, 0xffffffff, 0xffffffff, r9_5);
                }
            }
        }
        puts("\n", rdx, r8, r9_5);
        printf("Press key to continue...", rdx, r8, r9_5);
        rax9 = __iob_func;
        rax10 = reinterpret_cast<int64_t>(rax9("Press key to continue...", rdx, r8, r9_5));
        fflush(rax10, rdx, r8, r9_5);
        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffffd0);
        rcx = reinterpret_cast<void**>(0x4052b7);
        scanf(0x4052b7, rdx, r8, r9_5);
    }
}

int64_t _cexit = 0x9682;

void _cexit() {
    goto _cexit;
}

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    void* f0;
    signed char[7] pad8;
    struct s2* f8;
};

int64_t _amsg_exit = 0x9674;

void _amsg_exit(struct s1* rcx) {
    goto _amsg_exit;
}

int64_t _initterm = 0x96a0;

void _initterm(struct s1* rcx, struct s1* rdx) {
    goto _initterm;
}

/* allotlift(int*, int, int, char) */
void _Z9allotliftPiiic(uint32_t* rcx, uint32_t edx, void** r8, int64_t r9) {
    void* rdx2;
    void* rbp5;
    uint32_t* v6;
    uint32_t v7;
    uint32_t v8;
    int32_t eax9;
    signed char v10;
    int32_t v11;
    uint32_t v12;
    int32_t v13;
    int32_t v14;
    uint32_t eax15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    void** rdx25;

    *reinterpret_cast<uint32_t*>(&rdx2) = edx;
    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v6 = rcx;
    v7 = *reinterpret_cast<uint32_t*>(&rdx2);
    v8 = *reinterpret_cast<uint32_t*>(&r8);
    eax9 = *reinterpret_cast<int32_t*>(&r9);
    v10 = *reinterpret_cast<signed char*>(&eax9);
    v11 = -1;
    v12 = 0;
    while (reinterpret_cast<int32_t>(v12) <= reinterpret_cast<int32_t>(4)) {
        *reinterpret_cast<uint32_t*>(&rdx2) = v12;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp5) + reinterpret_cast<int32_t>(v12) * 4 - 96) = *reinterpret_cast<uint32_t*>(&rdx2);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (reinterpret_cast<int32_t>(v12) + 4) * 4 - 92) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (reinterpret_cast<int32_t>(v12) + 8) * 4 - 88) = 0;
        ++v12;
    }
    while (v11 == -1) {
        v13 = 0;
        while (v13 <= 4) {
            rdx2 = reinterpret_cast<void*>(v13 + 4);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp5) + reinterpret_cast<int64_t>(rdx2) * 4 - 92) = v6[v13];
            ++v13;
        }
        v14 = 0;
        while (v14 <= 4) {
            __asm__("cdq ");
            eax15 = (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v14 + 4) * 4 - 92) - v7 ^ *reinterpret_cast<uint32_t*>(&rdx2)) - *reinterpret_cast<uint32_t*>(&rdx2);
            rdx2 = reinterpret_cast<void*>(v14 + 8);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp5) + reinterpret_cast<int64_t>(rdx2) * 4 - 88) = eax15;
            ++v14;
        }
        v16 = 0;
        while (v16 <= 4) {
            v17 = 0;
            while (v17 <= 3) {
                *reinterpret_cast<uint32_t*>(&rdx2) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp5) + (v16 + 8) * 4 - 88);
                if (reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rdx2)) < reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp5) + (v17 + 8) * 4 - 88))) {
                    v18 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v16 * 4 - 96);
                    v19 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v16 + 4) * 4 - 92);
                    v20 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v16 + 8) * 4 - 88);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v16 * 4 - 96) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v17 * 4 - 96);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v16 + 4) * 4 - 92) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v17 + 4) * 4 - 92);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v16 + 8) * 4 - 88) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v17 + 8) * 4 - 88);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v17 * 4 - 96) = v18;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v17 + 4) * 4 - 92) = v19;
                    rdx2 = reinterpret_cast<void*>(v17 + 8);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + reinterpret_cast<int64_t>(rdx2) * 4 - 88) = v20;
                }
                ++v17;
            }
            ++v16;
        }
        v21 = 0;
        while (v21 <= 4) {
            v22 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v21 * 4 - 96);
            if (v10 != 0x75)
                goto addr_0x4017c5_23;
            rdx2 = reinterpret_cast<void*>(v22 * 4);
            if (reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(v6) + reinterpret_cast<int64_t>(rdx2))) < reinterpret_cast<int32_t>(v7))
                goto addr_0x4017bd_25;
            rdx2 = reinterpret_cast<void*>(v22 * 4);
            if (!*reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(v6) + reinterpret_cast<int64_t>(rdx2)))
                goto addr_0x4017bd_25;
            rdx2 = reinterpret_cast<void*>(v22 * 4);
            if (*reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(v6) + reinterpret_cast<int64_t>(rdx2)) == v7)
                goto addr_0x4017bd_25;
            addr_0x4017c5_23:
            if (v10 != 100)
                goto addr_0x401823_28;
            rdx2 = reinterpret_cast<void*>(v22 * 4);
            if (reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(v6) + reinterpret_cast<int64_t>(rdx2))) > reinterpret_cast<int32_t>(v7))
                goto addr_0x40181b_30;
            rdx2 = reinterpret_cast<void*>(v22 * 4);
            if (!*reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(v6) + reinterpret_cast<int64_t>(rdx2)))
                goto addr_0x40181b_30;
            rdx2 = reinterpret_cast<void*>(v22 * 4);
            if (*reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(v6) + reinterpret_cast<int64_t>(rdx2)) == v7)
                goto addr_0x40181b_30;
            addr_0x401823_28:
            ++v21;
        }
        addr_0x401831_33:
        v23 = 30;
        if (v11 != -1)
            continue;
        v24 = 0;
        while (v24 <= 4) {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v24 + 8) * 4 - 88) < v23) {
                v23 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v24 + 8) * 4 - 88);
                v11 = v24;
            }
            ++v24;
        }
        continue;
        addr_0x4017bd_25:
        v11 = v22;
        goto addr_0x401831_33;
        addr_0x40181b_30:
        v11 = v22;
        goto addr_0x401831_33;
    }
    *reinterpret_cast<int32_t*>(&rdx25) = v11;
    *reinterpret_cast<int32_t*>(&rdx25 + 4) = 0;
    printf("\nThe lift available to you would be: %d\n\n", rdx25, r8, r9);
    v6[v11] = v8;
    return;
}

int64_t printf = 0x971c;

void printf(int64_t rcx, void** rdx, void** r8, int64_t r9) {
    goto printf;
}

/* showmenu() */
int32_t _Z8showmenuv(void** rcx, void** rdx, void** r8, int64_t r9) {
    int32_t v5;

    puts(" -------------------- Lift Program -------------------- ", rdx, r8, r9);
    puts(" There are 5 lifts available for your service. ", rdx, r8, r9);
    puts(" Select 1 if you want to use a lift. ", rdx, r8, r9);
    puts(" Selecting 2 would show, for each of the 5 lifts, ", rdx, r8, r9);
    puts(" the floor no. on which the lift is currently standing. ", rdx, r8, r9);
    puts(" Select 3 to quit the program ", rdx, r8, r9);
    puts(" ------------------------------------------------------ ", rdx, r8, r9);
    puts(" 1. Do you wish to use lift?", rdx, r8, r9);
    puts(" 2. Show status of lift", rdx, r8, r9);
    puts(" 3. Exit", rdx, r8, r9);
    puts(" ------------------------------------------------------ ", rdx, r8, r9);
    scanf(0x4051f7, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xfffffffffffffffc, r8, r9);
    return v5;
}

int64_t puts = 0x9730;

void puts(int64_t rcx, void** rdx, void** r8, int64_t r9) {
    goto puts;
}

int64_t _getch = 0x9696;

void getch(int64_t rcx, void** rdx) {
    goto _getch;
}

int64_t tolower = 0x975e;

void putchar(int64_t rcx, void** rdx);

/* validate(int*, int*, char*) */
void _Z8validatePiS_Pc(int32_t* rcx, void** rdx, void** r8, int64_t r9) {
    void* rbp5;
    int32_t* v6;
    void** v7;
    void** v8;
    int32_t v9;
    int64_t rax10;
    int32_t eax11;
    int64_t rax12;
    int32_t eax13;
    int64_t rax14;
    int64_t rax15;
    int32_t v16;

    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v6 = rcx;
    v7 = rdx;
    v8 = r8;
    v9 = 0;
    while (1) {
        printf("Enter the floor no. where you are standing : ", rdx, r8, r9);
        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff8);
        scanf(0x4051f7, rdx, r8, r9);
        if (1)
            goto addr_0x4019b3_4;
        if (1)
            continue;
        addr_0x4019b3_4:
        puts("\nIncorrect floor no.! Enter floor no. in a range of 0 - 29 \n", rdx, r8, r9);
        getch("\nIncorrect floor no.! Enter floor no. in a range of 0 - 29 \n", rdx);
    }
    while (!v9) {
        while ((rax10 = tolower, eax11 = reinterpret_cast<int32_t>(rax10(0x6a, rdx)), eax11 != 0x75) && (rax12 = tolower, eax13 = reinterpret_cast<int32_t>(rax12(0x6a, rdx)), eax13 != 100)) {
            printf("Do you wish to go up or down (up/down) Press u for up and d for down: ", rdx, r8, r9);
            rax14 = __iob_func;
            rax15 = reinterpret_cast<int64_t>(rax14("Do you wish to go up or down (up/down) Press u for up and d for down: ", rdx));
            fflush(rax15, rdx, r8, r9);
            rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff3);
            scanf(0x4052b7, rdx, r8, r9);
            putchar(10, rdx);
            if (0)
                continue;
            if (0)
                continue;
            puts("Incorrect direction! Enter again", rdx, r8, r9);
        }
        if (1 || 1) {
            v9 = 1;
        } else {
            puts("\nYou are already standing on ground floor.", rdx, r8, r9);
            puts("Cannot go further down.", rdx, r8, r9);
            getch("Cannot go further down.", rdx);
            v9 = 0;
        }
    }
    v16 = 0;
    while (!v16) {
        printf("\nEnter the floor no. where you want to go: ", rdx, r8, r9);
        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff4);
        scanf(0x4051f7, rdx, r8, r9);
        if (!1 && 0 || (1 || ((*reinterpret_cast<int32_t*>(&rdx) = -1, *reinterpret_cast<int32_t*>(&rdx + 4) = 0, 1) || (!0 && (!1 && (*reinterpret_cast<int32_t*>(&rdx) = 0, *reinterpret_cast<int32_t*>(&rdx + 4) = 0, 0)) || !0 && (!1 && (*reinterpret_cast<int32_t*>(&rdx) = -1, *reinterpret_cast<int32_t*>(&rdx + 4) = 0, !1)))))) {
            puts("\nIncorrect floor no. or trying to move to the same ", rdx, r8, r9);
            puts("floor where you are standing, or either the ", rdx, r8, r9);
            puts(" direction given is incorrect or the floor number ", rdx, r8, r9);
            puts(" is incorrect. Try again ", rdx, r8, r9);
            v16 = 0;
        } else {
            v16 = 1;
        }
    }
    *v6 = -1;
    *reinterpret_cast<void***>(v8) = reinterpret_cast<void**>(0x6a);
    *reinterpret_cast<void***>(v7) = reinterpret_cast<void**>(0xffffffff);
    return;
}

struct s3 {
    signed char[96] pad96;
    void* f96;
};

struct s3* __iob_func(struct s1* rcx, struct s1* rdx, void** r8, struct s1* r9, int64_t a5) {
    goto __iob_func;
}

int64_t fprintf = 0x96ec;

void fprintf(struct s1* rcx, int64_t rdx, int64_t r8, int32_t* r9, int64_t a5) {
    goto fprintf;
}

struct s4 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

struct s5 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

/* .refptr.__image_base__ */
struct s5* refptr___image_base__ = reinterpret_cast<struct s5*>(0x400000);

/* .text */
int64_t text(struct s5* rcx);

struct s6 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s4* __mingw_GetSectionForAddress(struct s1* rcx, ...) {
    struct s5* rbx2;
    int64_t rax3;
    void* rdx4;
    struct s6* rcx5;
    void* rax6;
    struct s4* rax7;
    uint32_t ecx8;
    int64_t rcx9;
    struct s4* r9_10;
    void* r8_11;
    void* rcx12;
    void* rcx13;

    rbx2 = refptr___image_base__;
    if (rbx2->f0 != 0x5a4d || (rax3 = text(rbx2), *reinterpret_cast<int32_t*>(&rax3) == 0)) {
        return 0;
    }
    rdx4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx) - reinterpret_cast<int64_t>(rbx2));
    rcx5 = reinterpret_cast<struct s6*>(reinterpret_cast<int64_t>(rbx2) + rbx2->f60);
    *reinterpret_cast<uint32_t*>(&rax6) = static_cast<uint32_t>(rcx5->f20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    rax7 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rcx5) + reinterpret_cast<int64_t>(rax6) + 24);
    ecx8 = static_cast<uint32_t>(rcx5->f6);
    if (ecx8)
        goto addr_0x402c18_5;
    addr_0x402c41_6:
    *reinterpret_cast<int32_t*>(&rax7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    addr_0x402c43_7:
    return rax7;
    addr_0x402c18_5:
    *reinterpret_cast<uint32_t*>(&rcx9) = ecx8 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    r9_10 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rax7) + (rcx9 + rcx9 * 4) * 8 + 40);
    do {
        *reinterpret_cast<int32_t*>(&r8_11) = rax7->f12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = 0;
        rcx12 = r8_11;
        if (reinterpret_cast<uint64_t>(r8_11) > reinterpret_cast<uint64_t>(rdx4))
            continue;
        *reinterpret_cast<int32_t*>(&rcx13) = *reinterpret_cast<int32_t*>(&rcx12) + rax7->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
        if (reinterpret_cast<uint64_t>(rdx4) < reinterpret_cast<uint64_t>(rcx13))
            goto addr_0x402c43_7;
        rax7 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rax7) + 40);
    } while (rax7 != r9_10);
    goto addr_0x402c41_6;
}

struct s5* _GetPEImageBase(struct s1* rcx, ...) {
    struct s5* rsi2;
    struct s5* rbx3;
    int64_t rax4;

    rsi2 = refptr___image_base__;
    *reinterpret_cast<int32_t*>(&rbx3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx3) + 4) = 0;
    if (rsi2->f0 == 0x5a4d) {
        rax4 = text(rsi2);
        if (*reinterpret_cast<int32_t*>(&rax4)) {
            rbx3 = rsi2;
        }
        return rbx3;
    } else {
        return 0;
    }
}

int32_t maxSections;

struct s7 {
    void* f0;
    signed char[7] pad8;
    struct s1* f8;
};

struct s7* the_secs;

struct s9 {
    signed char[8] pad8;
    int32_t f8;
};

struct s8 {
    struct s1* f0;
    struct s9* f8;
};

/* .text */
void*** text(struct s1* rcx, struct s1* rdx, void** r8, struct s1* r9);

struct s10 {
    void* f0;
    signed char[7] pad8;
    int64_t f8;
    struct s4* f16;
};

int64_t VirtualQuery = 0x95d4;

int64_t VirtualProtect = 0x95c2;

int64_t GetLastError = 0x946c;

/* .bss */
int32_t bss;

uint32_t __mingw_GetSectionCount(struct s1* rcx, struct s1* rdx, void** r8, ...);

int64_t ___chkstk_ms(struct s1* rcx, struct s1* rdx, void** r8, ...);

struct s11 {
    int32_t f0;
    int32_t f4;
    unsigned char f8;
};

/* .refptr.__RUNTIME_PSEUDO_RELOC_LIST_END__ */
struct s11* refptr___RUNTIME_PSEUDO_RELOC_LIST_END__ = reinterpret_cast<struct s11*>(0x405c40);

/* .refptr.__RUNTIME_PSEUDO_RELOC_LIST__ */
struct s11* refptr___RUNTIME_PSEUDO_RELOC_LIST__ = reinterpret_cast<struct s11*>(0x405c40);

struct s12 {
    signed char[32] pad32;
    void* f32;
};

struct s13 {
    signed char[40] pad40;
    int64_t f40;
};

void* g405660 = reinterpret_cast<void*>(32);

int64_t signal(int64_t rcx, ...);

struct s14 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s16 {
    signed char[8] pad8;
    unsigned char f8;
};

struct s15 {
    signed char[8] pad8;
    void** f8;
    signed char[7] pad16;
    struct s16* f16;
};

/* .text */
void text(int64_t rcx, void** rdx, ...);

/* __write_memory.part.0 */
void __write_memory_part_0(struct s1* rcx, void* rdx, void** r8, ...) {
    void* rsp4;
    void* rbp5;
    struct s1* rbx6;
    struct s7* rax7;
    struct s1* r9_8;
    struct s8* rax9;
    void* r11_10;
    struct s4* rax11;
    void* rsp12;
    struct s10* r13_13;
    struct s5* rax14;
    void* rsp15;
    int64_t rdx16;
    struct s7* rax17;
    int64_t rcx18;
    int64_t rax19;
    struct s7* rax20;
    struct s1* rdx21;
    int64_t rax22;
    int32_t v23;
    int64_t v24;
    int64_t v25;
    int32_t eax26;
    int32_t eax27;
    struct s1* rdx28;
    void* rsp29;
    void* rbp30;
    int32_t ebx31;
    int64_t rax32;
    struct s11* rsi33;
    struct s11* rbx34;
    struct s12* rsp35;
    uint64_t rax36;
    struct s1* rdx37;
    int64_t* rsp38;
    struct s13* rsp39;
    void* eax40;
    int64_t* rsp41;
    int64_t rax42;
    struct s13* rsp43;
    int64_t rdx44;
    int64_t* rsp45;
    int64_t* rsp46;
    int64_t* rsp47;
    int64_t rax48;
    struct s13* rsp49;
    int64_t* rsp50;
    int64_t* rsp51;
    int64_t* rsp52;
    int64_t rax53;
    struct s11* rbx54;
    struct s5* r12_55;
    void* r13_56;
    void* rcx57;
    void* rax58;
    struct s1* rdx59;
    void*** rax60;
    struct s1* rcx61;
    void** r8_62;
    void* rdx63;
    void* rdi64;
    void* v65;
    int64_t* rsp66;
    int64_t* rsp67;
    void* rdx68;
    int64_t* rsp69;
    void* rdx70;
    int64_t* rsp71;
    int64_t* rsp72;
    struct s5* r12_73;
    void* rcx74;
    struct s1* rcx75;
    int64_t* rsp76;
    int32_t eax77;
    void* rbx78;
    int32_t esi79;
    int64_t v80;
    int64_t r14_81;
    struct s1* r13_82;
    int64_t r12_83;
    struct s14* rax84;
    int64_t rcx85;
    int64_t* rsp86;
    int64_t rax87;
    struct s12* rsp88;
    struct s7* rax89;
    int64_t r8_90;
    int64_t* rsp91;
    int64_t v92;
    int1_t less93;
    struct s15* rbx94;
    int64_t* rsp95;
    int64_t* rsp96;
    int64_t* rsp97;
    int64_t* rsp98;
    int64_t rax99;
    int64_t* rsp100;
    int64_t* rsp101;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 88);
    rbp5 = reinterpret_cast<void*>(static_cast<int64_t>(maxSections));
    rbx6 = rcx;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&rbp5)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbp5) == 0)) {
        *reinterpret_cast<unsigned char*>(&rbp5) = reinterpret_cast<unsigned char>(0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = 0;
    } else {
        rax7 = the_secs;
        *reinterpret_cast<unsigned char*>(&r9_8) = reinterpret_cast<unsigned char>(0);
        rax9 = reinterpret_cast<struct s8*>(&rax7->f8);
        do {
            if (reinterpret_cast<uint64_t>(rbx6) < reinterpret_cast<uint64_t>(rax9->f0))
                continue;
            *reinterpret_cast<int32_t*>(&r11_10) = rax9->f8->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_10) + 4) = 0;
            if (reinterpret_cast<uint64_t>(rbx6) < reinterpret_cast<uint64_t>(rax9->f0) + reinterpret_cast<int64_t>(r11_10))
                goto addr_0x401fb0_6;
            *reinterpret_cast<unsigned char*>(&r9_8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_8) + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
            rax9 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rax9) + 24);
        } while (*reinterpret_cast<unsigned char*>(&r9_8) != *reinterpret_cast<unsigned char*>(&rbp5));
    }
    rax11 = __mingw_GetSectionForAddress(rbx6);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    if (!rax11) {
        addr_0x402002_9:
        text(0x4055e0, rbx6, r8, r9_8);
    } else {
        rbp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbp5) + reinterpret_cast<uint64_t>(rbp5) * 2 << 3);
        r13_13 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rbp5) + reinterpret_cast<uint64_t>(the_secs));
        r13_13->f16 = rax11;
        r13_13->f0 = reinterpret_cast<void*>(0);
        rax14 = _GetPEImageBase(rbx6);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
        *reinterpret_cast<int32_t*>(&rdx16) = rax11->f12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        r13_13->f8 = reinterpret_cast<int64_t>(rax14) + rdx16;
        rax17 = the_secs;
        rcx18 = *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rax17) + reinterpret_cast<uint64_t>(rbp5) + 8);
        rax19 = reinterpret_cast<int64_t>(VirtualQuery(rcx18, reinterpret_cast<int64_t>(rsp15) + 32, 48));
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
        if (!rax19) {
            addr_0x401fe5_11:
            rax20 = the_secs;
            *reinterpret_cast<int32_t*>(&rdx21) = rax11->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
            r8 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax20) + reinterpret_cast<uint64_t>(rbp5) + 8);
            text(0x405600, rdx21, r8, r9_8);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            goto addr_0x402002_9;
        } else {
            *reinterpret_cast<int32_t*>(&rax22) = v23;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
            if (!(static_cast<uint32_t>(rax22 - 4) & 0xfffffffb) || (!(reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax22) - 64) & 0xffffffbf) || (r9_8 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rbp5) + reinterpret_cast<uint64_t>(the_secs)), eax26 = reinterpret_cast<int32_t>(VirtualProtect(v24, v25, 64)), rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8), !!eax26))) {
                ++maxSections;
                goto addr_0x401fb0_6;
            } else {
                eax27 = reinterpret_cast<int32_t>(GetLastError(v24, v25, 64));
                *reinterpret_cast<int32_t*>(&rdx28) = eax27;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = 0;
                text(0x405638, rdx28, 64, r9_8);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8);
                goto addr_0x401fe5_11;
            }
        }
    }
    rsp29 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    rbp30 = rsp29;
    ebx31 = bss;
    if (ebx31)
        goto addr_0x40203b_16;
    bss = 1;
    __mingw_GetSectionCount(0x4055e0, rbx6, r8);
    rax32 = ___chkstk_ms(0x4055e0, rbx6, r8);
    rsi33 = refptr___RUNTIME_PSEUDO_RELOC_LIST_END__;
    rbx34 = refptr___RUNTIME_PSEUDO_RELOC_LIST__;
    rsp35 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsp29) - 96 - 8 + 8 - 8 + 8 - rax32);
    maxSections = 0;
    the_secs = reinterpret_cast<struct s7*>(&rsp35->f32);
    rax36 = reinterpret_cast<uint64_t>(rsi33) - reinterpret_cast<uint64_t>(rbx34);
    if (reinterpret_cast<int64_t>(rax36) <= reinterpret_cast<int64_t>(7))
        goto addr_0x40203b_16;
    if (reinterpret_cast<int64_t>(rax36) > reinterpret_cast<int64_t>(11)) {
        if (rbx34->f0)
            goto addr_0x402200_20;
        if (rbx34->f4)
            goto addr_0x402200_20;
        *reinterpret_cast<unsigned char*>(&r9_8) = rbx34->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&r9_8))
            goto addr_0x4020ec_23;
        rbx34 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rbx34) + 12);
    }
    *reinterpret_cast<int32_t*>(&r8) = rbx34->f0;
    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r8) || rbx34->f4) {
        addr_0x402200_20:
        if (reinterpret_cast<uint64_t>(rbx34) >= reinterpret_cast<uint64_t>(rsi33))
            goto addr_0x40203b_16;
    } else {
        addr_0x4020ec_23:
        *reinterpret_cast<unsigned char*>(&rdx37) = rbx34->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&rdx37) != 1) {
            addr_0x40230c_26:
            rsp38 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp35) - 8);
            *rsp38 = 0x402318;
            text(0x405660, rdx37, r8, r9_8);
            rsp39 = reinterpret_cast<struct s13*>(rsp38 + 1 - 5);
            eax40 = g405660;
            if (reinterpret_cast<unsigned char>(eax40) > reinterpret_cast<unsigned char>(0xc0000091)) {
                if (eax40 == 0xc0000094) {
                    rsp41 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp39) - 8);
                    *rsp41 = 0x40246c;
                    rax42 = signal(8);
                    rsp43 = reinterpret_cast<struct s13*>(rsp41 + 1);
                    rdx44 = rax42;
                    if (rax42 != 1) {
                        addr_0x4023c4_29:
                        if (rdx44) {
                            rsp45 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp43) - 8);
                            *rsp45 = 0x4023d5;
                            rdx44(8);
                            goto (rsp45 + 1)[5];
                        }
                    } else {
                        rsp46 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp43) - 8);
                        *rsp46 = 0x402488;
                        signal(8, 8);
                        rsp43 = reinterpret_cast<struct s13*>(rsp46 + 1);
                        goto addr_0x402383_32;
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(eax40) > reinterpret_cast<unsigned char>(0xc0000094)) {
                        if (eax40 == 0xc0000095) {
                            addr_0x402450_35:
                            goto rsp39->f40;
                        } else {
                            if (!reinterpret_cast<int1_t>(eax40 == 0xc0000096)) {
                                addr_0x40242e_37:
                                goto rsp39->f40;
                            } else {
                                addr_0x4023ee_38:
                                rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp39) - 8);
                                *rsp47 = 0x4023fa;
                                rax48 = signal(4);
                                rsp49 = reinterpret_cast<struct s13*>(rsp47 + 1);
                                if (rax48 == 1) {
                                    rsp50 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp49) - 8);
                                    *rsp50 = 0x4024a9;
                                    signal(4, 4);
                                    rsp43 = reinterpret_cast<struct s13*>(rsp50 + 1);
                                    goto addr_0x402383_32;
                                } else {
                                    if (!rax48) {
                                        addr_0x402490_41:
                                        goto rsp49->f40;
                                    } else {
                                        rsp51 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp49) - 8);
                                        *rsp51 = 0x402414;
                                        rax48(4);
                                        rsp43 = reinterpret_cast<struct s13*>(rsp51 + 1);
                                        goto addr_0x402383_32;
                                    }
                                }
                            }
                        }
                    } else {
                        if (eax40 == 0xc0000092)
                            goto addr_0x402450_35;
                        if (!reinterpret_cast<int1_t>(eax40 == 0xc0000093))
                            goto addr_0x40242e_37; else
                            goto addr_0x4023af_45;
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(eax40) >= reinterpret_cast<unsigned char>(0xc000008d)) {
                    addr_0x4023af_45:
                    rsp52 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp39) - 8);
                    *rsp52 = 0x4023bb;
                    rax53 = signal(8);
                    rsp43 = reinterpret_cast<struct s13*>(rsp52 + 1);
                    rdx44 = rax53;
                    if (rax53 == 1)
                        goto addr_0x402438_47; else
                        goto addr_0x4023c4_29;
                } else {
                    if (eax40 == 0xc0000008)
                        goto addr_0x402450_35;
                    if (reinterpret_cast<unsigned char>(eax40) > reinterpret_cast<unsigned char>(0xc0000008))
                        goto addr_0x402420_50; else
                        goto addr_0x402345_51;
                }
            }
        } else {
            rbx54 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rbx34) + 12);
            if (reinterpret_cast<uint64_t>(rbx54) >= reinterpret_cast<uint64_t>(rsi33))
                goto addr_0x40203b_16;
            r12_55 = refptr___image_base__;
            r13_56 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp30) - 48);
            do {
                *reinterpret_cast<int32_t*>(&rcx57) = rbx54->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx57) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rax58) = rbx54->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax58) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx59) = static_cast<uint32_t>(rbx54->f8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx59) + 4) = 0;
                rax60 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rax58) + reinterpret_cast<int64_t>(r12_55));
                rcx61 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx57) + reinterpret_cast<int64_t>(r12_55));
                r8_62 = *rax60;
                if (*reinterpret_cast<uint32_t*>(&rdx59) == 16) {
                    *reinterpret_cast<uint32_t*>(&rdx63) = static_cast<uint32_t>(reinterpret_cast<uint16_t>(rcx61->f0));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx63) + 4) = 0;
                    rdi64 = r13_56;
                    if (*reinterpret_cast<int16_t*>(&rdx63) < 0) {
                        rdx63 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx63) | 0xffffffffffff0000);
                    }
                    v65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_62) + (reinterpret_cast<uint64_t>(rdx63) - reinterpret_cast<uint64_t>(rax60)));
                    rsp66 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp35) - 8);
                    *rsp66 = 0x4022a6;
                    __write_memory_part_0(rcx61, r13_56, 2);
                    rsp35 = reinterpret_cast<struct s12*>(rsp66 + 1);
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx59) <= 16) {
                        if (*reinterpret_cast<uint32_t*>(&rdx59) != 8) {
                            addr_0x4022ab_60:
                            rcx61 = reinterpret_cast<struct s1*>(0x405698);
                            rsp67 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp35) - 8);
                            *rsp67 = 0x4022bf;
                            rax60 = text(0x405698, rdx59, r8_62, r9_8);
                            rsp35 = reinterpret_cast<struct s12*>(rsp67 + 1);
                            goto addr_0x4022bf_61;
                        } else {
                            *reinterpret_cast<uint32_t*>(&rdx68) = static_cast<uint32_t>(reinterpret_cast<unsigned char>(rcx61->f0));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx68) + 4) = 0;
                            rdi64 = r13_56;
                            if (*reinterpret_cast<signed char*>(&rdx68) < 0) {
                                rdx68 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx68) | 0xffffffffffffff00);
                            }
                            v65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_62) + (reinterpret_cast<uint64_t>(rdx68) - reinterpret_cast<uint64_t>(rax60)));
                            rsp69 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp35) - 8);
                            *rsp69 = 0x402271;
                            __write_memory_part_0(rcx61, r13_56, 1);
                            rsp35 = reinterpret_cast<struct s12*>(rsp69 + 1);
                            continue;
                        }
                    } else {
                        if (*reinterpret_cast<uint32_t*>(&rdx59) == 32) {
                            addr_0x4022bf_61:
                            *reinterpret_cast<void**>(&rdx70) = rcx61->f0;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx70) + 4) = 0;
                            rdi64 = r13_56;
                            if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&rdx70)) < reinterpret_cast<signed char>(0)) {
                                rdx70 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx70) | 0xffffffff00000000);
                            }
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx59) != 64)
                                goto addr_0x4022ab_60;
                            rdi64 = r13_56;
                            v65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_62) - reinterpret_cast<uint64_t>(rax60) + reinterpret_cast<unsigned char>(rcx61->f0));
                            rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp35) - 8);
                            *rsp71 = 0x40216b;
                            __write_memory_part_0(rcx61, r13_56, 8);
                            rsp35 = reinterpret_cast<struct s12*>(rsp71 + 1);
                            continue;
                        }
                    }
                }
                v65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_62) + (reinterpret_cast<uint64_t>(rdx70) - reinterpret_cast<uint64_t>(rax60)));
                rsp72 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp35) - 8);
                *rsp72 = 0x4022e9;
                __write_memory_part_0(rcx61, r13_56, 4);
                rsp35 = reinterpret_cast<struct s12*>(rsp72 + 1);
                rbx54 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rbx54) + 12);
            } while (reinterpret_cast<uint64_t>(rbx54) < reinterpret_cast<uint64_t>(rsi33));
            goto addr_0x402174_71;
        }
    }
    r12_73 = refptr___image_base__;
    rdi64 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp30) - 48);
    do {
        *reinterpret_cast<int32_t*>(&rcx74) = rbx34->f4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx74) + 4) = 0;
        rbx34 = reinterpret_cast<struct s11*>(&rbx34->f8);
        rcx75 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx74) + reinterpret_cast<int64_t>(r12_73));
        *reinterpret_cast<uint32_t*>(&v65) = rbx34->f0 + reinterpret_cast<unsigned char>(rcx75->f0);
        rsp76 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp35) - 8);
        *rsp76 = 0x402233;
        __write_memory_part_0(rcx75, rdi64, 4);
        rsp35 = reinterpret_cast<struct s12*>(rsp76 + 1);
    } while (reinterpret_cast<uint64_t>(rbx34) < reinterpret_cast<uint64_t>(rsi33));
    addr_0x402174_71:
    eax77 = maxSections;
    *reinterpret_cast<int32_t*>(&rbx78) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx78) + 4) = 0;
    esi79 = 0;
    if (reinterpret_cast<uint1_t>(eax77 < 0) | reinterpret_cast<uint1_t>(eax77 == 0)) {
        addr_0x40203b_16:
        goto v80;
    } else {
        r14_81 = VirtualQuery;
        r13_82 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbp30) - 52);
        r12_83 = VirtualProtect;
        do {
            rax84 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rbx78) + reinterpret_cast<uint64_t>(the_secs));
            if (rax84->f0) {
                rcx85 = rax84->f8;
                rsp86 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp35) - 8);
                *rsp86 = 0x4021d3;
                rax87 = reinterpret_cast<int64_t>(r14_81(rcx85, rdi64, 48, r9_8));
                rsp88 = reinterpret_cast<struct s12*>(rsp86 + 1);
                if (!rax87)
                    break;
                rax89 = the_secs;
                r9_8 = r13_82;
                *reinterpret_cast<int32_t*>(&r8_90) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax89) + reinterpret_cast<int64_t>(rbx78));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_90) + 4) = 0;
                rsp91 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp88) - 8);
                *rsp91 = 0x4021f5;
                r12_83(v65, v92, r8_90, r9_8);
                rsp35 = reinterpret_cast<struct s12*>(rsp91 + 1);
            }
            ++esi79;
            rbx78 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx78) + 24);
            less93 = esi79 < maxSections;
        } while (less93);
        goto addr_0x40203b_16;
    }
    rbx94 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rbx78) + reinterpret_cast<uint64_t>(the_secs));
    r8 = rbx94->f8;
    *reinterpret_cast<unsigned char*>(&rdx37) = rbx94->f16->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = 0;
    rsp95 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp88) - 8);
    *rsp95 = 0x40230c;
    text(0x405600, rdx37, r8, r9_8);
    rsp35 = reinterpret_cast<struct s12*>(rsp95 + 1);
    goto addr_0x40230c_26;
    addr_0x402383_32:
    goto rsp43->f40;
    addr_0x402438_47:
    rsp96 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp43) - 8);
    *rsp96 = 0x402447;
    signal(8, 8);
    rsp97 = rsp96 + 1 - 1;
    *rsp97 = 0x40244c;
    text(8, 1, 8, 1);
    rsp39 = reinterpret_cast<struct s13*>(rsp97 + 1);
    goto addr_0x402450_35;
    addr_0x402420_50:
    if (eax40 == 0xc000001d)
        goto addr_0x4023ee_38;
    if (eax40 == 0xc000008c)
        goto addr_0x402450_35; else
        goto addr_0x40242e_37;
    addr_0x402345_51:
    if (eax40 == 0x80000002)
        goto addr_0x402450_35;
    if (!reinterpret_cast<int1_t>(eax40 == 0xc0000005))
        goto addr_0x40242e_37;
    rsp98 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp39) - 8);
    *rsp98 = 0x402367;
    rax99 = signal(11);
    rsp49 = reinterpret_cast<struct s13*>(rsp98 + 1);
    if (rax99 == 1) {
        rsp100 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp49) - 8);
        *rsp100 = 0x4024bf;
        signal(11, 11);
        rsp43 = reinterpret_cast<struct s13*>(rsp100 + 1);
        goto addr_0x402383_32;
    } else {
        if (!rax99)
            goto addr_0x402490_41;
        rsp101 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp49) - 8);
        *rsp101 = 0x402381;
        rax99(11);
        rsp43 = reinterpret_cast<struct s13*>(rsp101 + 1);
        goto addr_0x402383_32;
    }
    addr_0x401fb0_6:
    goto memcpy;
}

int64_t signal = 0x9740;

int64_t signal(int64_t rcx, ...) {
    goto signal;
}

struct s17 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

int32_t strncmp(signed char rcx, void** rdx, int64_t r8);

signed char _FindPESectionByName(void** rcx, void** rdx, void** r8) {
    void** rsi4;
    struct s0* rax5;
    struct s5* rbx6;
    int64_t rax7;
    struct s17* rdx8;
    int64_t rax9;
    signed char rbx10;
    uint32_t edx11;
    int64_t rdx12;
    signed char rdi13;
    int32_t eax14;

    rsi4 = rcx;
    rax5 = strlen(rcx, rdx, r8);
    if (reinterpret_cast<uint64_t>(rax5) > 8) {
        addr_0x402c80_2:
        return 0;
    } else {
        rbx6 = refptr___image_base__;
        if (rbx6->f0 != 0x5a4d || ((rax7 = text(rbx6), *reinterpret_cast<int32_t*>(&rax7) == 0) || (rdx8 = reinterpret_cast<struct s17*>(rbx6->f60 + reinterpret_cast<int64_t>(rbx6)), *reinterpret_cast<uint32_t*>(&rax9) = static_cast<uint32_t>(rdx8->f20), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0, rbx10 = reinterpret_cast<signed char>(reinterpret_cast<int64_t>(rdx8) + rax9 + 24), edx11 = static_cast<uint32_t>(rdx8->f6), edx11 == 0))) {
            return 0;
        }
        *reinterpret_cast<uint32_t*>(&rdx12) = edx11 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
        rdi13 = reinterpret_cast<signed char>(rbx10 + (rdx12 + rdx12 * 4) * 8 + 40);
        do {
            eax14 = strncmp(rbx10, rsi4, 8);
            if (!eax14)
                break;
            rbx10 = reinterpret_cast<signed char>(rbx10 + 40);
        } while (rbx10 != rdi13);
        goto addr_0x402c80_2;
    }
    return rbx10;
}

struct s18 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    signed char[23] pad39;
    unsigned char f39;
};

struct s19 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s18* _FindPESectionExec(int64_t rcx) {
    struct s5* rsi2;
    int64_t rbx3;
    int64_t rax4;
    struct s19* rsi5;
    uint32_t ecx6;
    void* rax7;
    struct s18* rdx8;
    int64_t rcx9;
    struct s18* rax10;

    rsi2 = refptr___image_base__;
    rbx3 = rcx;
    if (rsi2->f0 != 0x5a4d || ((rax4 = text(rsi2), *reinterpret_cast<int32_t*>(&rax4) == 0) || (rsi5 = reinterpret_cast<struct s19*>(reinterpret_cast<int64_t>(rsi2) + rsi2->f60), ecx6 = static_cast<uint32_t>(rsi5->f6), *reinterpret_cast<uint32_t*>(&rax7) = static_cast<uint32_t>(rsi5->f20), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0, rdx8 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(rsi5) + reinterpret_cast<int64_t>(rax7) + 24), ecx6 == 0))) {
        return 0;
    }
    *reinterpret_cast<uint32_t*>(&rcx9) = ecx6 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    rax10 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(rdx8) + (rcx9 + rcx9 * 4) * 8 + 40);
    do {
        if (rdx8->f39 & 32) {
            if (!rbx3)
                goto addr_0x402e00_6;
            --rbx3;
        }
        ++rdx8;
    } while (rdx8 != rax10);
    return 0;
    addr_0x402e00_6:
    return rdx8;
}

/* .text */
void text(int64_t rcx, void** rdx, ...) {
    __asm__("fninit ");
    return;
}

int64_t abort = 0x96c8;

void abort(struct s1* rcx, struct s1* rdx, void** r8, struct s1* r9) {
    goto abort;
}

int64_t _lock = 0x96ac;

void _lock(int64_t rcx) {
    goto _lock;
}

/* .text */
int64_t text(int64_t rcx) {
    return rcx;
}

int64_t __dllonexit = 0x95fc;

int64_t __dllonexit(int64_t rcx, void* rdx, void* r8) {
    goto __dllonexit;
}

int64_t _unlock = 0x96be;

void _unlock(int64_t rcx, void* rdx, void* r8) {
    goto _unlock;
}

int64_t strncmp = 0x9754;

int32_t strncmp(signed char rcx, void** rdx, int64_t r8) {
    goto strncmp;
}

struct s20 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    signed char[20] pad36;
    int32_t f36;
};

struct s21 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s20* _FindPESection(struct s5* rcx, uint64_t rdx) {
    struct s21* rcx3;
    void* rax4;
    struct s20* rax5;
    uint32_t ecx6;
    int64_t rcx7;
    struct s20* r9_8;
    uint64_t r8_9;
    uint64_t rcx10;
    uint64_t rcx11;

    rcx3 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rcx) + rcx->f60);
    *reinterpret_cast<uint32_t*>(&rax4) = static_cast<uint32_t>(rcx3->f20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    rax5 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rcx3) + reinterpret_cast<int64_t>(rax4) + 24);
    ecx6 = static_cast<uint32_t>(rcx3->f6);
    if (!ecx6) {
        addr_0x402c41_2:
        *reinterpret_cast<int32_t*>(&rax5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx7) = ecx6 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        r9_8 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rax5) + (rcx7 + rcx7 * 4) * 8 + 40);
        do {
            *reinterpret_cast<int32_t*>(&r8_9) = rax5->f12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
            rcx10 = r8_9;
            if (r8_9 > rdx)
                continue;
            *reinterpret_cast<int32_t*>(&rcx11) = *reinterpret_cast<int32_t*>(&rcx10) + rax5->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
            if (rdx < rcx11)
                break;
            ++rax5;
        } while (rax5 != r9_8);
        goto addr_0x402c41_2;
    }
    return rax5;
}

/* .bss */
int64_t bss;

int64_t __setusermatherr = 0x9656;

void __mingw_setusermatherr(int64_t rcx) {
    bss = rcx;
    goto __setusermatherr;
}

int64_t __getmainargs = 0x960a;

int32_t __getmainargs(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    goto __getmainargs;
}

struct s22 {
    signed char[32] pad32;
    void* f32;
};

struct s23 {
    signed char[40] pad40;
    int64_t f40;
};

struct s24 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s26 {
    signed char[8] pad8;
    unsigned char f8;
};

struct s25 {
    signed char[8] pad8;
    void** f8;
    signed char[7] pad16;
    struct s26* f16;
};

void _pei386_runtime_relocator(struct s1* rcx, struct s1* rdx, void** r8) {
    void* rsp4;
    void* rbp5;
    int32_t ebx6;
    int64_t rax7;
    struct s11* rsi8;
    struct s11* rbx9;
    struct s22* rsp10;
    uint64_t rax11;
    struct s1* r9_12;
    struct s1* rdx13;
    int64_t* rsp14;
    struct s23* rsp15;
    void* eax16;
    int64_t* rsp17;
    int64_t rax18;
    struct s23* rsp19;
    int64_t rdx20;
    int64_t* rsp21;
    int64_t* rsp22;
    int64_t* rsp23;
    int64_t rax24;
    struct s23* rsp25;
    int64_t* rsp26;
    int64_t* rsp27;
    int64_t* rsp28;
    int64_t rax29;
    struct s11* rbx30;
    struct s5* r12_31;
    void* r13_32;
    void* rcx33;
    void* rax34;
    struct s1* rdx35;
    void*** rax36;
    struct s1* rcx37;
    void** r8_38;
    void* rdx39;
    void* rdi40;
    void* v41;
    int64_t* rsp42;
    int64_t* rsp43;
    void* rdx44;
    int64_t* rsp45;
    void* rdx46;
    int64_t* rsp47;
    int64_t* rsp48;
    struct s5* r12_49;
    void* rcx50;
    struct s1* rcx51;
    int64_t* rsp52;
    int32_t eax53;
    void* rbx54;
    int32_t esi55;
    int64_t r14_56;
    struct s1* r13_57;
    int64_t r12_58;
    struct s24* rax59;
    int64_t rcx60;
    int64_t* rsp61;
    int64_t rax62;
    struct s22* rsp63;
    struct s7* rax64;
    int64_t r8_65;
    int64_t* rsp66;
    int64_t v67;
    int1_t less68;
    struct s25* rbx69;
    int64_t* rsp70;
    int64_t* rsp71;
    int64_t* rsp72;
    int64_t* rsp73;
    int64_t rax74;
    int64_t* rsp75;
    int64_t* rsp76;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    rbp5 = rsp4;
    ebx6 = bss;
    if (ebx6)
        goto addr_0x40203b_2;
    bss = 1;
    __mingw_GetSectionCount(rcx, rdx, r8);
    rax7 = ___chkstk_ms(rcx, rdx, r8);
    rsi8 = refptr___RUNTIME_PSEUDO_RELOC_LIST_END__;
    rbx9 = refptr___RUNTIME_PSEUDO_RELOC_LIST__;
    rsp10 = reinterpret_cast<struct s22*>(reinterpret_cast<int64_t>(rsp4) - 96 - 8 + 8 - 8 + 8 - rax7);
    maxSections = 0;
    the_secs = reinterpret_cast<struct s7*>(&rsp10->f32);
    rax11 = reinterpret_cast<uint64_t>(rsi8) - reinterpret_cast<uint64_t>(rbx9);
    if (reinterpret_cast<int64_t>(rax11) <= reinterpret_cast<int64_t>(7))
        goto addr_0x40203b_2;
    if (reinterpret_cast<int64_t>(rax11) > reinterpret_cast<int64_t>(11)) {
        if (rbx9->f0)
            goto addr_0x402200_6;
        if (rbx9->f4)
            goto addr_0x402200_6;
        *reinterpret_cast<unsigned char*>(&r9_12) = rbx9->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_12) + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&r9_12))
            goto addr_0x4020ec_9;
        rbx9 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rbx9) + 12);
    }
    *reinterpret_cast<int32_t*>(&r8) = rbx9->f0;
    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r8) || rbx9->f4) {
        addr_0x402200_6:
        if (reinterpret_cast<uint64_t>(rbx9) >= reinterpret_cast<uint64_t>(rsi8))
            goto addr_0x40203b_2;
    } else {
        addr_0x4020ec_9:
        *reinterpret_cast<unsigned char*>(&rdx13) = rbx9->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&rdx13) != 1) {
            addr_0x40230c_12:
            rsp14 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp10) - 8);
            *rsp14 = 0x402318;
            text(0x405660, rdx13, r8, r9_12);
            rsp15 = reinterpret_cast<struct s23*>(rsp14 + 1 - 5);
            eax16 = g405660;
            if (reinterpret_cast<unsigned char>(eax16) > reinterpret_cast<unsigned char>(0xc0000091)) {
                if (eax16 == 0xc0000094) {
                    rsp17 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp17 = 0x40246c;
                    rax18 = signal(8);
                    rsp19 = reinterpret_cast<struct s23*>(rsp17 + 1);
                    rdx20 = rax18;
                    if (rax18 != 1) {
                        addr_0x4023c4_15:
                        if (rdx20) {
                            rsp21 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8);
                            *rsp21 = 0x4023d5;
                            rdx20(8);
                            goto (rsp21 + 1)[5];
                        }
                    } else {
                        rsp22 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8);
                        *rsp22 = 0x402488;
                        signal(8, 8);
                        rsp19 = reinterpret_cast<struct s23*>(rsp22 + 1);
                        goto addr_0x402383_18;
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(eax16) > reinterpret_cast<unsigned char>(0xc0000094)) {
                        if (eax16 == 0xc0000095) {
                            addr_0x402450_21:
                            goto rsp15->f40;
                        } else {
                            if (!reinterpret_cast<int1_t>(eax16 == 0xc0000096)) {
                                addr_0x40242e_23:
                                goto rsp15->f40;
                            } else {
                                addr_0x4023ee_24:
                                rsp23 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                                *rsp23 = 0x4023fa;
                                rax24 = signal(4);
                                rsp25 = reinterpret_cast<struct s23*>(rsp23 + 1);
                                if (rax24 == 1) {
                                    rsp26 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp25) - 8);
                                    *rsp26 = 0x4024a9;
                                    signal(4, 4);
                                    rsp19 = reinterpret_cast<struct s23*>(rsp26 + 1);
                                    goto addr_0x402383_18;
                                } else {
                                    if (!rax24) {
                                        addr_0x402490_27:
                                        goto rsp25->f40;
                                    } else {
                                        rsp27 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp25) - 8);
                                        *rsp27 = 0x402414;
                                        rax24(4);
                                        rsp19 = reinterpret_cast<struct s23*>(rsp27 + 1);
                                        goto addr_0x402383_18;
                                    }
                                }
                            }
                        }
                    } else {
                        if (eax16 == 0xc0000092)
                            goto addr_0x402450_21;
                        if (!reinterpret_cast<int1_t>(eax16 == 0xc0000093))
                            goto addr_0x40242e_23; else
                            goto addr_0x4023af_31;
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(eax16) >= reinterpret_cast<unsigned char>(0xc000008d)) {
                    addr_0x4023af_31:
                    rsp28 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp28 = 0x4023bb;
                    rax29 = signal(8);
                    rsp19 = reinterpret_cast<struct s23*>(rsp28 + 1);
                    rdx20 = rax29;
                    if (rax29 == 1)
                        goto addr_0x402438_33; else
                        goto addr_0x4023c4_15;
                } else {
                    if (eax16 == 0xc0000008)
                        goto addr_0x402450_21;
                    if (reinterpret_cast<unsigned char>(eax16) > reinterpret_cast<unsigned char>(0xc0000008))
                        goto addr_0x402420_36; else
                        goto addr_0x402345_37;
                }
            }
        } else {
            rbx30 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rbx9) + 12);
            if (reinterpret_cast<uint64_t>(rbx30) >= reinterpret_cast<uint64_t>(rsi8))
                goto addr_0x40203b_2;
            r12_31 = refptr___image_base__;
            r13_32 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 48);
            do {
                *reinterpret_cast<int32_t*>(&rcx33) = rbx30->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rax34) = rbx30->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx35) = static_cast<uint32_t>(rbx30->f8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = 0;
                rax36 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rax34) + reinterpret_cast<int64_t>(r12_31));
                rcx37 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx33) + reinterpret_cast<int64_t>(r12_31));
                r8_38 = *rax36;
                if (*reinterpret_cast<uint32_t*>(&rdx35) == 16) {
                    *reinterpret_cast<uint32_t*>(&rdx39) = static_cast<uint32_t>(reinterpret_cast<uint16_t>(rcx37->f0));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = 0;
                    rdi40 = r13_32;
                    if (*reinterpret_cast<int16_t*>(&rdx39) < 0) {
                        rdx39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx39) | 0xffffffffffff0000);
                    }
                    v41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_38) + (reinterpret_cast<uint64_t>(rdx39) - reinterpret_cast<uint64_t>(rax36)));
                    rsp42 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp10) - 8);
                    *rsp42 = 0x4022a6;
                    __write_memory_part_0(rcx37, r13_32, 2);
                    rsp10 = reinterpret_cast<struct s22*>(rsp42 + 1);
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx35) <= 16) {
                        if (*reinterpret_cast<uint32_t*>(&rdx35) != 8) {
                            addr_0x4022ab_46:
                            rcx37 = reinterpret_cast<struct s1*>(0x405698);
                            rsp43 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp10) - 8);
                            *rsp43 = 0x4022bf;
                            rax36 = text(0x405698, rdx35, r8_38, r9_12);
                            rsp10 = reinterpret_cast<struct s22*>(rsp43 + 1);
                            goto addr_0x4022bf_47;
                        } else {
                            *reinterpret_cast<uint32_t*>(&rdx44) = static_cast<uint32_t>(reinterpret_cast<unsigned char>(rcx37->f0));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = 0;
                            rdi40 = r13_32;
                            if (*reinterpret_cast<signed char*>(&rdx44) < 0) {
                                rdx44 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx44) | 0xffffffffffffff00);
                            }
                            v41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_38) + (reinterpret_cast<uint64_t>(rdx44) - reinterpret_cast<uint64_t>(rax36)));
                            rsp45 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp10) - 8);
                            *rsp45 = 0x402271;
                            __write_memory_part_0(rcx37, r13_32, 1);
                            rsp10 = reinterpret_cast<struct s22*>(rsp45 + 1);
                            continue;
                        }
                    } else {
                        if (*reinterpret_cast<uint32_t*>(&rdx35) == 32) {
                            addr_0x4022bf_47:
                            *reinterpret_cast<void**>(&rdx46) = rcx37->f0;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = 0;
                            rdi40 = r13_32;
                            if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&rdx46)) < reinterpret_cast<signed char>(0)) {
                                rdx46 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx46) | 0xffffffff00000000);
                            }
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx35) != 64)
                                goto addr_0x4022ab_46;
                            rdi40 = r13_32;
                            v41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_38) - reinterpret_cast<uint64_t>(rax36) + reinterpret_cast<unsigned char>(rcx37->f0));
                            rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp10) - 8);
                            *rsp47 = 0x40216b;
                            __write_memory_part_0(rcx37, r13_32, 8);
                            rsp10 = reinterpret_cast<struct s22*>(rsp47 + 1);
                            continue;
                        }
                    }
                }
                v41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_38) + (reinterpret_cast<uint64_t>(rdx46) - reinterpret_cast<uint64_t>(rax36)));
                rsp48 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp10) - 8);
                *rsp48 = 0x4022e9;
                __write_memory_part_0(rcx37, r13_32, 4);
                rsp10 = reinterpret_cast<struct s22*>(rsp48 + 1);
                rbx30 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rbx30) + 12);
            } while (reinterpret_cast<uint64_t>(rbx30) < reinterpret_cast<uint64_t>(rsi8));
            goto addr_0x402174_57;
        }
    }
    r12_49 = refptr___image_base__;
    rdi40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 48);
    do {
        *reinterpret_cast<int32_t*>(&rcx50) = rbx9->f4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx50) + 4) = 0;
        rbx9 = reinterpret_cast<struct s11*>(&rbx9->f8);
        rcx51 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx50) + reinterpret_cast<int64_t>(r12_49));
        *reinterpret_cast<uint32_t*>(&v41) = rbx9->f0 + reinterpret_cast<unsigned char>(rcx51->f0);
        rsp52 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp10) - 8);
        *rsp52 = 0x402233;
        __write_memory_part_0(rcx51, rdi40, 4);
        rsp10 = reinterpret_cast<struct s22*>(rsp52 + 1);
    } while (reinterpret_cast<uint64_t>(rbx9) < reinterpret_cast<uint64_t>(rsi8));
    addr_0x402174_57:
    eax53 = maxSections;
    *reinterpret_cast<int32_t*>(&rbx54) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx54) + 4) = 0;
    esi55 = 0;
    if (reinterpret_cast<uint1_t>(eax53 < 0) | reinterpret_cast<uint1_t>(eax53 == 0)) {
        addr_0x40203b_2:
        return;
    } else {
        r14_56 = VirtualQuery;
        r13_57 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbp5) - 52);
        r12_58 = VirtualProtect;
        do {
            rax59 = reinterpret_cast<struct s24*>(reinterpret_cast<int64_t>(rbx54) + reinterpret_cast<uint64_t>(the_secs));
            if (rax59->f0) {
                rcx60 = rax59->f8;
                rsp61 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp10) - 8);
                *rsp61 = 0x4021d3;
                rax62 = reinterpret_cast<int64_t>(r14_56(rcx60, rdi40, 48, r9_12));
                rsp63 = reinterpret_cast<struct s22*>(rsp61 + 1);
                if (!rax62)
                    break;
                rax64 = the_secs;
                r9_12 = r13_57;
                *reinterpret_cast<int32_t*>(&r8_65) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax64) + reinterpret_cast<int64_t>(rbx54));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_65) + 4) = 0;
                rsp66 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp63) - 8);
                *rsp66 = 0x4021f5;
                r12_58(v41, v67, r8_65, r9_12);
                rsp10 = reinterpret_cast<struct s22*>(rsp66 + 1);
            }
            ++esi55;
            rbx54 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx54) + 24);
            less68 = esi55 < maxSections;
        } while (less68);
        goto addr_0x40203b_2;
    }
    rbx69 = reinterpret_cast<struct s25*>(reinterpret_cast<int64_t>(rbx54) + reinterpret_cast<uint64_t>(the_secs));
    r8 = rbx69->f8;
    *reinterpret_cast<unsigned char*>(&rdx13) = rbx69->f16->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
    rsp70 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp63) - 8);
    *rsp70 = 0x40230c;
    text(0x405600, rdx13, r8, r9_12);
    rsp10 = reinterpret_cast<struct s22*>(rsp70 + 1);
    goto addr_0x40230c_12;
    addr_0x402383_18:
    goto rsp19->f40;
    addr_0x402438_33:
    rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8);
    *rsp71 = 0x402447;
    signal(8, 8);
    rsp72 = rsp71 + 1 - 1;
    *rsp72 = 0x40244c;
    text(8, 1, 8, 1);
    rsp15 = reinterpret_cast<struct s23*>(rsp72 + 1);
    goto addr_0x402450_21;
    addr_0x402420_36:
    if (eax16 == 0xc000001d)
        goto addr_0x4023ee_24;
    if (eax16 == 0xc000008c)
        goto addr_0x402450_21; else
        goto addr_0x40242e_23;
    addr_0x402345_37:
    if (eax16 == 0x80000002)
        goto addr_0x402450_21;
    if (!reinterpret_cast<int1_t>(eax16 == 0xc0000005))
        goto addr_0x40242e_23;
    rsp73 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
    *rsp73 = 0x402367;
    rax74 = signal(11);
    rsp25 = reinterpret_cast<struct s23*>(rsp73 + 1);
    if (rax74 == 1) {
        rsp75 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp25) - 8);
        *rsp75 = 0x4024bf;
        signal(11, 11);
        rsp19 = reinterpret_cast<struct s23*>(rsp75 + 1);
        goto addr_0x402383_18;
    } else {
        if (!rax74)
            goto addr_0x402490_27;
        rsp76 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp25) - 8);
        *rsp76 = 0x402381;
        rax74(11);
        rsp19 = reinterpret_cast<struct s23*>(rsp76 + 1);
        goto addr_0x402383_18;
    }
}

/* was_here.73812 */
int32_t was_here_73812;

struct s27 {
    signed char f0;
    signed char[3] pad4;
    int32_t f4;
};

int64_t RtlAddFunctionTable = 0x9506;

int64_t __mingw_init_ehandler(struct s1* rcx, void** rdx, void** r8) {
    struct s5* rax4;
    struct s5* rbp5;
    int64_t rax6;
    signed char rax7;
    signed char* rbx8;
    int64_t rcx9;
    int64_t rsi10;
    signed char* rdi11;
    struct s27* rdi12;
    int64_t r12_13;
    struct s27* rdi14;
    struct s18* rax15;
    int32_t edx16;
    int32_t edx17;
    void* rax18;
    int64_t rdx19;

    rax4 = _GetPEImageBase(rcx);
    rbp5 = rax4;
    *reinterpret_cast<int32_t*>(&rax6) = was_here_73812;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax6) || !rbp5) {
        addr_0x402511_2:
        return rax6;
    } else {
        was_here_73812 = 1;
        rax7 = _FindPESectionByName(0x4056d0, rdx, r8);
        if (rax7)
            goto addr_0x40250c_4;
        rbx8 = reinterpret_cast<signed char*>(0x4081c0);
        *reinterpret_cast<int32_t*>(&rcx9) = 48;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi10) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = 0;
        rdi11 = reinterpret_cast<signed char*>(0x4081c0);
        while (rcx9) {
            --rcx9;
            *rdi11 = rax7;
            rdi11 = rdi11 + 8;
            rsi10 = rsi10 + 8;
        }
        rdi12 = reinterpret_cast<struct s27*>(0x4080c0);
        r12_13 = 0x402320 - reinterpret_cast<int64_t>(rbp5);
        *reinterpret_cast<signed char*>(&rcx9) = 32;
        while (rcx9) {
            --rcx9;
            rdi12->f0 = rax7;
            ++rdi12;
            rsi10 = rsi10 + 8;
        }
        rdi14 = reinterpret_cast<struct s27*>(0x4080c0);
        do {
            rax15 = _FindPESectionExec(rsi10);
            if (!rax15)
                break;
            rdi14->f0 = 9;
            rdi14->f4 = *reinterpret_cast<int32_t*>(&r12_13);
            ++rsi10;
            edx16 = rax15->f12;
            rbx8 = rbx8 + 12;
            *reinterpret_cast<int32_t*>(rbx8 - 12) = edx16;
            edx17 = edx16 + rax15->f8;
            rax18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdi14) - reinterpret_cast<int64_t>(rbp5));
            ++rdi14;
            *reinterpret_cast<int32_t*>(rbx8 - 4) = *reinterpret_cast<int32_t*>(&rax18);
            *reinterpret_cast<int32_t*>(rbx8 - 8) = edx17;
        } while (rsi10 != 32);
        goto addr_0x4025b5_14;
    }
    if (!rsi10) {
        addr_0x40250c_4:
        *reinterpret_cast<int32_t*>(&rax6) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
        goto addr_0x402511_2;
    } else {
        *reinterpret_cast<int32_t*>(&rdx19) = *reinterpret_cast<int32_t*>(&rsi10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    }
    addr_0x4025a0_17:
    RtlAddFunctionTable(0x4081c0, rdx19, rbp5);
    goto addr_0x40250c_4;
    addr_0x4025b5_14:
    *reinterpret_cast<int32_t*>(&rdx19) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    goto addr_0x4025a0_17;
}

/* .bss */
int64_t bss;

int64_t _set_invalid_parameter_handler(int64_t rcx) {
    int64_t tmp64_2;

    tmp64_2 = bss;
    bss = rcx;
    return tmp64_2;
}

int64_t exit = 0x96da;

void exit(int64_t rcx, void** rdx, void** r8, ...) {
    goto exit;
}

uint64_t __security_cookie = 0x2b992ddfa232;

int64_t GetSystemTimeAsFileTime = 0x948e;

int64_t GetCurrentProcessId = 0x9440;

int64_t GetCurrentThreadId = 0x9456;

int64_t GetTickCount = 0x94a8;

int64_t QueryPerformanceCounter = 0x94ec;

int64_t __security_cookie_complement = 0xffffd466d2205dcd;

/* .text */
void text(int64_t rcx, void** rdx, void** r8) {
    void* rsp4;
    uint64_t rbx5;
    void* rcx6;
    int32_t eax7;
    uint64_t rbp8;
    int32_t eax9;
    int32_t eax10;
    uint64_t rdx11;
    uint64_t rdx12;
    uint64_t rsi13;
    uint64_t v14;
    int64_t rax15;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 64);
    rbx5 = __security_cookie;
    if (rbx5 == 0x2b992ddfa232) {
        rcx6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) + 32);
        GetSystemTimeAsFileTime(rcx6);
        eax7 = reinterpret_cast<int32_t>(GetCurrentProcessId(rcx6));
        *reinterpret_cast<int32_t*>(&rbp8) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = 0;
        eax9 = reinterpret_cast<int32_t>(GetCurrentThreadId(rcx6));
        eax10 = reinterpret_cast<int32_t>(GetTickCount(rcx6));
        QueryPerformanceCounter(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 48);
        *reinterpret_cast<int32_t*>(&rdx11) = eax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx12) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
        rsi13 = (rbp8 ^ v14 ^ rdx11 ^ rdx12) & 0xffffffffffff;
        if (rsi13 == rbx5) {
            rax15 = 0xffffd466d2205dcc;
            rsi13 = 0x2b992ddfa233;
        } else {
            rax15 = reinterpret_cast<int64_t>(~rsi13);
        }
        __security_cookie = rsi13;
        __security_cookie_complement = rax15;
        return;
    } else {
        __security_cookie_complement = reinterpret_cast<int64_t>(~rbx5);
        return;
    }
}

/* .refptr.mingw_app_type */
int32_t* refptr_mingw_app_type = reinterpret_cast<int32_t*>(0x408030);

int64_t GetStartupInfoA = 0x947c;

struct s28 {
    signed char[8] pad8;
    int64_t f8;
};

struct s28* g30;

/* .refptr.__native_startup_lock */
int64_t* refptr___native_startup_lock = reinterpret_cast<int64_t*>(0x408a28);

int64_t Sleep = 0x957c;

/* .refptr.__native_startup_state */
int32_t* refptr___native_startup_state = reinterpret_cast<int32_t*>(0x408a20);

/* .refptr.__dyn_tls_init_callback */
int64_t* refptr___dyn_tls_init_callback = reinterpret_cast<int64_t*>(0x4056f0);

/* .refptr.__xc_z */
struct s1* refptr___xc_z = reinterpret_cast<struct s1*>(0x40a010);

/* .refptr.__xc_a */
struct s1* refptr___xc_a = reinterpret_cast<struct s1*>(0x40a000);

/* .refptr.__xi_z */
struct s1* refptr___xi_z = reinterpret_cast<struct s1*>(0x40a030);

/* .refptr.__xi_a */
struct s1* refptr___xi_a = reinterpret_cast<struct s1*>(0x40a018);

int32_t has_cctor;

int64_t SetUnhandledExceptionFilter = 0x955e;

void _gnu_exception_handler(uint32_t** rcx);

/* .refptr.__mingw_oldexcpt_handler */
void** refptr___mingw_oldexcpt_handler = reinterpret_cast<void**>(0x80);

/* .text */
void text();

struct s5* __mingw_winmain_hInstance;

/* .refptr.__imp__acmdln */
unsigned char*** refptr___imp__acmdln = reinterpret_cast<unsigned char***>(0x40931c);

uint32_t __mingw_winmain_nShowCmd = 10;

int32_t argc;

void** argv;

/* .refptr.__imp___initenv */
void**** refptr___imp___initenv = reinterpret_cast<void****>(0x4092f4);

void** envp;

int32_t managedapp;

int32_t mainret;

unsigned char* __mingw_winmain_lpCmdLine;

int64_t __tmainCRTStartup(int64_t rcx, void** rdx, void** r8) {
    int32_t* rbp4;
    struct s1* rcx5;
    struct s1* rdx6;
    int32_t r9d7;
    struct s28* rax8;
    int64_t* rbx9;
    int64_t rsi10;
    int64_t r12_11;
    int64_t tmp64_12;
    int32_t* rsi13;
    int32_t edi14;
    int64_t* rax15;
    int64_t rax16;
    void** rax17;
    void** rdx18;
    struct s5* rax19;
    unsigned char*** rax20;
    unsigned char* rax21;
    void** r8_22;
    uint32_t eax23;
    unsigned char v24;
    uint16_t v25;
    uint32_t ecx26;
    int64_t r12_27;
    void** r13_28;
    void** rcx29;
    void** rax30;
    void** rbp31;
    void** rdi32;
    void* r13_33;
    int64_t rbx34;
    void** rcx35;
    struct s0* rax36;
    void** rsi37;
    void** rax38;
    void**** rax39;
    void** rdx40;
    void** rcx41;
    void** r8_42;
    void** rdx43;
    int64_t rax44;
    int32_t ecx45;
    int64_t rcx46;
    int32_t* rax47;
    int64_t v48;
    int32_t edx49;

    rbp4 = refptr_mingw_app_type;
    *reinterpret_cast<int32_t*>(&rcx5) = 13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    rdx6 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x98 + 32);
    r9d7 = *rbp4;
    while (rcx5) {
        rcx5 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rcx5) - 1);
    }
    if (r9d7) {
        rcx5 = rdx6;
        GetStartupInfoA(rcx5);
    }
    rax8 = g30;
    rbx9 = refptr___native_startup_lock;
    rsi10 = rax8->f8;
    r12_11 = Sleep;
    while (1) {
        if (*rbx9 == rsi10) {
            tmp64_12 = *rbx9;
            *rbx9 = rsi10;
            rsi10 = tmp64_12;
        }
        if (!0)
            break;
        if (!rsi10)
            goto addr_0x401430_11;
        *reinterpret_cast<int32_t*>(&rcx5) = 0x3e8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        r12_11(0x3e8);
    }
    rsi13 = refptr___native_startup_state;
    edi14 = 0;
    if (*rsi13 == 1) {
        addr_0x401447_14:
        *reinterpret_cast<int32_t*>(&rcx5) = 31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        _amsg_exit(31);
        if (*rsi13 != 1) {
            addr_0x401255_15:
            if (!edi14) {
                addr_0x401480_16:
                *rbx9 = 0;
                goto addr_0x40125d_17;
            } else {
                addr_0x40125d_17:
                rax15 = refptr___dyn_tls_init_callback;
                rax16 = *rax15;
                if (rax16) {
                    *reinterpret_cast<int32_t*>(&r8) = 0;
                    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdx6) = 2;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rcx5) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
                    rax16();
                }
            }
        } else {
            addr_0x40145c_19:
            rdx6 = refptr___xc_z;
            rcx5 = refptr___xc_a;
            _initterm(rcx5, rdx6);
            *rsi13 = 2;
            if (edi14)
                goto addr_0x40125d_17; else
                goto addr_0x40147d_20;
        }
    } else {
        addr_0x401236_21:
        if (!*rsi13) {
            rdx6 = refptr___xi_z;
            rcx5 = refptr___xi_a;
            *rsi13 = 1;
            _initterm(rcx5, rdx6);
            goto addr_0x40124a_23;
        } else {
            has_cctor = 1;
            goto addr_0x40124a_23;
        }
    }
    _pei386_runtime_relocator(rcx5, rdx6, r8);
    rax17 = reinterpret_cast<void**>(SetUnhandledExceptionFilter(_gnu_exception_handler, rdx6));
    rdx18 = refptr___mingw_oldexcpt_handler;
    *reinterpret_cast<void***>(rdx18) = rax17;
    __mingw_init_ehandler(_gnu_exception_handler, rdx18, r8);
    _set_invalid_parameter_handler(text);
    text(text, rdx18);
    rax19 = refptr___image_base__;
    __mingw_winmain_hInstance = rax19;
    rax20 = refptr___imp__acmdln;
    rax21 = **rax20;
    if (!rax21) {
        addr_0x401317_26:
        *reinterpret_cast<int32_t*>(&r8_22) = *rbp4;
        *reinterpret_cast<int32_t*>(&r8_22 + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&r8_22)) {
            eax23 = 10;
            if (v24 & 1) {
                eax23 = static_cast<uint32_t>(v25);
            }
            __mingw_winmain_nShowCmd = eax23;
        }
    } else {
        ecx26 = 0;
        while (1) {
            *reinterpret_cast<uint32_t*>(&rdx18) = static_cast<uint32_t>(*rax21);
            *reinterpret_cast<int32_t*>(&rdx18 + 4) = 0;
            if (*reinterpret_cast<signed char*>(&rdx18) <= 32) {
                if (!*reinterpret_cast<signed char*>(&rdx18))
                    goto addr_0x401310_33;
                if (!(ecx26 & 1))
                    goto addr_0x401304_35;
                ecx26 = 1;
            } else {
                if (*reinterpret_cast<signed char*>(&rdx18) == 34) {
                    ecx26 = ecx26 ^ 1;
                }
            }
            ++rax21;
        }
    }
    *reinterpret_cast<int32_t*>(&r12_27) = argc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_27) + 4) = 0;
    r13_28 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(r12_27 + 1))) << 3);
    rcx29 = r13_28;
    rax30 = malloc(rcx29);
    rbp31 = rax30;
    rdi32 = argv;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r12_27) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r12_27) == 0)) {
        *reinterpret_cast<int32_t*>(&r13_33) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rbx34) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx34) + 4) = 0;
        do {
            rcx35 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi32) + reinterpret_cast<uint64_t>(rbx34 * 8));
            rax36 = strlen(rcx35, rdx18, r8_22);
            rsi37 = reinterpret_cast<void**>(&rax36->f1);
            rax38 = malloc(rsi37, rsi37);
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbp31) + reinterpret_cast<uint64_t>(rbx34 * 8)) = rax38;
            rdx18 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi32) + reinterpret_cast<uint64_t>(rbx34 * 8));
            rcx29 = rax38;
            r8_22 = rsi37;
            ++rbx34;
            memcpy(rcx29, rdx18, r8_22);
        } while (*reinterpret_cast<int32_t*>(&r12_27) > *reinterpret_cast<int32_t*>(&rbx34));
        r13_33 = reinterpret_cast<void*>(r13_28 - 8);
    }
    *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbp31) + reinterpret_cast<uint64_t>(r13_33)) = 0;
    argv = rbp31;
    __main(rcx29, rdx18, r8_22);
    rax39 = refptr___imp___initenv;
    rdx40 = envp;
    *reinterpret_cast<int32_t*>(&rcx41) = argc;
    *reinterpret_cast<int32_t*>(&rcx41 + 4) = 0;
    **rax39 = rdx40;
    r8_42 = envp;
    rdx43 = argv;
    rax44 = main(rcx41, rdx43, r8_42);
    ecx45 = managedapp;
    mainret = *reinterpret_cast<int32_t*>(&rax44);
    if (!ecx45) {
        *reinterpret_cast<int32_t*>(&rcx46) = *reinterpret_cast<int32_t*>(&rax44);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = 0;
        exit(rcx46, rdx43, r8_42);
        rax47 = refptr_mingw_app_type;
        *rax47 = 1;
        text(rcx46, rdx43, r8_42);
        __tmainCRTStartup(rcx46, rdx43, r8_42);
        goto v48;
    } else {
        edx49 = has_cctor;
        if (!edx49) {
            _cexit();
            *reinterpret_cast<int32_t*>(&rax44) = mainret;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax44) + 4) = 0;
        }
        return rax44;
    }
    addr_0x401310_33:
    __mingw_winmain_lpCmdLine = rax21;
    goto addr_0x401317_26;
    do {
        addr_0x401304_35:
        ++rax21;
        *reinterpret_cast<uint32_t*>(&rdx18) = static_cast<uint32_t>(*rax21);
        *reinterpret_cast<int32_t*>(&rdx18 + 4) = 0;
        if (*reinterpret_cast<signed char*>(&rdx18) > 32)
            goto addr_0x401310_33;
    } while (*reinterpret_cast<signed char*>(&rdx18));
    goto addr_0x401310_33;
    addr_0x40147d_20:
    goto addr_0x401480_16;
    addr_0x40124a_23:
    if (*rsi13 == 1)
        goto addr_0x40145c_19; else
        goto addr_0x401255_15;
    addr_0x401430_11:
    rsi13 = refptr___native_startup_state;
    edi14 = 1;
    if (*rsi13 != 1)
        goto addr_0x401236_21; else
        goto addr_0x401447_14;
}

int64_t scanf = 0x9738;

void scanf(void** rcx, void** rdx, void** r8, int64_t r9) {
    goto scanf;
}

int64_t fflush = 0x96e2;

void fflush(int64_t rcx, void** rdx, void** r8, int64_t r9) {
    goto fflush;
}

int64_t putchar = 0x9726;

void putchar(int64_t rcx, void** rdx) {
    goto putchar;
}

/* .text */
void text(int32_t* rcx, void** rdx, void** r8, int64_t r9) {
    int32_t* v5;
    int32_t v6;
    void** r8_7;
    void** rdx8;

    v5 = rcx;
    v6 = 0;
    while (v6 <= 4) {
        *reinterpret_cast<int32_t*>(&r8_7) = v5[v6];
        *reinterpret_cast<int32_t*>(&r8_7 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx8) = v6;
        *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
        printf("Lift : %d is on %d floor\n", rdx8, r8_7, r9);
        ++v6;
    }
    return;
}

void fwrite(struct s1* rcx, struct s1* rdx, void** r8, struct s1* r9);

void vfprintf();

struct s29 {
    void* f0;
    signed char[7] pad8;
    int64_t f8;
    struct s4* f16;
};

struct s30 {
    signed char[32] pad32;
    void* f32;
};

struct s31 {
    signed char[40] pad40;
    int64_t f40;
};

struct s32 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s34 {
    signed char[8] pad8;
    unsigned char f8;
};

struct s33 {
    signed char[8] pad8;
    void** f8;
    signed char[7] pad16;
    struct s34* f16;
};

/* .text */
void*** text(struct s1* rcx, struct s1* rdx, void** r8, struct s1* r9) {
    void* rsp5;
    int64_t v6;
    struct s3* rax7;
    struct s1* r9_8;
    int64_t v9;
    struct s3* rax10;
    struct s1* rcx11;
    void** r8_12;
    void* rsp13;
    void* rbp14;
    struct s1* rbx15;
    struct s7* rax16;
    struct s8* rax17;
    void* r11_18;
    struct s4* rax19;
    void* rsp20;
    struct s29* r13_21;
    struct s5* rax22;
    void* rsp23;
    int64_t rdx24;
    void* rdx25;
    struct s7* rax26;
    int64_t rcx27;
    int64_t rax28;
    struct s7* rax29;
    struct s1* rdx30;
    int64_t rax31;
    int32_t v32;
    int64_t v33;
    int64_t v34;
    int32_t eax35;
    int32_t eax36;
    struct s1* rdx37;
    void* rsp38;
    void* rbp39;
    int32_t ebx40;
    int64_t rax41;
    struct s11* rsi42;
    struct s11* rbx43;
    struct s30* rsp44;
    uint64_t rax45;
    struct s1* rdx46;
    int64_t* rsp47;
    struct s31* rsp48;
    void* eax49;
    int64_t* rsp50;
    int64_t rax51;
    struct s31* rsp52;
    int64_t rdx53;
    int64_t* rsp54;
    int64_t* rsp55;
    int64_t* rsp56;
    int64_t rax57;
    struct s31* rsp58;
    int64_t* rsp59;
    int64_t* rsp60;
    int64_t* rsp61;
    int64_t rax62;
    struct s11* rbx63;
    struct s5* r12_64;
    void* r13_65;
    void* rcx66;
    void* rax67;
    struct s1* rdx68;
    void*** rax69;
    struct s1* rcx70;
    void** r8_71;
    void* rdx72;
    void* rdi73;
    void* v74;
    int64_t* rsp75;
    int64_t* rsp76;
    void* rdx77;
    int64_t* rsp78;
    void* rdx79;
    int64_t* rsp80;
    int64_t* rsp81;
    struct s5* r12_82;
    void* rcx83;
    struct s1* rcx84;
    int64_t* rsp85;
    int32_t eax86;
    void* rbx87;
    int32_t esi88;
    int64_t v89;
    int64_t r14_90;
    struct s1* r13_91;
    int64_t r12_92;
    struct s32* rax93;
    int64_t rcx94;
    int64_t* rsp95;
    int64_t rax96;
    struct s30* rsp97;
    struct s7* rax98;
    int64_t r8_99;
    int64_t* rsp100;
    int64_t v101;
    int1_t less102;
    struct s33* rbx103;
    int64_t* rsp104;
    int64_t* rsp105;
    int64_t* rsp106;
    int64_t* rsp107;
    int64_t rax108;
    int64_t* rsp109;
    int64_t* rsp110;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56);
    rax7 = __iob_func(rcx, rdx, r8, r9, v6);
    r9_8 = reinterpret_cast<struct s1*>(&rax7->f96);
    fwrite(0x4055c0, 1, 27, r9_8);
    rax10 = __iob_func(0x4055c0, 1, 27, r9_8, v9);
    rcx11 = reinterpret_cast<struct s1*>(&rax10->f96);
    r8_12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp5) + 88);
    vfprintf();
    abort(rcx11, rcx, r8_12, r9_8);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 88);
    rbp14 = reinterpret_cast<void*>(static_cast<int64_t>(maxSections));
    rbx15 = rcx11;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&rbp14)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbp14) == 0)) {
        *reinterpret_cast<unsigned char*>(&rbp14) = reinterpret_cast<unsigned char>(0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = 0;
    } else {
        rax16 = the_secs;
        *reinterpret_cast<unsigned char*>(&r9_8) = reinterpret_cast<unsigned char>(0);
        rax17 = reinterpret_cast<struct s8*>(&rax16->f8);
        do {
            if (reinterpret_cast<uint64_t>(rbx15) < reinterpret_cast<uint64_t>(rax17->f0))
                continue;
            *reinterpret_cast<int32_t*>(&r11_18) = rax17->f8->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = 0;
            if (reinterpret_cast<uint64_t>(rbx15) < reinterpret_cast<uint64_t>(rax17->f0) + reinterpret_cast<int64_t>(r11_18))
                goto addr_0x401fb0_7;
            *reinterpret_cast<unsigned char*>(&r9_8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_8) + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
            rax17 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rax17) + 24);
        } while (*reinterpret_cast<unsigned char*>(&r9_8) != *reinterpret_cast<unsigned char*>(&rbp14));
    }
    rax19 = __mingw_GetSectionForAddress(rbx15, rbx15);
    rsp20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
    if (!rax19) {
        addr_0x402002_10:
        text(0x4055e0, rbx15, r8_12, r9_8);
    } else {
        rbp14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbp14) + reinterpret_cast<uint64_t>(rbp14) * 2 << 3);
        r13_21 = reinterpret_cast<struct s29*>(reinterpret_cast<uint64_t>(rbp14) + reinterpret_cast<uint64_t>(the_secs));
        r13_21->f16 = rax19;
        r13_21->f0 = reinterpret_cast<void*>(0);
        rax22 = _GetPEImageBase(rbx15, rbx15);
        rsp23 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp20) - 8 + 8);
        *reinterpret_cast<int32_t*>(&rdx24) = rax19->f12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = 0;
        rdx25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp23) + 32);
        r13_21->f8 = reinterpret_cast<int64_t>(rax22) + rdx24;
        rax26 = the_secs;
        rcx27 = *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rax26) + reinterpret_cast<uint64_t>(rbp14) + 8);
        rax28 = reinterpret_cast<int64_t>(VirtualQuery(rcx27, rdx25, 48, rcx27, rdx25, 48));
        rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp23) - 8 + 8);
        if (!rax28) {
            addr_0x401fe5_12:
            rax29 = the_secs;
            *reinterpret_cast<int32_t*>(&rdx30) = rax19->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
            r8_12 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax29) + reinterpret_cast<uint64_t>(rbp14) + 8);
            text(0x405600, rdx30, r8_12, r9_8);
            rsp20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
            goto addr_0x402002_10;
        } else {
            *reinterpret_cast<int32_t*>(&rax31) = v32;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = 0;
            if (!(static_cast<uint32_t>(rax31 - 4) & 0xfffffffb) || (!(reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax31) - 64) & 0xffffffbf) || (r9_8 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rbp14) + reinterpret_cast<uint64_t>(the_secs)), eax35 = reinterpret_cast<int32_t>(VirtualProtect(v33, v34, 64)), rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8), !!eax35))) {
                ++maxSections;
                goto addr_0x401fb0_7;
            } else {
                eax36 = reinterpret_cast<int32_t>(GetLastError(v33, v34, 64));
                *reinterpret_cast<int32_t*>(&rdx37) = eax36;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = 0;
                text(0x405638, rdx37, 64, r9_8);
                rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8 + 8);
                goto addr_0x401fe5_12;
            }
        }
    }
    rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp20) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    rbp39 = rsp38;
    ebx40 = bss;
    if (ebx40)
        goto addr_0x40203b_17;
    bss = 1;
    __mingw_GetSectionCount(0x4055e0, rbx15, r8_12, 0x4055e0, rbx15, r8_12);
    rax41 = ___chkstk_ms(0x4055e0, rbx15, r8_12, 0x4055e0, rbx15, r8_12);
    rsi42 = refptr___RUNTIME_PSEUDO_RELOC_LIST_END__;
    rbx43 = refptr___RUNTIME_PSEUDO_RELOC_LIST__;
    rsp44 = reinterpret_cast<struct s30*>(reinterpret_cast<int64_t>(rsp38) - 96 - 8 + 8 - 8 + 8 - rax41);
    maxSections = 0;
    the_secs = reinterpret_cast<struct s7*>(&rsp44->f32);
    rax45 = reinterpret_cast<uint64_t>(rsi42) - reinterpret_cast<uint64_t>(rbx43);
    if (reinterpret_cast<int64_t>(rax45) <= reinterpret_cast<int64_t>(7))
        goto addr_0x40203b_17;
    if (reinterpret_cast<int64_t>(rax45) > reinterpret_cast<int64_t>(11)) {
        if (rbx43->f0)
            goto addr_0x402200_21;
        if (rbx43->f4)
            goto addr_0x402200_21;
        *reinterpret_cast<unsigned char*>(&r9_8) = rbx43->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&r9_8))
            goto addr_0x4020ec_24;
        rbx43 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rbx43) + 12);
    }
    *reinterpret_cast<int32_t*>(&r8_12) = rbx43->f0;
    *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r8_12) || rbx43->f4) {
        addr_0x402200_21:
        if (reinterpret_cast<uint64_t>(rbx43) >= reinterpret_cast<uint64_t>(rsi42))
            goto addr_0x40203b_17;
    } else {
        addr_0x4020ec_24:
        *reinterpret_cast<unsigned char*>(&rdx46) = rbx43->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&rdx46) != 1) {
            addr_0x40230c_27:
            rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp44) - 8);
            *rsp47 = 0x402318;
            text(0x405660, rdx46, r8_12, r9_8);
            rsp48 = reinterpret_cast<struct s31*>(rsp47 + 1 - 5);
            eax49 = g405660;
            if (reinterpret_cast<unsigned char>(eax49) > reinterpret_cast<unsigned char>(0xc0000091)) {
                if (eax49 == 0xc0000094) {
                    rsp50 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp48) - 8);
                    *rsp50 = 0x40246c;
                    rax51 = signal(8);
                    rsp52 = reinterpret_cast<struct s31*>(rsp50 + 1);
                    rdx53 = rax51;
                    if (rax51 != 1) {
                        addr_0x4023c4_30:
                        if (rdx53) {
                            rsp54 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp52) - 8);
                            *rsp54 = 0x4023d5;
                            rdx53(8);
                            goto (rsp54 + 1)[5];
                        }
                    } else {
                        rsp55 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp52) - 8);
                        *rsp55 = 0x402488;
                        signal(8, 8);
                        rsp52 = reinterpret_cast<struct s31*>(rsp55 + 1);
                        goto addr_0x402383_33;
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(eax49) > reinterpret_cast<unsigned char>(0xc0000094)) {
                        if (eax49 == 0xc0000095) {
                            addr_0x402450_36:
                            goto rsp48->f40;
                        } else {
                            if (!reinterpret_cast<int1_t>(eax49 == 0xc0000096)) {
                                addr_0x40242e_38:
                                goto rsp48->f40;
                            } else {
                                addr_0x4023ee_39:
                                rsp56 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp48) - 8);
                                *rsp56 = 0x4023fa;
                                rax57 = signal(4);
                                rsp58 = reinterpret_cast<struct s31*>(rsp56 + 1);
                                if (rax57 == 1) {
                                    rsp59 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                                    *rsp59 = 0x4024a9;
                                    signal(4, 4);
                                    rsp52 = reinterpret_cast<struct s31*>(rsp59 + 1);
                                    goto addr_0x402383_33;
                                } else {
                                    if (!rax57) {
                                        addr_0x402490_42:
                                        goto rsp58->f40;
                                    } else {
                                        rsp60 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                                        *rsp60 = 0x402414;
                                        rax57(4);
                                        rsp52 = reinterpret_cast<struct s31*>(rsp60 + 1);
                                        goto addr_0x402383_33;
                                    }
                                }
                            }
                        }
                    } else {
                        if (eax49 == 0xc0000092)
                            goto addr_0x402450_36;
                        if (!reinterpret_cast<int1_t>(eax49 == 0xc0000093))
                            goto addr_0x40242e_38; else
                            goto addr_0x4023af_46;
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(eax49) >= reinterpret_cast<unsigned char>(0xc000008d)) {
                    addr_0x4023af_46:
                    rsp61 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp48) - 8);
                    *rsp61 = 0x4023bb;
                    rax62 = signal(8);
                    rsp52 = reinterpret_cast<struct s31*>(rsp61 + 1);
                    rdx53 = rax62;
                    if (rax62 == 1)
                        goto addr_0x402438_48; else
                        goto addr_0x4023c4_30;
                } else {
                    if (eax49 == 0xc0000008)
                        goto addr_0x402450_36;
                    if (reinterpret_cast<unsigned char>(eax49) > reinterpret_cast<unsigned char>(0xc0000008))
                        goto addr_0x402420_51; else
                        goto addr_0x402345_52;
                }
            }
        } else {
            rbx63 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rbx43) + 12);
            if (reinterpret_cast<uint64_t>(rbx63) >= reinterpret_cast<uint64_t>(rsi42))
                goto addr_0x40203b_17;
            r12_64 = refptr___image_base__;
            r13_65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp39) - 48);
            do {
                *reinterpret_cast<int32_t*>(&rcx66) = rbx63->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx66) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rax67) = rbx63->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax67) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx68) = static_cast<uint32_t>(rbx63->f8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx68) + 4) = 0;
                rax69 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rax67) + reinterpret_cast<int64_t>(r12_64));
                rcx70 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx66) + reinterpret_cast<int64_t>(r12_64));
                r8_71 = *rax69;
                if (*reinterpret_cast<uint32_t*>(&rdx68) == 16) {
                    *reinterpret_cast<uint32_t*>(&rdx72) = static_cast<uint32_t>(reinterpret_cast<uint16_t>(rcx70->f0));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx72) + 4) = 0;
                    rdi73 = r13_65;
                    if (*reinterpret_cast<int16_t*>(&rdx72) < 0) {
                        rdx72 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx72) | 0xffffffffffff0000);
                    }
                    v74 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_71) + (reinterpret_cast<uint64_t>(rdx72) - reinterpret_cast<uint64_t>(rax69)));
                    rsp75 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp44) - 8);
                    *rsp75 = 0x4022a6;
                    __write_memory_part_0(rcx70, r13_65, 2, rcx70, r13_65, 2);
                    rsp44 = reinterpret_cast<struct s30*>(rsp75 + 1);
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx68) <= 16) {
                        if (*reinterpret_cast<uint32_t*>(&rdx68) != 8) {
                            addr_0x4022ab_61:
                            rcx70 = reinterpret_cast<struct s1*>(0x405698);
                            rsp76 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp44) - 8);
                            *rsp76 = 0x4022bf;
                            rax69 = text(0x405698, rdx68, r8_71, r9_8);
                            rsp44 = reinterpret_cast<struct s30*>(rsp76 + 1);
                            goto addr_0x4022bf_62;
                        } else {
                            *reinterpret_cast<uint32_t*>(&rdx77) = static_cast<uint32_t>(reinterpret_cast<unsigned char>(rcx70->f0));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx77) + 4) = 0;
                            rdi73 = r13_65;
                            if (*reinterpret_cast<signed char*>(&rdx77) < 0) {
                                rdx77 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx77) | 0xffffffffffffff00);
                            }
                            v74 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_71) + (reinterpret_cast<uint64_t>(rdx77) - reinterpret_cast<uint64_t>(rax69)));
                            rsp78 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp44) - 8);
                            *rsp78 = 0x402271;
                            __write_memory_part_0(rcx70, r13_65, 1, rcx70, r13_65, 1);
                            rsp44 = reinterpret_cast<struct s30*>(rsp78 + 1);
                            continue;
                        }
                    } else {
                        if (*reinterpret_cast<uint32_t*>(&rdx68) == 32) {
                            addr_0x4022bf_62:
                            *reinterpret_cast<void**>(&rdx79) = rcx70->f0;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx79) + 4) = 0;
                            rdi73 = r13_65;
                            if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&rdx79)) < reinterpret_cast<signed char>(0)) {
                                rdx79 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx79) | 0xffffffff00000000);
                            }
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx68) != 64)
                                goto addr_0x4022ab_61;
                            rdi73 = r13_65;
                            v74 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_71) - reinterpret_cast<uint64_t>(rax69) + reinterpret_cast<unsigned char>(rcx70->f0));
                            rsp80 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp44) - 8);
                            *rsp80 = 0x40216b;
                            __write_memory_part_0(rcx70, r13_65, 8, rcx70, r13_65, 8);
                            rsp44 = reinterpret_cast<struct s30*>(rsp80 + 1);
                            continue;
                        }
                    }
                }
                v74 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r8_71) + (reinterpret_cast<uint64_t>(rdx79) - reinterpret_cast<uint64_t>(rax69)));
                rsp81 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp44) - 8);
                *rsp81 = 0x4022e9;
                __write_memory_part_0(rcx70, r13_65, 4, rcx70, r13_65, 4);
                rsp44 = reinterpret_cast<struct s30*>(rsp81 + 1);
                rbx63 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rbx63) + 12);
            } while (reinterpret_cast<uint64_t>(rbx63) < reinterpret_cast<uint64_t>(rsi42));
            goto addr_0x402174_72;
        }
    }
    r12_82 = refptr___image_base__;
    rdi73 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp39) - 48);
    do {
        *reinterpret_cast<int32_t*>(&rcx83) = rbx43->f4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx83) + 4) = 0;
        rbx43 = reinterpret_cast<struct s11*>(&rbx43->f8);
        rcx84 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx83) + reinterpret_cast<int64_t>(r12_82));
        *reinterpret_cast<uint32_t*>(&v74) = rbx43->f0 + reinterpret_cast<unsigned char>(rcx84->f0);
        rsp85 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp44) - 8);
        *rsp85 = 0x402233;
        __write_memory_part_0(rcx84, rdi73, 4, rcx84, rdi73, 4);
        rsp44 = reinterpret_cast<struct s30*>(rsp85 + 1);
    } while (reinterpret_cast<uint64_t>(rbx43) < reinterpret_cast<uint64_t>(rsi42));
    addr_0x402174_72:
    eax86 = maxSections;
    *reinterpret_cast<int32_t*>(&rbx87) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx87) + 4) = 0;
    esi88 = 0;
    if (reinterpret_cast<uint1_t>(eax86 < 0) | reinterpret_cast<uint1_t>(eax86 == 0)) {
        addr_0x40203b_17:
        goto v89;
    } else {
        r14_90 = VirtualQuery;
        r13_91 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbp39) - 52);
        r12_92 = VirtualProtect;
        do {
            rax93 = reinterpret_cast<struct s32*>(reinterpret_cast<int64_t>(rbx87) + reinterpret_cast<uint64_t>(the_secs));
            if (rax93->f0) {
                rcx94 = rax93->f8;
                rsp95 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp44) - 8);
                *rsp95 = 0x4021d3;
                rax96 = reinterpret_cast<int64_t>(r14_90(rcx94, rdi73, 48, r9_8));
                rsp97 = reinterpret_cast<struct s30*>(rsp95 + 1);
                if (!rax96)
                    break;
                rax98 = the_secs;
                r9_8 = r13_91;
                *reinterpret_cast<int32_t*>(&r8_99) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax98) + reinterpret_cast<int64_t>(rbx87));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_99) + 4) = 0;
                rsp100 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp97) - 8);
                *rsp100 = 0x4021f5;
                r12_92(v74, v101, r8_99, r9_8);
                rsp44 = reinterpret_cast<struct s30*>(rsp100 + 1);
            }
            ++esi88;
            rbx87 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx87) + 24);
            less102 = esi88 < maxSections;
        } while (less102);
        goto addr_0x40203b_17;
    }
    rbx103 = reinterpret_cast<struct s33*>(reinterpret_cast<int64_t>(rbx87) + reinterpret_cast<uint64_t>(the_secs));
    r8_12 = rbx103->f8;
    *reinterpret_cast<unsigned char*>(&rdx46) = rbx103->f16->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = 0;
    rsp104 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp97) - 8);
    *rsp104 = 0x40230c;
    text(0x405600, rdx46, r8_12, r9_8);
    rsp44 = reinterpret_cast<struct s30*>(rsp104 + 1);
    goto addr_0x40230c_27;
    addr_0x402383_33:
    goto rsp52->f40;
    addr_0x402438_48:
    rsp105 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp52) - 8);
    *rsp105 = 0x402447;
    signal(8, 8);
    rsp106 = rsp105 + 1 - 1;
    *rsp106 = 0x40244c;
    text(8, 1, 8, 1);
    rsp48 = reinterpret_cast<struct s31*>(rsp106 + 1);
    goto addr_0x402450_36;
    addr_0x402420_51:
    if (eax49 == 0xc000001d)
        goto addr_0x4023ee_39;
    if (eax49 == 0xc000008c)
        goto addr_0x402450_36; else
        goto addr_0x40242e_38;
    addr_0x402345_52:
    if (eax49 == 0x80000002)
        goto addr_0x402450_36;
    if (!reinterpret_cast<int1_t>(eax49 == 0xc0000005))
        goto addr_0x40242e_38;
    rsp107 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp48) - 8);
    *rsp107 = 0x402367;
    rax108 = signal(11);
    rsp58 = reinterpret_cast<struct s31*>(rsp107 + 1);
    if (rax108 == 1) {
        rsp109 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
        *rsp109 = 0x4024bf;
        signal(11, 11);
        rsp52 = reinterpret_cast<struct s31*>(rsp109 + 1);
        goto addr_0x402383_33;
    } else {
        if (!rax108)
            goto addr_0x402490_42;
        rsp110 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
        *rsp110 = 0x402381;
        rax108(11);
        rsp52 = reinterpret_cast<struct s31*>(rsp110 + 1);
        goto addr_0x402383_33;
    }
    addr_0x401fb0_7:
    goto memcpy;
}

uint32_t __mingw_GetSectionCount(struct s1* rcx, struct s1* rdx, void** r8, ...) {
    struct s5* rbx4;
    int64_t rax5;

    rbx4 = refptr___image_base__;
    *reinterpret_cast<uint32_t*>(&rax5) = 0;
    if (rbx4->f0 != 0x5a4d || (rax5 = text(rbx4), *reinterpret_cast<uint32_t*>(&rax5) == 0)) {
        return *reinterpret_cast<uint32_t*>(&rax5);
    } else {
        return static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(rbx4->f60 + reinterpret_cast<int64_t>(rbx4) + 6));
    }
}

int64_t ___chkstk_ms(struct s1* rcx, struct s1* rdx, void** r8, ...) {
    int64_t v4;
    int64_t rax5;
    void* rcx6;
    uint64_t rax7;
    uint64_t rax8;
    uint64_t* rcx9;

    v4 = rax5;
    rcx6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 + 24);
    if (rax7 >= 0x1000) {
        do {
            rcx6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rcx6) - 0x1000);
            rax8 = rax8 - 0x1000;
        } while (rax8 > 0x1000);
    }
    rcx9 = reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rcx6) - rax8);
    *rcx9 = *rcx9;
    return v4;
}

int64_t __onexitbegin;

/* .refptr.__imp__onexit */
int64_t* refptr___imp__onexit = reinterpret_cast<int64_t*>(0x409354);

int64_t __onexitend;

/* .text */
int64_t text(int64_t rcx) {
    int64_t rcx2;
    int64_t rax3;
    int64_t* rax4;
    int64_t rax5;
    int64_t rcx6;
    int64_t rax7;
    int64_t rcx8;
    int64_t rax9;
    void* rsp10;
    void* rdx11;
    void* r8_12;
    int64_t rax13;
    int64_t rax14;
    int64_t rax15;

    rcx2 = __onexitbegin;
    rax3 = text(rcx2);
    if (rax3 == -1) {
        rax4 = refptr___imp__onexit;
        rax5 = reinterpret_cast<int64_t>(*rax4(rcx));
        return rax5;
    } else {
        _lock(8);
        rcx6 = __onexitbegin;
        rax7 = text(rcx6);
        rcx8 = __onexitend;
        rax9 = text(rcx8);
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        rdx11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) + 32);
        r8_12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) + 40);
        rax13 = __dllonexit(rcx, rdx11, r8_12);
        rax14 = _encode_pointer(rax7, rax7);
        __onexitbegin = rax14;
        rax15 = _encode_pointer(rax9, rax9);
        __onexitend = rax15;
        _unlock(8, rdx11, r8_12);
        return rax13;
    }
}

int32_t __mingwthr_cs_init;

int64_t InitializeCriticalSection = 0x94b8;

/* .text */
void text();

int64_t DeleteCriticalSection = 0x93fc;

int64_t __mingw_TLScallback() {
    int32_t edx1;
    int32_t eax2;
    uint32_t edx3;
    int32_t eax4;
    int32_t eax5;
    int32_t edx6;
    int32_t eax7;

    if (edx1 == 1) {
        eax2 = __mingwthr_cs_init;
        if (!eax2) {
            InitializeCriticalSection(0x4089c0);
        }
        __mingwthr_cs_init = 1;
        return 1;
    } else {
        if (edx3 < 1) {
            eax4 = __mingwthr_cs_init;
            if (eax4) {
                text();
            }
            eax5 = __mingwthr_cs_init;
            if (eax5 == 1) {
                __mingwthr_cs_init = 0;
                DeleteCriticalSection(0x4089c0);
            }
        } else {
            if (edx6 == 3 && (eax7 = __mingwthr_cs_init, !!eax7)) {
                text();
            }
        }
        return 1;
    }
}

struct s35 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f24;
};

/* .text */
int64_t text(struct s5* rcx) {
    struct s35* rcx2;
    int64_t rax3;

    rcx2 = reinterpret_cast<struct s35*>(reinterpret_cast<int64_t>(rcx) + rcx->f60);
    if (rcx2->f0 == 0x4550) {
        *reinterpret_cast<int32_t*>(&rax3) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        *reinterpret_cast<unsigned char*>(&rax3) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(rcx2->f24 == 0x20b));
        return rax3;
    } else {
        return 0;
    }
}

int64_t EnterCriticalSection = 0x9414;

struct s36 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    struct s36* f16;
};

/* .bss */
struct s36* bss;

int64_t TlsGetValue = 0x9598;

int64_t LeaveCriticalSection = 0x94d4;

/* .text */
void text() {
    struct s36* rbx1;
    int64_t rbp2;
    int64_t rdi3;
    int64_t rcx4;
    int64_t rax5;
    int32_t eax6;
    int64_t rax7;
    int64_t rax8;

    EnterCriticalSection(0x4089c0);
    rbx1 = bss;
    if (rbx1) {
        rbp2 = TlsGetValue;
        rdi3 = GetLastError;
        do {
            *reinterpret_cast<int32_t*>(&rcx4) = rbx1->f0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
            rax5 = reinterpret_cast<int64_t>(rbp2(rcx4));
            eax6 = reinterpret_cast<int32_t>(rdi3(rcx4));
            if (!eax6 && rax5) {
                rax7 = rbx1->f8;
                rax7(rax5);
            }
            rbx1 = rbx1->f16;
        } while (rbx1);
    }
    rax8 = LeaveCriticalSection;
    goto rax8;
}

int64_t fwrite = 0x96fe;

void fwrite(struct s1* rcx, struct s1* rdx, void** r8, struct s1* r9) {
    goto fwrite;
}

int64_t vfprintf = 0x9768;

void vfprintf() {
    goto vfprintf;
}

int64_t calloc = 0x96d0;

struct s36* calloc(int64_t rcx, int64_t rdx) {
    goto calloc;
}

int64_t free = 0x96f6;

void free(struct s36* rcx) {
    goto free;
}

/* .text */
void text() {
    return;
}

void fun_4033c7() {
    int32_t* rax1;
    int32_t* rax2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    signed char* rax9;
    signed char* rax10;
    signed char al11;

    *rax1 = *rax2 + 1;
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    *rax9 = reinterpret_cast<signed char>(*rax10 + al11);
}

void fun_4033d7() {
    int32_t* rax1;
    int32_t* rax2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    signed char* rax9;
    signed char* rax10;
    signed char al11;
    signed char* rax12;
    signed char* rax13;
    signed char al14;
    signed char* rax15;
    signed char* rax16;
    signed char al17;
    signed char* rax18;
    signed char* rax19;
    signed char al20;
    signed char* rax21;
    signed char* rax22;
    signed char al23;
    signed char* rax24;
    signed char* rax25;
    signed char al26;
    signed char* rax27;
    signed char* rax28;
    signed char al29;
    signed char* rax30;
    signed char* rax31;
    signed char al32;
    signed char* rax33;
    signed char* rax34;
    signed char al35;
    signed char* rax36;
    signed char* rax37;
    signed char al38;
    signed char* rax39;
    signed char* rax40;
    signed char al41;
    signed char* rax42;
    signed char* rax43;
    signed char al44;
    signed char* rax45;
    signed char* rax46;
    signed char al47;
    signed char* rax48;
    signed char* rax49;
    signed char al50;
    signed char* rax51;
    signed char* rax52;
    signed char al53;
    signed char* rax54;
    signed char* rax55;
    signed char al56;
    signed char* rax57;
    signed char* rax58;
    signed char al59;

    *rax1 = *rax2 + 1;
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    *rax9 = reinterpret_cast<signed char>(*rax10 + al11);
    *rax12 = reinterpret_cast<signed char>(*rax13 + al14);
    *rax15 = reinterpret_cast<signed char>(*rax16 + al17);
    *rax18 = reinterpret_cast<signed char>(*rax19 + al20);
    *rax21 = reinterpret_cast<signed char>(*rax22 + al23);
    *rax24 = reinterpret_cast<signed char>(*rax25 + al26);
    *rax27 = reinterpret_cast<signed char>(*rax28 + al29);
    *rax30 = reinterpret_cast<signed char>(*rax31 + al32);
    *rax33 = reinterpret_cast<signed char>(*rax34 + al35);
    *rax36 = reinterpret_cast<signed char>(*rax37 + al38);
    *rax39 = reinterpret_cast<signed char>(*rax40 + al41);
    *rax42 = reinterpret_cast<signed char>(*rax43 + al44);
    *rax45 = reinterpret_cast<signed char>(*rax46 + al47);
    *rax48 = reinterpret_cast<signed char>(*rax49 + al50);
    *rax51 = reinterpret_cast<signed char>(*rax52 + al53);
    *rax54 = reinterpret_cast<signed char>(*rax55 + al56);
    *rax57 = reinterpret_cast<signed char>(*rax58 + al59);
}

/* .refptr.mingw_initltsdrot_force */
int32_t* refptr_mingw_initltsdrot_force = reinterpret_cast<int32_t*>(0x408948);

/* .refptr.mingw_initltsdyn_force */
int32_t* refptr_mingw_initltsdyn_force = reinterpret_cast<int32_t*>(0x408944);

/* .refptr.mingw_initltssuo_force */
int32_t* refptr_mingw_initltssuo_force = reinterpret_cast<int32_t*>(0x408940);

/* .refptr.mingw_initcharmax */
int32_t* refptr_mingw_initcharmax = reinterpret_cast<int32_t*>(0x408980);

struct s37 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f24;
    signed char[90] pad116;
    uint32_t f116;
    signed char[12] pad132;
    uint32_t f132;
    signed char[96] pad232;
    int32_t f232;
    signed char[12] pad248;
    int32_t f248;
};

/* .refptr.__onexitend */
int64_t* refptr___onexitend = reinterpret_cast<int64_t*>(0x408a38);

/* .refptr.__onexitbegin */
int64_t* refptr___onexitbegin = reinterpret_cast<int64_t*>(0x408a30);

/* .refptr._fmode */
int32_t* refptr__fmode = reinterpret_cast<int32_t*>(0x408970);

/* .refptr.__imp__fmode */
int32_t** refptr___imp__fmode = reinterpret_cast<int32_t**>(0x409334);

/* .refptr._MINGW_INSTALL_DEBUG_MATHERR */
int32_t* refptr__MINGW_INSTALL_DEBUG_MATHERR = reinterpret_cast<int32_t*>(0x404050);

void _matherr(uint32_t* rcx);

int64_t pre_c_init() {
    int32_t* rax1;
    int32_t edx2;
    int32_t* rax3;
    int32_t* rax4;
    int32_t* rax5;
    struct s5* rax6;
    struct s37* rax7;
    uint32_t ecx8;
    int32_t* rax9;
    int64_t rax10;
    int64_t* rdx11;
    int64_t* rdx12;
    int32_t* rax13;
    int32_t** rax14;
    int32_t* rax15;

    rax1 = refptr_mingw_initltsdrot_force;
    edx2 = 0;
    *rax1 = 1;
    rax3 = refptr_mingw_initltsdyn_force;
    *rax3 = 1;
    rax4 = refptr_mingw_initltssuo_force;
    *rax4 = 1;
    rax5 = refptr_mingw_initcharmax;
    *rax5 = 1;
    rax6 = refptr___image_base__;
    if (rax6->f0 == 0x5a4d && (rax7 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rax6) + rax6->f60), rax7->f0 == 0x4550)) {
        ecx8 = static_cast<uint32_t>(rax7->f24);
        if (*reinterpret_cast<int16_t*>(&ecx8) == 0x10b) {
            if (rax7->f116 > 14) {
                edx2 = 0;
                *reinterpret_cast<unsigned char*>(&edx2) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!rax7->f232));
            }
        } else {
            if (*reinterpret_cast<int16_t*>(&ecx8) == 0x20b && rax7->f132 > 14) {
                edx2 = 0;
                *reinterpret_cast<unsigned char*>(&edx2) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!rax7->f248));
            }
        }
    }
    rax9 = refptr_mingw_app_type;
    managedapp = edx2;
    if (!*rax9) {
        __set_app_type(1);
    } else {
        __set_app_type(2);
    }
    rax10 = _encode_pointer(-1);
    rdx11 = refptr___onexitend;
    *rdx11 = rax10;
    rdx12 = refptr___onexitbegin;
    *rdx12 = rax10;
    rax13 = refptr__fmode;
    rax14 = refptr___imp__fmode;
    **rax14 = *rax13;
    text(-1);
    rax15 = refptr__MINGW_INSTALL_DEBUG_MATHERR;
    if (*rax15 == 1) {
        __mingw_setusermatherr(_matherr);
        return 0;
    } else {
        return 0;
    }
}

/* .refptr._newmode */
int32_t* refptr__newmode = reinterpret_cast<int32_t*>(0x408960);

int32_t __bss_start__;

/* .refptr._dowildcard */
int32_t* refptr__dowildcard = reinterpret_cast<int32_t*>(0x408950);

int32_t argret;

void pre_cpp_init() {
    int32_t* rax1;
    int32_t* rax2;
    int64_t r9_3;
    int32_t eax4;

    rax1 = refptr__newmode;
    __bss_start__ = *rax1;
    rax2 = refptr__dowildcard;
    *reinterpret_cast<int32_t*>(&r9_3) = *rax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_3) + 4) = 0;
    eax4 = __getmainargs(0x408028, 0x408020, 0x408018, r9_3);
    argret = eax4;
    return;
}

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    signed char[4] pad4;
    int32_t f4;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f4;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

void fun_401d71(struct s1* rcx, struct s1* rdx, void** r8, struct s1* r9) {
    int32_t* rdi5;
    int32_t* rsi6;
    struct s38* rdi7;
    struct s39* rdi8;
    struct s2* rsi9;
    struct s40* rdi10;
    struct s41* rsi11;
    struct s42* rdi12;
    struct s43* rsi13;
    struct s3* rax14;
    struct s44* rdi15;
    struct s45* rsi16;
    int32_t* rsi17;
    int64_t v18;

    *rdi5 = *rsi6;
    rdi7 = reinterpret_cast<struct s38*>(&rdi8->f4);
    rsi9 = rcx->f8;
    rdi7->f0 = rsi9->f0;
    rdi10 = reinterpret_cast<struct s40*>(&rdi7->f4);
    rsi11 = reinterpret_cast<struct s41*>(&rsi9->f4);
    rdi10->f0 = rsi11->f0;
    rdi12 = reinterpret_cast<struct s42*>(&rdi10->f4);
    rsi13 = reinterpret_cast<struct s43*>(&rsi11->f4);
    rax14 = __iob_func(rcx, rdx, r8, r9, __return_address());
    rdi12->f0 = rsi13->f0;
    rdi15 = reinterpret_cast<struct s44*>(&rdi12->f4);
    rsi16 = reinterpret_cast<struct s45*>(&rsi13->f4);
    rdi15->f0 = rsi16->f0;
    rsi17 = &rsi16->f4;
    rdi15->f4 = *rsi17;
    fprintf(&rax14->f96, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n", "Argument domain error (DOMAIN)", rsi17, __return_address());
    __asm__("movaps xmm6, [rsp+0x40]");
    __asm__("movaps xmm7, [rsp+0x50]");
    __asm__("movaps xmm8, [rsp+0x60]");
    goto v18;
}

void fun_401de0() {
    goto 0x401d80;
}

int64_t __mingw_oldexcpt_handler;

void fun_402669() {
    int32_t eax1;
    int64_t rax2;
    int64_t rax3;
    uint32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int64_t rax9;
    int64_t v10;

    if (eax1 == 0xc0000094) {
        rax2 = signal(8);
        if (rax2 == 1) {
            signal(8, 8);
            goto addr_0x402633_5;
        } else {
            addr_0x4026c4_6:
            if (!rax2) {
                addr_0x402652_7:
                rax3 = __mingw_oldexcpt_handler;
                if (rax3) {
                    goto rax3;
                }
            } else {
                rax2(8);
            }
        }
    } else {
        if (eax4 <= 0xc0000094) {
            if (eax5 != 0xc0000092) {
                if (eax6 != 0xc0000093)
                    goto addr_0x402652_7;
                rax2 = signal(8);
                if (rax2 != 1)
                    goto addr_0x4026c4_6;
                signal(8, 8);
                text(8, 1);
                goto addr_0x402633_5;
            }
        }
        if (eax7 == 0xc0000095) {
            addr_0x402633_5:
        } else {
            if (eax8 != 0xc0000096)
                goto addr_0x402652_7;
            rax9 = signal(4);
            if (rax9 == 1)
                goto addr_0x402764_18; else
                goto addr_0x402718_19;
        }
    }
    addr_0x402638_20:
    goto v10;
    addr_0x402764_18:
    signal(4, 4);
    goto addr_0x402633_5;
    addr_0x402718_19:
    if (!rax9)
        goto addr_0x402652_7;
    rax9(4);
    goto addr_0x402638_20;
}

struct s46 {
    signed char[4] pad4;
    unsigned char f4;
};

void fun_4026da(int64_t rcx, struct s46* rdx) {
    uint32_t eax3;
    uint32_t eax4;
    int32_t eax5;
    uint32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int64_t rax11;

    if (!(rdx->f4 & 1)) {
        goto 0x402633;
    }
    if (eax3 > 0xc0000091)
        goto 0x402670;
    if (eax4 >= 0xc000008d)
        goto 0x402687;
    if (eax5 == 0xc0000008)
        goto 0x402633;
    if (eax6 <= 0xc0000008)
        goto addr_0x402603_8;
    if (eax7 == 0xc000001d)
        goto 0x402706;
    if (eax8 == 0xc000008c)
        goto 0x402633; else
        goto "???";
    addr_0x402603_8:
    if (eax9 == 0x80000002)
        goto 0x402633;
    if (eax10 != 0xc0000005)
        goto 0x402652;
    rax11 = signal(11);
    if (rax11 != 1)
        goto addr_0x402627_13;
    signal(11, 11);
    goto 0x402633;
    addr_0x402627_13:
    if (!rax11)
        goto 0x402652;
    rax11(11);
}

/* .text */
int64_t text() {
    int32_t edx1;
    int32_t edx2;

    if (!edx1 || edx2 == 3) {
        __mingw_TLScallback();
        return 1;
    } else {
        return 1;
    }
}

void fun_402a8e() {
    int64_t* rbx1;
    int64_t v2;
    int64_t rax3;
    int64_t v4;

    rbx1 = reinterpret_cast<int64_t*>(0x40a060);
    if (1) {
        goto v2;
    } else {
        do {
            rax3 = *rbx1;
            if (rax3) {
                rax3();
            }
            ++rbx1;
        } while (!reinterpret_cast<int1_t>(rbx1 == 0x40a060));
        goto v4;
    }
}

void fun_402bea() {
    goto text;
}

int64_t _IsNonwritableInCurrentImage(int64_t rcx) {
    struct s5* rbx2;
    int64_t rax3;
    struct s20* rax4;
    int64_t rax5;

    rbx2 = refptr___image_base__;
    *reinterpret_cast<int32_t*>(&rax3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (rbx2->f0 == 0x5a4d && (rax3 = text(rbx2), !!*reinterpret_cast<int32_t*>(&rax3))) {
        rax4 = _FindPESection(rbx2, rcx - reinterpret_cast<int64_t>(rbx2));
        if (!rax4) {
            *reinterpret_cast<int32_t*>(&rax3) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rax5) = reinterpret_cast<uint32_t>(~rax4->f36) >> 31;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
            return rax5;
        }
    }
    return rax3;
}

struct s47 {
    signed char[60] pad60;
    int32_t f60;
};

struct s48 {
    signed char[4] pad4;
    int32_t f4;
    signed char[4] pad12;
    int32_t f12;
};

void fun_402ed6() {
    struct s5* rdi1;
    int64_t rax2;
    int64_t rdi3;
    struct s47* rdi4;
    uint64_t rbx5;
    struct s5* rdi6;
    struct s20* rax7;
    int64_t v8;
    struct s48* rbx9;
    int64_t rdi10;
    struct s48* rdx11;
    int32_t esi12;
    int64_t v13;
    int64_t v14;

    rax2 = text(rdi1);
    if (!*reinterpret_cast<int32_t*>(&rax2) || (!*reinterpret_cast<int32_t*>(rdi3 + rdi4->f60 + 0x90) || (*reinterpret_cast<int32_t*>(&rbx5) = *reinterpret_cast<int32_t*>(rdi3 + rdi4->f60 + 0x90), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0, rax7 = _FindPESection(rdi6, rbx5), rax7 == 0))) {
        addr_0x402eca_3:
        goto v8;
    } else {
        rbx9 = reinterpret_cast<struct s48*>(rbx5 + rdi10);
        rdx11 = rbx9;
        if (rbx9) {
            while (rdx11->f4 || rdx11->f12) {
                if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi12 < 0) | reinterpret_cast<uint1_t>(esi12 == 0)))
                    goto addr_0x402f39_7;
                --esi12;
                rdx11 = reinterpret_cast<struct s48*>(reinterpret_cast<uint64_t>(rdx11) + 20);
            }
        } else {
            goto addr_0x402eca_3;
        }
    }
    goto v13;
    addr_0x402f39_7:
    goto v14;
}

int64_t ___w64_mingwthr_add_key_dtor(int32_t ecx, int64_t rdx) {
    int64_t rax3;
    struct s36* rax4;
    struct s36* rax5;

    *reinterpret_cast<int32_t*>(&rax3) = __mingwthr_cs_init;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax3)) {
        rax4 = calloc(1, 24);
        if (!rax4) {
            *reinterpret_cast<int32_t*>(&rax3) = -1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        } else {
            rax4->f0 = ecx;
            rax4->f8 = rdx;
            EnterCriticalSection(0x4089c0, 24);
            rax5 = bss;
            bss = rax4;
            rax4->f16 = rax5;
            LeaveCriticalSection(0x4089c0, 24);
            return 0;
        }
    }
    return rax3;
}

void fun_403067(int32_t ecx) {
    int32_t ebx2;
    struct s36* rdx3;
    struct s36* rcx4;
    int64_t v5;

    ebx2 = ecx;
    EnterCriticalSection(0x4089c0);
    rdx3 = bss;
    if (!rdx3) {
        addr_0x4030a7_3:
        LeaveCriticalSection(0x4089c0);
    } else {
        if (rdx3->f0 != ebx2) {
            while (rdx3->f16) {
                if (rdx3->f16->f0 == ebx2)
                    goto addr_0x4030c0_7;
                rdx3 = rdx3->f16;
            }
            goto addr_0x4030a7_3;
        } else {
            rcx4 = rdx3;
            bss = rdx3->f16;
            goto addr_0x4030cb_11;
        }
    }
    addr_0x4030b4_12:
    goto v5;
    addr_0x4030c0_7:
    rcx4 = rdx3->f16;
    rdx3->f16 = rdx3->f16->f16;
    addr_0x4030cb_11:
    free(rcx4);
    LeaveCriticalSection(0x4089c0);
    goto addr_0x4030b4_12;
}

int64_t __C_specific_handler = 0x95e4;

void __C_specific_handler() {
    goto __C_specific_handler;
}

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    signed char[4] pad4;
    int32_t f4;
};

struct s51 {
    int32_t f0;
    int32_t f4;
};

struct s52 {
    signed char[4] pad4;
    int32_t f4;
};

struct s53 {
    int32_t f0;
    int32_t f4;
};

struct s54 {
    int32_t f0;
    int32_t f4;
};

/* .text */
void text(int32_t ecx, int64_t rdx) {
    int64_t rax3;
    int32_t* rdi4;
    int32_t* rsi5;
    struct s49* rdi6;
    struct s50* rdi7;
    struct s51* rsi8;
    struct s52* rsi9;
    struct s53* rdi10;
    struct s54* rsi11;

    rax3 = bss;
    if (rax3) {
        *rdi4 = *rsi5;
        rdi6 = reinterpret_cast<struct s49*>(&rdi7->f4);
        rsi8 = reinterpret_cast<struct s51*>(&rsi9->f4);
        rdi6->f0 = rsi8->f0;
        rdi10 = reinterpret_cast<struct s53*>(&rdi6->f4);
        rsi11 = reinterpret_cast<struct s54*>(&rsi8->f4);
        rdi10->f0 = rsi11->f0;
        rdi10->f4 = rsi11->f4;
        rax3(reinterpret_cast<int64_t>(__zero_stack_offset()) - 88 + 32);
    }
    return;
}

int64_t mainCRTStartup(int64_t rcx, void** rdx, void** r8) {
    int32_t* rax4;
    int64_t rax5;

    rax4 = refptr_mingw_app_type;
    *rax4 = 0;
    text(rcx, rdx, r8);
    rax5 = __tmainCRTStartup(rcx, rdx, r8);
    return rax5;
}

void tolower() {
    goto tolower;
}

void fun_401df0() {
    goto 0x401d80;
}

void _gnu_exception_handler(uint32_t** rcx) {
    if ((**rcx & 0x20ffffff) == 0x20474343)
        goto 0x4026e0; else
        goto "???";
}

struct s55 {
    int64_t f0;
    int64_t f8;
};

/* .data */
struct s55* data = reinterpret_cast<struct s55*>(0x4033d8);

/* .text */
void text() {
    struct s55* rax1;
    int64_t rax2;
    struct s55* rax3;

    rax1 = data;
    rax2 = rax1->f0;
    if (rax2) {
        do {
            rax2();
            rax3 = data;
            rax2 = rax3->f8;
            data = reinterpret_cast<struct s55*>(&rax3->f8);
        } while (rax2);
    }
    return;
}

int64_t __lconv_init = 0x9634;

/* .text */
void text() {
    int64_t rax1;

    rax1 = __lconv_init;
    goto rax1;
}

/* .refptr._CRT_MT */
int32_t* refptr__CRT_MT = reinterpret_cast<int32_t*>(0x404040);

void __dyn_tls_init() {
    int32_t* rax1;
    int32_t edx2;
    int32_t edx3;

    rax1 = refptr__CRT_MT;
    if (*rax1 != 2) {
        *rax1 = 2;
    }
    if (edx2 == 2)
        goto 0x402a90;
    if (edx3 != 1)
        goto "???";
    __mingw_TLScallback();
    goto 0x402a82;
}

int64_t __tlregdtor() {
    return 0;
}

int64_t _onexit = 0x96b4;

void _onexit() {
    goto _onexit;
}

int64_t _ValidateImageBase(int16_t* rcx) {
    if (*rcx == 0x5a4d)
        goto 0x402bf0;
    return 0;
}

void __mingw_enum_import_library_names(int32_t ecx) {
    struct s5* rdi2;

    rdi2 = refptr___image_base__;
    if (rdi2->f0 == 0x5a4d)
        goto 0x402ee0; else
        goto "???";
}

int64_t ___w64_mingwthr_remove_key_dtor() {
    int32_t eax1;

    eax1 = __mingwthr_cs_init;
    if (eax1)
        goto 0x403070;
    return 0;
}

void _matherr(uint32_t* rcx) {
    int64_t rdx2;

    __asm__("movaps [rsp+0x40], xmm6");
    __asm__("movaps [rsp+0x50], xmm7");
    __asm__("movaps [rsp+0x60], xmm8");
    if (*rcx > 6) {
        goto 0x401d80;
    } else {
        *reinterpret_cast<uint32_t*>(&rdx2) = *rcx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx2) + 4) = 0;
        goto 0x4055a4 + *reinterpret_cast<int32_t*>(0x4055a4 + rdx2 * 4);
    }
}

/* .text */
int64_t text() {
    int64_t rax1;

    rax1 = bss;
    return rax1;
}

void fun_401e00() {
    goto 0x401d80;
}

int64_t RtlCaptureContext = 0x951c;

void** g408478;

int64_t RtlLookupFunctionEntry = 0x9530;

void* g408418;

int64_t g408400;

int32_t GS_ExceptionRecord;

int32_t g408884;

void** g408890;

int64_t UnhandledExceptionFilter = 0x95a6;

int64_t GetCurrentProcess = 0x942c;

int64_t TerminateProcess = 0x9584;

int64_t RtlVirtualUnwind = 0x954a;

void __report_gsfailure(int64_t rcx) {
    void** v2;
    void* rbp3;
    int64_t rsi4;
    void** rbx5;
    void** r8_6;
    struct s1* rdx7;
    struct s1* rax8;
    struct s1* r9_9;
    void** rax10;
    struct s1* rax11;
    struct s1* v12;

    v2 = reinterpret_cast<void**>(__return_address());
    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8);
    rsi4 = rcx;
    RtlCaptureContext(0x408380);
    rbx5 = g408478;
    *reinterpret_cast<int32_t*>(&r8_6) = 0;
    *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
    rdx7 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbp3) - 40);
    rax8 = reinterpret_cast<struct s1*>(RtlLookupFunctionEntry(rbx5, rdx7));
    r9_9 = rax8;
    if (!rax8) {
        while (1) {
            g408478 = v2;
            g408418 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp3) + 8);
            addr_0x4029a3_3:
            rax10 = g408478;
            g408400 = rsi4;
            GS_ExceptionRecord = 0xc0000409;
            g408884 = 1;
            g408890 = rax10;
            SetUnhandledExceptionFilter();
            UnhandledExceptionFilter(0x4056e0, rdx7, r8_6, r9_9);
            rax11 = reinterpret_cast<struct s1*>(GetCurrentProcess(0x4056e0, rdx7, r8_6, r9_9));
            *reinterpret_cast<int32_t*>(&rdx7) = 0xc0000409;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
            TerminateProcess(rax11, 0xc0000409, r8_6, r9_9);
            abort(rax11, 0xc0000409, r8_6, r9_9);
        }
    } else {
        r8_6 = rbx5;
        rdx7 = v12;
        RtlVirtualUnwind();
        goto addr_0x4029a3_3;
    }
}

void __lconv_init() {
    goto __lconv_init;
}

void fun_401e10() {
    goto 0x401d80;
}

void Sleep() {
    goto Sleep;
}

void fun_401e20() {
    goto 0x401d80;
}

void SetUnhandledExceptionFilter() {
    goto SetUnhandledExceptionFilter;
}

void GetStartupInfoA() {
    goto GetStartupInfoA;
}

void VirtualQuery() {
    goto VirtualQuery;
}

void VirtualProtect() {
    goto VirtualProtect;
}

void GetLastError() {
    goto GetLastError;
}

void RtlAddFunctionTable() {
    goto RtlAddFunctionTable;
}

void GetSystemTimeAsFileTime() {
    goto GetSystemTimeAsFileTime;
}

void GetCurrentProcessId() {
    goto GetCurrentProcessId;
}

void GetCurrentThreadId() {
    goto GetCurrentThreadId;
}

void GetTickCount() {
    goto GetTickCount;
}

void QueryPerformanceCounter() {
    goto QueryPerformanceCounter;
}

void RtlCaptureContext() {
    goto RtlCaptureContext;
}

void RtlLookupFunctionEntry() {
    goto RtlLookupFunctionEntry;
}

void RtlVirtualUnwind() {
    goto RtlVirtualUnwind;
}

void UnhandledExceptionFilter() {
    goto UnhandledExceptionFilter;
}

void GetCurrentProcess() {
    goto GetCurrentProcess;
}

void TerminateProcess() {
    goto TerminateProcess;
}

void EnterCriticalSection() {
    goto EnterCriticalSection;
}

void TlsGetValue() {
    goto TlsGetValue;
}

void LeaveCriticalSection() {
    goto LeaveCriticalSection;
}

void DeleteCriticalSection() {
    goto DeleteCriticalSection;
}

void InitializeCriticalSection() {
    goto InitializeCriticalSection;
}
