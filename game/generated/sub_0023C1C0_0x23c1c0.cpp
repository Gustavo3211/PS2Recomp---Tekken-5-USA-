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

// Function: sub_0023C1C0
// Address: 0x23c1c0 - 0x23c278
void sub_0023C1C0_0x23c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C1C0_0x23c1c0");
#endif

    switch (ctx->pc) {
        case 0x23c200u: goto label_23c200;
        case 0x23c228u: goto label_23c228;
        default: break;
    }

    ctx->pc = 0x23c1c0u;

    // 0x23c1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c1c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23c1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c1cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23c1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23c1d0: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x23c1d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x23c1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c1d8: 0x2684e110  addiu       $a0, $s4, -0x1EF0
    ctx->pc = 0x23c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959376));
    // 0x23c1dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23c1e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23c1e4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23c1e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3AE118u));
    // 0x23c1ec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23C1ECu;
    {
        const bool branch_taken_0x23c1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1ECu;
        // 0x23c1f0: 0x2470e130  addiu       $s0, $v1, -0x1ED0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1ec) {
            ctx->pc = 0x23C258u;
            goto label_23c258;
        }
    }
    ctx->pc = 0x23C1F4u;
    // 0x23c1f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23c1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c1f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23c1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c1fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23c1fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c200:
    // 0x23c200: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23c204: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x23C204u;
    {
        const bool branch_taken_0x23c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c204) {
            ctx->pc = 0x23C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C204u;
            // 0x23c208: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C230u;
            goto label_23c230;
        }
    }
    ctx->pc = 0x23C20Cu;
    // 0x23c20c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23c210: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x23c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23c214: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23c214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23c218: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C218u;
    {
        const bool branch_taken_0x23c218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c218) {
            ctx->pc = 0x23C21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C218u;
            // 0x23c21c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C230u;
            goto label_23c230;
        }
    }
    ctx->pc = 0x23C220u;
    // 0x23c220: 0xc08f042  jal         func_23C108
    ctx->pc = 0x23C220u;
    SET_GPR_U32(ctx, 31, 0x23C228u);
    ctx->pc = 0x23C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C220u;
    // 0x23c224: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C108u, 0x23C220u, 0x23C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C228u;
label_23c228:
    // 0x23c228: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x23c228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x23c22c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23c22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23c230:
    // 0x23c230: 0x2a22001e  slti        $v0, $s1, 0x1E
    ctx->pc = 0x23c230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x23c234: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x23C234u;
    {
        const bool branch_taken_0x23c234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C234u;
        // 0x23c238: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c234) {
            ctx->pc = 0x23C200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c200;
        }
    }
    ctx->pc = 0x23C23Cu;
    // 0x23c23c: 0x2684e110  addiu       $a0, $s4, -0x1EF0
    ctx->pc = 0x23c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959376));
    // 0x23c240: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23c244: 0x28622710  slti        $v0, $v1, 0x2710
    ctx->pc = 0x23c244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x23c248: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C248u;
    {
        const bool branch_taken_0x23c248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c248) {
            ctx->pc = 0x23C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C248u;
            // 0x23c24c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C258u;
            goto label_23c258;
        }
    }
    ctx->pc = 0x23C250u;
    // 0x23c250: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x23c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23c254: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23c254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_23c258:
    // 0x23c258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c264: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23c264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c268: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23c268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c26c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23c26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c270: 0x3e00008  jr          $ra
    ctx->pc = 0x23C270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C270u;
        // 0x23c274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C278u;
}
