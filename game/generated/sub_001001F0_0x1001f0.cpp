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

// Function: sub_001001F0
// Address: 0x1001f0 - 0x100240
void sub_001001F0_0x1001f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001001F0_0x1001f0");
#endif

    ctx->pc = 0x1001f0u;

    // 0x1001f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1001f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1001f4: 0x28860004  slti        $a2, $a0, 0x4
    ctx->pc = 0x1001f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1001f8: 0x28a7000a  slti        $a3, $a1, 0xA
    ctx->pc = 0x1001f8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1001fc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1001FCu;
    {
        const bool branch_taken_0x1001fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x100200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1001FCu;
        // 0x100200: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1001fc) {
            ctx->pc = 0x100224u;
            goto label_100224;
        }
    }
    ctx->pc = 0x100204u;
    // 0x100204: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x100204u;
    {
        const bool branch_taken_0x100204 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x100204) {
            ctx->pc = 0x100238u;
            goto label_100238;
        }
    }
    ctx->pc = 0x10020Cu;
    // 0x10020c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x10020cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x100210: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x100210u;
    {
        const bool branch_taken_0x100210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100210) {
            ctx->pc = 0x100238u;
            goto label_100238;
        }
    }
    ctx->pc = 0x100218u;
    // 0x100218: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x100218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x10021c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10021Cu;
    {
        const bool branch_taken_0x10021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10021c) {
            ctx->pc = 0x100238u;
            goto label_100238;
        }
    }
    ctx->pc = 0x100224u;
label_100224:
    // 0x100224: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x100224u;
    {
        const bool branch_taken_0x100224 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x100228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100224u;
        // 0x100228: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100224) {
            ctx->pc = 0x100238u;
            goto label_100238;
        }
    }
    ctx->pc = 0x10022Cu;
    // 0x10022c: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10022Cu;
    {
        const bool branch_taken_0x10022c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x100230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10022Cu;
        // 0x100230: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10022c) {
            ctx->pc = 0x100238u;
            goto label_100238;
        }
    }
    ctx->pc = 0x100234u;
    // 0x100234: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x100234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100238:
    // 0x100238: 0x3e00008  jr          $ra
    ctx->pc = 0x100238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100238u;
        // 0x10023c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100240u;
}
