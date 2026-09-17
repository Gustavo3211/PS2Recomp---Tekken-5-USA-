#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B18A8
// Address: 0x4b18a8 - 0x4b20a0
void sub_004B18A8_0x4b18a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B18A8_0x4b18a8");
#endif

    switch (ctx->pc) {
        case 0x4b1d58u: goto label_4b1d58;
        case 0x4b1e34u: goto label_4b1e34;
        case 0x4b1e44u: goto label_4b1e44;
        case 0x4b1e58u: goto label_4b1e58;
        case 0x4b1e7cu: goto label_4b1e7c;
        case 0x4b1e8cu: goto label_4b1e8c;
        case 0x4b1ea0u: goto label_4b1ea0;
        case 0x4b1ec4u: goto label_4b1ec4;
        case 0x4b1ed4u: goto label_4b1ed4;
        case 0x4b1ee8u: goto label_4b1ee8;
        case 0x4b1f70u: goto label_4b1f70;
        case 0x4b1fd0u: goto label_4b1fd0;
        default: break;
    }

    ctx->pc = 0x4b18a8u;

    // 0x4b18a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b18a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b18ac: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b18acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b18b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b18b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b18b4: 0x24680d30  addiu       $t0, $v1, 0xD30
    ctx->pc = 0x4b18b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x4b18b8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4b18b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b18bc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4b18bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4b18c0: 0x852201b6  lh          $v0, 0x1B6($t1)
    ctx->pc = 0x4b18c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 438)));
    // 0x4b18c4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b18c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b18c8: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4b18c8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b18cc: 0x24e70d34  addiu       $a3, $a3, 0xD34
    ctx->pc = 0x4b18ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3380));
    // 0x4b18d0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b18d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b18d4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4b18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D34u));
    // 0x4b18d8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b18d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b18dc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b18dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b18e0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b18e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b18e4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b18e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b18e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b18e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b18ec: 0x85220160  lh          $v0, 0x160($t1)
    ctx->pc = 0x4b18ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 352)));
    // 0x4b18f0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4b18f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b18f4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b18f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b18f8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b18f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b18fc: 0x30630060  andi        $v1, $v1, 0x60
    ctx->pc = 0x4b18fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
    // 0x4b1900: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b1900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b1904: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b1904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b1908: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4b1908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4b190c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4b190cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b1910: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4b1910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4b1914: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b1914u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b1918: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x4b1918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x4b191c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b1920: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4b1920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1924: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b1924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b1928: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4b1928u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b192c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b192cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b1930: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b1930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b1934: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1934u;
    {
        const bool branch_taken_0x4b1934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1934u;
        // 0x4b1938: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1934) {
            ctx->pc = 0x4B1948u;
            goto label_4b1948;
        }
    }
    ctx->pc = 0x4B193Cu;
    // 0x4b193c: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b193cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x4b1940: 0xa460015e  sh          $zero, 0x15E($v1)
    ctx->pc = 0x4b1940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b1944: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4b1944u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4b1948:
    // 0x4b1948: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1948u;
    {
        const bool branch_taken_0x4b1948 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1948u;
        // 0x4b194c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1948) {
            ctx->pc = 0x4B1958u;
            goto label_4b1958;
        }
    }
    ctx->pc = 0x4B1950u;
    // 0x4b1950: 0xa522015e  sh          $v0, 0x15E($t1)
    ctx->pc = 0x4b1950u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1954: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4b1954u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4b1958:
    // 0x4b1958: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4b1958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b195c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x4b195cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b1960: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4b1960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4b1964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b1964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1968: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b1968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b196c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b196cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1970: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1974: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b1974u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b1978: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b197c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b197cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1980: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4b1980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4b1984: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b1984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b1988: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b198c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b198cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b1990: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b1990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1994: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b1994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b1998: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b1998u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b199c: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B199Cu;
    {
        const bool branch_taken_0x4b199c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4B19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B199Cu;
        // 0x4b19a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b199c) {
            ctx->pc = 0x4B19E0u;
            goto label_4b19e0;
        }
    }
    ctx->pc = 0x4B19A4u;
    // 0x4b19a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B19A4u;
    {
        const bool branch_taken_0x4b19a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b19a4) {
            ctx->pc = 0x4B19A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B19A4u;
            // 0x4b19a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B19C0u;
            goto label_4b19c0;
        }
    }
    ctx->pc = 0x4B19ACu;
    // 0x4b19ac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B19ACu;
    {
        const bool branch_taken_0x4b19ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B19ACu;
        // 0x4b19b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b19ac) {
            ctx->pc = 0x4B19D8u;
            goto label_4b19d8;
        }
    }
    ctx->pc = 0x4B19B4u;
    // 0x4b19b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B19B4u;
    {
        const bool branch_taken_0x4b19b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b19b4) {
            ctx->pc = 0x4B1A08u;
            goto label_4b1a08;
        }
    }
    ctx->pc = 0x4B19BCu;
    // 0x4b19bc: 0x0  nop
    ctx->pc = 0x4b19bcu;
    // NOP
