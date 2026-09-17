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

// Function: sub_00341188
// Address: 0x341188 - 0x3411f0
void sub_00341188_0x341188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341188_0x341188");
#endif

    switch (ctx->pc) {
        case 0x3411b4u: goto label_3411b4;
        case 0x3411c4u: goto label_3411c4;
        case 0x3411d4u: goto label_3411d4;
        default: break;
    }

    ctx->pc = 0x341188u;

    // 0x341188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34118c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x341190: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x341190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341194: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x341194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x341198: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x341198u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x34119c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x34119cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3411a0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3411A0u;
    {
        const bool branch_taken_0x3411a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3411A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411A0u;
        // 0x3411a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3411a0) {
            ctx->pc = 0x3411DCu;
            goto label_3411dc;
        }
    }
    ctx->pc = 0x3411A8u;
    // 0x3411a8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3411a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3411ac: 0xc0d0718  jal         func_341C60
    ctx->pc = 0x3411ACu;
    SET_GPR_U32(ctx, 31, 0x3411B4u);
    ctx->pc = 0x3411B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3411ACu;
    // 0x3411b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C60u, 0x3411ACu, 0x3411B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3411B4u;
label_3411b4:
    // 0x3411b4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3411b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3411b8: 0x27a40001  addiu       $a0, $sp, 0x1
    ctx->pc = 0x3411b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x3411bc: 0xc0d0724  jal         func_341C90
    ctx->pc = 0x3411BCu;
    SET_GPR_U32(ctx, 31, 0x3411C4u);
    ctx->pc = 0x3411C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3411BCu;
    // 0x3411c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C90u, 0x3411BCu, 0x3411C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3411C4u;
label_3411c4:
    // 0x3411c4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3411c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3411c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3411c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3411cc: 0xc0d073c  jal         func_341CF0
    ctx->pc = 0x3411CCu;
    SET_GPR_U32(ctx, 31, 0x3411D4u);
    ctx->pc = 0x3411D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3411CCu;
    // 0x3411d0: 0x27a40002  addiu       $a0, $sp, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341CF0u, 0x3411CCu, 0x3411D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3411D4u;
label_3411d4:
    // 0x3411d4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3411d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3411d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3411d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3411dc:
    // 0x3411dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3411dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3411e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3411e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3411e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3411E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3411E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411E4u;
        // 0x3411e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3411E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3411ECu;
    // 0x3411ec: 0x0  nop
    ctx->pc = 0x3411ecu;
    // NOP
    ctx->pc = 0x3411f0u;
}
