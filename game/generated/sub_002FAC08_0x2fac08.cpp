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

// Function: sub_002FAC08
// Address: 0x2fac08 - 0x2fac98
void sub_002FAC08_0x2fac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAC08_0x2fac08");
#endif

    switch (ctx->pc) {
        case 0x2fac40u: goto label_2fac40;
        case 0x2fac5cu: goto label_2fac5c;
        default: break;
    }

    ctx->pc = 0x2fac08u;

    // 0x2fac08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fac0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fac10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fac10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fac18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fac1c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2fac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fac20: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FAC20u;
    {
        const bool branch_taken_0x2fac20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fac20) {
            ctx->pc = 0x2FAC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAC20u;
            // 0x2fac24: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAC74u;
            goto label_2fac74;
        }
    }
    ctx->pc = 0x2FAC28u;
    // 0x2fac28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2fac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2fac2c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FAC2Cu;
    {
        const bool branch_taken_0x2fac2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC2Cu;
        // 0x2fac30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac2c) {
            ctx->pc = 0x2FAC6Cu;
            goto label_2fac6c;
        }
    }
    ctx->pc = 0x2FAC34u;
    // 0x2fac34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAC34u;
    {
        const bool branch_taken_0x2fac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC34u;
        // 0x2fac38: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac34) {
            ctx->pc = 0x2FAC48u;
            goto label_2fac48;
        }
    }
    ctx->pc = 0x2FAC3Cu;
    // 0x2fac3c: 0x0  nop
    ctx->pc = 0x2fac3cu;
    // NOP
label_2fac40:
    // 0x2fac40: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2fac40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2fac44: 0x0  nop
    ctx->pc = 0x2fac44u;
    // NOP
label_2fac48:
    // 0x2fac48: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2fac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2fac4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fac4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2fac50: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fac50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fac54: 0xc0bea3c  jal         func_2FA8F0
    ctx->pc = 0x2FAC54u;
    SET_GPR_U32(ctx, 31, 0x2FAC5Cu);
    ctx->pc = 0x2FAC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC54u;
    // 0x2fac58: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA8F0u, 0x2FAC54u, 0x2FAC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC5Cu;
label_2fac5c:
    // 0x2fac5c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2fac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2fac60: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2fac60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fac64: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2FAC64u;
    {
        const bool branch_taken_0x2fac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fac64) {
            ctx->pc = 0x2FAC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAC64u;
            // 0x2fac68: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fac40;
        }
    }
    ctx->pc = 0x2FAC6Cu;
label_2fac6c:
    // 0x2fac6c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2fac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2fac70: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2fac70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2fac74:
    // 0x2fac74: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2fac74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2fac78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2fac78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2fac7c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2fac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2fac80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fac80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fac84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fac84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fac88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fac88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fac8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC8Cu;
        // 0x2fac90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAC94u;
    // 0x2fac94: 0x0  nop
    ctx->pc = 0x2fac94u;
    // NOP
    ctx->pc = 0x2fac98u;
}