label_4b19c0:
    // 0x4b19c0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B19C0u;
    {
        const bool branch_taken_0x4b19c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B19C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B19C0u;
        // 0x4b19c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b19c0) {
            ctx->pc = 0x4B19F0u;
            goto label_4b19f0;
        }
    }
    ctx->pc = 0x4B19C8u;
    // 0x4b19c8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B19C8u;
    {
        const bool branch_taken_0x4b19c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B19C8u;
        // 0x4b19cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b19c8) {
            ctx->pc = 0x4B1A00u;
            goto label_4b1a00;
        }
    }
    ctx->pc = 0x4B19D0u;
    // 0x4b19d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B19D0u;
    {
        const bool branch_taken_0x4b19d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b19d0) {
            ctx->pc = 0x4B1A08u;
            goto label_4b1a08;
        }
    }
    ctx->pc = 0x4B19D8u;
label_4b19d8:
    // 0x4b19d8: 0x812c826  j           func_4B2098
    ctx->pc = 0x4B19D8u;
    ctx->pc = 0x4B19DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B19D8u;
    // 0x4b19dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2098u;
    goto label_4b2098;
    ctx->pc = 0x4B19E0u;
label_4b19e0:
    // 0x4b19e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b19e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b19e4: 0x812c684  j           func_4B1A10
    ctx->pc = 0x4B19E4u;
    ctx->pc = 0x4B19E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B19E4u;
    // 0x4b19e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1A10u;
    goto label_4b1a10;
    ctx->pc = 0x4B19ECu;
    // 0x4b19ec: 0x0  nop
    ctx->pc = 0x4b19ecu;
    // NOP
label_4b19f0:
    // 0x4b19f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b19f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b19f4: 0x812c6b2  j           func_4B1AC8
    ctx->pc = 0x4B19F4u;
    ctx->pc = 0x4B19F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B19F4u;
    // 0x4b19f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1AC8u;
    goto label_4b1ac8;
    ctx->pc = 0x4B19FCu;
    // 0x4b19fc: 0x0  nop
    ctx->pc = 0x4b19fcu;
    // NOP
label_4b1a00:
    // 0x4b1a00: 0x812c826  j           func_4B2098
    ctx->pc = 0x4B1A00u;
    ctx->pc = 0x4B1A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1A00u;
    // 0x4b1a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2098u;
    goto label_4b2098;
    ctx->pc = 0x4B1A08u;
label_4b1a08:
    // 0x4b1a08: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A08u;
        // 0x4b1a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1A10u;
label_4b1a10:
    // 0x4b1a10: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b1a14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1a1c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b1a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b1a20: 0x8c460d60  lw          $a2, 0xD60($v0)
    ctx->pc = 0x4b1a20u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1a24: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b1a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b1a28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b1a2c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b1a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b1a30: 0x84c2015e  lh          $v0, 0x15E($a2)
    ctx->pc = 0x4b1a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 350)));
    // 0x4b1a34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b1a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1a38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1a3c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b1a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b1a40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1a44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b1a48: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b1a48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1a4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b1a50: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b1a50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b1a54: 0x10680010  beq         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B1A54u;
    {
        const bool branch_taken_0x4b1a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x4B1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A54u;
        // 0x4b1a58: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a54) {
            ctx->pc = 0x4B1A98u;
            goto label_4b1a98;
        }
    }
    ctx->pc = 0x4B1A5Cu;
    // 0x4b1a5c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B1A5Cu;
    {
        const bool branch_taken_0x4b1a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1a5c) {
            ctx->pc = 0x4B1A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1A5Cu;
            // 0x4b1a60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1A78u;
            goto label_4b1a78;
        }
    }
    ctx->pc = 0x4B1A64u;
    // 0x4b1a64: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B1A64u;
    {
        const bool branch_taken_0x4b1a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A64u;
        // 0x4b1a68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a64) {
            ctx->pc = 0x4B1A90u;
            goto label_4b1a90;
        }
    }
    ctx->pc = 0x4B1A6Cu;
    // 0x4b1a6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B1A6Cu;
    {
        const bool branch_taken_0x4b1a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1a6c) {
            ctx->pc = 0x4B1AC0u;
            goto label_4b1ac0;
        }
    }
    ctx->pc = 0x4B1A74u;
    // 0x4b1a74: 0x0  nop
    ctx->pc = 0x4b1a74u;
    // NOP
