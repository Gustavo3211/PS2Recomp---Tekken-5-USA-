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

// Function: sub_00340C80
// Address: 0x340c80 - 0x340ce8
void sub_00340C80_0x340c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340C80_0x340c80");
#endif

    switch (ctx->pc) {
        case 0x340c80u: goto label_340c80;
        case 0x340c84u: goto label_340c84;
        case 0x340c88u: goto label_340c88;
        case 0x340c8cu: goto label_340c8c;
        case 0x340c90u: goto label_340c90;
        case 0x340c94u: goto label_340c94;
        case 0x340c98u: goto label_340c98;
        case 0x340c9cu: goto label_340c9c;
        case 0x340ca0u: goto label_340ca0;
        case 0x340ca4u: goto label_340ca4;
        case 0x340ca8u: goto label_340ca8;
        case 0x340cacu: goto label_340cac;
        case 0x340cb0u: goto label_340cb0;
        case 0x340cb4u: goto label_340cb4;
        case 0x340cb8u: goto label_340cb8;
        case 0x340cbcu: goto label_340cbc;
        case 0x340cc0u: goto label_340cc0;
        case 0x340cc4u: goto label_340cc4;
        case 0x340cc8u: goto label_340cc8;
        case 0x340cccu: goto label_340ccc;
        case 0x340cd0u: goto label_340cd0;
        case 0x340cd4u: goto label_340cd4;
        case 0x340cd8u: goto label_340cd8;
        case 0x340cdcu: goto label_340cdc;
        case 0x340ce0u: goto label_340ce0;
        case 0x340ce4u: goto label_340ce4;
        default: break;
    }

    ctx->pc = 0x340c80u;

label_340c80:
    // 0x340c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_340c84:
    // 0x340c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_340c88:
    // 0x340c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340c8c:
    // 0x340c8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x340c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_340c90:
    // 0x340c90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340c94:
    // 0x340c94: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x340c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_340c98:
    // 0x340c98: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_340c9c:
    if (ctx->pc == 0x340C9Cu) {
        ctx->pc = 0x340C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C98u;
        // 0x340c9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340CA0u;
        goto label_340ca0;
    }
    ctx->pc = 0x340C98u;
    {
        const bool branch_taken_0x340c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c98) {
            ctx->pc = 0x340C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340C98u;
            // 0x340c9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340CDCu;
            goto label_340cdc;
        }
    }
    ctx->pc = 0x340CA0u;
label_340ca0:
    // 0x340ca0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x340ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_340ca4:
    // 0x340ca4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x340ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_340ca8:
    // 0x340ca8: 0x40f809  jalr        $v0
label_340cac:
    if (ctx->pc == 0x340CACu) {
        ctx->pc = 0x340CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CA8u;
        // 0x340cac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340CB0u;
        goto label_340cb0;
    }
    ctx->pc = 0x340CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340CB0u);
        ctx->pc = 0x340CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CA8u;
        // 0x340cac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340CA8u, 0x340CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340CB0u;
label_340cb0:
    // 0x340cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340cb4:
    // 0x340cb4: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_340cb8:
    if (ctx->pc == 0x340CB8u) {
        ctx->pc = 0x340CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CB4u;
        // 0x340cb8: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340CBCu;
        goto label_340cbc;
    }
    ctx->pc = 0x340CB4u;
    {
        const bool branch_taken_0x340cb4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x340CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CB4u;
        // 0x340cb8: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cb4) {
            ctx->pc = 0x340CD8u;
            goto label_340cd8;
        }
    }
    ctx->pc = 0x340CBCu;
label_340cbc:
    // 0x340cbc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x340cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340cc0:
    // 0x340cc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x340cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_340cc4:
    // 0x340cc4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_340cc8:
    if (ctx->pc == 0x340CC8u) {
        ctx->pc = 0x340CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CC4u;
        // 0x340cc8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340CCCu;
        goto label_340ccc;
    }
    ctx->pc = 0x340CC4u;
    {
        const bool branch_taken_0x340cc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x340CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CC4u;
        // 0x340cc8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cc4) {
            ctx->pc = 0x340CD8u;
            goto label_340cd8;
        }
    }
    ctx->pc = 0x340CCCu;
label_340ccc:
    // 0x340ccc: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x340cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_340cd0:
    // 0x340cd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x340cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_340cd4:
    // 0x340cd4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x340cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_340cd8:
    // 0x340cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340cdc:
    // 0x340cdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x340cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_340ce0:
    // 0x340ce0: 0x3e00008  jr          $ra
label_340ce4:
    if (ctx->pc == 0x340CE4u) {
        ctx->pc = 0x340CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CE0u;
        // 0x340ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340CE8u;
        goto label_fallthrough_0x340ce0;
    }
    ctx->pc = 0x340CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CE0u;
        // 0x340ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340ce0:
    ctx->pc = 0x340CE8u;
}
