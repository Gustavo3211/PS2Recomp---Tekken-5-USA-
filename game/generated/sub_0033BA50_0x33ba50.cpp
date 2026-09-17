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

// Function: sub_0033BA50
// Address: 0x33ba50 - 0x33bae0
void sub_0033BA50_0x33ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BA50_0x33ba50");
#endif

    switch (ctx->pc) {
        case 0x33bab4u: goto label_33bab4;
        case 0x33babcu: goto label_33babc;
        case 0x33bac4u: goto label_33bac4;
        default: break;
    }

    ctx->pc = 0x33ba50u;

    // 0x33ba50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33ba50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ba54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ba58: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33ba58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba5c: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x33ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x33ba60: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33ba60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33ba64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33ba68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33ba6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33ba6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba70: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x33ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x33ba74: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x33ba74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba78: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BA78u;
    {
        const bool branch_taken_0x33ba78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA78u;
        // 0x33ba7c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba78) {
            ctx->pc = 0x33BA88u;
            goto label_33ba88;
        }
    }
    ctx->pc = 0x33BA80u;
    // 0x33ba80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33BA80u;
    {
        const bool branch_taken_0x33ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA80u;
        // 0x33ba84: 0x8ca20044  lw          $v0, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba80) {
            ctx->pc = 0x33BA94u;
            goto label_33ba94;
        }
    }
    ctx->pc = 0x33BA88u;
label_33ba88:
    // 0x33ba88: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x33ba88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33ba8c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x33ba8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33ba90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33ba94:
    // 0x33ba94: 0x3e00008  jr          $ra
    ctx->pc = 0x33BA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA94u;
        // 0x33ba98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BA9Cu;
    // 0x33ba9c: 0x0  nop
    ctx->pc = 0x33ba9cu;
    // NOP
    // 0x33baa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33baa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33baa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33baac: 0xc0cebb4  jal         func_33AED0
    ctx->pc = 0x33BAACu;
    SET_GPR_U32(ctx, 31, 0x33BAB4u);
    ctx->pc = 0x33BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BAACu;
    // 0x33bab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x33BAACu, 0x33BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BAB4u;
label_33bab4:
    // 0x33bab4: 0xc0cebb4  jal         func_33AED0
    ctx->pc = 0x33BAB4u;
    SET_GPR_U32(ctx, 31, 0x33BABCu);
    ctx->pc = 0x33BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BAB4u;
    // 0x33bab8: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x33BAB4u, 0x33BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BABCu;
label_33babc:
    // 0x33babc: 0xc0cebb4  jal         func_33AED0
    ctx->pc = 0x33BABCu;
    SET_GPR_U32(ctx, 31, 0x33BAC4u);
    ctx->pc = 0x33BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BABCu;
    // 0x33bac0: 0x26040098  addiu       $a0, $s0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x33BABCu, 0x33BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BAC4u;
label_33bac4:
    // 0x33bac4: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x33bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x33bac8: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x33bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x33bacc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33baccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33bad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bad4: 0x3e00008  jr          $ra
    ctx->pc = 0x33BAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BAD4u;
        // 0x33bad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BADCu;
    // 0x33badc: 0x0  nop
    ctx->pc = 0x33badcu;
    // NOP
    ctx->pc = 0x33bae0u;
}
