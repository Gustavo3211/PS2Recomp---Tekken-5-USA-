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

// Function: sub_00341ED8
// Address: 0x341ed8 - 0x341f30
void sub_00341ED8_0x341ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341ED8_0x341ed8");
#endif

    switch (ctx->pc) {
        case 0x341f00u: goto label_341f00;
        default: break;
    }

    ctx->pc = 0x341ed8u;

    // 0x341ed8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x341ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341edc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x341edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x341ee0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x341ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x341ee4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x341ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x341ee8: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x341ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x341eec: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x341eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x341ef0: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x341ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x341ef4: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x341ef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x341ef8: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341EF8u;
    {
        const bool branch_taken_0x341ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x341EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EF8u;
        // 0x341efc: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ef8) {
            ctx->pc = 0x341F1Cu;
            goto label_341f1c;
        }
    }
    ctx->pc = 0x341F00u;
label_341f00:
    // 0x341f00: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x341f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x341f04: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x341f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x341f08: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x341f08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x341f0c: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x341f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x341f10: 0x0  nop
    ctx->pc = 0x341f10u;
    // NOP
    // 0x341f14: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x341F14u;
    {
        const bool branch_taken_0x341f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x341F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F14u;
        // 0x341f18: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f14) {
            ctx->pc = 0x341F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341f00;
        }
    }
    ctx->pc = 0x341F1Cu;
label_341f1c:
    // 0x341f1c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x341f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x341f20: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x341f20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x341f24: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x341f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x341f28: 0x3e00008  jr          $ra
    ctx->pc = 0x341F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F28u;
        // 0x341f2c: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341F30u;
}
