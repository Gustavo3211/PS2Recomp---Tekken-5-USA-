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

// Function: sub_002D4FA8
// Address: 0x2d4fa8 - 0x2d5038
void sub_002D4FA8_0x2d4fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4FA8_0x2d4fa8");
#endif

    switch (ctx->pc) {
        case 0x2d4fd8u: goto label_2d4fd8;
        default: break;
    }

    ctx->pc = 0x2d4fa8u;

    // 0x2d4fa8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2d4fa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4fac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D4FACu;
    {
        const bool branch_taken_0x2d4fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FACu;
        // 0x2d4fb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4fac) {
            ctx->pc = 0x2D502Cu;
            goto label_2d502c;
        }
    }
    ctx->pc = 0x2D4FB4u;
    // 0x2d4fb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d4fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4fb8: 0x240d005b  addiu       $t5, $zero, 0x5B
    ctx->pc = 0x2d4fb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2d4fbc: 0x240c005d  addiu       $t4, $zero, 0x5D
    ctx->pc = 0x2d4fbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2d4fc0: 0x240b007b  addiu       $t3, $zero, 0x7B
    ctx->pc = 0x2d4fc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2d4fc4: 0x240a007d  addiu       $t2, $zero, 0x7D
    ctx->pc = 0x2d4fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2d4fc8: 0x2409007c  addiu       $t1, $zero, 0x7C
    ctx->pc = 0x2d4fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2d4fcc: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x2d4fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2d4fd0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2d4fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d4fd4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2d4fd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2d4fd8:
    // 0x2d4fd8: 0x504d000c  beql        $v0, $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x2D4FD8u;
    {
        const bool branch_taken_0x2d4fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x2d4fd8) {
            ctx->pc = 0x2D4FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4FD8u;
            // 0x2d4fdc: 0xa0a70000  sb          $a3, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D500Cu;
            goto label_2d500c;
        }
    }
    ctx->pc = 0x2D4FE0u;
    // 0x2d4fe0: 0x504c000a  beql        $v0, $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x2D4FE0u;
    {
        const bool branch_taken_0x2d4fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x2d4fe0) {
            ctx->pc = 0x2D4FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4FE0u;
            // 0x2d4fe4: 0xa0a70000  sb          $a3, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D500Cu;
            goto label_2d500c;
        }
    }
    ctx->pc = 0x2D4FE8u;
    // 0x2d4fe8: 0x504b0008  beql        $v0, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4FE8u;
    {
        const bool branch_taken_0x2d4fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x2d4fe8) {
            ctx->pc = 0x2D4FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4FE8u;
            // 0x2d4fec: 0xa0a70000  sb          $a3, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D500Cu;
            goto label_2d500c;
        }
    }
    ctx->pc = 0x2D4FF0u;
    // 0x2d4ff0: 0x504a0006  beql        $v0, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D4FF0u;
    {
        const bool branch_taken_0x2d4ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x2d4ff0) {
            ctx->pc = 0x2D4FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4FF0u;
            // 0x2d4ff4: 0xa0a70000  sb          $a3, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D500Cu;
            goto label_2d500c;
        }
    }
    ctx->pc = 0x2D4FF8u;
    // 0x2d4ff8: 0x50490004  beql        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4FF8u;
    {
        const bool branch_taken_0x2d4ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2d4ff8) {
            ctx->pc = 0x2D4FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4FF8u;
            // 0x2d4ffc: 0xa0a70000  sb          $a3, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D500Cu;
            goto label_2d500c;
        }
    }
    ctx->pc = 0x2D5000u;
    // 0x2d5000: 0x54480003  bnel        $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5000u;
    {
        const bool branch_taken_0x2d5000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2d5000) {
            ctx->pc = 0x2D5004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5000u;
            // 0x2d5004: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5010u;
            goto label_2d5010;
        }
    }
    ctx->pc = 0x2D5008u;
    // 0x2d5008: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x2d5008u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
label_2d500c:
    // 0x2d500c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d500cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2d5010:
    // 0x2d5010: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2d5010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d5014: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x2d5014u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d5018: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5018u;
    {
        const bool branch_taken_0x2d5018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5018u;
        // 0x2d501c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5018) {
            ctx->pc = 0x2D502Cu;
            goto label_2d502c;
        }
    }
    ctx->pc = 0x2D5020u;
    // 0x2d5020: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2d5020u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d5024: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D5024u;
    {
        const bool branch_taken_0x2d5024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5024) {
            ctx->pc = 0x2D4FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4fd8;
        }
    }
    ctx->pc = 0x2D502Cu;
label_2d502c:
    // 0x2d502c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D502Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D502Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5034u;
    // 0x2d5034: 0x0  nop
    ctx->pc = 0x2d5034u;
    // NOP
    ctx->pc = 0x2d5038u;
}
