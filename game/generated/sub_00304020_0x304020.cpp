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

// Function: sub_00304020
// Address: 0x304020 - 0x304070
void sub_00304020_0x304020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304020_0x304020");
#endif

    switch (ctx->pc) {
        case 0x30403cu: goto label_30403c;
        case 0x304054u: goto label_304054;
        default: break;
    }

    ctx->pc = 0x304020u;

    // 0x304020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304028: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x304028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30402c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304034: 0xc0c10da  jal         func_304368
    ctx->pc = 0x304034u;
    SET_GPR_U32(ctx, 31, 0x30403Cu);
    ctx->pc = 0x304038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304034u;
    // 0x304038: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304368u, 0x304034u, 0x30403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30403Cu;
label_30403c:
    // 0x30403c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304044: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304044u;
    {
        const bool branch_taken_0x304044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304044u;
        // 0x304048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304044) {
            ctx->pc = 0x30405Cu;
            goto label_30405c;
        }
    }
    ctx->pc = 0x30404Cu;
    // 0x30404c: 0xc0c82a6  jal         func_320A98
    ctx->pc = 0x30404Cu;
    SET_GPR_U32(ctx, 31, 0x304054u);
    ctx->pc = 0x320A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A98u, 0x30404Cu, 0x304054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304054u;
label_304054:
    // 0x304054: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x304054u;
    {
        const bool branch_taken_0x304054 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x304054) {
            ctx->pc = 0x304058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304054u;
            // 0x304058: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30405Cu;
            goto label_30405c;
        }
    }
    ctx->pc = 0x30405Cu;
label_30405c:
    // 0x30405c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30405cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304068: 0x3e00008  jr          $ra
    ctx->pc = 0x304068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304068u;
        // 0x30406c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304070u;
}
