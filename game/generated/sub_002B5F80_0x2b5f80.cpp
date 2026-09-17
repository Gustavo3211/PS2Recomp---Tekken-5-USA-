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

// Function: sub_002B5F80
// Address: 0x2b5f80 - 0x2b5fd8
void sub_002B5F80_0x2b5f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5F80_0x2b5f80");
#endif

    switch (ctx->pc) {
        case 0x2b5fa0u: goto label_2b5fa0;
        case 0x2b5fa8u: goto label_2b5fa8;
        default: break;
    }

    ctx->pc = 0x2b5f80u;

    // 0x2b5f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5f88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b5f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b5f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5f90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b5f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f94: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5F94u;
    {
        const bool branch_taken_0x2b5f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F94u;
        // 0x2b5f98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f94) {
            ctx->pc = 0x2B5FC0u;
            goto label_2b5fc0;
        }
    }
    ctx->pc = 0x2B5F9Cu;
    // 0x2b5f9c: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2b5f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2b5fa0:
    // 0x2b5fa0: 0xc0a9d5a  jal         func_2A7568
    ctx->pc = 0x2B5FA0u;
    SET_GPR_U32(ctx, 31, 0x2B5FA8u);
    ctx->pc = 0x2B5FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FA0u;
    // 0x2b5fa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7568u, 0x2B5FA0u, 0x2B5FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FA8u;
label_2b5fa8:
    // 0x2b5fa8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5FA8u;
    {
        const bool branch_taken_0x2b5fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5fa8) {
            ctx->pc = 0x2B5FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5FA8u;
            // 0x2b5fac: 0x8e100070  lw          $s0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5FB8u;
            goto label_2b5fb8;
        }
    }
    ctx->pc = 0x2B5FB0u;
    // 0x2b5fb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5FB0u;
    {
        const bool branch_taken_0x2b5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FB0u;
        // 0x2b5fb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fb0) {
            ctx->pc = 0x2B5FC4u;
            goto label_2b5fc4;
        }
    }
    ctx->pc = 0x2B5FB8u;
label_2b5fb8:
    // 0x2b5fb8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B5FB8u;
    {
        const bool branch_taken_0x2b5fb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5fb8) {
            ctx->pc = 0x2B5FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5FB8u;
            // 0x2b5fbc: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5fa0;
        }
    }
    ctx->pc = 0x2B5FC0u;
label_2b5fc0:
    // 0x2b5fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5fc4:
    // 0x2b5fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FD0u;
        // 0x2b5fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5FD8u;
}
