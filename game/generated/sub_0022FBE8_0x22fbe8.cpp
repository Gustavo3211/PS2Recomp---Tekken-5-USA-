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

// Function: sub_0022FBE8
// Address: 0x22fbe8 - 0x22fc48
void sub_0022FBE8_0x22fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FBE8_0x22fbe8");
#endif

    switch (ctx->pc) {
        case 0x22fc00u: goto label_22fc00;
        case 0x22fc08u: goto label_22fc08;
        default: break;
    }

    ctx->pc = 0x22fbe8u;

    // 0x22fbe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22fbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22fbec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22fbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fbf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22fbf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22fbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22fbf8: 0xc08bef0  jal         func_22FBC0
    ctx->pc = 0x22FBF8u;
    SET_GPR_U32(ctx, 31, 0x22FC00u);
    ctx->pc = 0x22FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBF8u;
    // 0x22fbfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBC0u, 0x22FBF8u, 0x22FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC00u;
label_22fc00:
    // 0x22fc00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22fc00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22fc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fc08:
    // 0x22fc08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22fc0c: 0xa4600036  sh          $zero, 0x36($v1)
    ctx->pc = 0x22fc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x22fc10: 0x2c820040  sltiu       $v0, $a0, 0x40
    ctx->pc = 0x22fc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x22fc14: 0x0  nop
    ctx->pc = 0x22fc14u;
    // NOP
    // 0x22fc18: 0x0  nop
    ctx->pc = 0x22fc18u;
    // NOP
    // 0x22fc1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22FC1Cu;
    {
        const bool branch_taken_0x22fc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC1Cu;
        // 0x22fc20: 0x24630038  addiu       $v1, $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc1c) {
            ctx->pc = 0x22FC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fc08;
        }
    }
    ctx->pc = 0x22FC24u;
    // 0x22fc24: 0x24020e54  addiu       $v0, $zero, 0xE54
    ctx->pc = 0x22fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3668));
    // 0x22fc28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22fc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fc2c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x22fc2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22fc30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fc30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fc34: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x22fc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x22fc38: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x22fc38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x22fc3c: 0xac20b32c  sw          $zero, -0x4CD4($at)
    ctx->pc = 0x22fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947628), GPR_U32(ctx, 0));
    // 0x22fc40: 0x3e00008  jr          $ra
    ctx->pc = 0x22FC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC40u;
        // 0x22fc44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FC48u;
}
