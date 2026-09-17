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

// Function: sub_00295240
// Address: 0x295240 - 0x295290
void sub_00295240_0x295240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295240_0x295240");
#endif

    switch (ctx->pc) {
        case 0x295260u: goto label_295260;
        case 0x29526cu: goto label_29526c;
        default: break;
    }

    ctx->pc = 0x295240u;

    // 0x295240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x295248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29524c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29524cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x295250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x295254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x295258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29525c: 0x0  nop
    ctx->pc = 0x29525cu;
    // NOP
label_295260:
    // 0x295260: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x295260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x295264: 0xc0a5482  jal         func_295208
    ctx->pc = 0x295264u;
    SET_GPR_U32(ctx, 31, 0x29526Cu);
    ctx->pc = 0x295268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295264u;
    // 0x295268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295208u, 0x295264u, 0x29526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29526Cu;
label_29526c:
    // 0x29526c: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x29526cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x295270: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x295270u;
    {
        const bool branch_taken_0x295270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295270u;
        // 0x295274: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295270) {
            ctx->pc = 0x295260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295260;
        }
    }
    ctx->pc = 0x295278u;
    // 0x295278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29527c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29527cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x295280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295284: 0x3e00008  jr          $ra
    ctx->pc = 0x295284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295284u;
        // 0x295288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29528Cu;
    // 0x29528c: 0x0  nop
    ctx->pc = 0x29528cu;
    // NOP
    ctx->pc = 0x295290u;
}
