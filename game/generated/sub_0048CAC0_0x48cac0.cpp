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

// Function: sub_0048CAC0
// Address: 0x48cac0 - 0x48cae8
void sub_0048CAC0_0x48cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CAC0_0x48cac0");
#endif

    ctx->pc = 0x48cac0u;

    // 0x48cac0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48cac4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x48cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x48cac8: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48cacc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48cad0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x48cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x48cad4: 0xa44322d2  sh          $v1, 0x22D2($v0)
    ctx->pc = 0x48cad4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F952u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F952u, _value); } while (0);
    // 0x48cad8: 0xa44422d0  sh          $a0, 0x22D0($v0)
    ctx->pc = 0x48cad8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72F950u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F950u, _value); } while (0);
    // 0x48cadc: 0xa44522ce  sh          $a1, 0x22CE($v0)
    ctx->pc = 0x48cadcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F94Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F94Eu, _value); } while (0);
    // 0x48cae0: 0x3e00008  jr          $ra
    ctx->pc = 0x48CAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CAE0u;
        // 0x48cae4: 0xa44522cc  sh          $a1, 0x22CC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8908), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CAE8u;
}
