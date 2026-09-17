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

// Function: sub_0022A5D0
// Address: 0x22a5d0 - 0x22a620
void sub_0022A5D0_0x22a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A5D0_0x22a5d0");
#endif

    switch (ctx->pc) {
        case 0x22a600u: goto label_22a600;
        case 0x22a60cu: goto label_22a60c;
        default: break;
    }

    ctx->pc = 0x22a5d0u;

    // 0x22a5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22a5d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a5d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22a5dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22a5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22a5e8: 0x84900006  lh          $s0, 0x6($a0)
    ctx->pc = 0x22a5e8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22a5ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5f0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A5F0u;
    {
        const bool branch_taken_0x22a5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5F0u;
        // 0x22a5f4: 0x26050002  addiu       $a1, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5f0) {
            ctx->pc = 0x22A60Cu;
            goto label_22a60c;
        }
    }
    ctx->pc = 0x22A5F8u;
    // 0x22a5f8: 0xc08f3da  jal         func_23CF68
    ctx->pc = 0x22A5F8u;
    SET_GPR_U32(ctx, 31, 0x22A600u);
    ctx->pc = 0x23CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF68u, 0x22A5F8u, 0x22A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A600u;
label_22a600:
    // 0x22a600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a604: 0xc090a74  jal         func_2429D0
    ctx->pc = 0x22A604u;
    SET_GPR_U32(ctx, 31, 0x22A60Cu);
    ctx->pc = 0x22A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A604u;
    // 0x22a608: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2429D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2429D0u, 0x22A604u, 0x22A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A60Cu;
label_22a60c:
    // 0x22a60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22a614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a618: 0x3e00008  jr          $ra
    ctx->pc = 0x22A618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A618u;
        // 0x22a61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A620u;
}
