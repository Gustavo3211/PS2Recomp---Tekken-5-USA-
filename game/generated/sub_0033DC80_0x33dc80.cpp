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

// Function: sub_0033DC80
// Address: 0x33dc80 - 0x33dce0
void sub_0033DC80_0x33dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DC80_0x33dc80");
#endif

    switch (ctx->pc) {
        case 0x33dc80u: goto label_33dc80;
        case 0x33dc84u: goto label_33dc84;
        case 0x33dc88u: goto label_33dc88;
        case 0x33dc8cu: goto label_33dc8c;
        case 0x33dc90u: goto label_33dc90;
        case 0x33dc94u: goto label_33dc94;
        case 0x33dc98u: goto label_33dc98;
        case 0x33dc9cu: goto label_33dc9c;
        case 0x33dca0u: goto label_33dca0;
        case 0x33dca4u: goto label_33dca4;
        case 0x33dca8u: goto label_33dca8;
        case 0x33dcacu: goto label_33dcac;
        case 0x33dcb0u: goto label_33dcb0;
        case 0x33dcb4u: goto label_33dcb4;
        case 0x33dcb8u: goto label_33dcb8;
        case 0x33dcbcu: goto label_33dcbc;
        case 0x33dcc0u: goto label_33dcc0;
        case 0x33dcc4u: goto label_33dcc4;
        case 0x33dcc8u: goto label_33dcc8;
        case 0x33dcccu: goto label_33dccc;
        case 0x33dcd0u: goto label_33dcd0;
        case 0x33dcd4u: goto label_33dcd4;
        case 0x33dcd8u: goto label_33dcd8;
        case 0x33dcdcu: goto label_33dcdc;
        default: break;
    }

    ctx->pc = 0x33dc80u;

label_33dc80:
    // 0x33dc80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33dc84:
    // 0x33dc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33dc88:
    // 0x33dc88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33dc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33dc8c:
    // 0x33dc8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_33dc90:
    // 0x33dc90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33dc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33dc94:
    // 0x33dc94: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x33dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_33dc98:
    // 0x33dc98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x33dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_33dc9c:
    // 0x33dc9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x33dc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_33dca0:
    // 0x33dca0: 0xc043f26  jal         func_10FC98
label_33dca4:
    if (ctx->pc == 0x33DCA4u) {
        ctx->pc = 0x33DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCA0u;
        // 0x33dca4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCA8u;
        goto label_33dca8;
    }
    ctx->pc = 0x33DCA0u;
    SET_GPR_U32(ctx, 31, 0x33DCA8u);
    ctx->pc = 0x33DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DCA0u;
    // 0x33dca4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x33DCA0u, 0x33DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DCA8u;
label_33dca8:
    // 0x33dca8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33dcac:
    // 0x33dcac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_33dcb0:
    if (ctx->pc == 0x33DCB0u) {
        ctx->pc = 0x33DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCACu;
        // 0x33dcb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCB4u;
        goto label_33dcb4;
    }
    ctx->pc = 0x33DCACu;
    {
        const bool branch_taken_0x33dcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dcac) {
            ctx->pc = 0x33DCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DCACu;
            // 0x33dcb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DCD0u;
            goto label_33dcd0;
        }
    }
    ctx->pc = 0x33DCB4u;
label_33dcb4:
    // 0x33dcb4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33dcb8:
    // 0x33dcb8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33dcbc:
    // 0x33dcbc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33dcbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33dcc0:
    // 0x33dcc0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33dcc4:
    // 0x33dcc4: 0x60f809  jalr        $v1
label_33dcc8:
    if (ctx->pc == 0x33DCC8u) {
        ctx->pc = 0x33DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCC4u;
        // 0x33dcc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCCCu;
        goto label_33dccc;
    }
    ctx->pc = 0x33DCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DCCCu);
        ctx->pc = 0x33DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCC4u;
        // 0x33dcc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DCC4u, 0x33DCCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DCCCu;
label_33dccc:
    // 0x33dccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33dcccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33dcd0:
    // 0x33dcd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dcd4:
    // 0x33dcd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33dcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33dcd8:
    // 0x33dcd8: 0x3e00008  jr          $ra
label_33dcdc:
    if (ctx->pc == 0x33DCDCu) {
        ctx->pc = 0x33DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCD8u;
        // 0x33dcdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCE0u;
        goto label_fallthrough_0x33dcd8;
    }
    ctx->pc = 0x33DCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCD8u;
        // 0x33dcdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33dcd8:
    ctx->pc = 0x33DCE0u;
}
