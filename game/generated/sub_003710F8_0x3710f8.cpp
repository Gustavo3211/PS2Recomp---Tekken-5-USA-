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

// Function: sub_003710F8
// Address: 0x3710f8 - 0x3711a0
void sub_003710F8_0x3710f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003710F8_0x3710f8");
#endif

    switch (ctx->pc) {
        case 0x37110cu: goto label_37110c;
        default: break;
    }

    ctx->pc = 0x3710f8u;

    // 0x3710f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3710f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3710fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3710fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x371104: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x371104u;
    SET_GPR_U32(ctx, 31, 0x37110Cu);
    ctx->pc = 0x371108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371104u;
    // 0x371108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x371104u, 0x37110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37110Cu;
label_37110c:
    // 0x37110c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37110cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x371110: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371114: 0x246308d8  addiu       $v1, $v1, 0x8D8
    ctx->pc = 0x371114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2264));
    // 0x371118: 0x26040168  addiu       $a0, $s0, 0x168
    ctx->pc = 0x371118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x37111c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x37111cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x371120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371124: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x371124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x371128: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x371128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x37112c: 0x3e00008  jr          $ra
    ctx->pc = 0x37112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37112Cu;
        // 0x371130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37112Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371134u;
    // 0x371134: 0x0  nop
    ctx->pc = 0x371134u;
    // NOP
    // 0x371138: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x371138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x37113c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37113Cu;
    {
        const bool branch_taken_0x37113c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37113Cu;
        // 0x371140: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37113c) {
            ctx->pc = 0x37114Cu;
            goto label_37114c;
        }
    }
    ctx->pc = 0x371144u;
    // 0x371144: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x371144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x371148: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x371148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37114c:
    // 0x37114c: 0x3e00008  jr          $ra
    ctx->pc = 0x37114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37114Cu;
        // 0x371150: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371154u;
    // 0x371154: 0x0  nop
    ctx->pc = 0x371154u;
    // NOP
    // 0x371158: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x371158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37115c: 0x3e00008  jr          $ra
    ctx->pc = 0x37115Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37115Cu;
        // 0x371160: 0xac82015c  sw          $v0, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37115Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371164u;
    // 0x371164: 0x0  nop
    ctx->pc = 0x371164u;
    // NOP
    // 0x371168: 0x24840168  addiu       $a0, $a0, 0x168
    ctx->pc = 0x371168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
    // 0x37116c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x37116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x371170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x371170u;
    {
        const bool branch_taken_0x371170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371170u;
        // 0x371174: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371170) {
            ctx->pc = 0x371188u;
            goto label_371188;
        }
    }
    ctx->pc = 0x371178u;
    // 0x371178: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x371178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x37117c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x37117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x371180: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x371180u;
    {
        const bool branch_taken_0x371180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x371180) {
            ctx->pc = 0x371194u;
            goto label_371194;
        }
    }
    ctx->pc = 0x371188u;
label_371188:
    // 0x371188: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x371188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x37118c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37118cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371190: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x371190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_371194:
    // 0x371194: 0x3e00008  jr          $ra
    ctx->pc = 0x371194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371194u;
        // 0x371198: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37119Cu;
    // 0x37119c: 0x0  nop
    ctx->pc = 0x37119cu;
    // NOP
    ctx->pc = 0x3711a0u;
}
