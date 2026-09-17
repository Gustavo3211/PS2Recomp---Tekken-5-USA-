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

// Function: sub_0033CFC8
// Address: 0x33cfc8 - 0x33d010
void sub_0033CFC8_0x33cfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CFC8_0x33cfc8");
#endif

    switch (ctx->pc) {
        case 0x33cfc8u: goto label_33cfc8;
        case 0x33cfccu: goto label_33cfcc;
        case 0x33cfd0u: goto label_33cfd0;
        case 0x33cfd4u: goto label_33cfd4;
        case 0x33cfd8u: goto label_33cfd8;
        case 0x33cfdcu: goto label_33cfdc;
        case 0x33cfe0u: goto label_33cfe0;
        case 0x33cfe4u: goto label_33cfe4;
        case 0x33cfe8u: goto label_33cfe8;
        case 0x33cfecu: goto label_33cfec;
        case 0x33cff0u: goto label_33cff0;
        case 0x33cff4u: goto label_33cff4;
        case 0x33cff8u: goto label_33cff8;
        case 0x33cffcu: goto label_33cffc;
        case 0x33d000u: goto label_33d000;
        case 0x33d004u: goto label_33d004;
        case 0x33d008u: goto label_33d008;
        case 0x33d00cu: goto label_33d00c;
        default: break;
    }

    ctx->pc = 0x33cfc8u;

label_33cfc8:
    // 0x33cfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33cfcc:
    // 0x33cfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33cfd0:
    // 0x33cfd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33cfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33cfd4:
    // 0x33cfd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_33cfd8:
    // 0x33cfd8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x33cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33cfdc:
    // 0x33cfdc: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x33cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_33cfe0:
    // 0x33cfe0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33cfe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33cfe4:
    // 0x33cfe4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33cfe8:
    // 0x33cfe8: 0x40f809  jalr        $v0
label_33cfec:
    if (ctx->pc == 0x33CFECu) {
        ctx->pc = 0x33CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFE8u;
        // 0x33cfec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CFF0u;
        goto label_33cff0;
    }
    ctx->pc = 0x33CFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33CFF0u);
        ctx->pc = 0x33CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFE8u;
        // 0x33cfec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CFE8u, 0x33CFF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CFF0u;
label_33cff0:
    // 0x33cff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33cff4:
    if (ctx->pc == 0x33CFF4u) {
        ctx->pc = 0x33CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFF0u;
        // 0x33cff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CFF8u;
        goto label_33cff8;
    }
    ctx->pc = 0x33CFF0u;
    {
        const bool branch_taken_0x33cff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFF0u;
        // 0x33cff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cff0) {
            ctx->pc = 0x33D000u;
            goto label_33d000;
        }
    }
    ctx->pc = 0x33CFF8u;
label_33cff8:
    // 0x33cff8: 0xc0ceaf2  jal         func_33ABC8
label_33cffc:
    if (ctx->pc == 0x33CFFCu) {
        ctx->pc = 0x33CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFF8u;
        // 0x33cffc: 0x8f84ccd8  lw          $a0, -0x3328($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D000u;
        goto label_33d000;
    }
    ctx->pc = 0x33CFF8u;
    SET_GPR_U32(ctx, 31, 0x33D000u);
    ctx->pc = 0x33CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFF8u;
    // 0x33cffc: 0x8f84ccd8  lw          $a0, -0x3328($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABC8u, 0x33CFF8u, 0x33D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D000u;
label_33d000:
    // 0x33d000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d004:
    // 0x33d004: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33d008:
    // 0x33d008: 0x3e00008  jr          $ra
label_33d00c:
    if (ctx->pc == 0x33D00Cu) {
        ctx->pc = 0x33D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D008u;
        // 0x33d00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D010u;
        goto label_fallthrough_0x33d008;
    }
    ctx->pc = 0x33D008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D008u;
        // 0x33d00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d008:
    ctx->pc = 0x33D010u;
}
