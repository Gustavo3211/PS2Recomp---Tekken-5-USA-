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

// Function: sub_0010FE80
// Address: 0x10fe80 - 0x10fee8
void sub_0010FE80_0x10fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FE80_0x10fe80");
#endif

    switch (ctx->pc) {
        case 0x10feb0u: goto label_10feb0;
        case 0x10feb8u: goto label_10feb8;
        case 0x10fed0u: goto label_10fed0;
        default: break;
    }

    ctx->pc = 0x10fe80u;

    // 0x10fe80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10fe84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10fe88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10fe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10fe8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10fe8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fe94: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10fe94u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10fe98: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10fe9c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10fe9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10fea0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FEA0u;
    {
        const bool branch_taken_0x10fea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fea0) {
            ctx->pc = 0x10FEB0u;
            goto label_10feb0;
        }
    }
    ctx->pc = 0x10FEA8u;
    // 0x10fea8: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10FEA8u;
    SET_GPR_U32(ctx, 31, 0x10FEB0u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10FEA8u, 0x10FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEB0u;
label_10feb0:
    // 0x10feb0: 0xc043c3c  jal         func_10F0F0
    ctx->pc = 0x10FEB0u;
    SET_GPR_U32(ctx, 31, 0x10FEB8u);
    ctx->pc = 0x10FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEB0u;
    // 0x10feb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0F0u, 0x10FEB0u, 0x10FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEB8u;
label_10feb8:
    // 0x10feb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10feb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10febc: 0xf  sync
    ctx->pc = 0x10febcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10fec0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FEC0u;
    {
        const bool branch_taken_0x10fec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEC0u;
        // 0x10fec4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fec0) {
            ctx->pc = 0x10FED4u;
            goto label_10fed4;
        }
    }
    ctx->pc = 0x10FEC8u;
    // 0x10fec8: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x10FEC8u;
    SET_GPR_U32(ctx, 31, 0x10FED0u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x10FEC8u, 0x10FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FED0u;
label_10fed0:
    // 0x10fed0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10fed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fed4:
    // 0x10fed4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10fed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fed8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fee0: 0x3e00008  jr          $ra
    ctx->pc = 0x10FEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEE0u;
        // 0x10fee4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FEE8u;
}
