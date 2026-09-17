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

// Function: sub_0031D488
// Address: 0x31d488 - 0x31d4e0
void sub_0031D488_0x31d488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D488_0x31d488");
#endif

    switch (ctx->pc) {
        case 0x31d4b8u: goto label_31d4b8;
        case 0x31d4c0u: goto label_31d4c0;
        case 0x31d4c8u: goto label_31d4c8;
        case 0x31d4d0u: goto label_31d4d0;
        default: break;
    }

    ctx->pc = 0x31d488u;

    // 0x31d488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d48c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31d490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31d490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31d494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31d498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31d49c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x31d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31d4a0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x31d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x31d4a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31d4a8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x31d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x31d4ac: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x31d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x31d4b0: 0xc0ce688  jal         func_339A20
    ctx->pc = 0x31D4B0u;
    SET_GPR_U32(ctx, 31, 0x31D4B8u);
    ctx->pc = 0x31D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4B0u;
    // 0x31d4b4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A20u, 0x31D4B0u, 0x31D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4B8u;
label_31d4b8:
    // 0x31d4b8: 0xc0ce688  jal         func_339A20
    ctx->pc = 0x31D4B8u;
    SET_GPR_U32(ctx, 31, 0x31D4C0u);
    ctx->pc = 0x31D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4B8u;
    // 0x31d4bc: 0x260400a4  addiu       $a0, $s0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A20u, 0x31D4B8u, 0x31D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4C0u;
label_31d4c0:
    // 0x31d4c0: 0xc0ce688  jal         func_339A20
    ctx->pc = 0x31D4C0u;
    SET_GPR_U32(ctx, 31, 0x31D4C8u);
    ctx->pc = 0x31D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4C0u;
    // 0x31d4c4: 0x26040128  addiu       $a0, $s0, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A20u, 0x31D4C0u, 0x31D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4C8u;
label_31d4c8:
    // 0x31d4c8: 0xc0ce688  jal         func_339A20
    ctx->pc = 0x31D4C8u;
    SET_GPR_U32(ctx, 31, 0x31D4D0u);
    ctx->pc = 0x31D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4C8u;
    // 0x31d4cc: 0x260401ac  addiu       $a0, $s0, 0x1AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A20u, 0x31D4C8u, 0x31D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4D0u;
label_31d4d0:
    // 0x31d4d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31d4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d4d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31d4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31d4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x31D4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4D8u;
        // 0x31d4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D4E0u;
}
