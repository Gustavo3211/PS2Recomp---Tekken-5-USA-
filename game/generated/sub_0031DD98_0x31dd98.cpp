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

// Function: sub_0031DD98
// Address: 0x31dd98 - 0x31dde0
void sub_0031DD98_0x31dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DD98_0x31dd98");
#endif

    switch (ctx->pc) {
        case 0x31ddb8u: goto label_31ddb8;
        default: break;
    }

    ctx->pc = 0x31dd98u;

    // 0x31dd98: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x31dd98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x31dd9c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x31dd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31dda0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x31DDA0u;
    {
        const bool branch_taken_0x31dda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDA0u;
        // 0x31dda4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dda0) {
            ctx->pc = 0x31DDD8u;
            goto label_31ddd8;
        }
    }
    ctx->pc = 0x31DDA8u;
    // 0x31dda8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x31DDA8u;
    {
        const bool branch_taken_0x31dda8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDA8u;
        // 0x31ddac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dda8) {
            ctx->pc = 0x31DDD8u;
            goto label_31ddd8;
        }
    }
    ctx->pc = 0x31DDB0u;
    // 0x31ddb0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x31ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x31ddb4: 0x0  nop
    ctx->pc = 0x31ddb4u;
    // NOP
label_31ddb8:
    // 0x31ddb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31ddbc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31ddc0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31ddc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31ddc4: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x31ddc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x31ddc8: 0x0  nop
    ctx->pc = 0x31ddc8u;
    // NOP
    // 0x31ddcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31DDCCu;
    {
        const bool branch_taken_0x31ddcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDCCu;
        // 0x31ddd0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddcc) {
            ctx->pc = 0x31DDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ddb8;
        }
    }
    ctx->pc = 0x31DDD4u;
    // 0x31ddd4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x31ddd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31ddd8:
    // 0x31ddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x31DDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DDE0u;
}
