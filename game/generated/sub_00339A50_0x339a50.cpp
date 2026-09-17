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

// Function: sub_00339A50
// Address: 0x339a50 - 0x339ad8
void sub_00339A50_0x339a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339A50_0x339a50");
#endif

    switch (ctx->pc) {
        case 0x339a88u: goto label_339a88;
        default: break;
    }

    ctx->pc = 0x339a50u;

    // 0x339a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x339a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x339a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339a60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x339a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x339a64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x339a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339a68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x339a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x339a6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x339a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x339a70: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x339a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x339a74: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x339a74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x339a78: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x339A78u;
    {
        const bool branch_taken_0x339a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A78u;
        // 0x339a7c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339a78) {
            ctx->pc = 0x339AC0u;
            goto label_339ac0;
        }
    }
    ctx->pc = 0x339A80u;
    // 0x339a80: 0xc0ce6e6  jal         func_339B98
    ctx->pc = 0x339A80u;
    SET_GPR_U32(ctx, 31, 0x339A88u);
    ctx->pc = 0x339B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339B98u, 0x339A80u, 0x339A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339A88u;
label_339a88:
    // 0x339a88: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x339A88u;
    {
        const bool branch_taken_0x339a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A88u;
        // 0x339a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339a88) {
            ctx->pc = 0x339AC0u;
            goto label_339ac0;
        }
    }
    ctx->pc = 0x339A90u;
    // 0x339a90: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x339a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x339a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339a98: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x339a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x339a9c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x339a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x339aa0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x339aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x339aa4: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x339aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x339aa8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x339aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x339aac: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x339aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x339ab0: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x339ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x339ab4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x339ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x339ab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x339ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x339abc: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x339abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_339ac0:
    // 0x339ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339ac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x339ac8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x339ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339acc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x339accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x339AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AD0u;
        // 0x339ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339AD8u;
}
