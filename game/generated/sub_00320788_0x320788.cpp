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

// Function: sub_00320788
// Address: 0x320788 - 0x320898
void sub_00320788_0x320788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320788_0x320788");
#endif

    switch (ctx->pc) {
        case 0x3207e8u: goto label_3207e8;
        case 0x320818u: goto label_320818;
        default: break;
    }

    ctx->pc = 0x320788u;

    // 0x320788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32078c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x32078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x320790: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x320790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x320794: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x320794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320798: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x320798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32079c: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x32079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x3207a0: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x3207a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x3207a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3207a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3207a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3207a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3207ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3207acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3207b0: 0x8c424000  lw          $v0, 0x4000($v0)
    ctx->pc = 0x3207b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x3207b4: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x3207b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x3207b8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3207B8u;
    {
        const bool branch_taken_0x3207b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3207BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207B8u;
        // 0x3207bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207b8) {
            ctx->pc = 0x320808u;
            goto label_320808;
        }
    }
    ctx->pc = 0x3207C0u;
    // 0x3207c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3207c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3207c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3207c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3207c8: 0x8c424004  lw          $v0, 0x4004($v0)
    ctx->pc = 0x3207c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16388)));
    // 0x3207cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3207CCu;
    {
        const bool branch_taken_0x3207cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3207cc) {
            ctx->pc = 0x3207E0u;
            goto label_3207e0;
        }
    }
    ctx->pc = 0x3207D4u;
    // 0x3207d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3207d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3207d8: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x3207d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x3207dc: 0xc42c4008  lwc1        $f12, 0x4008($at)
    ctx->pc = 0x3207dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3207e0:
    // 0x3207e0: 0xc0cfaf8  jal         func_33EBE0
    ctx->pc = 0x3207E0u;
    SET_GPR_U32(ctx, 31, 0x3207E8u);
    ctx->pc = 0x33EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBE0u, 0x3207E0u, 0x3207E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3207E8u;
label_3207e8:
    // 0x3207e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3207e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3207ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3207ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3207f0: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x3207f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3207f4: 0xa0850018  sb          $a1, 0x18($a0)
    ctx->pc = 0x3207f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x3207f8: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3207f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3207fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3207FCu;
    {
        const bool branch_taken_0x3207fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207FCu;
        // 0x320800: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207fc) {
            ctx->pc = 0x320808u;
            goto label_320808;
        }
    }
    ctx->pc = 0x320804u;
    // 0x320804: 0xa0850019  sb          $a1, 0x19($a0)
    ctx->pc = 0x320804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 5));
label_320808:
    // 0x320808: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x320808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32080c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x320810: 0x3e00008  jr          $ra
    ctx->pc = 0x320810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320810u;
        // 0x320814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320818u;
label_320818:
    // 0x320818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32081c: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x32081Cu;
    {
        const bool branch_taken_0x32081c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32081c) {
            ctx->pc = 0x320848u;
            goto label_320848;
        }
    }
    ctx->pc = 0x320824u;
    // 0x320824: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x320824u;
    {
        const bool branch_taken_0x320824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x320828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320824u;
        // 0x320828: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320824) {
            ctx->pc = 0x320840u;
            goto label_320840;
        }
    }
    ctx->pc = 0x32082Cu;
    // 0x32082c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320830: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x320830u;
    {
        const bool branch_taken_0x320830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x320830) {
            ctx->pc = 0x320870u;
            goto label_320870;
        }
    }
    ctx->pc = 0x320838u;
    // 0x320838: 0x3e00008  jr          $ra
    ctx->pc = 0x320838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320840u;
label_320840:
    // 0x320840: 0x3e00008  jr          $ra
    ctx->pc = 0x320840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320840u;
        // 0x320844: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320848u;
label_320848:
    // 0x320848: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x320848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x32084c: 0x34424080  ori         $v0, $v0, 0x4080
    ctx->pc = 0x32084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16512);
    // 0x320850: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x320850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x320854: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x320854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x320858: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x320858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32085c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x32085cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x320860: 0xac204004  sw          $zero, 0x4004($at)
    ctx->pc = 0x320860u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16388), GPR_U32(ctx, 0));
    // 0x320864: 0x3e00008  jr          $ra
    ctx->pc = 0x320864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32086Cu;
    // 0x32086c: 0x0  nop
    ctx->pc = 0x32086cu;
    // NOP
label_320870:
    // 0x320870: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x320870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x320874: 0x34424080  ori         $v0, $v0, 0x4080
    ctx->pc = 0x320874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16512);
    // 0x320878: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x320878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32087c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32087cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x320880: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x320880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x320884: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x320884u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x320888: 0xac234004  sw          $v1, 0x4004($at)
    ctx->pc = 0x320888u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16388), GPR_U32(ctx, 3));
    // 0x32088c: 0x3e00008  jr          $ra
    ctx->pc = 0x32088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32088Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320894u;
    // 0x320894: 0x0  nop
    ctx->pc = 0x320894u;
    // NOP
    ctx->pc = 0x320898u;
}
