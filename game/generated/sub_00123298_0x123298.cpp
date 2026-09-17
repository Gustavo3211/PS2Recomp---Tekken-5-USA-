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

// Function: sub_00123298
// Address: 0x123298 - 0x123300
void sub_00123298_0x123298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123298_0x123298");
#endif

    switch (ctx->pc) {
        case 0x1232b8u: goto label_1232b8;
        case 0x1232c8u: goto label_1232c8;
        case 0x1232e4u: goto label_1232e4;
        case 0x1232ecu: goto label_1232ec;
        default: break;
    }

    ctx->pc = 0x123298u;

    // 0x123298: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x123298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12329c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x12329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1232a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1232a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1232a4: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1232a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1232a8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1232a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1232ac: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1232acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1232b0: 0xc049ca4  jal         func_127290
    ctx->pc = 0x1232B0u;
    SET_GPR_U32(ctx, 31, 0x1232B8u);
    ctx->pc = 0x1232B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232B0u;
    // 0x1232b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x1232B0u, 0x1232B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232B8u;
label_1232b8:
    // 0x1232b8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1232b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1232bc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1232bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1232c0: 0xc049ca4  jal         func_127290
    ctx->pc = 0x1232C0u;
    SET_GPR_U32(ctx, 31, 0x1232C8u);
    ctx->pc = 0x1232C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232C0u;
    // 0x1232c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x1232C0u, 0x1232C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232C8u;
label_1232c8:
    // 0x1232c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1232c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232cc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1232ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1232d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1232d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1232d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1232d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1232d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1232dc: 0xc048bf8  jal         func_122FE0
    ctx->pc = 0x1232DCu;
    SET_GPR_U32(ctx, 31, 0x1232E4u);
    ctx->pc = 0x1232E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232DCu;
    // 0x1232e0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FE0u, 0x1232DCu, 0x1232E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232E4u;
label_1232e4:
    // 0x1232e4: 0xc049c6e  jal         func_1271B8
    ctx->pc = 0x1232E4u;
    SET_GPR_U32(ctx, 31, 0x1232ECu);
    ctx->pc = 0x1232E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232E4u;
    // 0x1232e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271B8u, 0x1232E4u, 0x1232ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232ECu;
label_1232ec:
    // 0x1232ec: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1232ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1232f0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1232f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1232f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1232F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1232F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232F4u;
        // 0x1232f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1232F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1232FCu;
    // 0x1232fc: 0x0  nop
    ctx->pc = 0x1232fcu;
    // NOP
    ctx->pc = 0x123300u;
}
