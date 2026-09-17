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

// Function: sub_00275190
// Address: 0x275190 - 0x2751e8
void sub_00275190_0x275190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275190_0x275190");
#endif

    ctx->pc = 0x275190u;

    // 0x275190: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x275190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x275194: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275194u;
    {
        const bool branch_taken_0x275194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275194u;
        // 0x275198: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275194) {
            ctx->pc = 0x2751A8u;
            goto label_2751a8;
        }
    }
    ctx->pc = 0x27519Cu;
    // 0x27519c: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x27519cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x2751a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2751a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2751a4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2751a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2751a8:
    // 0x2751a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2751A8u;
    {
        const bool branch_taken_0x2751a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751A8u;
        // 0x2751ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751a8) {
            ctx->pc = 0x2751E0u;
            goto label_2751e0;
        }
    }
    ctx->pc = 0x2751B0u;
    // 0x2751b0: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x2751b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2751b4: 0x2404048c  addiu       $a0, $zero, 0x48C
    ctx->pc = 0x2751b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1164));
    // 0x2751b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2751b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2751bc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2751bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2751c0: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2751c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2751c4: 0x2421ee00  addiu       $at, $at, -0x1200
    ctx->pc = 0x2751c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962688));
    // 0x2751c8: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x2751c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2751cc: 0x8c640438  lw          $a0, 0x438($v1)
    ctx->pc = 0x2751ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1080)));
    // 0x2751d0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2751D0u;
    {
        const bool branch_taken_0x2751d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2751D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751D0u;
        // 0x2751d4: 0xaf83aa78  sw          $v1, -0x5588($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751d0) {
            ctx->pc = 0x2751E0u;
            goto label_2751e0;
        }
    }
    ctx->pc = 0x2751D8u;
    // 0x2751d8: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x2751d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2751dc: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2751dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2751e0:
    // 0x2751e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2751E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2751E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2751E8u;
}
