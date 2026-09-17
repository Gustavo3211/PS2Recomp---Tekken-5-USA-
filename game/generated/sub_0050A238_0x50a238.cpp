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

// Function: sub_0050A238
// Address: 0x50a238 - 0x50a450
void sub_0050A238_0x50a238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A238_0x50a238");
#endif

    switch (ctx->pc) {
        case 0x50a2f8u: goto label_50a2f8;
        case 0x50a400u: goto label_50a400;
        case 0x50a418u: goto label_50a418;
        default: break;
    }

    ctx->pc = 0x50a238u;

    // 0x50a238: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x50a238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50a23c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x50a23cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50a240: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x50a240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x50a244: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x50a244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x50a248: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x50a248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50a24c: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x50a24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x50a250: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x50A250u;
    {
        const bool branch_taken_0x50a250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A250u;
        // 0x50a254: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a250) {
            ctx->pc = 0x50A26Cu;
            goto label_50a26c;
        }
    }
    ctx->pc = 0x50A258u;
    // 0x50a258: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50a258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50a25c: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x50a25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50a260: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x50a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x50a264: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x50a264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50a268: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x50a268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_50a26c:
    // 0x50a26c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50a26cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50a270: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50a270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50a274: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x50a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x50a278: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x50a278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50a27c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x50a27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x50a280: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x50a280u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50a284: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x50a284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x50a288: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x50a288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50a28c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50a28cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50a290: 0x21023  negu        $v0, $v0
    ctx->pc = 0x50a290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x50a294: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50a298: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x50a298u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50a29c: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x50a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x50a2a0: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x50a2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50a2a4: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x50a2a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x50a2a8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x50a2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x50a2ac: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x50a2acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50a2b0: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x50a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x50a2b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x50a2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50a2b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50a2b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50a2bc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x50a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x50a2c0: 0x24847d80  addiu       $a0, $a0, 0x7D80
    ctx->pc = 0x50a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32128));
    // 0x50a2c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x50a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x50a2c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x50a2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50a2cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x50a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x50a2d0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x50a2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x50a2d4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x50a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x50a2d8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x50a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50a2dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x50a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x50a2e0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x50a2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x50a2e4: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x50A2E4u;
    {
        const bool branch_taken_0x50a2e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A2E4u;
        // 0x50a2e8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a2e4) {
            ctx->pc = 0x50A3D8u;
            goto label_50a3d8;
        }
    }
    ctx->pc = 0x50A2ECu;
    // 0x50a2ec: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x50a2ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x50a2f0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x50a2f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x50a2f4: 0x354a0005  ori         $t2, $t2, 0x5
    ctx->pc = 0x50a2f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)5);
