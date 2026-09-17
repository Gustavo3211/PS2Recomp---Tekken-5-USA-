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

// Function: sub_004A7150
// Address: 0x4a7150 - 0x4a71a8
void sub_004A7150_0x4a7150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7150_0x4a7150");
#endif

    ctx->pc = 0x4a7150u;

    // 0x4a7150: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4a7150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a7154: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A7154u;
    {
        const bool branch_taken_0x4a7154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7154u;
        // 0x4a7158: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7154) {
            ctx->pc = 0x4A71A0u;
            goto label_4a71a0;
        }
    }
    ctx->pc = 0x4A715Cu;
    // 0x4a715c: 0x2446d680  addiu       $a2, $v0, -0x2980
    ctx->pc = 0x4a715cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a7160: 0x24c72250  addiu       $a3, $a2, 0x2250
    ctx->pc = 0x4a7160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8784));
    // 0x4a7164: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4a7164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a7168: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A7168u;
    {
        const bool branch_taken_0x4a7168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7168u;
        // 0x4a716c: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7168) {
            ctx->pc = 0x4A71A0u;
            goto label_4a71a0;
        }
    }
    ctx->pc = 0x4A7170u;
    // 0x4a7170: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7174: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a7174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7178: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a7178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a717c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a717cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a7180: 0x34822903  ori         $v0, $a0, 0x2903
    ctx->pc = 0x4a7180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10499);
    // 0x4a7184: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7188: 0x304229ff  andi        $v0, $v0, 0x29FF
    ctx->pc = 0x4a7188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)10751);
    // 0x4a718c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a718cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a7190: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a7190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a7194: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x4a7194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x4a7198: 0xa0c42251  sb          $a0, 0x2251($a2)
    ctx->pc = 0x4a7198u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8785), (uint8_t)GPR_U32(ctx, 4));
    // 0x4a719c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x4a719cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_4a71a0:
    // 0x4a71a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A71A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A71A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A71A8u;
}
