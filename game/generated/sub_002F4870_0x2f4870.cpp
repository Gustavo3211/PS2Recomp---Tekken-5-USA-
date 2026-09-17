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

// Function: sub_002F4870
// Address: 0x2f4870 - 0x2f48c0
void sub_002F4870_0x2f4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4870_0x2f4870");
#endif

    switch (ctx->pc) {
        case 0x2f4870u: goto label_2f4870;
        case 0x2f4874u: goto label_2f4874;
        case 0x2f4878u: goto label_2f4878;
        case 0x2f487cu: goto label_2f487c;
        case 0x2f4880u: goto label_2f4880;
        case 0x2f4884u: goto label_2f4884;
        case 0x2f4888u: goto label_2f4888;
        case 0x2f488cu: goto label_2f488c;
        case 0x2f4890u: goto label_2f4890;
        case 0x2f4894u: goto label_2f4894;
        case 0x2f4898u: goto label_2f4898;
        case 0x2f489cu: goto label_2f489c;
        case 0x2f48a0u: goto label_2f48a0;
        case 0x2f48a4u: goto label_2f48a4;
        case 0x2f48a8u: goto label_2f48a8;
        case 0x2f48acu: goto label_2f48ac;
        case 0x2f48b0u: goto label_2f48b0;
        case 0x2f48b4u: goto label_2f48b4;
        case 0x2f48b8u: goto label_2f48b8;
        case 0x2f48bcu: goto label_2f48bc;
        default: break;
    }

    ctx->pc = 0x2f4870u;

label_2f4870:
    // 0x2f4870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f4874:
    // 0x2f4874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f4874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f4878:
    // 0x2f4878: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f4878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2f487c:
    // 0x2f487c: 0xc0b7a78  jal         func_2DE9E0
label_2f4880:
    if (ctx->pc == 0x2F4880u) {
        ctx->pc = 0x2F4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F487Cu;
        // 0x2f4880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4884u;
        goto label_2f4884;
    }
    ctx->pc = 0x2F487Cu;
    SET_GPR_U32(ctx, 31, 0x2F4884u);
    ctx->pc = 0x2F4880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F487Cu;
    // 0x2f4880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE9E0u, 0x2F487Cu, 0x2F4884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4884u;
label_2f4884:
    // 0x2f4884: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2f4884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_2f4888:
    // 0x2f4888: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2f488c:
    if (ctx->pc == 0x2F488Cu) {
        ctx->pc = 0x2F488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4888u;
        // 0x2f488c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4890u;
        goto label_2f4890;
    }
    ctx->pc = 0x2F4888u;
    {
        const bool branch_taken_0x2f4888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4888) {
            ctx->pc = 0x2F488Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4888u;
            // 0x2f488c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F48B0u;
            goto label_2f48b0;
        }
    }
    ctx->pc = 0x2F4890u;
label_2f4890:
    // 0x2f4890: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f4890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f4894:
    // 0x2f4894: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2f4894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2f4898:
    // 0x2f4898: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f4898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f489c:
    // 0x2f489c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f489cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f48a0:
    // 0x2f48a0: 0x60f809  jalr        $v1
label_2f48a4:
    if (ctx->pc == 0x2F48A4u) {
        ctx->pc = 0x2F48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48A0u;
        // 0x2f48a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48A8u;
        goto label_2f48a8;
    }
    ctx->pc = 0x2F48A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F48A8u);
        ctx->pc = 0x2F48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48A0u;
        // 0x2f48a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F48A0u, 0x2F48A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F48A8u;
label_2f48a8:
    // 0x2f48a8: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x2f48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_2f48ac:
    // 0x2f48ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f48acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f48b0:
    // 0x2f48b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f48b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f48b4:
    // 0x2f48b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f48b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f48b8:
    // 0x2f48b8: 0x3e00008  jr          $ra
label_2f48bc:
    if (ctx->pc == 0x2F48BCu) {
        ctx->pc = 0x2F48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48B8u;
        // 0x2f48bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48C0u;
        goto label_fallthrough_0x2f48b8;
    }
    ctx->pc = 0x2F48B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48B8u;
        // 0x2f48bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F48B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f48b8:
    ctx->pc = 0x2F48C0u;
}
