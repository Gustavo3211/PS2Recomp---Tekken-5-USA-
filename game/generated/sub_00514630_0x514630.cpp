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

// Function: sub_00514630
// Address: 0x514630 - 0x514728
void sub_00514630_0x514630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00514630_0x514630");
#endif

    switch (ctx->pc) {
        case 0x514668u: goto label_514668;
        default: break;
    }

    ctx->pc = 0x514630u;

    // 0x514630: 0x3c090059  lui         $t1, 0x59
    ctx->pc = 0x514630u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)89 << 16));
    // 0x514634: 0x8d25aa3c  lw          $a1, -0x55C4($t1)
    ctx->pc = 0x514634u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x58AA3Cu));
    // 0x514638: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x514638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x51463c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x51463Cu;
    {
        const bool branch_taken_0x51463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x514640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51463Cu;
        // 0x514640: 0x3c030090  lui         $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51463c) {
            ctx->pc = 0x514720u;
            goto label_514720;
        }
    }
    ctx->pc = 0x514644u;
    // 0x514644: 0x8c624400  lw          $v0, 0x4400($v1)
    ctx->pc = 0x514644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17408)));
    // 0x514648: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x514648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x51464c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x51464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x514650: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x514650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x514654: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x514654u;
    {
        const bool branch_taken_0x514654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514654u;
        // 0x514658: 0x3c080059  lui         $t0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514654) {
            ctx->pc = 0x514720u;
            goto label_514720;
        }
    }
    ctx->pc = 0x51465Cu;
    // 0x51465c: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x51465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x514660: 0x8d05aa40  lw          $a1, -0x55C0($t0)
    ctx->pc = 0x514660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945344)));
    // 0x514664: 0x0  nop
    ctx->pc = 0x514664u;
    // NOP
label_514668:
    // 0x514668: 0xa4302b  sltu        $a2, $a1, $a0
    ctx->pc = 0x514668u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x51466c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x51466Cu;
    {
        const bool branch_taken_0x51466c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x514670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51466Cu;
        // 0x514670: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51466c) {
            ctx->pc = 0x514688u;
            goto label_514688;
        }
    }
    ctx->pc = 0x514674u;
    // 0x514674: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x514674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x514678: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x514678u;
    {
        const bool branch_taken_0x514678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514678u;
        // 0x51467c: 0x24870004  addiu       $a3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514678) {
            ctx->pc = 0x5146B8u;
            goto label_5146b8;
        }
    }
    ctx->pc = 0x514680u;
    // 0x514680: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x514680u;
    {
        const bool branch_taken_0x514680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514680u;
        // 0x514684: 0xa3102b  sltu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x514680) {
            ctx->pc = 0x51468Cu;
            goto label_51468c;
        }
    }
    ctx->pc = 0x514688u;
label_514688:
    // 0x514688: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x514688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51468c:
    // 0x51468c: 0x0  nop
    ctx->pc = 0x51468cu;
    // NOP
    // 0x514690: 0x0  nop
    ctx->pc = 0x514690u;
    // NOP
    // 0x514694: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x514694u;
    {
        const bool branch_taken_0x514694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x514694) {
            ctx->pc = 0x514698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x514694u;
            // 0x514698: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x514668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_514668;
        }
    }
    ctx->pc = 0x51469Cu;
    // 0x51469c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x51469Cu;
    {
        const bool branch_taken_0x51469c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x5146A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51469Cu;
        // 0x5146a0: 0x24870004  addiu       $a3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51469c) {
            ctx->pc = 0x5146B8u;
            goto label_5146b8;
        }
    }
    ctx->pc = 0x5146A4u;
    // 0x5146a4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x5146a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x5146a8: 0x0  nop
    ctx->pc = 0x5146a8u;
    // NOP
    // 0x5146ac: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x5146ACu;
    {
        const bool branch_taken_0x5146ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5146ac) {
            ctx->pc = 0x5146B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5146ACu;
            // 0x5146b0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x514668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_514668;
        }
    }
    ctx->pc = 0x5146B4u;
    // 0x5146b4: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x5146b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_5146b8:
    // 0x5146b8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x5146b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5146bc: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x5146bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x5146c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x5146c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5146c4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x5146C4u;
    {
        const bool branch_taken_0x5146c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x5146c4) {
            ctx->pc = 0x5146C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5146C4u;
            // 0x5146c8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5146E4u;
            goto label_5146e4;
        }
    }
    ctx->pc = 0x5146CCu;
    // 0x5146cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x5146ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x5146d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x5146d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x5146d4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x5146d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x5146d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x5146d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5146dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x5146dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5146e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x5146e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_5146e4:
    // 0x5146e4: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x5146e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x5146e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x5146e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5146ec: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x5146ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x5146f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x5146f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x5146f4: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x5146F4u;
    {
        const bool branch_taken_0x5146f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x5146f4) {
            ctx->pc = 0x5146F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5146F4u;
            // 0x5146f8: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x51471Cu;
            goto label_51471c;
        }
    }
    ctx->pc = 0x5146FCu;
    // 0x5146fc: 0x8d22aa3c  lw          $v0, -0x55C4($t1)
    ctx->pc = 0x5146fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294945340)));
    // 0x514700: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x514700u;
    {
        const bool branch_taken_0x514700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x514700) {
            ctx->pc = 0x514704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x514700u;
            // 0x514704: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x51471Cu;
            goto label_51471c;
        }
    }
    ctx->pc = 0x514708u;
    // 0x514708: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x514708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x51470c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x51470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x514710: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x514710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x514714: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x514714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x514718: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x514718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_51471c:
    // 0x51471c: 0xad05aa40  sw          $a1, -0x55C0($t0)
    ctx->pc = 0x51471cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294945344), GPR_U32(ctx, 5));
label_514720:
    // 0x514720: 0x3e00008  jr          $ra
    ctx->pc = 0x514720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514728u;
}