label_4b1a78:
    // 0x4b1a78: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B1A78u;
    {
        const bool branch_taken_0x4b1a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A78u;
        // 0x4b1a7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a78) {
            ctx->pc = 0x4B1AA8u;
            goto label_4b1aa8;
        }
    }
    ctx->pc = 0x4B1A80u;
    // 0x4b1a80: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B1A80u;
    {
        const bool branch_taken_0x4b1a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A80u;
        // 0x4b1a84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1a80) {
            ctx->pc = 0x4B1AB8u;
            goto label_4b1ab8;
        }
    }
    ctx->pc = 0x4B1A88u;
    // 0x4b1a88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B1A88u;
    {
        const bool branch_taken_0x4b1a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1a88) {
            ctx->pc = 0x4B1AC0u;
            goto label_4b1ac0;
        }
    }
    ctx->pc = 0x4B1A90u;
label_4b1a90:
    // 0x4b1a90: 0x812c714  j           func_4B1C50
    ctx->pc = 0x4B1A90u;
    ctx->pc = 0x4B1A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1A90u;
    // 0x4b1a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1C50u;
    goto label_4b1c50;
    ctx->pc = 0x4B1A98u;
label_4b1a98:
    // 0x4b1a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1a9c: 0x812c6e0  j           func_4B1B80
    ctx->pc = 0x4B1A9Cu;
    ctx->pc = 0x4B1AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1A9Cu;
    // 0x4b1aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1B80u;
    goto label_4b1b80;
    ctx->pc = 0x4B1AA4u;
    // 0x4b1aa4: 0x0  nop
    ctx->pc = 0x4b1aa4u;
    // NOP
label_4b1aa8:
    // 0x4b1aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1aac: 0x812c700  j           func_4B1C00
    ctx->pc = 0x4B1AACu;
    ctx->pc = 0x4B1AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1AACu;
    // 0x4b1ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1C00u;
    goto label_4b1c00;
    ctx->pc = 0x4B1AB4u;
    // 0x4b1ab4: 0x0  nop
    ctx->pc = 0x4b1ab4u;
    // NOP
label_4b1ab8:
    // 0x4b1ab8: 0x812c820  j           func_4B2080
    ctx->pc = 0x4B1AB8u;
    ctx->pc = 0x4B1ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1AB8u;
    // 0x4b1abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2080u;
    goto label_4b2080;
    ctx->pc = 0x4B1AC0u;
label_4b1ac0:
    // 0x4b1ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AC0u;
        // 0x4b1ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1AC8u;
label_4b1ac8:
    // 0x4b1ac8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b1acc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1ad4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b1ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b1ad8: 0x8c460d60  lw          $a2, 0xD60($v0)
    ctx->pc = 0x4b1ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1adc: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b1adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b1ae0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b1ae4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b1ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b1ae8: 0x84c2015e  lh          $v0, 0x15E($a2)
    ctx->pc = 0x4b1ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 350)));
    // 0x4b1aec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b1aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1af0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1af4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b1af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b1af8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1afc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b1afcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b1b00: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b1b00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1b04: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b1b08: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b1b08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b1b0c: 0x10680010  beq         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B1B0Cu;
    {
        const bool branch_taken_0x4b1b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x4B1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B0Cu;
        // 0x4b1b10: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b0c) {
            ctx->pc = 0x4B1B50u;
            goto label_4b1b50;
        }
    }
    ctx->pc = 0x4B1B14u;
    // 0x4b1b14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B1B14u;
    {
        const bool branch_taken_0x4b1b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1b14) {
            ctx->pc = 0x4B1B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1B14u;
            // 0x4b1b18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1B30u;
            goto label_4b1b30;
        }
    }
    ctx->pc = 0x4B1B1Cu;
    // 0x4b1b1c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B1B1Cu;
    {
        const bool branch_taken_0x4b1b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B1Cu;
        // 0x4b1b20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b1c) {
            ctx->pc = 0x4B1B48u;
            goto label_4b1b48;
        }
    }
    ctx->pc = 0x4B1B24u;
    // 0x4b1b24: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B1B24u;
    {
        const bool branch_taken_0x4b1b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1b24) {
            ctx->pc = 0x4B1B78u;
            goto label_4b1b78;
        }
    }
    ctx->pc = 0x4B1B2Cu;
    // 0x4b1b2c: 0x0  nop
    ctx->pc = 0x4b1b2cu;
    // NOP
