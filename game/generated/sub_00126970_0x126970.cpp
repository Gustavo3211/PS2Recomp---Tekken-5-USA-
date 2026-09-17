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

// Function: sub_00126970
// Address: 0x126970 - 0x1269d0
void sub_00126970_0x126970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126970_0x126970");
#endif

    switch (ctx->pc) {
        case 0x126984u: goto label_126984;
        case 0x126998u: goto label_126998;
        case 0x1269a4u: goto label_1269a4;
        case 0x1269b0u: goto label_1269b0;
        case 0x1269b8u: goto label_1269b8;
        case 0x1269c0u: goto label_1269c0;
        default: break;
    }

    ctx->pc = 0x126970u;

    // 0x126970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126974: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x126974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x126978: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x126978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12697c: 0xc049a16  jal         func_126858
    ctx->pc = 0x12697Cu;
    SET_GPR_U32(ctx, 31, 0x126984u);
    ctx->pc = 0x126858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126858u, 0x12697Cu, 0x126984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126984u;
label_126984:
    // 0x126984: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x126984u;
    {
        const bool branch_taken_0x126984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126984u;
        // 0x126988: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126984) {
            ctx->pc = 0x1269D8u;
            return;
        }
    }
    ctx->pc = 0x12698Cu;
    // 0x12698c: 0x0  nop
    ctx->pc = 0x12698cu;
    // NOP
    // 0x126990: 0xc049afa  jal         func_126BE8
    ctx->pc = 0x126990u;
    SET_GPR_U32(ctx, 31, 0x126998u);
    ctx->pc = 0x126994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126990u;
    // 0x126994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126BE8u, 0x126990u, 0x126998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126998u;
label_126998:
    // 0x126998: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x126998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x12699c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x12699Cu;
    SET_GPR_U32(ctx, 31, 0x1269A4u);
    ctx->pc = 0x1269A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12699Cu;
    // 0x1269a0: 0x248407a4  addiu       $a0, $a0, 0x7A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1956));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x12699Cu, 0x1269A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269A4u;
label_1269a4:
    // 0x1269a4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1269a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1269a8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x1269A8u;
    SET_GPR_U32(ctx, 31, 0x1269B0u);
    ctx->pc = 0x1269ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269A8u;
    // 0x1269ac: 0x24840794  addiu       $a0, $a0, 0x794 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1940));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x1269A8u, 0x1269B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269B0u;
label_1269b0:
    // 0x1269b0: 0xc049ab0  jal         func_126AC0
    ctx->pc = 0x1269B0u;
    SET_GPR_U32(ctx, 31, 0x1269B8u);
    ctx->pc = 0x126AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AC0u, 0x1269B0u, 0x1269B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269B8u;
label_1269b8:
    // 0x1269b8: 0xc04c2dc  jal         func_130B70
    ctx->pc = 0x1269B8u;
    SET_GPR_U32(ctx, 31, 0x1269C0u);
    ctx->pc = 0x1269BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269B8u;
    // 0x1269bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130B70u, 0x1269B8u, 0x1269C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269C0u;
label_1269c0:
    // 0x1269c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1269c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1269c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1269c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269c8: 0xc049b5c  jal         func_126D70
    ctx->pc = 0x1269C8u;
    SET_GPR_U32(ctx, 31, 0x1269D0u);
    ctx->pc = 0x1269CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269C8u;
    // 0x1269cc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126D70u, 0x1269C8u, 0x1269D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269D0u;
}
