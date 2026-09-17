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

// Function: sub_002EEE90
// Address: 0x2eee90 - 0x2eeef8
void sub_002EEE90_0x2eee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEE90_0x2eee90");
#endif

    switch (ctx->pc) {
        case 0x2eee90u: goto label_2eee90;
        case 0x2eee94u: goto label_2eee94;
        case 0x2eee98u: goto label_2eee98;
        case 0x2eee9cu: goto label_2eee9c;
        case 0x2eeea0u: goto label_2eeea0;
        case 0x2eeea4u: goto label_2eeea4;
        case 0x2eeea8u: goto label_2eeea8;
        case 0x2eeeacu: goto label_2eeeac;
        case 0x2eeeb0u: goto label_2eeeb0;
        case 0x2eeeb4u: goto label_2eeeb4;
        case 0x2eeeb8u: goto label_2eeeb8;
        case 0x2eeebcu: goto label_2eeebc;
        case 0x2eeec0u: goto label_2eeec0;
        case 0x2eeec4u: goto label_2eeec4;
        case 0x2eeec8u: goto label_2eeec8;
        case 0x2eeeccu: goto label_2eeecc;
        case 0x2eeed0u: goto label_2eeed0;
        case 0x2eeed4u: goto label_2eeed4;
        case 0x2eeed8u: goto label_2eeed8;
        case 0x2eeedcu: goto label_2eeedc;
        case 0x2eeee0u: goto label_2eeee0;
        case 0x2eeee4u: goto label_2eeee4;
        case 0x2eeee8u: goto label_2eeee8;
        case 0x2eeeecu: goto label_2eeeec;
        case 0x2eeef0u: goto label_2eeef0;
        case 0x2eeef4u: goto label_2eeef4;
        default: break;
    }

    ctx->pc = 0x2eee90u;

label_2eee90:
    // 0x2eee90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2eee94:
    // 0x2eee94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eee98:
    // 0x2eee98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eee98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eee9c:
    // 0x2eee9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2eeea0:
    // 0x2eeea0: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x2eeea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_2eeea4:
    // 0x2eeea4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2eeea8:
    if (ctx->pc == 0x2EEEA8u) {
        ctx->pc = 0x2EEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEA4u;
        // 0x2eeea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEEACu;
        goto label_2eeeac;
    }
    ctx->pc = 0x2EEEA4u;
    {
        const bool branch_taken_0x2eeea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEA4u;
        // 0x2eeea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeea4) {
            ctx->pc = 0x2EEEE4u;
            goto label_2eeee4;
        }
    }
    ctx->pc = 0x2EEEACu;
label_2eeeac:
    // 0x2eeeac: 0xc0da5fc  jal         func_3697F0
label_2eeeb0:
    if (ctx->pc == 0x2EEEB0u) {
        ctx->pc = 0x2EEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEACu;
        // 0x2eeeb0: 0x80850000  lb          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEEB4u;
        goto label_2eeeb4;
    }
    ctx->pc = 0x2EEEACu;
    SET_GPR_U32(ctx, 31, 0x2EEEB4u);
    ctx->pc = 0x2EEEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEEACu;
    // 0x2eeeb0: 0x80850000  lb          $a1, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2EEEACu, 0x2EEEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEEB4u;
label_2eeeb4:
    // 0x2eeeb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2eeeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2eeeb8:
    // 0x2eeeb8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2eeeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2eeebc:
    // 0x2eeebc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eeebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eeec0:
    // 0x2eeec0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eeec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eeec4:
    // 0x2eeec4: 0x60f809  jalr        $v1
label_2eeec8:
    if (ctx->pc == 0x2EEEC8u) {
        ctx->pc = 0x2EEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEC4u;
        // 0x2eeec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEECCu;
        goto label_2eeecc;
    }
    ctx->pc = 0x2EEEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EEECCu);
        ctx->pc = 0x2EEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEC4u;
        // 0x2eeec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEEC4u, 0x2EEECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEECCu;
label_2eeecc:
    // 0x2eeecc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2eeeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2eeed0:
    // 0x2eeed0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2eeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2eeed4:
    // 0x2eeed4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eeed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eeed8:
    // 0x2eeed8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eeed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eeedc:
    // 0x2eeedc: 0x60f809  jalr        $v1
label_2eeee0:
    if (ctx->pc == 0x2EEEE0u) {
        ctx->pc = 0x2EEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEDCu;
        // 0x2eeee0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEEE4u;
        goto label_2eeee4;
    }
    ctx->pc = 0x2EEEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EEEE4u);
        ctx->pc = 0x2EEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEDCu;
        // 0x2eeee0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEEDCu, 0x2EEEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEEE4u;
label_2eeee4:
    // 0x2eeee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eeee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eeee8:
    // 0x2eeee8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eeee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2eeeec:
    // 0x2eeeec: 0x3e00008  jr          $ra
label_2eeef0:
    if (ctx->pc == 0x2EEEF0u) {
        ctx->pc = 0x2EEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEECu;
        // 0x2eeef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEEF4u;
        goto label_2eeef4;
    }
    ctx->pc = 0x2EEEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEECu;
        // 0x2eeef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEEF4u;
label_2eeef4:
    // 0x2eeef4: 0x0  nop
    ctx->pc = 0x2eeef4u;
    // NOP
    ctx->pc = 0x2eeef8u;
}
