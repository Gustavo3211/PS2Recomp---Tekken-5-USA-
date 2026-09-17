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

// Function: sub_0023BA10
// Address: 0x23ba10 - 0x23ba88
void sub_0023BA10_0x23ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BA10_0x23ba10");
#endif

    switch (ctx->pc) {
        case 0x23ba50u: goto label_23ba50;
        case 0x23ba68u: goto label_23ba68;
        case 0x23ba78u: goto label_23ba78;
        default: break;
    }

    ctx->pc = 0x23ba10u;

    // 0x23ba10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ba14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23ba14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ba1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ba1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23ba20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23ba24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ba28: 0x24650160  addiu       $a1, $v1, 0x160
    ctx->pc = 0x23ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x23ba2c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x23BA2Cu;
    {
        const bool branch_taken_0x23ba2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA2Cu;
        // 0x23ba30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba2c) {
            ctx->pc = 0x23BA78u;
            goto label_23ba78;
        }
    }
    ctx->pc = 0x23BA34u;
    // 0x23ba34: 0x84a70000  lh          $a3, 0x0($a1)
    ctx->pc = 0x23ba34u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23ba38: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23BA38u;
    {
        const bool branch_taken_0x23ba38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA38u;
        // 0x23ba3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba38) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23BA40u;
    // 0x23ba40: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BA40u;
    {
        const bool branch_taken_0x23ba40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ba40) {
            ctx->pc = 0x23BA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA40u;
            // 0x23ba44: 0x90620010  lbu         $v0, 0x10($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA58u;
            goto label_23ba58;
        }
    }
    ctx->pc = 0x23BA48u;
    // 0x23ba48: 0xc08ecb8  jal         func_23B2E0
    ctx->pc = 0x23BA48u;
    SET_GPR_U32(ctx, 31, 0x23BA50u);
    ctx->pc = 0x23B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B2E0u, 0x23BA48u, 0x23BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA50u;
label_23ba50:
    // 0x23ba50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23ba54:
    // 0x23ba54: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x23ba54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_23ba58:
    // 0x23ba58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BA58u;
    {
        const bool branch_taken_0x23ba58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ba58) {
            ctx->pc = 0x23BA70u;
            goto label_23ba70;
        }
    }
    ctx->pc = 0x23BA60u;
    // 0x23ba60: 0xc08ee0c  jal         func_23B830
    ctx->pc = 0x23BA60u;
    SET_GPR_U32(ctx, 31, 0x23BA68u);
    ctx->pc = 0x23BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA60u;
    // 0x23ba64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B830u, 0x23BA60u, 0x23BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA68u;
label_23ba68:
    // 0x23ba68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23BA68u;
    {
        const bool branch_taken_0x23ba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA68u;
        // 0x23ba6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba68) {
            ctx->pc = 0x23BA7Cu;
            goto label_23ba7c;
        }
    }
    ctx->pc = 0x23BA70u;
label_23ba70:
    // 0x23ba70: 0xc08ee30  jal         func_23B8C0
    ctx->pc = 0x23BA70u;
    SET_GPR_U32(ctx, 31, 0x23BA78u);
    ctx->pc = 0x23BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA70u;
    // 0x23ba74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8C0u, 0x23BA70u, 0x23BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA78u;
label_23ba78:
    // 0x23ba78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ba78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ba7c:
    // 0x23ba7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ba7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x23BA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA80u;
        // 0x23ba84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BA88u;
}
