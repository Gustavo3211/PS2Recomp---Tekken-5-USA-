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

// Function: sub_00336830
// Address: 0x336830 - 0x336898
void sub_00336830_0x336830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336830_0x336830");
#endif

    switch (ctx->pc) {
        case 0x336830u: goto label_336830;
        case 0x336834u: goto label_336834;
        case 0x336838u: goto label_336838;
        case 0x33683cu: goto label_33683c;
        case 0x336840u: goto label_336840;
        case 0x336844u: goto label_336844;
        case 0x336848u: goto label_336848;
        case 0x33684cu: goto label_33684c;
        case 0x336850u: goto label_336850;
        case 0x336854u: goto label_336854;
        case 0x336858u: goto label_336858;
        case 0x33685cu: goto label_33685c;
        case 0x336860u: goto label_336860;
        case 0x336864u: goto label_336864;
        case 0x336868u: goto label_336868;
        case 0x33686cu: goto label_33686c;
        case 0x336870u: goto label_336870;
        case 0x336874u: goto label_336874;
        case 0x336878u: goto label_336878;
        case 0x33687cu: goto label_33687c;
        case 0x336880u: goto label_336880;
        case 0x336884u: goto label_336884;
        case 0x336888u: goto label_336888;
        case 0x33688cu: goto label_33688c;
        case 0x336890u: goto label_336890;
        case 0x336894u: goto label_336894;
        default: break;
    }

    ctx->pc = 0x336830u;

label_336830:
    // 0x336830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_336834:
    // 0x336834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_336838:
    // 0x336838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33683c:
    // 0x33683c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_336840:
    // 0x336840: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x336840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_336844:
    // 0x336844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_336848:
    // 0x336848: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x336848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33684c:
    // 0x33684c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_336850:
    // 0x336850: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x336850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_336854:
    // 0x336854: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x336854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_336858:
    // 0x336858: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x336858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33685c:
    // 0x33685c: 0x60f809  jalr        $v1
label_336860:
    if (ctx->pc == 0x336860u) {
        ctx->pc = 0x336860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33685Cu;
        // 0x336860: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336864u;
        goto label_336864;
    }
    ctx->pc = 0x33685Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x336864u);
        ctx->pc = 0x336860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33685Cu;
        // 0x336860: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33685Cu, 0x336864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336864u;
label_336864:
    // 0x336864: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x336864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_336868:
    // 0x336868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x336868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33686c:
    // 0x33686c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_336870:
    // 0x336870: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x336870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_336874:
    // 0x336874: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x336874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_336878:
    // 0x336878: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x336878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33687c:
    // 0x33687c: 0x60f809  jalr        $v1
label_336880:
    if (ctx->pc == 0x336880u) {
        ctx->pc = 0x336880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33687Cu;
        // 0x336880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336884u;
        goto label_336884;
    }
    ctx->pc = 0x33687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x336884u);
        ctx->pc = 0x336880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33687Cu;
        // 0x336880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33687Cu, 0x336884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336884u;
label_336884:
    // 0x336884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336888:
    // 0x336888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33688c:
    // 0x33688c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33688cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_336890:
    // 0x336890: 0x3e00008  jr          $ra
label_336894:
    if (ctx->pc == 0x336894u) {
        ctx->pc = 0x336894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336890u;
        // 0x336894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336898u;
        goto label_fallthrough_0x336890;
    }
    ctx->pc = 0x336890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336890u;
        // 0x336894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x336890:
    ctx->pc = 0x336898u;
}
