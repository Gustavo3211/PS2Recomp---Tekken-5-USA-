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

// Function: sub_00340E80
// Address: 0x340e80 - 0x340ec0
void sub_00340E80_0x340e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340E80_0x340e80");
#endif

    switch (ctx->pc) {
        case 0x340e9cu: goto label_340e9c;
        case 0x340ea8u: goto label_340ea8;
        default: break;
    }

    ctx->pc = 0x340e80u;

    // 0x340e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340e90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x340e94: 0xc0d03b0  jal         func_340EC0
    ctx->pc = 0x340E94u;
    SET_GPR_U32(ctx, 31, 0x340E9Cu);
    ctx->pc = 0x340E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340E94u;
    // 0x340e98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340EC0u, 0x340E94u, 0x340E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340E9Cu;
label_340e9c:
    // 0x340e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ea0: 0xc0d03c0  jal         func_340F00
    ctx->pc = 0x340EA0u;
    SET_GPR_U32(ctx, 31, 0x340EA8u);
    ctx->pc = 0x340EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340EA0u;
    // 0x340ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340F00u, 0x340EA0u, 0x340EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340EA8u;
label_340ea8:
    // 0x340ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x340ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340eb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340eb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x340EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EB8u;
        // 0x340ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340EC0u;
}
