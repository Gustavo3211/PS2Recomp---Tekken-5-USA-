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

// Function: sub_002B7330
// Address: 0x2b7330 - 0x2b73c0
void sub_002B7330_0x2b7330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7330_0x2b7330");
#endif

    switch (ctx->pc) {
        case 0x2b7388u: goto label_2b7388;
        default: break;
    }

    ctx->pc = 0x2b7330u;

    // 0x2b7330: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b7330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7334: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2b7334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2b7338: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x2b7338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2b733c: 0x244affff  addiu       $t2, $v0, -0x1
    ctx->pc = 0x2b733cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b7340: 0xaa482b  sltu        $t1, $a1, $t2
    ctx->pc = 0x2b7340u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2b7344: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B7344u;
    {
        const bool branch_taken_0x2b7344 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7344u;
        // 0x2b7348: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7344) {
            ctx->pc = 0x2B73B8u;
            goto label_2b73b8;
        }
    }
    ctx->pc = 0x2B734Cu;
    // 0x2b734c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2b734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2b7350: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b7350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7354: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B7354u;
    {
        const bool branch_taken_0x2b7354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7354u;
        // 0x2b7358: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7354) {
            ctx->pc = 0x2B73B8u;
            goto label_2b73b8;
        }
    }
    ctx->pc = 0x2B735Cu;
    // 0x2b735c: 0x8cc80028  lw          $t0, 0x28($a2)
    ctx->pc = 0x2b735cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2b7360: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x2b7360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2b7364: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2b7364u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7368: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B7368u;
    {
        const bool branch_taken_0x2b7368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7368u;
        // 0x2b736c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7368) {
            ctx->pc = 0x2B73B4u;
            goto label_2b73b4;
        }
    }
    ctx->pc = 0x2B7370u;
    // 0x2b7370: 0x51200011  beql        $t1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B7370u;
    {
        const bool branch_taken_0x2b7370 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7370) {
            ctx->pc = 0x2B7374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7370u;
            // 0x2b7374: 0xacc20030  sw          $v0, 0x30($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B73B8u;
            goto label_2b73b8;
        }
    }
    ctx->pc = 0x2B7378u;
    // 0x2b7378: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x2b7378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b737c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2b737cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b7380: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x2b7380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b7384: 0x0  nop
    ctx->pc = 0x2b7384u;
    // NOP
label_2b7388:
    // 0x2b7388: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x2b7388u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x2b738c: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x2b738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b7390: 0x89282b  sltu        $a1, $a0, $t1
    ctx->pc = 0x2b7390u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2b7394: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2b7394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7398: 0x104a0004  beq         $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7398u;
    {
        const bool branch_taken_0x2b7398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7398u;
        // 0x2b739c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7398) {
            ctx->pc = 0x2B73ACu;
            goto label_2b73ac;
        }
    }
    ctx->pc = 0x2B73A0u;
    // 0x2b73a0: 0x0  nop
    ctx->pc = 0x2b73a0u;
    // NOP
    // 0x2b73a4: 0x54a0fff8  bnel        $a1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B73A4u;
    {
        const bool branch_taken_0x2b73a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b73a4) {
            ctx->pc = 0x2B73A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B73A4u;
            // 0x2b73a8: 0x24e40001  addiu       $a0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7388;
        }
    }
    ctx->pc = 0x2B73ACu;
label_2b73ac:
    // 0x2b73ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b73acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b73b0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b73b4:
    // 0x2b73b4: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x2b73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
label_2b73b8:
    // 0x2b73b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B73B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B73B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B73C0u;
}
