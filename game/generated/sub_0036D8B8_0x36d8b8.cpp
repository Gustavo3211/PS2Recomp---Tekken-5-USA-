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

// Function: sub_0036D8B8
// Address: 0x36d8b8 - 0x36d910
void sub_0036D8B8_0x36d8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D8B8_0x36d8b8");
#endif

    switch (ctx->pc) {
        case 0x36d8dcu: goto label_36d8dc;
        default: break;
    }

    ctx->pc = 0x36d8b8u;

    // 0x36d8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36d8c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36d8cc: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x36d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x36d8d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36d8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8d4: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x36D8D4u;
    SET_GPR_U32(ctx, 31, 0x36D8DCu);
    ctx->pc = 0x36D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D8D4u;
    // 0x36d8d8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x36D8D4u, 0x36D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D8DCu;
label_36d8dc:
    // 0x36d8dc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x36d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x36d8e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36d8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d8e4: 0x2463e938  addiu       $v1, $v1, -0x16C8
    ctx->pc = 0x36d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961464));
    // 0x36d8e8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x36d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x36d8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36D8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D8F0u;
        // 0x36d8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D8F8u;
    // 0x36d8f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36d8fc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36d900: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36d904: 0x2484022c  addiu       $a0, $a0, 0x22C
    ctx->pc = 0x36d904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    // 0x36d908: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36D908u;
    SET_GPR_U32(ctx, 31, 0x36D910u);
    ctx->pc = 0x36D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D908u;
    // 0x36d90c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36D908u, 0x36D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D910u;
}
