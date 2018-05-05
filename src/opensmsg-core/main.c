#include <cstdio>
#include <cstdlib>
/* If using gl3.h */
/* Ensure we are using opengl's core profile only */
//#define GL3_PROTOTYPES 1
//#include </gl3.h>

#include <SDL/SDL.h>

#define PROGRAM_NAME "Tutorial1"

/* A simple function that prints a message, the error code returned by SDL,
 * and quits the application */

void *g0;
/* KERNEL32.dll:1073295556 */
int KERNEL32_dll_1073295556 = 0xbff930c4;
int g83e130;
unsigned int g83e12c;
unsigned int g83e128;
unsigned int g83e124;

int fun_4a70be();

void fun_4a60cc(int ecx);

int fun_4a855c(int ecx, int a2, int a3, int a4);

void fun_4a8b6f(int ecx, int a2, int a3, int a4);

/* KERNEL32.dll:1073268609 */
int KERNEL32_dll_1073268609 = 0xbff8c781;
int g83f820;

int fun_4aa9b0(int ecx, int a2, int a3, int a4);

int g83e164;

void fun_4aa763(int ecx, int a2, int a3, int a4);

void fun_4aa6aa(int ecx, int a2, int a3, int a4);

void fun_4a484b(int ecx, int a2, int a3, int a4);

/* KERNEL32.dll:1073182765 */
int KERNEL32_dll_1073182765 = 0xbff7782d;

int fun_4aa652(int ecx, void *a2, int a3, int a4, int a5);

/* KERNEL32.dll:1073182614 */
int KERNEL32_dll_1073182614 = 0xbff77796;

int fun_45b3c0(int ecx, int a2, int a3, int a4, int a5, unsigned int a6, void *a7, int a8, int a9, int a10);

void fun_4a4878(int ecx);

void fun_4aa4da();

int main() {
    void *esp1;
    int edi2;
    int esi3;
    int ebx4;
    unsigned int eax5;
    int edx6;
    unsigned int ecx7;
    int eax8;
    int ecx9;
    int eax10;
    int eax11;
    int eax12;
    void *v13;
    int eax14;
    unsigned int eax15;
    uint16_t v16;
    int eax17;
    int eax18;

    esp1 = reinterpret_cast<void *>(reinterpret_cast<int>(__zero_stack_offset()) - 4);
    g0 = reinterpret_cast<void *>(reinterpret_cast<int>(esp1) - 4 - 4 - 4 - 4);
    eax5 = reinterpret_cast<unsigned int>(KERNEL32_dll_1073295556(edi2, esi3, ebx4));
    edx6 = 0;
    *reinterpret_cast<signed char *>(&edx6) = *reinterpret_cast<signed char *>(reinterpret_cast<int>(&eax5) + 1);
    g83e130 = edx6;
    ecx7 = eax5 & 0xff;
    g83e12c = ecx7;
    g83e128 = (ecx7 << 8) + edx6;
    g83e124 = eax5 >> 16;
    eax8 = fun_4a70be();
    ecx9 = 1;
    if (!eax8) {
        fun_4a60cc(1);
        ecx9 = 28;
    }
    eax10 = fun_4a855c(ecx9, edi2, esi3, ebx4);
    if (!eax10) {
        fun_4a60cc(ecx9);
        ecx9 = 16;
    }
    fun_4a8b6f(ecx9, edi2, esi3, ebx4);
    eax11 = reinterpret_cast<int>(KERNEL32_dll_1073268609(ecx9, edi2, esi3, ebx4));
    g83f820 = eax11;
    eax12 = fun_4aa9b0(ecx9, edi2, esi3, ebx4);
    g83e164 = eax12;
    fun_4aa763(ecx9, edi2, esi3, ebx4);
    fun_4aa6aa(ecx9, edi2, esi3, ebx4);
    fun_4a484b(ecx9, edi2, esi3, ebx4);
    v13 = reinterpret_cast<void *>(reinterpret_cast<int>(esp1) - 92);
    KERNEL32_dll_1073182765(ecx9, v13, edi2, esi3, ebx4);
    eax14 = fun_4aa652(ecx9, v13, edi2, esi3, ebx4);
    if (1) {
        eax15 = 10;
    } else {
        eax15 = v16;
    }
    eax17 = reinterpret_cast<int>(KERNEL32_dll_1073182614(ecx9, 0, 0, eax14, eax15, v13, edi2, esi3, ebx4));
    eax18 = fun_45b3c0(ecx9, eax17, 0, 0, eax14, eax15, v13, edi2, esi3, ebx4);
    fun_4a4878(ecx9);
    fun_4aa4da();
    goto eax18;
    return
}

/* KERNEL32.dll:1073253752 */
int KERNEL32_dll_1073253752 = 0xbff88d78;

int g83f81c;

int fun_4a7199();

/* KERNEL32.dll:1073180451 */
int KERNEL32_dll_1073180451 = 0xbff76f23;

void fun_4a70be(int a1) {
    int eax2;
    int eax3;
    int eax4;
    int v5;

    eax2 = 0;
    *reinterpret_cast<unsigned char *>(&eax2) = reinterpret_cast<uint1_t>(a1 == 0);
    eax3 = reinterpret_cast<int>(KERNEL32_dll_1073253752());
    g83f81c = eax3;
    if (eax3) {
        eax4 = fun_4a7199();
        if (eax4) {
            goto eax2;
        } else {
            v5 = g83f81c;
            KERNEL32_dll_1073180451(v5);
        }
    }
    goto eax2;
}
