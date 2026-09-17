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

// Function: sub_00251FD8
// Address: 0x251fd8 - 0x252030
void sub_00251FD8_0x251fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251FD8_0x251fd8");
#endif

    ctx->pc = 0x251fd8u;

    // 0x251fd8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x251fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fdc: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x251fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x251fe0: 0x2c430067  sltiu       $v1, $v0, 0x67
    ctx->pc = 0x251fe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)103) ? 1 : 0);
    // 0x251fe4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x251fe4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x251fe8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x251fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x251fec: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x251fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x251ff0: 0x24217f70  addiu       $at, $at, 0x7F70
    ctx->pc = 0x251ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32624));
    // 0x251ff4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x251ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x251ff8: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x251ff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x251ffc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x251FFCu;
    {
        const bool branch_taken_0x251ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ffc) {
            ctx->pc = 0x252028u;
            goto label_252028;
        }
    }
    ctx->pc = 0x252004u;
    // 0x252004: 0x84a3006a  lh          $v1, 0x6A($a1)
    ctx->pc = 0x252004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 106)));
    // 0x252008: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x252008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25200c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25200cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x252010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x252010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x252014: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x252014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x252018: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x252018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25201c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x25201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x252020: 0xaca3010c  sw          $v1, 0x10C($a1)
    ctx->pc = 0x252020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 3));
    // 0x252024: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x252024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
label_252028:
    // 0x252028: 0x3e00008  jr          $ra
    ctx->pc = 0x252028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252030u;
}
