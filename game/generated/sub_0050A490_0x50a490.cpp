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

// Function: sub_0050A490
// Address: 0x50a490 - 0x50a4d8
void sub_0050A490_0x50a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A490_0x50a490");
#endif

    switch (ctx->pc) {
        case 0x50a4a0u: goto label_50a4a0;
        default: break;
    }

    ctx->pc = 0x50a490u;

    // 0x50a490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a498: 0xc144c98  jal         func_513260
    ctx->pc = 0x50A498u;
    SET_GPR_U32(ctx, 31, 0x50A4A0u);
    ctx->pc = 0x513260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513260u, 0x50A498u, 0x50A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A4A0u;
label_50a4a0:
    // 0x50a4a0: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50a4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a4a8: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x50a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50a4ac: 0x24450006  addiu       $a1, $v0, 0x6
    ctx->pc = 0x50a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x50a4b0: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x50a4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x50a4b4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x50a4b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x8FF086u));
    // 0x50a4b8: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x50a4b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8FF084u));
    // 0x50a4bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x50a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x50a4c0: 0xa440009a  sh          $zero, 0x9A($v0)
    ctx->pc = 0x50a4c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8FF11Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8FF11Au, _value); } while (0);
    // 0x50a4c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x50a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x50a4c8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x50a4c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8FF086u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8FF086u, _value); } while (0);
    // 0x50a4cc: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x50a4ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8FF084u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8FF084u, _value); } while (0);
    // 0x50a4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x50A4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A4D0u;
        // 0x50a4d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50A4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50A4D8u;
}
