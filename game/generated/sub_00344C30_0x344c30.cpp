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

// Function: sub_00344C30
// Address: 0x344c30 - 0x344ca0
void sub_00344C30_0x344c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344C30_0x344c30");
#endif

    switch (ctx->pc) {
        case 0x344c44u: goto label_344c44;
        case 0x344c5cu: goto label_344c5c;
        case 0x344c88u: goto label_344c88;
        case 0x344c90u: goto label_344c90;
        default: break;
    }

    ctx->pc = 0x344c30u;

    // 0x344c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344c38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344c3c: 0xc0d12f6  jal         func_344BD8
    ctx->pc = 0x344C3Cu;
    SET_GPR_U32(ctx, 31, 0x344C44u);
    ctx->pc = 0x344C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C3Cu;
    // 0x344c40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344BD8u, 0x344C3Cu, 0x344C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C44u;
label_344c44:
    // 0x344c44: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x344c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x344c48: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x344c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x344c4c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x344C4Cu;
    {
        const bool branch_taken_0x344c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x344C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C4Cu;
        // 0x344c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c4c) {
            ctx->pc = 0x344C90u;
            goto label_344c90;
        }
    }
    ctx->pc = 0x344C54u;
    // 0x344c54: 0xc0d1302  jal         func_344C08
    ctx->pc = 0x344C54u;
    SET_GPR_U32(ctx, 31, 0x344C5Cu);
    ctx->pc = 0x344C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344C08u, 0x344C54u, 0x344C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C5Cu;
label_344c5c:
    // 0x344c5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x344C5Cu;
    {
        const bool branch_taken_0x344c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C5Cu;
        // 0x344c60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c5c) {
            ctx->pc = 0x344C80u;
            goto label_344c80;
        }
    }
    ctx->pc = 0x344C64u;
    // 0x344c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344c68: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x344c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x344c6c: 0xa2000047  sb          $zero, 0x47($s0)
    ctx->pc = 0x344c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x344c70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344c78: 0x80d2390  j           func_348E40
    ctx->pc = 0x344C78u;
    ctx->pc = 0x344C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C78u;
    // 0x344c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348E40u;
    sub_00348E40_0x348e40(rdram, ctx, runtime); return;
    ctx->pc = 0x344C80u;
label_344c80:
    // 0x344c80: 0xc0d144a  jal         func_345128
    ctx->pc = 0x344C80u;
    SET_GPR_U32(ctx, 31, 0x344C88u);
    ctx->pc = 0x344C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C80u;
    // 0x344c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345128u, 0x344C80u, 0x344C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C88u;
label_344c88:
    // 0x344c88: 0xc0d14ca  jal         func_345328
    ctx->pc = 0x344C88u;
    SET_GPR_U32(ctx, 31, 0x344C90u);
    ctx->pc = 0x344C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C88u;
    // 0x344c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345328u, 0x344C88u, 0x344C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C90u;
label_344c90:
    // 0x344c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344c94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344c98: 0x3e00008  jr          $ra
    ctx->pc = 0x344C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C98u;
        // 0x344c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344CA0u;
}
