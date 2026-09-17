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

// Function: sub_002E19C0
// Address: 0x2e19c0 - 0x2e1b88
void sub_002E19C0_0x2e19c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E19C0_0x2e19c0");
#endif

    switch (ctx->pc) {
        case 0x2e1a14u: goto label_2e1a14;
        case 0x2e1a40u: goto label_2e1a40;
        case 0x2e1a50u: goto label_2e1a50;
        case 0x2e1a60u: goto label_2e1a60;
        case 0x2e1a68u: goto label_2e1a68;
        case 0x2e1ad4u: goto label_2e1ad4;
        case 0x2e1b60u: goto label_2e1b60;
        default: break;
    }

    ctx->pc = 0x2e19c0u;

    // 0x2e19c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e19c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e19c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e19c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e19c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e19c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e19ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e19d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e19d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e19d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e19d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e19d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e19dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e19e0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e19e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e19e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e19e8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2e19e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e19ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2e19f0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2e19f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e19f8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2e19f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2e19fc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e1a00: 0x2442eb98  addiu       $v0, $v0, -0x1468
    ctx->pc = 0x2e1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962072));
    // 0x2e1a04: 0x26500054  addiu       $s0, $s2, 0x54
    ctx->pc = 0x2e1a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x2e1a08: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2e1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2e1a0c: 0xc0c0ff6  jal         func_303FD8
    ctx->pc = 0x2E1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E1A14u);
    ctx->pc = 0x2E1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A0Cu;
    // 0x2e1a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303FD8u, 0x2E1A0Cu, 0x2E1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A14u;
label_2e1a14:
    // 0x2e1a14: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2e1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e1a18: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2e1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2e1a1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e1a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e1a20: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x2e1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2e1a24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e1a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e1a28: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x2e1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
    // 0x2e1a2c: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2e1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x2e1a30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e1a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a34: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x2e1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x2e1a38: 0xc0c1008  jal         func_304020
    ctx->pc = 0x2E1A38u;
    SET_GPR_U32(ctx, 31, 0x2E1A40u);
    ctx->pc = 0x2E1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A38u;
    // 0x2e1a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304020u, 0x2E1A38u, 0x2E1A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A40u;
label_2e1a40:
    // 0x2e1a40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e1a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a48: 0xc0c101c  jal         func_304070
    ctx->pc = 0x2E1A48u;
    SET_GPR_U32(ctx, 31, 0x2E1A50u);
    ctx->pc = 0x2E1A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A48u;
    // 0x2e1a4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304070u, 0x2E1A48u, 0x2E1A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A50u;
label_2e1a50:
    // 0x2e1a50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e1a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a54: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e1a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a58: 0xc0c1054  jal         func_304150
    ctx->pc = 0x2E1A58u;
    SET_GPR_U32(ctx, 31, 0x2E1A60u);
    ctx->pc = 0x2E1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A58u;
    // 0x2e1a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304150u, 0x2E1A58u, 0x2E1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A60u;
label_2e1a60:
    // 0x2e1a60: 0xc0c10e2  jal         func_304388
    ctx->pc = 0x2E1A60u;
    SET_GPR_U32(ctx, 31, 0x2E1A68u);
    ctx->pc = 0x2E1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A60u;
    // 0x2e1a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304388u, 0x2E1A60u, 0x2E1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A68u;
label_2e1a68:
    // 0x2e1a68: 0x3c01c348  lui         $at, 0xC348
    ctx->pc = 0x2e1a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49992 << 16));
    // 0x2e1a6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e1a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1a70: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E1A70u;
    {
        const bool branch_taken_0x2e1a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A70u;
        // 0x2e1a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a70) {
            ctx->pc = 0x2E1AC0u;
            goto label_2e1ac0;
        }
    }
    ctx->pc = 0x2E1A78u;
    // 0x2e1a78: 0x3c01c352  lui         $at, 0xC352
    ctx->pc = 0x2e1a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50002 << 16));
    // 0x2e1a7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e1a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1a80: 0x1222000f  beq         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E1A80u;
    {
        const bool branch_taken_0x2e1a80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A80u;
        // 0x2e1a84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a80) {
            ctx->pc = 0x2E1AC0u;
            goto label_2e1ac0;
        }
    }
    ctx->pc = 0x2E1A88u;
    // 0x2e1a88: 0x3c01c35c  lui         $at, 0xC35C
    ctx->pc = 0x2e1a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50012 << 16));
    // 0x2e1a8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e1a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1a90: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E1A90u;
    {
        const bool branch_taken_0x2e1a90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A90u;
        // 0x2e1a94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a90) {
            ctx->pc = 0x2E1AC0u;
            goto label_2e1ac0;
        }
    }
    ctx->pc = 0x2E1A98u;
    // 0x2e1a98: 0x3c01c366  lui         $at, 0xC366
    ctx->pc = 0x2e1a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50022 << 16));
    // 0x2e1a9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e1a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1aa0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1AA0u;
    {
        const bool branch_taken_0x2e1aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AA0u;
        // 0x2e1aa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1aa0) {
            ctx->pc = 0x2E1AC0u;
            goto label_2e1ac0;
        }
    }
    ctx->pc = 0x2E1AA8u;
    // 0x2e1aa8: 0x3c01c370  lui         $at, 0xC370
    ctx->pc = 0x2e1aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50032 << 16));
    // 0x2e1aac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e1aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1ab0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1AB0u;
    {
        const bool branch_taken_0x2e1ab0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AB0u;
        // 0x2e1ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ab0) {
            ctx->pc = 0x2E1AC4u;
            goto label_2e1ac4;
        }
    }
    ctx->pc = 0x2E1AB8u;
    // 0x2e1ab8: 0x3c01c37a  lui         $at, 0xC37A
    ctx->pc = 0x2e1ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50042 << 16));
    // 0x2e1abc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e1abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e1ac0:
    // 0x2e1ac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e1ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e1ac4:
    // 0x2e1ac4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e1ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1ac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e1ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1acc: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2E1ACCu;
    SET_GPR_U32(ctx, 31, 0x2E1AD4u);
    ctx->pc = 0x2E1AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1ACCu;
    // 0x2e1ad0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2E1ACCu, 0x2E1AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AD4u;
