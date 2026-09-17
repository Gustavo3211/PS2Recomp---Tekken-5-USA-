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

// Function: sub_002B7CC0
// Address: 0x2b7cc0 - 0x2b7d20
void sub_002B7CC0_0x2b7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7CC0_0x2b7cc0");
#endif

    switch (ctx->pc) {
        case 0x2b7ce0u: goto label_2b7ce0;
        case 0x2b7cf4u: goto label_2b7cf4;
        default: break;
    }

    ctx->pc = 0x2b7cc0u;

    // 0x2b7cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7cc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b7cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ccc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7cd0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b7cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7cd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b7cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b7cd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b7cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7cdc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b7cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2b7ce0:
    // 0x2b7ce0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7CE0u;
    {
        const bool branch_taken_0x2b7ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CE0u;
        // 0x2b7ce4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ce0) {
            ctx->pc = 0x2B7D04u;
            goto label_2b7d04;
        }
    }
    ctx->pc = 0x2B7CE8u;
    // 0x2b7ce8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b7ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7cec: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x2B7CECu;
    SET_GPR_U32(ctx, 31, 0x2B7CF4u);
    ctx->pc = 0x2B7CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7CECu;
    // 0x2b7cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x2B7CECu, 0x2B7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CF4u;
label_2b7cf4:
    // 0x2b7cf4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B7CF4u;
    {
        const bool branch_taken_0x2b7cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7cf4) {
            ctx->pc = 0x2B7CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7CF4u;
            // 0x2b7cf8: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7ce0;
        }
    }
    ctx->pc = 0x2B7CFCu;
    // 0x2b7cfc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2b7cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d00: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b7d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d04:
    // 0x2b7d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7d08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7d0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b7d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7d10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b7d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7d14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D14u;
        // 0x2b7d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7D1Cu;
    // 0x2b7d1c: 0x0  nop
    ctx->pc = 0x2b7d1cu;
    // NOP
    ctx->pc = 0x2b7d20u;
}
