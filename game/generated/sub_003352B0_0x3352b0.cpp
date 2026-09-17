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

// Function: sub_003352B0
// Address: 0x3352b0 - 0x335308
void sub_003352B0_0x3352b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003352B0_0x3352b0");
#endif

    switch (ctx->pc) {
        case 0x3352ecu: goto label_3352ec;
        case 0x3352f8u: goto label_3352f8;
        default: break;
    }

    ctx->pc = 0x3352b0u;

    // 0x3352b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3352b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3352b4: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x3352b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3352b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3352b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3352bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3352bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3352c0: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x3352c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3352c4: 0x94b00020  lhu         $s0, 0x20($a1)
    ctx->pc = 0x3352c4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3352c8: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x3352c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3352cc: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x3352ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x3352d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3352d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3352d4: 0x108142  srl         $s0, $s0, 5
    ctx->pc = 0x3352d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x3352d8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3352d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3352dc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x3352dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x3352e0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3352e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3352e4: 0xc0cd57a  jal         func_3355E8
    ctx->pc = 0x3352E4u;
    SET_GPR_U32(ctx, 31, 0x3352ECu);
    ctx->pc = 0x3352E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3352E4u;
    // 0x3352e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x3352E4u, 0x3352ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3352ECu;
label_3352ec:
    // 0x3352ec: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x3352ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3352f0: 0xc0cd57a  jal         func_3355E8
    ctx->pc = 0x3352F0u;
    SET_GPR_U32(ctx, 31, 0x3352F8u);
    ctx->pc = 0x3352F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3352F0u;
    // 0x3352f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x3352F0u, 0x3352F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3352F8u;
label_3352f8:
    // 0x3352f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3352f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3352fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3352fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335300: 0x3e00008  jr          $ra
    ctx->pc = 0x335300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335300u;
        // 0x335304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335308u;
}
