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

// Function: sub_0048EF98
// Address: 0x48ef98 - 0x48efc8
void sub_0048EF98_0x48ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EF98_0x48ef98");
#endif

    ctx->pc = 0x48ef98u;

    // 0x48ef98: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ef9c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48efa0: 0x8443f890  lh          $v1, -0x770($v0)
    ctx->pc = 0x48efa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965392)));
    // 0x48efa4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48EFA4u;
    {
        const bool branch_taken_0x48efa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFA4u;
        // 0x48efa8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48efa4) {
            ctx->pc = 0x48EFC0u;
            goto label_48efc0;
        }
    }
    ctx->pc = 0x48EFACu;
    // 0x48efac: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48efacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48efb0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x48efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x48efb4: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x48efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x48efb8: 0xa443040e  sh          $v1, 0x40E($v0)
    ctx->pc = 0x48efb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DFA5Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DFA5Eu, _value); } while (0);
    // 0x48efbc: 0xa444040c  sh          $a0, 0x40C($v0)
    ctx->pc = 0x48efbcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7DFA5Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DFA5Cu, _value); } while (0);
label_48efc0:
    // 0x48efc0: 0x3e00008  jr          $ra
    ctx->pc = 0x48EFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48EFC8u;
}
