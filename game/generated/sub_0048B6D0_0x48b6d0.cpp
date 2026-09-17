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

// Function: sub_0048B6D0
// Address: 0x48b6d0 - 0x48b898
void sub_0048B6D0_0x48b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B6D0_0x48b6d0");
#endif

    switch (ctx->pc) {
        case 0x48b6e4u: goto label_48b6e4;
        case 0x48b864u: goto label_48b864;
        case 0x48b878u: goto label_48b878;
        default: break;
    }

    ctx->pc = 0x48b6d0u;

    // 0x48b6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48b6d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48b6dc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x48B6DCu;
    SET_GPR_U32(ctx, 31, 0x48B6E4u);
    ctx->pc = 0x48B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B6DCu;
    // 0x48b6e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48B6DCu, 0x48B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B6E4u;
label_48b6e4:
    // 0x48b6e4: 0x960301b4  lhu         $v1, 0x1B4($s0)
    ctx->pc = 0x48b6e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x48b6e8: 0x3c19007c  lui         $t9, 0x7C
    ctx->pc = 0x48b6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)124 << 16));
    // 0x48b6ec: 0x3c18007c  lui         $t8, 0x7C
    ctx->pc = 0x48b6ecu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)124 << 16));
    // 0x48b6f0: 0x3c0f007c  lui         $t7, 0x7C
    ctx->pc = 0x48b6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)124 << 16));
    // 0x48b6f4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48b6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48b6f8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x48b6f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b6fc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x48b6fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x48b700: 0x272c5b2c  addiu       $t4, $t9, 0x5B2C
    ctx->pc = 0x48b700u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 25), 23340));
    // 0x48b704: 0x270d5b30  addiu       $t5, $t8, 0x5B30
    ctx->pc = 0x48b704u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 23344));
    // 0x48b708: 0x25ee5b34  addiu       $t6, $t7, 0x5B34
    ctx->pc = 0x48b708u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 23348));
    // 0x48b70c: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x48B70Cu;
    {
        const bool branch_taken_0x48b70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B70Cu;
        // 0x48b710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b70c) {
            ctx->pc = 0x48B87Cu;
            goto label_48b87c;
        }
    }
    ctx->pc = 0x48B714u;
    // 0x48b714: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x48b714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x48b718: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x48b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x48b71c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x48b71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x48b720: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x48b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48b724: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48b728: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x48b728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x48b72c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48b72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48b730: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48b730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48b734: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x48b734u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x48b738: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48b738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48b73c: 0x8449f9aa  lh          $t1, -0x656($v0)
    ctx->pc = 0x48b73cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x72F9AAu));
    // 0x48b740: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x48b740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x48b744: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x48b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x48b748: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x48b748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48b74c: 0x85870000  lh          $a3, 0x0($t4)
    ctx->pc = 0x48b74cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x48b750: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x48b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x48b754: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48b754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48b758: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x48b758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x48b75c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48b75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48b760: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x48b760u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x48b764: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48b764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48b768: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x48b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x48b76c: 0x85a60000  lh          $a2, 0x0($t5)
    ctx->pc = 0x48b76cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48b770: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x48b770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x48b774: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48b774u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48b778: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x48b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x48b77c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x48b77cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48b780: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x48b780u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x48b784: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x48b784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x48b788: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x48b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x48b78c: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x48b78cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x48b790: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x48b790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x48b794: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48b794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48b798: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x48b798u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48b79c: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x48b79cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x48b7a0: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x48b7a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x48b7a4: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x48b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x48b7a8: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x48b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x48b7ac: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x48b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x48b7b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48b7b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48b7b4: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x48b7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48b7b8: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x48b7b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x48b7bc: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x48b7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x48b7c0: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x48b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x48b7c4: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x48b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x48b7c8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x48b7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x48b7cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48b7ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48b7d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x48b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48b7d4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x48b7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x48b7d8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x48b7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x48b7dc: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x48b7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x48b7e0: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x48B7E0u;
    {
        const bool branch_taken_0x48b7e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B7E0u;
        // 0x48b7e4: 0xadc50000  sw          $a1, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b7e0) {
            ctx->pc = 0x48B830u;
            goto label_48b830;
        }
    }
    ctx->pc = 0x48B7E8u;
    // 0x48b7e8: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x48b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x48b7ec: 0x24845b20  addiu       $a0, $a0, 0x5B20
    ctx->pc = 0x48b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23328));
    // 0x48b7f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x48b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B20u));
    // 0x48b7f4: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x48b7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x48b7f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48b7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48b7fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x48b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x48b800: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48b804: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x48b804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48b808: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x48b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x48b80c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x48b80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x48b810: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48b810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48b814: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x48b814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x48b818: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x48b818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48b81c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48B81Cu;
    {
        const bool branch_taken_0x48b81c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x48B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B81Cu;
        // 0x48b820: 0x3c08007c  lui         $t0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)124 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b81c) {
            ctx->pc = 0x48B834u;
            goto label_48b834;
        }
    }
    ctx->pc = 0x48B824u;
    // 0x48b824: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x48B824u;
    {
        const bool branch_taken_0x48b824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B824u;
        // 0x48b828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b824) {
            ctx->pc = 0x48B870u;
            goto label_48b870;
        }
    }
    ctx->pc = 0x48B82Cu;
    // 0x48b82c: 0x0  nop
    ctx->pc = 0x48b82cu;
    // NOP
label_48b830:
    // 0x48b830: 0x3c08007c  lui         $t0, 0x7C
    ctx->pc = 0x48b830u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)124 << 16));
label_48b834:
    // 0x48b834: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x48b834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x48b838: 0x25085b24  addiu       $t0, $t0, 0x5B24
    ctx->pc = 0x48b838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23332));
    // 0x48b83c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x48b83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x48b840: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x48b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48b844: 0x8f255b2c  lw          $a1, 0x5B2C($t9)
    ctx->pc = 0x48b844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 23340)));
    // 0x48b848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48b848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48b84c: 0x8f065b30  lw          $a2, 0x5B30($t8)
    ctx->pc = 0x48b84cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 23344)));
    // 0x48b850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48b854: 0x8de75b34  lw          $a3, 0x5B34($t7)
    ctx->pc = 0x48b854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 23348)));
    // 0x48b858: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x48b858u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x48b85c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x48B85Cu;
    SET_GPR_U32(ctx, 31, 0x48B864u);
    ctx->pc = 0x48B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B85Cu;
    // 0x48b860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x48B85Cu, 0x48B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B864u;
label_48b864:
    // 0x48b864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b868: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48B868u;
    {
        const bool branch_taken_0x48b868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x48B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B868u;
        // 0x48b86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b868) {
            ctx->pc = 0x48B87Cu;
            goto label_48b87c;
        }
    }
    ctx->pc = 0x48B870u;
label_48b870:
    // 0x48b870: 0xc122e26  jal         func_48B898
    ctx->pc = 0x48B870u;
    SET_GPR_U32(ctx, 31, 0x48B878u);
    ctx->pc = 0x48B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B898u, 0x48B870u, 0x48B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B878u;
label_48b878:
    // 0x48b878: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48b878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b87c:
    // 0x48b87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b880: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48b880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b884: 0x3e00008  jr          $ra
    ctx->pc = 0x48B884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B884u;
        // 0x48b888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B88Cu;
    // 0x48b88c: 0x0  nop
    ctx->pc = 0x48b88cu;
    // NOP
    // 0x48b890: 0x3e00008  jr          $ra
    ctx->pc = 0x48B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B898u;
}
