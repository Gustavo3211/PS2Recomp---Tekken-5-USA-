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

// Function: sub_001F53A0
// Address: 0x1f53a0 - 0x1f5410
void sub_001F53A0_0x1f53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F53A0_0x1f53a0");
#endif

    switch (ctx->pc) {
        case 0x1f53b8u: goto label_1f53b8;
        default: break;
    }

    ctx->pc = 0x1f53a0u;

    // 0x1f53a0: 0xa08001f0  sb          $zero, 0x1F0($a0)
    ctx->pc = 0x1f53a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 496), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f53a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53a8: 0xa08001f1  sb          $zero, 0x1F1($a0)
    ctx->pc = 0x1f53a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 497), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53ac: 0xa08001ec  sb          $zero, 0x1EC($a0)
    ctx->pc = 0x1f53acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 492), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53b0: 0xa08001ed  sb          $zero, 0x1ED($a0)
    ctx->pc = 0x1f53b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 493), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53b4: 0x0  nop
    ctx->pc = 0x1f53b4u;
    // NOP
label_1f53b8:
    // 0x1f53b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1f53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f53bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f53c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f53c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f53c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f53c8: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1f53c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f53cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f53d0: 0x24420520  addiu       $v0, $v0, 0x520
    ctx->pc = 0x1f53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1312));
    // 0x1f53d4: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x1f53d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1f53dc: 0xa4400040  sh          $zero, 0x40($v0)
    ctx->pc = 0x1f53dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f53e0: 0xa4400042  sh          $zero, 0x42($v0)
    ctx->pc = 0x1f53e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f53e4: 0xa0400044  sb          $zero, 0x44($v0)
    ctx->pc = 0x1f53e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53e8: 0xa0400045  sb          $zero, 0x45($v0)
    ctx->pc = 0x1f53e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53ec: 0xa0400046  sb          $zero, 0x46($v0)
    ctx->pc = 0x1f53ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53f0: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x1f53f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53f4: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x1f53f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53f8: 0xa0400049  sb          $zero, 0x49($v0)
    ctx->pc = 0x1f53f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1F53FCu;
    {
        const bool branch_taken_0x1f53fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53FCu;
        // 0x1f5400: 0xa040004a  sb          $zero, 0x4A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53fc) {
            ctx->pc = 0x1F53B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f53b8;
        }
    }
    ctx->pc = 0x1F5404u;
    // 0x1f5404: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F540Cu;
    // 0x1f540c: 0x0  nop
    ctx->pc = 0x1f540cu;
    // NOP
    ctx->pc = 0x1f5410u;
}
