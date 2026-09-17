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

// Function: sub_002C8188
// Address: 0x2c8188 - 0x2c81e0
void sub_002C8188_0x2c8188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8188_0x2c8188");
#endif

    switch (ctx->pc) {
        case 0x2c81b8u: goto label_2c81b8;
        default: break;
    }

    ctx->pc = 0x2c8188u;

    // 0x2c8188: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x2c8188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2c818c: 0x24830028  addiu       $v1, $a0, 0x28
    ctx->pc = 0x2c818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2c8190: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c8190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c8194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8198: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2c8198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2c819c: 0x24840044  addiu       $a0, $a0, 0x44
    ctx->pc = 0x2c819cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x2c81a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2c81a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2c81a4: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x2c81a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c81a8: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x2c81a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c81ac: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x2c81acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c81b0: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x2c81b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c81b4: 0x0  nop
    ctx->pc = 0x2c81b4u;
    // NOP
label_2c81b8:
    // 0x2c81b8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2c81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c81bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c81bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c81c0: 0x28a20016  slti        $v0, $a1, 0x16
    ctx->pc = 0x2c81c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x2c81c4: 0x0  nop
    ctx->pc = 0x2c81c4u;
    // NOP
    // 0x2c81c8: 0x0  nop
    ctx->pc = 0x2c81c8u;
    // NOP
    // 0x2c81cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C81CCu;
    {
        const bool branch_taken_0x2c81cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81CCu;
        // 0x2c81d0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81cc) {
            ctx->pc = 0x2C81B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c81b8;
        }
    }
    ctx->pc = 0x2C81D4u;
    // 0x2c81d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C81D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C81D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C81DCu;
    // 0x2c81dc: 0x0  nop
    ctx->pc = 0x2c81dcu;
    // NOP
    ctx->pc = 0x2c81e0u;
}
