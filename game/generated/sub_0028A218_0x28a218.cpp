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

// Function: sub_0028A218
// Address: 0x28a218 - 0x28a2c8
void sub_0028A218_0x28a218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A218_0x28a218");
#endif

    ctx->pc = 0x28a218u;

    // 0x28a218: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x28a218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a21c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x28a21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a220: 0x24a3fff9  addiu       $v1, $a1, -0x7
    ctx->pc = 0x28a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x28a224: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x28a224u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x28a228: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x28A228u;
    {
        const bool branch_taken_0x28a228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A228u;
        // 0x28a22c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a228) {
            ctx->pc = 0x28A2C0u;
            goto label_28a2c0;
        }
    }
    ctx->pc = 0x28A230u;
    // 0x28a230: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28a234: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A234u;
    {
        const bool branch_taken_0x28a234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A234u;
        // 0x28a238: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a234) {
            ctx->pc = 0x28A250u;
            goto label_28a250;
        }
    }
    ctx->pc = 0x28A23Cu;
    // 0x28a23c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x28a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28a240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a244: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x28A244u;
    {
        const bool branch_taken_0x28a244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A244u;
        // 0x28a248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a244) {
            ctx->pc = 0x28A2C0u;
            goto label_28a2c0;
        }
    }
    ctx->pc = 0x28A24Cu;
    // 0x28a24c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x28a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28a250:
    // 0x28a250: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A250u;
    {
        const bool branch_taken_0x28a250 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A250u;
        // 0x28a254: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a250) {
            ctx->pc = 0x28A26Cu;
            goto label_28a26c;
        }
    }
    ctx->pc = 0x28A258u;
    // 0x28a258: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x28a258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28a25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a260: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28A260u;
    {
        const bool branch_taken_0x28a260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A260u;
        // 0x28a264: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a260) {
            ctx->pc = 0x28A2C0u;
            goto label_28a2c0;
        }
    }
    ctx->pc = 0x28A268u;
    // 0x28a268: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x28a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28a26c:
    // 0x28a26c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A26Cu;
    {
        const bool branch_taken_0x28a26c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A26Cu;
        // 0x28a270: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a26c) {
            ctx->pc = 0x28A288u;
            goto label_28a288;
        }
    }
    ctx->pc = 0x28A274u;
    // 0x28a274: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x28a274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28a278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a27c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x28A27Cu;
    {
        const bool branch_taken_0x28a27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A27Cu;
        // 0x28a280: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a27c) {
            ctx->pc = 0x28A2C0u;
            goto label_28a2c0;
        }
    }
    ctx->pc = 0x28A284u;
    // 0x28a284: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x28a284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_28a288:
    // 0x28a288: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A288u;
    {
        const bool branch_taken_0x28a288 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A288u;
        // 0x28a28c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a288) {
            ctx->pc = 0x28A2A4u;
            goto label_28a2a4;
        }
    }
    ctx->pc = 0x28A290u;
    // 0x28a290: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x28a290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28a294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a298: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28A298u;
    {
        const bool branch_taken_0x28a298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A298u;
        // 0x28a29c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a298) {
            ctx->pc = 0x28A2C0u;
            goto label_28a2c0;
        }
    }
    ctx->pc = 0x28A2A0u;
    // 0x28a2a0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x28a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28a2a4:
    // 0x28a2a4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A2A4u;
    {
        const bool branch_taken_0x28a2a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2A4u;
        // 0x28a2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2a4) {
            ctx->pc = 0x28A2C0u;
            goto label_28a2c0;
        }
    }
    ctx->pc = 0x28A2ACu;
    // 0x28a2ac: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x28a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28a2b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a2b4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28A2B4u;
    {
        const bool branch_taken_0x28a2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2B4u;
        // 0x28a2b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2b4) {
            ctx->pc = 0x28A2C0u;
            goto label_28a2c0;
        }
    }
    ctx->pc = 0x28A2BCu;
    // 0x28a2bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28a2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a2c0:
    // 0x28a2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x28A2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A2C8u;
}
