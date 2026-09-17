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

// Function: sub_002EF980
// Address: 0x2ef980 - 0x2efa00
void sub_002EF980_0x2ef980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF980_0x2ef980");
#endif

    switch (ctx->pc) {
        case 0x2ef980u: goto label_2ef980;
        case 0x2ef984u: goto label_2ef984;
        case 0x2ef988u: goto label_2ef988;
        case 0x2ef98cu: goto label_2ef98c;
        case 0x2ef990u: goto label_2ef990;
        case 0x2ef994u: goto label_2ef994;
        case 0x2ef998u: goto label_2ef998;
        case 0x2ef99cu: goto label_2ef99c;
        case 0x2ef9a0u: goto label_2ef9a0;
        case 0x2ef9a4u: goto label_2ef9a4;
        case 0x2ef9a8u: goto label_2ef9a8;
        case 0x2ef9acu: goto label_2ef9ac;
        case 0x2ef9b0u: goto label_2ef9b0;
        case 0x2ef9b4u: goto label_2ef9b4;
        case 0x2ef9b8u: goto label_2ef9b8;
        case 0x2ef9bcu: goto label_2ef9bc;
        case 0x2ef9c0u: goto label_2ef9c0;
        case 0x2ef9c4u: goto label_2ef9c4;
        case 0x2ef9c8u: goto label_2ef9c8;
        case 0x2ef9ccu: goto label_2ef9cc;
        case 0x2ef9d0u: goto label_2ef9d0;
        case 0x2ef9d4u: goto label_2ef9d4;
        case 0x2ef9d8u: goto label_2ef9d8;
        case 0x2ef9dcu: goto label_2ef9dc;
        case 0x2ef9e0u: goto label_2ef9e0;
        case 0x2ef9e4u: goto label_2ef9e4;
        case 0x2ef9e8u: goto label_2ef9e8;
        case 0x2ef9ecu: goto label_2ef9ec;
        case 0x2ef9f0u: goto label_2ef9f0;
        case 0x2ef9f4u: goto label_2ef9f4;
        case 0x2ef9f8u: goto label_2ef9f8;
        case 0x2ef9fcu: goto label_2ef9fc;
        default: break;
    }

    ctx->pc = 0x2ef980u;

label_2ef980:
    // 0x2ef980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ef984:
    // 0x2ef984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ef988:
    // 0x2ef988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef98c:
    // 0x2ef98c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ef98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2ef990:
    // 0x2ef990: 0xc0bb914  jal         func_2EE450
label_2ef994:
    if (ctx->pc == 0x2EF994u) {
        ctx->pc = 0x2EF994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF990u;
        // 0x2ef994: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF998u;
        goto label_2ef998;
    }
    ctx->pc = 0x2EF990u;
    SET_GPR_U32(ctx, 31, 0x2EF998u);
    ctx->pc = 0x2EF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF990u;
    // 0x2ef994: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE450u, 0x2EF990u, 0x2EF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF998u;
label_2ef998:
    // 0x2ef998: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2ef99c:
    if (ctx->pc == 0x2EF99Cu) {
        ctx->pc = 0x2EF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF998u;
        // 0x2ef99c: 0x26030130  addiu       $v1, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9A0u;
        goto label_2ef9a0;
    }
    ctx->pc = 0x2EF998u;
    {
        const bool branch_taken_0x2ef998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF998u;
        // 0x2ef99c: 0x26030130  addiu       $v1, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef998) {
            ctx->pc = 0x2EF9F0u;
            goto label_2ef9f0;
        }
    }
    ctx->pc = 0x2EF9A0u;
label_2ef9a0:
    // 0x2ef9a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ef9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2ef9a4:
    // 0x2ef9a4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2ef9a8:
    if (ctx->pc == 0x2EF9A8u) {
        ctx->pc = 0x2EF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9A4u;
        // 0x2ef9a8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9ACu;
        goto label_2ef9ac;
    }
    ctx->pc = 0x2EF9A4u;
    {
        const bool branch_taken_0x2ef9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef9a4) {
            ctx->pc = 0x2EF9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF9A4u;
            // 0x2ef9a8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF9B8u;
            goto label_2ef9b8;
        }
    }
    ctx->pc = 0x2EF9ACu;
label_2ef9ac:
    // 0x2ef9ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ef9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef9b0:
    // 0x2ef9b0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2ef9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ef9b4:
    // 0x2ef9b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ef9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef9b8:
    // 0x2ef9b8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ef9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2ef9bc:
    // 0x2ef9bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef9bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef9c0:
    // 0x2ef9c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef9c4:
    // 0x2ef9c4: 0x60f809  jalr        $v1
label_2ef9c8:
    if (ctx->pc == 0x2EF9C8u) {
        ctx->pc = 0x2EF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9C4u;
        // 0x2ef9c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9CCu;
        goto label_2ef9cc;
    }
    ctx->pc = 0x2EF9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF9CCu);
        ctx->pc = 0x2EF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9C4u;
        // 0x2ef9c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF9C4u, 0x2EF9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF9CCu;
label_2ef9cc:
    // 0x2ef9cc: 0xc0bbe38  jal         func_2EF8E0
label_2ef9d0:
    if (ctx->pc == 0x2EF9D0u) {
        ctx->pc = 0x2EF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9CCu;
        // 0x2ef9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9D4u;
        goto label_2ef9d4;
    }
    ctx->pc = 0x2EF9CCu;
    SET_GPR_U32(ctx, 31, 0x2EF9D4u);
    ctx->pc = 0x2EF9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9CCu;
    // 0x2ef9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF8E0u, 0x2EF9CCu, 0x2EF9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9D4u;
label_2ef9d4:
    // 0x2ef9d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ef9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef9d8:
    // 0x2ef9d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef9dc:
    // 0x2ef9dc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2ef9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2ef9e0:
    // 0x2ef9e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef9e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef9e4:
    // 0x2ef9e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef9e8:
    // 0x2ef9e8: 0x60f809  jalr        $v1
label_2ef9ec:
    if (ctx->pc == 0x2EF9ECu) {
        ctx->pc = 0x2EF9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9E8u;
        // 0x2ef9ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9F0u;
        goto label_2ef9f0;
    }
    ctx->pc = 0x2EF9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF9F0u);
        ctx->pc = 0x2EF9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9E8u;
        // 0x2ef9ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF9E8u, 0x2EF9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF9F0u;
label_2ef9f0:
    // 0x2ef9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef9f4:
    // 0x2ef9f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ef9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ef9f8:
    // 0x2ef9f8: 0x3e00008  jr          $ra
label_2ef9fc:
    if (ctx->pc == 0x2EF9FCu) {
        ctx->pc = 0x2EF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9F8u;
        // 0x2ef9fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA00u;
        goto label_fallthrough_0x2ef9f8;
    }
    ctx->pc = 0x2EF9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9F8u;
        // 0x2ef9fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ef9f8:
    ctx->pc = 0x2EFA00u;
}
