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

// Function: sub_00213B30
// Address: 0x213b30 - 0x213bd8
void sub_00213B30_0x213b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213B30_0x213b30");
#endif

    switch (ctx->pc) {
        case 0x213b88u: goto label_213b88;
        default: break;
    }

    ctx->pc = 0x213b30u;

    // 0x213b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213b34: 0x2783a848  addiu       $v1, $gp, -0x57B8
    ctx->pc = 0x213b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944840));
    // 0x213b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213b3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x213b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213b44: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x213b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x213b48: 0x24060900  addiu       $a2, $zero, 0x900
    ctx->pc = 0x213b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x213b4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x213b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213b50: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x213b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x213b54: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x213b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x213b58: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x213B58u;
    {
        const bool branch_taken_0x213b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x213B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B58u;
        // 0x213b5c: 0x852024  and         $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b58) {
            ctx->pc = 0x213B6Cu;
            goto label_213b6c;
        }
    }
    ctx->pc = 0x213B60u;
    // 0x213b60: 0x8f82a850  lw          $v0, -0x57B0($gp)
    ctx->pc = 0x213b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x213b64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x213b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x213b68: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x213b68u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_213b6c:
    // 0x213b6c: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x213B6Cu;
    {
        const bool branch_taken_0x213b6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x213B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B6Cu;
        // 0x213b70: 0x36030002  ori         $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b6c) {
            ctx->pc = 0x213B80u;
            goto label_213b80;
        }
    }
    ctx->pc = 0x213B74u;
    // 0x213b74: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x213b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x213b78: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x213b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x213b7c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x213b7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_213b80:
    // 0x213b80: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x213B80u;
    SET_GPR_U32(ctx, 31, 0x213B88u);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x213B80u, 0x213B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B88u;
label_213b88:
    // 0x213b88: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x213B88u;
    {
        const bool branch_taken_0x213b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B88u;
        // 0x213b8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b88) {
            ctx->pc = 0x213BC4u;
            goto label_213bc4;
        }
    }
    ctx->pc = 0x213B90u;
    // 0x213b90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x213b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x213b94: 0x8c4488a8  lw          $a0, -0x7758($v0)
    ctx->pc = 0x213b94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x213b98: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x213b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x213b9c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x213b9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x213ba0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x213BA0u;
    {
        const bool branch_taken_0x213ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BA0u;
        // 0x213ba4: 0x30840002  andi        $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ba0) {
            ctx->pc = 0x213BB0u;
            goto label_213bb0;
        }
    }
    ctx->pc = 0x213BA8u;
    // 0x213ba8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x213ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x213bac: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x213bacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_213bb0:
    // 0x213bb0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213BB0u;
    {
        const bool branch_taken_0x213bb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x213BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BB0u;
        // 0x213bb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bb0) {
            ctx->pc = 0x213BC4u;
            goto label_213bc4;
        }
    }
    ctx->pc = 0x213BB8u;
    // 0x213bb8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x213bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x213bbc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x213bbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x213bc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x213bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213bc4:
    // 0x213bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213bc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x213bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x213BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BCCu;
        // 0x213bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213BD4u;
    // 0x213bd4: 0x0  nop
    ctx->pc = 0x213bd4u;
    // NOP
    ctx->pc = 0x213bd8u;
}
