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

// Function: sub_002EECA8
// Address: 0x2eeca8 - 0x2eed18
void sub_002EECA8_0x2eeca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EECA8_0x2eeca8");
#endif

    ctx->pc = 0x2eeca8u;

    // 0x2eeca8: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x2eeca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2eecac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eecb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EECB0u;
    {
        const bool branch_taken_0x2eecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECB0u;
        // 0x2eecb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecb0) {
            ctx->pc = 0x2EECC8u;
            goto label_2eecc8;
        }
    }
    ctx->pc = 0x2EECB8u;
    // 0x2eecb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eecbc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2eecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2eecc0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EECC0u;
    {
        const bool branch_taken_0x2eecc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eecc0) {
            ctx->pc = 0x2EECD4u;
            goto label_2eecd4;
        }
    }
    ctx->pc = 0x2EECC8u;
label_2eecc8:
    // 0x2eecc8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2eeccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eecccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecd0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2eecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2eecd4:
    // 0x2eecd4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EECD4u;
    {
        const bool branch_taken_0x2eecd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECD4u;
        // 0x2eecd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecd4) {
            ctx->pc = 0x2EED0Cu;
            goto label_2eed0c;
        }
    }
    ctx->pc = 0x2EECDCu;
    // 0x2eecdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eece0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EECE0u;
    {
        const bool branch_taken_0x2eece0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECE0u;
        // 0x2eece4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eece0) {
            ctx->pc = 0x2EECF8u;
            goto label_2eecf8;
        }
    }
    ctx->pc = 0x2EECE8u;
    // 0x2eece8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eecec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2eececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2eecf0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EECF0u;
    {
        const bool branch_taken_0x2eecf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eecf0) {
            ctx->pc = 0x2EECF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EECF0u;
            // 0x2eecf4: 0x90a20130  lbu         $v0, 0x130($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EED08u;
            goto label_2eed08;
        }
    }
    ctx->pc = 0x2EECF8u;
label_2eecf8:
    // 0x2eecf8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2eecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2eecfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eecfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed00: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eed00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2eed04: 0x90a20130  lbu         $v0, 0x130($a1)
    ctx->pc = 0x2eed04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x130u));
label_2eed08:
    // 0x2eed08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2eed08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2eed0c:
    // 0x2eed0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EED0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EED0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EED14u;
    // 0x2eed14: 0x0  nop
    ctx->pc = 0x2eed14u;
    // NOP
    ctx->pc = 0x2eed18u;
}
