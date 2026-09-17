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

// Function: sub_00515030
// Address: 0x515030 - 0x5150e0
void sub_00515030_0x515030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00515030_0x515030");
#endif

    switch (ctx->pc) {
        case 0x515040u: goto label_515040;
        case 0x515070u: goto label_515070;
        case 0x515098u: goto label_515098;
        default: break;
    }

    ctx->pc = 0x515030u;

    // 0x515030: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x515030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x515034: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x515034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x515038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x515038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51503c: 0x0  nop
    ctx->pc = 0x51503cu;
    // NOP
label_515040:
    // 0x515040: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x515040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x515044: 0x3a61821  addu        $v1, $sp, $a2
    ctx->pc = 0x515044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x515048: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x515048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x51504c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x51504cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x515050: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x515050u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x515054: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x515054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x515058: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x515058u;
    {
        const bool branch_taken_0x515058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x515058) {
            ctx->pc = 0x515040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_515040;
        }
    }
    ctx->pc = 0x515060u;
    // 0x515060: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x515060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x515064: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x515064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x515068: 0xa3a20004  sb          $v0, 0x4($sp)
    ctx->pc = 0x515068u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x51506c: 0x3a61021  addu        $v0, $sp, $a2
    ctx->pc = 0x51506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
label_515070:
    // 0x515070: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x515070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x515074: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x515074u;
    {
        const bool branch_taken_0x515074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x515074) {
            ctx->pc = 0x515088u;
            goto label_515088;
        }
    }
    ctx->pc = 0x51507Cu;
    // 0x51507c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x51507cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x515080: 0x1cc0fffb  bgtz        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x515080u;
    {
        const bool branch_taken_0x515080 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x515084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515080u;
        // 0x515084: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515080) {
            ctx->pc = 0x515070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_515070;
        }
    }
    ctx->pc = 0x515088u;
label_515088:
    // 0x515088: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x515088u;
    {
        const bool branch_taken_0x515088 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x51508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515088u;
        // 0x51508c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515088) {
            ctx->pc = 0x5150C4u;
            goto label_5150c4;
        }
    }
    ctx->pc = 0x515090u;
    // 0x515090: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x515090u;
    {
        const bool branch_taken_0x515090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x515090u;
        // 0x515094: 0x3a61821  addu        $v1, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515090) {
            ctx->pc = 0x5150A0u;
            goto label_5150a0;
        }
    }
    ctx->pc = 0x515098u;
label_515098:
    // 0x515098: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x515098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51509c: 0x3a61821  addu        $v1, $sp, $a2
    ctx->pc = 0x51509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
label_5150a0:
    // 0x5150a0: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x5150a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x5150a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x5150a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5150a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x5150a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x5150ac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x5150acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x5150b0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x5150b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x5150b4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x5150b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x5150b8: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x5150B8u;
    {
        const bool branch_taken_0x5150b8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x5150BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5150B8u;
        // 0x5150bc: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5150b8) {
            ctx->pc = 0x515098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_515098;
        }
    }
    ctx->pc = 0x5150C0u;
    // 0x5150c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x5150c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5150c4:
    // 0x5150c4: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x5150c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5150c8: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x5150c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x5150cc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x5150ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5150d0: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x5150d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x5150d4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x5150d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x5150d8: 0x3e00008  jr          $ra
    ctx->pc = 0x5150D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5150DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5150D8u;
        // 0x5150dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5150D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5150E0u;
}