label_4b1b30:
    // 0x4b1b30: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B1B30u;
    {
        const bool branch_taken_0x4b1b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B30u;
        // 0x4b1b34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b30) {
            ctx->pc = 0x4B1B60u;
            goto label_4b1b60;
        }
    }
    ctx->pc = 0x4B1B38u;
    // 0x4b1b38: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B1B38u;
    {
        const bool branch_taken_0x4b1b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B38u;
        // 0x4b1b3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b38) {
            ctx->pc = 0x4B1B70u;
            goto label_4b1b70;
        }
    }
    ctx->pc = 0x4B1B40u;
    // 0x4b1b40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B1B40u;
    {
        const bool branch_taken_0x4b1b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1b40) {
            ctx->pc = 0x4B1B78u;
            goto label_4b1b78;
        }
    }
    ctx->pc = 0x4B1B48u;
label_4b1b48:
    // 0x4b1b48: 0x812c714  j           func_4B1C50
    ctx->pc = 0x4B1B48u;
    ctx->pc = 0x4B1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1B48u;
    // 0x4b1b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1C50u;
    goto label_4b1c50;
    ctx->pc = 0x4B1B50u;
label_4b1b50:
    // 0x4b1b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1b54: 0x812c6f0  j           func_4B1BC0
    ctx->pc = 0x4B1B54u;
    ctx->pc = 0x4B1B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1B54u;
    // 0x4b1b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1BC0u;
    goto label_4b1bc0;
    ctx->pc = 0x4B1B5Cu;
    // 0x4b1b5c: 0x0  nop
    ctx->pc = 0x4b1b5cu;
    // NOP
label_4b1b60:
    // 0x4b1b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1b64: 0x812c700  j           func_4B1C00
    ctx->pc = 0x4B1B64u;
    ctx->pc = 0x4B1B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1B64u;
    // 0x4b1b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1C00u;
    goto label_4b1c00;
    ctx->pc = 0x4B1B6Cu;
    // 0x4b1b6c: 0x0  nop
    ctx->pc = 0x4b1b6cu;
    // NOP
label_4b1b70:
    // 0x4b1b70: 0x812c818  j           func_4B2060
    ctx->pc = 0x4B1B70u;
    ctx->pc = 0x4B1B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1B70u;
    // 0x4b1b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2060u;
    goto label_4b2060;
    ctx->pc = 0x4B1B78u;
label_4b1b78:
    // 0x4b1b78: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B78u;
        // 0x4b1b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1B80u;
label_4b1b80:
    // 0x4b1b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1b84: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b1b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1b8c: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x4b1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x4b1b90: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x4b1b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4b1b94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b1b94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1b9c: 0xa4a60130  sh          $a2, 0x130($a1)
    ctx->pc = 0x4b1b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b1ba0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1ba4: 0x2463015e  addiu       $v1, $v1, 0x15E
    ctx->pc = 0x4b1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 350));
    // 0x4b1ba8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b1ba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1bac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b1bb0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b1bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1bb4: 0x812c826  j           func_4B2098
    ctx->pc = 0x4B1BB4u;
    ctx->pc = 0x4B1BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1BB4u;
    // 0x4b1bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2098u;
    goto label_4b2098;
    ctx->pc = 0x4B1BBCu;
    // 0x4b1bbc: 0x0  nop
    ctx->pc = 0x4b1bbcu;
    // NOP
label_4b1bc0:
    // 0x4b1bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1bc4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b1bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1bcc: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x4b1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x4b1bd0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x4b1bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x4b1bd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b1bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1bdc: 0xa4a60130  sh          $a2, 0x130($a1)
    ctx->pc = 0x4b1bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b1be0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1be4: 0x2463015e  addiu       $v1, $v1, 0x15E
    ctx->pc = 0x4b1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 350));
    // 0x4b1be8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b1be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1bec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b1becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b1bf0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b1bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1bf4: 0x812c826  j           func_4B2098
    ctx->pc = 0x4B1BF4u;
    ctx->pc = 0x4B1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1BF4u;
    // 0x4b1bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2098u;
    goto label_4b2098;
    ctx->pc = 0x4B1BFCu;
    // 0x4b1bfc: 0x0  nop
    ctx->pc = 0x4b1bfcu;
    // NOP
