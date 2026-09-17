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

// Function: sub_002EB7C8
// Address: 0x2eb7c8 - 0x2eb850
void sub_002EB7C8_0x2eb7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB7C8_0x2eb7c8");
#endif

    switch (ctx->pc) {
        case 0x2eb7c8u: goto label_2eb7c8;
        case 0x2eb7ccu: goto label_2eb7cc;
        case 0x2eb7d0u: goto label_2eb7d0;
        case 0x2eb7d4u: goto label_2eb7d4;
        case 0x2eb7d8u: goto label_2eb7d8;
        case 0x2eb7dcu: goto label_2eb7dc;
        case 0x2eb7e0u: goto label_2eb7e0;
        case 0x2eb7e4u: goto label_2eb7e4;
        case 0x2eb7e8u: goto label_2eb7e8;
        case 0x2eb7ecu: goto label_2eb7ec;
        case 0x2eb7f0u: goto label_2eb7f0;
        case 0x2eb7f4u: goto label_2eb7f4;
        case 0x2eb7f8u: goto label_2eb7f8;
        case 0x2eb7fcu: goto label_2eb7fc;
        case 0x2eb800u: goto label_2eb800;
        case 0x2eb804u: goto label_2eb804;
        case 0x2eb808u: goto label_2eb808;
        case 0x2eb80cu: goto label_2eb80c;
        case 0x2eb810u: goto label_2eb810;
        case 0x2eb814u: goto label_2eb814;
        case 0x2eb818u: goto label_2eb818;
        case 0x2eb81cu: goto label_2eb81c;
        case 0x2eb820u: goto label_2eb820;
        case 0x2eb824u: goto label_2eb824;
        case 0x2eb828u: goto label_2eb828;
        case 0x2eb82cu: goto label_2eb82c;
        case 0x2eb830u: goto label_2eb830;
        case 0x2eb834u: goto label_2eb834;
        case 0x2eb838u: goto label_2eb838;
        case 0x2eb83cu: goto label_2eb83c;
        case 0x2eb840u: goto label_2eb840;
        case 0x2eb844u: goto label_2eb844;
        case 0x2eb848u: goto label_2eb848;
        case 0x2eb84cu: goto label_2eb84c;
        default: break;
    }

    ctx->pc = 0x2eb7c8u;

label_2eb7c8:
    // 0x2eb7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2eb7cc:
    // 0x2eb7cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eb7d0:
    // 0x2eb7d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eb7d4:
    // 0x2eb7d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eb7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2eb7d8:
    // 0x2eb7d8: 0x260500e8  addiu       $a1, $s0, 0xE8
    ctx->pc = 0x2eb7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_2eb7dc:
    // 0x2eb7dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eb7e0:
    // 0x2eb7e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eb7e4:
    if (ctx->pc == 0x2EB7E4u) {
        ctx->pc = 0x2EB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7E0u;
        // 0x2eb7e4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7E8u;
        goto label_2eb7e8;
    }
    ctx->pc = 0x2EB7E0u;
    {
        const bool branch_taken_0x2eb7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7e0) {
            ctx->pc = 0x2EB7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB7E0u;
            // 0x2eb7e4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB7FCu;
            goto label_2eb7fc;
        }
    }
    ctx->pc = 0x2EB7E8u;
label_2eb7e8:
    // 0x2eb7e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eb7ec:
    // 0x2eb7ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eb7f0:
    // 0x2eb7f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2eb7f4:
    if (ctx->pc == 0x2EB7F4u) {
        ctx->pc = 0x2EB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F0u;
        // 0x2eb7f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7F8u;
        goto label_2eb7f8;
    }
    ctx->pc = 0x2EB7F0u;
    {
        const bool branch_taken_0x2eb7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F0u;
        // 0x2eb7f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7f0) {
            ctx->pc = 0x2EB804u;
            goto label_2eb804;
        }
    }
    ctx->pc = 0x2EB7F8u;
label_2eb7f8:
    // 0x2eb7f8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb7fc:
    // 0x2eb7fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb800:
    // 0x2eb800: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eb804:
    // 0x2eb804: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2eb804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2eb808:
    // 0x2eb808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb80c:
    // 0x2eb80c: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2eb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2eb810:
    // 0x2eb810: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eb810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eb814:
    // 0x2eb814: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eb814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eb818:
    // 0x2eb818: 0x60f809  jalr        $v1
label_2eb81c:
    if (ctx->pc == 0x2EB81Cu) {
        ctx->pc = 0x2EB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB818u;
        // 0x2eb81c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB820u;
        goto label_2eb820;
    }
    ctx->pc = 0x2EB818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EB820u);
        ctx->pc = 0x2EB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB818u;
        // 0x2eb81c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB818u, 0x2EB820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB820u;
label_2eb820:
    // 0x2eb820: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2eb820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2eb824:
    // 0x2eb824: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2eb824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2eb828:
    // 0x2eb828: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eb828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eb82c:
    // 0x2eb82c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eb82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eb830:
    // 0x2eb830: 0x60f809  jalr        $v1
label_2eb834:
    if (ctx->pc == 0x2EB834u) {
        ctx->pc = 0x2EB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB830u;
        // 0x2eb834: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB838u;
        goto label_2eb838;
    }
    ctx->pc = 0x2EB830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EB838u);
        ctx->pc = 0x2EB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB830u;
        // 0x2eb834: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB830u, 0x2EB838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB838u;
label_2eb838:
    // 0x2eb838: 0xc0a5a0c  jal         func_296830
label_2eb83c:
    if (ctx->pc == 0x2EB83Cu) {
        ctx->pc = 0x2EB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB838u;
        // 0x2eb83c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB840u;
        goto label_2eb840;
    }
    ctx->pc = 0x2EB838u;
    SET_GPR_U32(ctx, 31, 0x2EB840u);
    ctx->pc = 0x2EB83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB838u;
    // 0x2eb83c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x2EB838u, 0x2EB840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB840u;
label_2eb840:
    // 0x2eb840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eb844:
    // 0x2eb844: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eb844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2eb848:
    // 0x2eb848: 0x3e00008  jr          $ra
label_2eb84c:
    if (ctx->pc == 0x2EB84Cu) {
        ctx->pc = 0x2EB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB848u;
        // 0x2eb84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB850u;
        goto label_fallthrough_0x2eb848;
    }
    ctx->pc = 0x2EB848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB848u;
        // 0x2eb84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2eb848:
    ctx->pc = 0x2EB850u;
}
