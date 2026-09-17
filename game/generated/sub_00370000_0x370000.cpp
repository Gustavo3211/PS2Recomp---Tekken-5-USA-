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

// Function: sub_00370000
// Address: 0x370000 - 0x370030
void sub_00370000_0x370000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370000_0x370000");
#endif

    ctx->pc = 0x370000u;

    // 0x370000: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x370000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x370004: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x370004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x370008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37000c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37000Cu;
    {
        const bool branch_taken_0x37000c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x370010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37000Cu;
        // 0x370010: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37000c) {
            ctx->pc = 0x370020u;
            goto label_370020;
        }
    }
    ctx->pc = 0x370014u;
    // 0x370014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370018: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x370018u;
    ctx->pc = 0x37001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370018u;
    // 0x37001c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x370020u;
label_370020:
    // 0x370020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370024: 0x3e00008  jr          $ra
    ctx->pc = 0x370024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370024u;
        // 0x370028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37002Cu;
    // 0x37002c: 0x0  nop
    ctx->pc = 0x37002cu;
    // NOP
    ctx->pc = 0x370030u;
}