label_4b1c00:
    // 0x4b1c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1c04: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b1c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b1c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1c0c: 0x24c60d60  addiu       $a2, $a2, 0xD60
    ctx->pc = 0x4b1c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3424));
    // 0x4b1c10: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1c14: 0x24630130  addiu       $v1, $v1, 0x130
    ctx->pc = 0x4b1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x4b1c18: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b1c18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1c1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b1c20: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b1c20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1c24: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4b1c24u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1c28: 0x84a20130  lh          $v0, 0x130($a1)
    ctx->pc = 0x4b1c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x4b1c2c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1C2Cu;
    {
        const bool branch_taken_0x4b1c2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C2Cu;
        // 0x4b1c30: 0x24a3015e  addiu       $v1, $a1, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c2c) {
            ctx->pc = 0x4B1C40u;
            goto label_4b1c40;
        }
    }
    ctx->pc = 0x4B1C34u;
    // 0x4b1c34: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b1c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1c38: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b1c3c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b1c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b1c40:
    // 0x4b1c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1c44: 0x812c826  j           func_4B2098
    ctx->pc = 0x4B1C44u;
    ctx->pc = 0x4B1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1C44u;
    // 0x4b1c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2098u;
    goto label_4b2098;
    ctx->pc = 0x4B1C4Cu;
    // 0x4b1c4c: 0x0  nop
    ctx->pc = 0x4b1c4cu;
    // NOP
label_4b1c50:
    // 0x4b1c50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b1c54: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b1c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b1c58: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4b1c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4b1c5c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4b1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4b1c60: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4b1c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4b1c64: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4b1c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4b1c68: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b1c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b1c6c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4b1c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4b1c70: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4b1c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4b1c74: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4b1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4b1c78: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4b1c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4b1c7c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4b1c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4b1c80: 0x8c620d60  lw          $v0, 0xD60($v1)
    ctx->pc = 0x4b1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1c84: 0x84430120  lh          $v1, 0x120($v0)
    ctx->pc = 0x4b1c84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x4b1c88: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4B1C88u;
    {
        const bool branch_taken_0x4b1c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C88u;
        // 0x4b1c8c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c88) {
            ctx->pc = 0x4B1CC0u;
            goto label_4b1cc0;
        }
    }
    ctx->pc = 0x4B1C90u;
    // 0x4b1c90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4b1c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1c94: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4b1c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b1c98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4b1c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1c9c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4b1c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b1ca0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b1ca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1ca4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4b1ca4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b1ca8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4b1ca8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b1cac: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4b1cacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b1cb0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4b1cb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b1cb4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4b1cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4b1cb8: 0x812c826  j           func_4B2098
    ctx->pc = 0x4B1CB8u;
    ctx->pc = 0x4B1CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1CB8u;
    // 0x4b1cbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2098u;
    goto label_4b2098;
    ctx->pc = 0x4B1CC0u;
label_4b1cc0:
    // 0x4b1cc0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b1cc4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b1cc8: 0x244a0d48  addiu       $t2, $v0, 0xD48
    ctx->pc = 0x4b1cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 3400));
    // 0x4b1ccc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4b1cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4b1cd0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4b1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D48u));
    // 0x4b1cd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b1cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b1cd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b1cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b1cdc: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4b1cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4b1ce0: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4b1ce0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b1ce4: 0x46000cb  bltz        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x4B1CE4u;
    {
        const bool branch_taken_0x4b1ce4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1CE4u;
        // 0x4b1ce8: 0x3c08007f  lui         $t0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ce4) {
            ctx->pc = 0x4B2014u;
            goto label_4b2014;
        }
    }
    ctx->pc = 0x4B1CECu;
    // 0x4b1cec: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b1cf0: 0x26640120  addiu       $a0, $s3, 0x120
    ctx->pc = 0x4b1cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x4b1cf4: 0x25160d44  addiu       $s6, $t0, 0xD44
    ctx->pc = 0x4b1cf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 3396));
    // 0x4b1cf8: 0x26680164  addiu       $t0, $s3, 0x164
    ctx->pc = 0x4b1cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
    // 0x4b1cfc: 0x2452d680  addiu       $s2, $v0, -0x2980
    ctx->pc = 0x4b1cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b1d00: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x4b1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x4b1d04: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x4b1d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4b1d08: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4b1d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4b1d0c: 0x26680018  addiu       $t0, $s3, 0x18
    ctx->pc = 0x4b1d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4b1d10: 0x26620166  addiu       $v0, $s3, 0x166
    ctx->pc = 0x4b1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 358));
    // 0x4b1d14: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x4b1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4b1d18: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b1d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b1d1c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b1d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b1d20: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b1d20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b1d24: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b1d24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b1d28: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b1d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b1d2c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x4b1d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1d30: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x4b1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x4b1d34: 0x24b00d30  addiu       $s0, $a1, 0xD30
    ctx->pc = 0x4b1d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b1d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4b1d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4b1d3c: 0x24de0d3c  addiu       $fp, $a2, 0xD3C
    ctx->pc = 0x4b1d3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 3388));
    // 0x4b1d40: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x4b1d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x4b1d44: 0x24f70d40  addiu       $s7, $a3, 0xD40
    ctx->pc = 0x4b1d44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 3392));
    // 0x4b1d48: 0x25350d34  addiu       $s5, $t1, 0xD34
    ctx->pc = 0x4b1d48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), 3380));
    // 0x4b1d4c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4b1d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4b1d50: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b1d50u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b1d54: 0x0  nop
    ctx->pc = 0x4b1d54u;
    // NOP
