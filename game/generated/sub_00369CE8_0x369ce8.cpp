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

// Function: sub_00369CE8
// Address: 0x369ce8 - 0x369d40
void sub_00369CE8_0x369ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369CE8_0x369ce8");
#endif

    switch (ctx->pc) {
        case 0x369d0cu: goto label_369d0c;
        default: break;
    }

    ctx->pc = 0x369ce8u;

    // 0x369ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369cf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x369cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x369cf8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369cfc: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x369cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x369d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369d04: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x369D04u;
    SET_GPR_U32(ctx, 31, 0x369D0Cu);
    ctx->pc = 0x369D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D04u;
    // 0x369d08: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x369D04u, 0x369D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D0Cu;
label_369d0c:
    // 0x369d0c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x369d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x369d10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369d14: 0x2463d718  addiu       $v1, $v1, -0x28E8
    ctx->pc = 0x369d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956824));
    // 0x369d18: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x369d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x369d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369d20: 0x3e00008  jr          $ra
    ctx->pc = 0x369D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D20u;
        // 0x369d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369D28u;
    // 0x369d28: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369d2c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x369d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x369d30: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x369d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x369d34: 0x2484fb70  addiu       $a0, $a0, -0x490
    ctx->pc = 0x369d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966128));
    // 0x369d38: 0xc048b90  jal         func_122E40
    ctx->pc = 0x369D38u;
    SET_GPR_U32(ctx, 31, 0x369D40u);
    ctx->pc = 0x369D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D38u;
    // 0x369d3c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x369D38u, 0x369D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D40u;
}