label_2e1ad4:
    // 0x2e1ad4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2e1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e1ad8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e1ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1adc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2e1adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2e1ae0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e1ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1ae4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e1ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e1ae8: 0x2484fad0  addiu       $a0, $a0, -0x530
    ctx->pc = 0x2e1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965968));
    // 0x2e1aec: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E1AECu;
    {
        const bool branch_taken_0x2e1aec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AECu;
        // 0x2e1af0: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1aec) {
            ctx->pc = 0x2E1B3Cu;
            goto label_2e1b3c;
        }
    }
    ctx->pc = 0x2E1AF4u;
    // 0x2e1af4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e1af8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1afc: 0x1223000f  beq         $s1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E1AFCu;
    {
        const bool branch_taken_0x2e1afc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AFCu;
        // 0x2e1b00: 0x2444fac0  addiu       $a0, $v0, -0x540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1afc) {
            ctx->pc = 0x2E1B3Cu;
            goto label_2e1b3c;
        }
    }
    ctx->pc = 0x2E1B04u;
    // 0x2e1b04: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e1b08: 0x1225000c  beq         $s1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E1B08u;
    {
        const bool branch_taken_0x2e1b08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B08u;
        // 0x2e1b0c: 0x2444fab0  addiu       $a0, $v0, -0x550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b08) {
            ctx->pc = 0x2E1B3Cu;
            goto label_2e1b3c;
        }
    }
    ctx->pc = 0x2E1B10u;
    // 0x2e1b10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e1b14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e1b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1b18: 0x12230008  beq         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1B18u;
    {
        const bool branch_taken_0x2e1b18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B18u;
        // 0x2e1b1c: 0x2444faa0  addiu       $a0, $v0, -0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b18) {
            ctx->pc = 0x2E1B3Cu;
            goto label_2e1b3c;
        }
    }
    ctx->pc = 0x2E1B20u;
    // 0x2e1b20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e1b24: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1B24u;
    {
        const bool branch_taken_0x2e1b24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e1b24) {
            ctx->pc = 0x2E1B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1B24u;
            // 0x2e1b28: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1B38u;
            goto label_2e1b38;
        }
    }
    ctx->pc = 0x2E1B2Cu;
    // 0x2e1b2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e1b30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1B30u;
    {
        const bool branch_taken_0x2e1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B30u;
        // 0x2e1b34: 0x2444fa80  addiu       $a0, $v0, -0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b30) {
            ctx->pc = 0x2E1B3Cu;
            goto label_2e1b3c;
        }
    }
    ctx->pc = 0x2E1B38u;
label_2e1b38:
    // 0x2e1b38: 0x2444fa90  addiu       $a0, $v0, -0x570
    ctx->pc = 0x2e1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
label_2e1b3c:
    // 0x2e1b3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1B3Cu;
    {
        const bool branch_taken_0x2e1b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B3Cu;
        // 0x2e1b40: 0xae440038  sw          $a0, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b3c) {
            ctx->pc = 0x2E1B60u;
            goto label_2e1b60;
        }
    }
    ctx->pc = 0x2E1B44u;
    // 0x2e1b44: 0x0  nop
    ctx->pc = 0x2e1b44u;
    // NOP
    // 0x2e1b48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e1b4c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e1b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e1b50: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e1b54: 0x248403cc  addiu       $a0, $a0, 0x3CC
    ctx->pc = 0x2e1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 972));
    // 0x2e1b58: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E1B58u;
    SET_GPR_U32(ctx, 31, 0x2E1B60u);
    ctx->pc = 0x2E1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B58u;
    // 0x2e1b5c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E1B58u, 0x2E1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B60u;
label_2e1b60:
    // 0x2e1b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1b64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e1b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e1b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1b6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e1b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e1b70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e1b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e1b74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1b78: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e1b78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1b7c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2e1b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e1b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B80u;
        // 0x2e1b84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1B88u;
}
