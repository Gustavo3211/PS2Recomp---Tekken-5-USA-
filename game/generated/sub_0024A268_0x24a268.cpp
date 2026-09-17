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

// Function: sub_0024A268
// Address: 0x24a268 - 0x24a3e8
void sub_0024A268_0x24a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A268_0x24a268");
#endif

    switch (ctx->pc) {
        case 0x24a2acu: goto label_24a2ac;
        case 0x24a2d4u: goto label_24a2d4;
        case 0x24a2e0u: goto label_24a2e0;
        case 0x24a304u: goto label_24a304;
        case 0x24a310u: goto label_24a310;
        case 0x24a34cu: goto label_24a34c;
        case 0x24a37cu: goto label_24a37c;
        case 0x24a394u: goto label_24a394;
        case 0x24a3a4u: goto label_24a3a4;
        case 0x24a3c0u: goto label_24a3c0;
        default: break;
    }

    ctx->pc = 0x24a268u;

    // 0x24a268: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24a268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24a26c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x24a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x24a270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24a270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a274: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x24a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x24a278: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24a278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a27c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x24a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x24a280: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x24a280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a284: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x24a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x24a288: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x24a288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a28c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24a290: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x24a290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a294: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x24a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x24a298: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x24a298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a29c: 0x6200048  bltz        $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x24A29Cu;
    {
        const bool branch_taken_0x24a29c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x24A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A29Cu;
        // 0x24a2a0: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a29c) {
            ctx->pc = 0x24A3C0u;
            goto label_24a3c0;
        }
    }
    ctx->pc = 0x24A2A4u;
    // 0x24a2a4: 0xc09224e  jal         func_248938
    ctx->pc = 0x24A2A4u;
    SET_GPR_U32(ctx, 31, 0x24A2ACu);
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x24A2A4u, 0x24A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2ACu;
label_24a2ac:
    // 0x24a2ac: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x24A2ACu;
    {
        const bool branch_taken_0x24a2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a2ac) {
            ctx->pc = 0x24A2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A2ACu;
            // 0x24a2b0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A3C4u;
            goto label_24a3c4;
        }
    }
    ctx->pc = 0x24A2B4u;
    // 0x24a2b4: 0x16400018  bnez        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x24A2B4u;
    {
        const bool branch_taken_0x24a2b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2B4u;
        // 0x24a2b8: 0x2a820000  slti        $v0, $s4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2b4) {
            ctx->pc = 0x24A318u;
            goto label_24a318;
        }
    }
    ctx->pc = 0x24A2BCu;
    // 0x24a2bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a2c0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A2C0u;
    {
        const bool branch_taken_0x24a2c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2C0u;
        // 0x24a2c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2c0) {
            ctx->pc = 0x24A2F0u;
            goto label_24a2f0;
        }
    }
    ctx->pc = 0x24A2C8u;
    // 0x24a2c8: 0x8f84c9e8  lw          $a0, -0x3618($gp)
    ctx->pc = 0x24a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953448)));
    // 0x24a2cc: 0xc0927ea  jal         func_249FA8
    ctx->pc = 0x24A2CCu;
    SET_GPR_U32(ctx, 31, 0x24A2D4u);
    ctx->pc = 0x24A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A2CCu;
    // 0x24a2d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249FA8u, 0x24A2CCu, 0x24A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2D4u;
label_24a2d4:
    // 0x24a2d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2d8: 0xc092806  jal         func_24A018
    ctx->pc = 0x24A2D8u;
    SET_GPR_U32(ctx, 31, 0x24A2E0u);
    ctx->pc = 0x24A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A2D8u;
    // 0x24a2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A018u, 0x24A2D8u, 0x24A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2E0u;
label_24a2e0:
    // 0x24a2e0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A2E0u;
    {
        const bool branch_taken_0x24a2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2E0u;
        // 0x24a2e4: 0x2a820000  slti        $v0, $s4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2e0) {
            ctx->pc = 0x24A318u;
            goto label_24a318;
        }
    }
    ctx->pc = 0x24A2E8u;
    // 0x24a2e8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x24A2E8u;
    {
        const bool branch_taken_0x24a2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2E8u;
        // 0x24a2ec: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2e8) {
            ctx->pc = 0x24A3C4u;
            goto label_24a3c4;
        }
    }
    ctx->pc = 0x24A2F0u;
label_24a2f0:
    // 0x24a2f0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A2F0u;
    {
        const bool branch_taken_0x24a2f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2F0u;
        // 0x24a2f4: 0x2a820000  slti        $v0, $s4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2f0) {
            ctx->pc = 0x24A318u;
            goto label_24a318;
        }
    }
    ctx->pc = 0x24A2F8u;
    // 0x24a2f8: 0x8f84c9ec  lw          $a0, -0x3614($gp)
    ctx->pc = 0x24a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953452)));
    // 0x24a2fc: 0xc0927ea  jal         func_249FA8
    ctx->pc = 0x24A2FCu;
    SET_GPR_U32(ctx, 31, 0x24A304u);
    ctx->pc = 0x24A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A2FCu;
    // 0x24a300: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249FA8u, 0x24A2FCu, 0x24A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A304u;