label_4b1d58:
    // 0x4b1d58: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4b1d58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b1d5c: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4b1d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4b1d60: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x4b1d60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b1d64: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4b1d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4b1d68: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x4b1d68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b1d6c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4b1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4b1d70: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b1d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b1d74: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b1d74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b1d78: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b1d78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b1d7c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4b1d7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1d80: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4b1d80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b1d84: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4b1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4b1d88: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4b1d88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b1d8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b1d90: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b1d94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b1d98: 0x24840d54  addiu       $a0, $a0, 0xD54
    ctx->pc = 0x4b1d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3412));
    // 0x4b1d9c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b1d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b1da0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4b1da0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b1da4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b1da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b1da8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4b1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4b1dac: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4b1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4b1db0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b1db0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b1db4: 0x24636d38  addiu       $v1, $v1, 0x6D38
    ctx->pc = 0x4b1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27960));
    // 0x4b1db8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b1db8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b1dbc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b1dbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1dc0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b1dc4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b1dc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b1dc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b1dcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b1dd0: 0x244b0004  addiu       $t3, $v0, 0x4
    ctx->pc = 0x4b1dd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4b1dd4: 0x244a0002  addiu       $t2, $v0, 0x2
    ctx->pc = 0x4b1dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b1dd8: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x4b1dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b1ddc: 0x244c0006  addiu       $t4, $v0, 0x6
    ctx->pc = 0x4b1ddcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4b1de0: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4b1de0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b1de4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4b1de4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b1de8: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4b1de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4b1dec: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b1decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b1df0: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4b1df0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4b1df4: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4b1df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4b1df8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b1dfc: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x4b1dfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x4b1e00: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4b1e00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4b1e04: 0x24840d68  addiu       $a0, $a0, 0xD68
    ctx->pc = 0x4b1e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3432));
    // 0x4b1e08: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x4b1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x4b1e0c: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x4b1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
    // 0x4b1e10: 0xaec70000  sw          $a3, 0x0($s6)
    ctx->pc = 0x4b1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
    // 0x4b1e14: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x4b1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x4b1e18: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x4b1e18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b1e1c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4b1e1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1e20: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b1e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b1e24: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b1e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b1e28: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4b1e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4b1e2c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B1E2Cu;
    SET_GPR_U32(ctx, 31, 0x4B1E34u);
    ctx->pc = 0x4B1E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1E2Cu;
    // 0x4b1e30: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B1E2Cu, 0x4B1E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1E34u;
label_4b1e34:
    // 0x4b1e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1e38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b1e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b1e3c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B1E3Cu;
    SET_GPR_U32(ctx, 31, 0x4B1E44u);
    ctx->pc = 0x4B1E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1E3Cu;
    // 0x4b1e40: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B1E3Cu, 0x4B1E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1E44u;
label_4b1e44:
    // 0x4b1e44: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4b1e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1e48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b1e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1e4c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4b1e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1e50: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4B1E50u;
    SET_GPR_U32(ctx, 31, 0x4B1E58u);
    ctx->pc = 0x4B1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1E50u;
    // 0x4b1e54: 0x8ea70000  lw          $a3, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4B1E50u, 0x4B1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1E58u;
