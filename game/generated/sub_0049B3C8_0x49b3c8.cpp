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

// Function: sub_0049B3C8
// Address: 0x49b3c8 - 0x49b530
void sub_0049B3C8_0x49b3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B3C8_0x49b3c8");
#endif

    switch (ctx->pc) {
        case 0x49b440u: goto label_49b440;
        default: break;
    }

    ctx->pc = 0x49b3c8u;

    // 0x49b3c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x49b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x49b3cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49b3d0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x49b3d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x49b3d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49b3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b3d8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x49b3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x49b3dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x49b3dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b3e0: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x49b3e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x49b3e4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x49b3e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x49b3e8: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x49b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x49b3ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49b3f0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x49b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x49b3f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49b3f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49b3f8: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x49b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x49b3fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49b3fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49b400: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x49b400u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x49b404: 0x24e77f70  addiu       $a3, $a3, 0x7F70
    ctx->pc = 0x49b404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32624));
    // 0x49b408: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x49b408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x49b40c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x49b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49b410: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x49b410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49b414: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x49b414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x49b418: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x49b418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49b41c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x49b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49b420: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x49b420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49b424: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x49b424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x49b428: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x49B428u;
    {
        const bool branch_taken_0x49b428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B428u;
        // 0x49b42c: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b428) {
            ctx->pc = 0x49B510u;
            goto label_49b510;
        }
    }
    ctx->pc = 0x49B430u;
    // 0x49b430: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x49b430u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x49b434: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x49b434u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x49b438: 0x354a0005  ori         $t2, $t2, 0x5
    ctx->pc = 0x49b438u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)5);
    // 0x49b43c: 0x0  nop
    ctx->pc = 0x49b43cu;
    // NOP
label_49b440:
    // 0x49b440: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x49b440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x49b444: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x49b444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x49b448: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49B448u;
    {
        const bool branch_taken_0x49b448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B448u;
        // 0x49b44c: 0x34c3ffff  ori         $v1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b448) {
            ctx->pc = 0x49B458u;
            goto label_49b458;
        }
    }
    ctx->pc = 0x49B450u;
    // 0x49b450: 0x6a3024  and         $a2, $v1, $t2
    ctx->pc = 0x49b450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x49b454: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x49b454u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_49b458:
    // 0x49b458: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x49b458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49b45c: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x49b45cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x49b460: 0x4a00020  bltz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x49B460u;
    {
        const bool branch_taken_0x49b460 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x49B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B460u;
        // 0x49b464: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b460) {
            ctx->pc = 0x49B4E4u;
            goto label_49b4e4;
        }
    }
    ctx->pc = 0x49B468u;
    // 0x49b468: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x49b468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x49b46c: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x49b46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49b470: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49b470u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49b474: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x49b474u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x49b478: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49b47c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49b47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49b480: 0x4a00018  bltz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x49B480u;
    {
        const bool branch_taken_0x49b480 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x49B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B480u;
        // 0x49b484: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b480) {
            ctx->pc = 0x49B4E4u;
            goto label_49b4e4;
        }
    }
    ctx->pc = 0x49B488u;
    // 0x49b488: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x49b488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x49b48c: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x49b48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49b490: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49b490u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49b494: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x49b494u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x49b498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49b49c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49b49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49b4a0: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x49B4A0u;
    {
        const bool branch_taken_0x49b4a0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x49B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B4A0u;
        // 0x49b4a4: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b4a0) {
            ctx->pc = 0x49B4E4u;
            goto label_49b4e4;
        }
    }
    ctx->pc = 0x49B4A8u;
    // 0x49b4a8: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x49b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x49b4ac: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x49b4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49b4b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49b4b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49b4b4: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x49b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x49b4b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49b4bc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49b4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49b4c0: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x49B4C0u;
    {
        const bool branch_taken_0x49b4c0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x49B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B4C0u;
        // 0x49b4c4: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b4c0) {
            ctx->pc = 0x49B4E4u;
            goto label_49b4e4;
        }
    }
    ctx->pc = 0x49B4C8u;
    // 0x49b4c8: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x49b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x49b4cc: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x49b4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49b4d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49b4d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49b4d4: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x49b4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x49b4d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49b4dc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49b4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49b4e0: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x49b4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_49b4e4:
    // 0x49b4e4: 0x1261025  or          $v0, $t1, $a2
    ctx->pc = 0x49b4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x49b4e8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x49b4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x49b4ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49b4f0: 0x3523ffff  ori         $v1, $t1, 0xFFFF
    ctx->pc = 0x49b4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49b4f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49b4f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49b4f8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x49b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49b4fc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49b500: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x49b500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49b504: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x49b504u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49b508: 0x1480ffcd  bnez        $a0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x49B508u;
    {
        const bool branch_taken_0x49b508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B508u;
        // 0x49b50c: 0x94900  sll         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b508) {
            ctx->pc = 0x49B440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b440;
        }
    }
    ctx->pc = 0x49B510u;
label_49b510:
    // 0x49b510: 0x1251025  or          $v0, $t1, $a1
    ctx->pc = 0x49b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x49b514: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x49b514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x49b518: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49b518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49b51c: 0x3523ffff  ori         $v1, $t1, 0xFFFF
    ctx->pc = 0x49b51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49b520: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49b520u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49b524: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49b524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49b528: 0x3e00008  jr          $ra
    ctx->pc = 0x49B528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B528u;
        // 0x49b52c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B530u;
}
