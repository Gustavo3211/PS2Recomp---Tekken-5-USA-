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

// Function: sub_00221020
// Address: 0x221020 - 0x2210b0
void sub_00221020_0x221020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221020_0x221020");
#endif

    switch (ctx->pc) {
        case 0x22103cu: goto label_22103c;
        case 0x221078u: goto label_221078;
        case 0x221088u: goto label_221088;
        default: break;
    }

    ctx->pc = 0x221020u;

    // 0x221020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221024: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x221024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x221028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22102c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x221030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221034: 0xc0846e8  jal         func_211BA0
    ctx->pc = 0x221034u;
    SET_GPR_U32(ctx, 31, 0x22103Cu);
    ctx->pc = 0x221038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221034u;
    // 0x221038: 0x8c518880  lw          $s1, -0x7780($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211BA0u, 0x221034u, 0x22103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22103Cu;
label_22103c:
    // 0x22103c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22103cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221040: 0x8f82a4cc  lw          $v0, -0x5B34($gp)
    ctx->pc = 0x221040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943948)));
    // 0x221044: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x221044u;
    {
        const bool branch_taken_0x221044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x221048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221044u;
        // 0x221048: 0x8f82a4d0  lw          $v0, -0x5B30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221044) {
            ctx->pc = 0x221060u;
            goto label_221060;
        }
    }
    ctx->pc = 0x22104Cu;
    // 0x22104c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22104Cu;
    {
        const bool branch_taken_0x22104c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x221050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22104Cu;
        // 0x221050: 0x8f83a4c4  lw          $v1, -0x5B3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22104c) {
            ctx->pc = 0x221060u;
            goto label_221060;
        }
    }
    ctx->pc = 0x221054u;
    // 0x221054: 0x8f82a4d4  lw          $v0, -0x5B2C($gp)
    ctx->pc = 0x221054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943956)));
    // 0x221058: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x221058u;
    {
        const bool branch_taken_0x221058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x221058) {
            ctx->pc = 0x22105Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221058u;
            // 0x22105c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22109Cu;
            goto label_22109c;
        }
    }
    ctx->pc = 0x221060u;
label_221060:
    // 0x221060: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221060u;
    {
        const bool branch_taken_0x221060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x221064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221060u;
        // 0x221064: 0x8f82a4c4  lw          $v0, -0x5B3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221060) {
            ctx->pc = 0x221080u;
            goto label_221080;
        }
    }
    ctx->pc = 0x221068u;
    // 0x221068: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221068u;
    {
        const bool branch_taken_0x221068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221068) {
            ctx->pc = 0x221080u;
            goto label_221080;
        }
    }
    ctx->pc = 0x221070u;
    // 0x221070: 0xc0883fc  jal         func_220FF0
    ctx->pc = 0x221070u;
    SET_GPR_U32(ctx, 31, 0x221078u);
    ctx->pc = 0x220FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220FF0u, 0x221070u, 0x221078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221078u;
label_221078:
    // 0x221078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x221078u;
    {
        const bool branch_taken_0x221078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221078u;
        // 0x22107c: 0x8f82a4c4  lw          $v0, -0x5B3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221078) {
            ctx->pc = 0x22108Cu;
            goto label_22108c;
        }
    }
    ctx->pc = 0x221080u;
label_221080:
    // 0x221080: 0xc088402  jal         func_221008
    ctx->pc = 0x221080u;
    SET_GPR_U32(ctx, 31, 0x221088u);
    ctx->pc = 0x221008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221008u, 0x221080u, 0x221088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221088u;
label_221088:
    // 0x221088: 0x8f82a4c4  lw          $v0, -0x5B3C($gp)
    ctx->pc = 0x221088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943940)));
label_22108c:
    // 0x22108c: 0xaf90a4cc  sw          $s0, -0x5B34($gp)
    ctx->pc = 0x22108cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943948), GPR_U32(ctx, 16));
    // 0x221090: 0xaf91a4d0  sw          $s1, -0x5B30($gp)
    ctx->pc = 0x221090u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943952), GPR_U32(ctx, 17));
    // 0x221094: 0xaf82a4d4  sw          $v0, -0x5B2C($gp)
    ctx->pc = 0x221094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943956), GPR_U32(ctx, 2));
    // 0x221098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22109c:
    // 0x22109c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22109cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2210a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2210a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2210a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2210a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2210A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2210ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210A8u;
        // 0x2210ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2210A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2210B0u;
}
