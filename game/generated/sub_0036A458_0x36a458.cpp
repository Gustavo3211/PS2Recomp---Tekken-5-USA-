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

// Function: sub_0036A458
// Address: 0x36a458 - 0x36a4b0
void sub_0036A458_0x36a458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A458_0x36a458");
#endif

    switch (ctx->pc) {
        case 0x36a47cu: goto label_36a47c;
        default: break;
    }

    ctx->pc = 0x36a458u;

    // 0x36a458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a464: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36a468: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36a468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36a46c: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x36a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x36a470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36a470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a474: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x36A474u;
    SET_GPR_U32(ctx, 31, 0x36A47Cu);
    ctx->pc = 0x36A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A474u;
    // 0x36a478: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x36A474u, 0x36A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A47Cu;
label_36a47c:
    // 0x36a47c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x36a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x36a480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a484: 0x2463d8d0  addiu       $v1, $v1, -0x2730
    ctx->pc = 0x36a484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957264));
    // 0x36a488: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x36a488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x36a48c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a490: 0x3e00008  jr          $ra
    ctx->pc = 0x36A490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A490u;
        // 0x36a494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A498u;
    // 0x36a498: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36a498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36a49c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36a4a0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36a4a4: 0x2484fc88  addiu       $a0, $a0, -0x378
    ctx->pc = 0x36a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966408));
    // 0x36a4a8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36A4A8u;
    SET_GPR_U32(ctx, 31, 0x36A4B0u);
    ctx->pc = 0x36A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A4A8u;
    // 0x36a4ac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36A4A8u, 0x36A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4B0u;
}
