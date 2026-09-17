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

// Function: sub_002D09A8
// Address: 0x2d09a8 - 0x2d0a30
void sub_002D09A8_0x2d09a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D09A8_0x2d09a8");
#endif

    switch (ctx->pc) {
        case 0x2d09bcu: goto label_2d09bc;
        case 0x2d09c0u: goto label_2d09c0;
        case 0x2d09c8u: goto label_2d09c8;
        case 0x2d09d0u: goto label_2d09d0;
        case 0x2d09d8u: goto label_2d09d8;
        case 0x2d09ecu: goto label_2d09ec;
        case 0x2d09f4u: goto label_2d09f4;
        case 0x2d09f8u: goto label_2d09f8;
        case 0x2d0a00u: goto label_2d0a00;
        case 0x2d0a10u: goto label_2d0a10;
        case 0x2d0a24u: goto label_2d0a24;
        default: break;
    }

    ctx->pc = 0x2d09a8u;

    // 0x2d09a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d09a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d09ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d09acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d09b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d09b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d09b4: 0xc0b4258  jal         func_2D0960
    ctx->pc = 0x2D09B4u;
    SET_GPR_U32(ctx, 31, 0x2D09BCu);
    ctx->pc = 0x2D0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0960u, 0x2D09B4u, 0x2D09BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09BCu;
label_2d09bc:
    // 0x2d09bc: 0x0  nop
    ctx->pc = 0x2d09bcu;
    // NOP
label_2d09c0:
    // 0x2d09c0: 0xc043cb0  jal         func_10F2C0
    ctx->pc = 0x2D09C0u;
    SET_GPR_U32(ctx, 31, 0x2D09C8u);
    ctx->pc = 0x10F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2C0u, 0x2D09C0u, 0x2D09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09C8u;
label_2d09c8:
    // 0x2d09c8: 0xc08fe08  jal         func_23F820
    ctx->pc = 0x2D09C8u;
    SET_GPR_U32(ctx, 31, 0x2D09D0u);
    ctx->pc = 0x23F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F820u, 0x2D09C8u, 0x2D09D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09D0u;
label_2d09d0:
    // 0x2d09d0: 0xc08e596  jal         func_239658
    ctx->pc = 0x2D09D0u;
    SET_GPR_U32(ctx, 31, 0x2D09D8u);
    ctx->pc = 0x239658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239658u, 0x2D09D0u, 0x2D09D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09D8u;
label_2d09d8:
    // 0x2d09d8: 0x8f82cb2c  lw          $v0, -0x34D4($gp)
    ctx->pc = 0x2d09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953772)));
    // 0x2d09dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D09DCu;
    {
        const bool branch_taken_0x2d09dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d09dc) {
            ctx->pc = 0x2D09ECu;
            goto label_2d09ec;
        }
    }
    ctx->pc = 0x2D09E4u;
    // 0x2d09e4: 0xc0b4258  jal         func_2D0960
    ctx->pc = 0x2D09E4u;
    SET_GPR_U32(ctx, 31, 0x2D09ECu);
    ctx->pc = 0x2D0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0960u, 0x2D09E4u, 0x2D09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09ECu;
label_2d09ec:
    // 0x2d09ec: 0xc0b430a  jal         func_2D0C28
    ctx->pc = 0x2D09ECu;
    SET_GPR_U32(ctx, 31, 0x2D09F4u);
    ctx->pc = 0x2D09F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D09ECu;
    // 0x2d09f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0C28u, 0x2D09ECu, 0x2D09F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09F4u;
label_2d09f4:
    // 0x2d09f4: 0x0  nop
    ctx->pc = 0x2d09f4u;
    // NOP
label_2d09f8:
    // 0x2d09f8: 0xc08e674  jal         func_2399D0
    ctx->pc = 0x2D09F8u;
    SET_GPR_U32(ctx, 31, 0x2D0A00u);
    ctx->pc = 0x2D09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D09F8u;
    // 0x2d09fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2399D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2399D0u, 0x2D09F8u, 0x2D0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A00u;
label_2d0a00:
    // 0x2d0a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d0a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a08: 0xc0b4210  jal         func_2D0840
    ctx->pc = 0x2D0A08u;
    SET_GPR_U32(ctx, 31, 0x2D0A10u);
    ctx->pc = 0x2D0A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A08u;
    // 0x2d0a0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0840u, 0x2D0A08u, 0x2D0A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A10u;
label_2d0a10:
    // 0x2d0a10: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2d0a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d0a14: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D0A14u;
    {
        const bool branch_taken_0x2d0a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a14) {
            ctx->pc = 0x2D09F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d09f8;
        }
    }
    ctx->pc = 0x2D0A1Cu;
    // 0x2d0a1c: 0xc0b4228  jal         func_2D08A0
    ctx->pc = 0x2D0A1Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A24u);
    ctx->pc = 0x2D08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D08A0u, 0x2D0A1Cu, 0x2D0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A24u;
label_2d0a24:
    // 0x2d0a24: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x2D0A24u;
    {
        const bool branch_taken_0x2d0a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a24) {
            ctx->pc = 0x2D09C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d09c0;
        }
    }
    ctx->pc = 0x2D0A2Cu;
    // 0x2d0a2c: 0x0  nop
    ctx->pc = 0x2d0a2cu;
    // NOP
    ctx->pc = 0x2d0a30u;
}