label_50a2f8:
    // 0x50a2f8: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x50a2f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x50a2fc: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x50a2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x50a300: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50A300u;
    {
        const bool branch_taken_0x50a300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A300u;
        // 0x50a304: 0x3503ffff  ori         $v1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a300) {
            ctx->pc = 0x50A310u;
            goto label_50a310;
        }
    }
    ctx->pc = 0x50A308u;
    // 0x50a308: 0x6a4024  and         $t0, $v1, $t2
    ctx->pc = 0x50a308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x50a30c: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x50a30cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_50a310:
    // 0x50a310: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x50a310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50a314: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x50a314u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x50a318: 0x4c00020  bltz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x50A318u;
    {
        const bool branch_taken_0x50a318 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x50A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A318u;
        // 0x50a31c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a318) {
            ctx->pc = 0x50A39Cu;
            goto label_50a39c;
        }
    }
    ctx->pc = 0x50A320u;
    // 0x50a320: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x50a320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x50a324: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x50a324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x50a328: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50a328u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50a32c: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x50a32cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x50a330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50a334: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50a338: 0x4c00018  bltz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x50A338u;
    {
        const bool branch_taken_0x50a338 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x50A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A338u;
        // 0x50a33c: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a338) {
            ctx->pc = 0x50A39Cu;
            goto label_50a39c;
        }
    }
    ctx->pc = 0x50A340u;
    // 0x50a340: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x50a340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x50a344: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x50a344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x50a348: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50a348u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50a34c: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x50a34cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x50a350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50a354: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50a358: 0x4c00010  bltz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x50A358u;
    {
        const bool branch_taken_0x50a358 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x50A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A358u;
        // 0x50a35c: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a358) {
            ctx->pc = 0x50A39Cu;
            goto label_50a39c;
        }
    }
    ctx->pc = 0x50A360u;
    // 0x50a360: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x50a360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x50a364: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x50a364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x50a368: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50a368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50a36c: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x50a36cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x50a370: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50a374: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50a378: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x50A378u;
    {
        const bool branch_taken_0x50a378 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x50A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A378u;
        // 0x50a37c: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a378) {
            ctx->pc = 0x50A39Cu;
            goto label_50a39c;
        }
    }
    ctx->pc = 0x50A380u;
    // 0x50a380: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x50a380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x50a384: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x50a384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x50a388: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50a388u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50a38c: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x50a38cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x50a390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50a394: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50a394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50a398: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x50a398u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_50a39c:
    // 0x50a39c: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x50a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x50a3a0: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x50a3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50a3a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50a3a8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x50a3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x50a3ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50a3acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50a3b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x50a3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50a3b4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50a3b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x50a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x50a3bc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x50a3bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50a3c0: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x50a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x50a3c4: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x50a3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50a3c8: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x50a3c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x50a3cc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50a3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50a3d0: 0x14a0ffc9  bnez        $a1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x50A3D0u;
    {
        const bool branch_taken_0x50a3d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x50A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A3D0u;
        // 0x50a3d4: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a3d0) {
            ctx->pc = 0x50A2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50a2f8;
        }
    }
    ctx->pc = 0x50A3D8u;
label_50a3d8:
    // 0x50a3d8: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x50a3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x50a3dc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x50a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x50a3e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50a3e4: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x50a3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50a3e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50a3e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50a3ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x50a3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x50a3f0: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x50a3f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50a3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x50A3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A3F4u;
        // 0x50a3f8: 0xad660000  sw          $a2, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50A3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50A3FCu;
    // 0x50a3fc: 0x0  nop
    ctx->pc = 0x50a3fcu;
    // NOP
label_50a400:
    // 0x50a400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a40c: 0x8144dae  j           func_5136B8
    ctx->pc = 0x50A40Cu;
    ctx->pc = 0x50A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A40Cu;
    // 0x50a410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5136B8u;
    sub_005136B8_0x5136b8(rdram, ctx, runtime); return;
    ctx->pc = 0x50A414u;
    // 0x50a414: 0x0  nop
    ctx->pc = 0x50a414u;
    // NOP
label_50a418:
    // 0x50a418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a41c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50a420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a424: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x50a424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50a428: 0x2444009a  addiu       $a0, $v0, 0x9A
    ctx->pc = 0x50a428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 154));
    // 0x50a42c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x50a42cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x8FF11Au));
    // 0x50a430: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x50A430u;
    {
        const bool branch_taken_0x50a430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A430u;
        // 0x50a434: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a430) {
            ctx->pc = 0x50A440u;
            goto label_50a440;
        }
    }
    ctx->pc = 0x50A438u;
    // 0x50a438: 0x8142900  j           func_50A400
    ctx->pc = 0x50A438u;
    ctx->pc = 0x50A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A438u;
    // 0x50a43c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50A400u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_50a400;
    ctx->pc = 0x50A440u;
label_50a440:
    // 0x50a440: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x50a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x50a444: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50a444u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a448: 0x3e00008  jr          $ra
    ctx->pc = 0x50A448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A448u;
        // 0x50a44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50A448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50A450u;
}
