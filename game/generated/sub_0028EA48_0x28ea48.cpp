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

// Function: sub_0028EA48
// Address: 0x28ea48 - 0x28ea90
void sub_0028EA48_0x28ea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EA48_0x28ea48");
#endif

    switch (ctx->pc) {
        case 0x28ea64u: goto label_28ea64;
        case 0x28ea7cu: goto label_28ea7c;
        default: break;
    }

    ctx->pc = 0x28ea48u;

    // 0x28ea48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ea4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ea50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ea50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28ea58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ea5c: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28EA5Cu;
    SET_GPR_U32(ctx, 31, 0x28EA64u);
    ctx->pc = 0x28EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA5Cu;
    // 0x28ea60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28EA5Cu, 0x28EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA64u;
label_28ea64:
    // 0x28ea64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28ea64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ea68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EA6Cu;
    {
        const bool branch_taken_0x28ea6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA6Cu;
        // 0x28ea70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea6c) {
            ctx->pc = 0x28EA7Cu;
            goto label_28ea7c;
        }
    }
    ctx->pc = 0x28EA74u;
    // 0x28ea74: 0xc0a2e46  jal         func_28B918
    ctx->pc = 0x28EA74u;
    SET_GPR_U32(ctx, 31, 0x28EA7Cu);
    ctx->pc = 0x28B918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B918u, 0x28EA74u, 0x28EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA7Cu;
label_28ea7c:
    // 0x28ea7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ea7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ea80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ea80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ea84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ea84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ea88: 0x3e00008  jr          $ra
    ctx->pc = 0x28EA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA88u;
        // 0x28ea8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EA90u;
}