label_4b1e58:
    // 0x4b1e58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1e5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4b1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1e60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1e64: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b1e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b1e68: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b1e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b1e6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1e70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b1e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b1e74: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B1E74u;
    SET_GPR_U32(ctx, 31, 0x4B1E7Cu);
    ctx->pc = 0x4B1E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1E74u;
    // 0x4b1e78: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B1E74u, 0x4B1E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1E7Cu;
label_4b1e7c:
    // 0x4b1e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1e80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b1e84: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B1E84u;
    SET_GPR_U32(ctx, 31, 0x4B1E8Cu);
    ctx->pc = 0x4B1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1E84u;
    // 0x4b1e88: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B1E84u, 0x4B1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1E8Cu;
label_4b1e8c:
    // 0x4b1e8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b1e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1e90: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b1e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1e94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4b1e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1e98: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4B1E98u;
    SET_GPR_U32(ctx, 31, 0x4B1EA0u);
    ctx->pc = 0x4B1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1E98u;
    // 0x4b1e9c: 0x8ea70000  lw          $a3, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4B1E98u, 0x4B1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1EA0u;
label_4b1ea0:
    // 0x4b1ea0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1ea4: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x4b1ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b1ea8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1eac: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4b1eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1eb0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b1eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b1eb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1eb8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b1eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b1ebc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B1EBCu;
    SET_GPR_U32(ctx, 31, 0x4B1EC4u);
    ctx->pc = 0x4B1EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1EBCu;
    // 0x4b1ec0: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B1EBCu, 0x4B1EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1EC4u;
label_4b1ec4:
    // 0x4b1ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ec8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b1ecc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B1ECCu;
    SET_GPR_U32(ctx, 31, 0x4B1ED4u);
    ctx->pc = 0x4B1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1ECCu;
    // 0x4b1ed0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B1ECCu, 0x4B1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1ED4u;
label_4b1ed4:
    // 0x4b1ed4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4b1ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ed8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b1ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1edc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4b1edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ee0: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4B1EE0u;
    SET_GPR_U32(ctx, 31, 0x4B1EE8u);
    ctx->pc = 0x4B1EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1EE0u;
    // 0x4b1ee4: 0x8ea70000  lw          $a3, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4B1EE0u, 0x4B1EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1EE8u;
label_4b1ee8:
    // 0x4b1ee8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b1eec: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4b1eecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4b1ef0: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4b1ef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b1ef4: 0x2508fb18  addiu       $t0, $t0, -0x4E8
    ctx->pc = 0x4b1ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966040));
    // 0x4b1ef8: 0x2442fb14  addiu       $v0, $v0, -0x4EC
    ctx->pc = 0x4b1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966036));
    // 0x4b1efc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b1efcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72FB18u));
    // 0x4b1f00: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4b1f00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4b1f04: 0x2508fb1c  addiu       $t0, $t0, -0x4E4
    ctx->pc = 0x4b1f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966044));
    // 0x4b1f08: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4b1f08u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x72FB14u));
    // 0x4b1f0c: 0x97c50000  lhu         $a1, 0x0($fp)
    ctx->pc = 0x4b1f0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b1f10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b1f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b1f14: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1f18: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4b1f18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4b1f1c: 0x96e60000  lhu         $a2, 0x0($s7)
    ctx->pc = 0x4b1f1cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b1f20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1f24: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4b1f24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4b1f28: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b1f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b1f2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b1f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b1f30: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4b1f34: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b1f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b1f38: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4b1f38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4b1f3c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4b1f3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4b1f40: 0x2463fb14  addiu       $v1, $v1, -0x4EC
    ctx->pc = 0x4b1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966036));
    // 0x4b1f44: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4b1f44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b1f48: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x4b1f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x4b1f4c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b1f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b1f50: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4b1f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4b1f54: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4b1f58: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4b1f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4b1f5c: 0x2508fb18  addiu       $t0, $t0, -0x4E8
    ctx->pc = 0x4b1f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966040));
    // 0x4b1f60: 0x2463fb1c  addiu       $v1, $v1, -0x4E4
    ctx->pc = 0x4b1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966044));
    // 0x4b1f64: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4b1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4b1f68: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B1F68u;
    SET_GPR_U32(ctx, 31, 0x4B1F70u);
    ctx->pc = 0x4B1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1F68u;
    // 0x4b1f6c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B1F68u, 0x4B1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1F70u;