label_24a304:
    // 0x24a304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a308: 0xc092806  jal         func_24A018
    ctx->pc = 0x24A308u;
    SET_GPR_U32(ctx, 31, 0x24A310u);
    ctx->pc = 0x24A30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A308u;
    // 0x24a30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A018u, 0x24A308u, 0x24A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A310u;
label_24a310:
    // 0x24a310: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x24A310u;
    {
        const bool branch_taken_0x24a310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A310u;
        // 0x24a314: 0x2a820000  slti        $v0, $s4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a310) {
            ctx->pc = 0x24A3C0u;
            goto label_24a3c0;
        }
    }
    ctx->pc = 0x24A318u;
label_24a318:
    // 0x24a318: 0x3b2900a  movz        $s2, $sp, $s2
    ctx->pc = 0x24a318u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 29));
    // 0x24a31c: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x24A31Cu;
    {
        const bool branch_taken_0x24a31c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A31Cu;
        // 0x24a320: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a31c) {
            ctx->pc = 0x24A37Cu;
            goto label_24a37c;
        }
    }
    ctx->pc = 0x24A324u;
    // 0x24a324: 0x681000c  bgez        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x24A324u;
    {
        const bool branch_taken_0x24a324 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x24A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A324u;
        // 0x24a328: 0x143600  sll         $a2, $s4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a324) {
            ctx->pc = 0x24A358u;
            goto label_24a358;
        }
    }
    ctx->pc = 0x24A32Cu;
    // 0x24a32c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a330: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24a330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a334: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x24a334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x24a338: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x24a338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24a33c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24a33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a344: 0xc0d6350  jal         func_358D40
    ctx->pc = 0x24A344u;
    SET_GPR_U32(ctx, 31, 0x24A34Cu);
    ctx->pc = 0x24A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A344u;
    // 0x24a348: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358D40u, 0x24A344u, 0x24A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A34Cu;
label_24a34c:
    // 0x24a34c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24A34Cu;
    {
        const bool branch_taken_0x24a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A34Cu;
        // 0x24a350: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a34c) {
            ctx->pc = 0x24A380u;
            goto label_24a380;
        }
    }
    ctx->pc = 0x24A354u;
    // 0x24a354: 0x0  nop
    ctx->pc = 0x24a354u;
    // NOP
label_24a358:
    // 0x24a358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a35c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24a35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a360: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x24a360u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x24a364: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x24a364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x24a368: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x24a368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24a36c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a370: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a374: 0xc0d637e  jal         func_358DF8
    ctx->pc = 0x24A374u;
    SET_GPR_U32(ctx, 31, 0x24A37Cu);
    ctx->pc = 0x24A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A374u;
    // 0x24a378: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358DF8u, 0x24A374u, 0x24A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A37Cu;
label_24a37c:
    // 0x24a37c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x24a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_24a380:
    // 0x24a380: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a384: 0x24537c80  addiu       $s3, $v0, 0x7C80
    ctx->pc = 0x24a384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31872));
    // 0x24a388: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24a388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a38c: 0xc09287e  jal         func_24A1F8
    ctx->pc = 0x24A38Cu;
    SET_GPR_U32(ctx, 31, 0x24A394u);
    ctx->pc = 0x24A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A38Cu;
    // 0x24a390: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A1F8u, 0x24A38Cu, 0x24A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A394u;
label_24a394:
    // 0x24a394: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A394u;
    {
        const bool branch_taken_0x24a394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A394u;
        // 0x24a398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a394) {
            ctx->pc = 0x24A3A4u;
            goto label_24a3a4;
        }
    }
    ctx->pc = 0x24A39Cu;
    // 0x24a39c: 0xc092854  jal         func_24A150
    ctx->pc = 0x24A39Cu;
    SET_GPR_U32(ctx, 31, 0x24A3A4u);
    ctx->pc = 0x24A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A39Cu;
    // 0x24a3a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A150u, 0x24A39Cu, 0x24A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3A4u;
label_24a3a4:
    // 0x24a3a4: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x24a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x24a3a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A3A8u;
    {
        const bool branch_taken_0x24a3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3A8u;
        // 0x24a3ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3a8) {
            ctx->pc = 0x24A3C0u;
            goto label_24a3c0;
        }
    }
    ctx->pc = 0x24A3B0u;
    // 0x24a3b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a3b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24a3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a3b8: 0xc09850e  jal         func_261438
    ctx->pc = 0x24A3B8u;
    SET_GPR_U32(ctx, 31, 0x24A3C0u);
    ctx->pc = 0x24A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A3B8u;
    // 0x24a3bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261438u, 0x24A3B8u, 0x24A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3C0u;
label_24a3c0:
    // 0x24a3c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24a3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24a3c4:
    // 0x24a3c4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x24a3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24a3c8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24a3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a3cc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x24a3ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24a3d0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24a3d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a3d4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x24a3d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24a3d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24a3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x24A3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3DCu;
        // 0x24a3e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A3E4u;
    // 0x24a3e4: 0x0  nop
    ctx->pc = 0x24a3e4u;
    // NOP
    ctx->pc = 0x24a3e8u;
}