label_4b1f70:
    // 0x4b1f70: 0x964324a0  lhu         $v1, 0x24A0($s2)
    ctx->pc = 0x4b1f70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9376)));
    // 0x4b1f74: 0x964224a2  lhu         $v0, 0x24A2($s2)
    ctx->pc = 0x4b1f74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9378)));
    // 0x4b1f78: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4b1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4b1f7c: 0xa643233a  sh          $v1, 0x233A($s2)
    ctx->pc = 0x4b1f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b1f80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b1f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1f84: 0xa642233c  sh          $v0, 0x233C($s2)
    ctx->pc = 0x4b1f84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1f88: 0xa640233e  sh          $zero, 0x233E($s2)
    ctx->pc = 0x4b1f88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9022), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b1f8c: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x4b1f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4b1f90: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1f94: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b1f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b1f98: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b1f9c: 0xa6422334  sh          $v0, 0x2334($s2)
    ctx->pc = 0x4b1f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4b1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1fa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b1fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b1fa8: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4b1fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4b1fac: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b1facu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b1fb0: 0xa6432336  sh          $v1, 0x2336($s2)
    ctx->pc = 0x4b1fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b1fb4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4b1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4b1fb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1fbc: 0xa6452330  sh          $a1, 0x2330($s2)
    ctx->pc = 0x4b1fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9008), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b1fc0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b1fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b1fc4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b1fc8: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4B1FC8u;
    SET_GPR_U32(ctx, 31, 0x4B1FD0u);
    ctx->pc = 0x4B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1FC8u;
    // 0x4b1fcc: 0xa6422338  sh          $v0, 0x2338($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4B1FC8u, 0x4B1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1FD0u;
label_4b1fd0:
    // 0x4b1fd0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4b1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b1fd4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b1fd8: 0x24840d54  addiu       $a0, $a0, 0xD54
    ctx->pc = 0x4b1fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3412));
    // 0x4b1fdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1fe0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b1fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0D54u));
    // 0x4b1fe4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b1fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b1fe8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1fec: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4b1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4b1ff0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1ff4: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b1ff4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b1ff8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b1ffc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b1ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2000: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2004: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4b2004u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4b2008: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b2008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b200c: 0x443ff52  bgezl       $v0, . + 4 + (-0xAE << 2)
    ctx->pc = 0x4B200Cu;
    {
        const bool branch_taken_0x4b200c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4b200c) {
            ctx->pc = 0x4B2010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B200Cu;
            // 0x4b2010: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1d58;
        }
    }
    ctx->pc = 0x4B2014u;
label_4b2014:
    // 0x4b2014: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4b2014u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4b2018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b2018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b201c: 0x8d030d60  lw          $v1, 0xD60($t0)
    ctx->pc = 0x4b201cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b2020: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4b2020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2024: 0x2463015e  addiu       $v1, $v1, 0x15E
    ctx->pc = 0x4b2024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 350));
    // 0x4b2028: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4b2028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b202c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b202cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b2030: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4b2030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2034: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4b2034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b2038: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b203c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b203cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b2040: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4b2040u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b2044: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4b2044u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b2048: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4b2048u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b204c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4b204cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b2050: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4b2050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4b2054: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b2054u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2058: 0x812c826  j           func_4B2098
    ctx->pc = 0x4B2058u;
    ctx->pc = 0x4B205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2058u;
    // 0x4b205c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2098u;
    goto label_4b2098;
    ctx->pc = 0x4B2060u;
label_4b2060:
    // 0x4b2060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b2060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b2064: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b2064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b2068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b2068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b206c: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b206cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b2070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b2070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2074: 0xa460015e  sh          $zero, 0x15E($v1)
    ctx->pc = 0x4b2074u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b2078: 0x812c826  j           func_4B2098
    ctx->pc = 0x4B2078u;
    ctx->pc = 0x4B207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2078u;
    // 0x4b207c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2098u;
    goto label_4b2098;
    ctx->pc = 0x4B2080u;
label_4b2080:
    // 0x4b2080: 0x248401b6  addiu       $a0, $a0, 0x1B6
    ctx->pc = 0x4b2080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 438));
    // 0x4b2084: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b2084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b2088: 0x3042ff9f  andi        $v0, $v0, 0xFF9F
    ctx->pc = 0x4b2088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65439);
    // 0x4b208c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B208Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B208Cu;
        // 0x4b2090: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B208Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2094u;
    // 0x4b2094: 0x0  nop
    ctx->pc = 0x4b2094u;
    // NOP
label_4b2098:
    // 0x4b2098: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B20A0u;
}
