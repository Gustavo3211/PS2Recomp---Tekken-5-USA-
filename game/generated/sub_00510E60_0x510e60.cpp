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

// Function: sub_00510E60
// Address: 0x510e60 - 0x510ec8
void sub_00510E60_0x510e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510E60_0x510e60");
#endif

    switch (ctx->pc) {
        case 0x510e8cu: goto label_510e8c;
        default: break;
    }

    ctx->pc = 0x510e60u;

    // 0x510e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x510e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x510e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x510e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x510e68: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x510e68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x510e6c: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x510e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x510e70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x510e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x510e74: 0xa6004cc4  sh          $zero, 0x4CC4($s0)
    ctx->pc = 0x510e74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x903D44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903D44u, _value); } while (0);
    // 0x510e78: 0xa6004cc2  sh          $zero, 0x4CC2($s0)
    ctx->pc = 0x510e78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x903D42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903D42u, _value); } while (0);
    // 0x510e7c: 0xa6004cce  sh          $zero, 0x4CCE($s0)
    ctx->pc = 0x510e7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x903D4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903D4Eu, _value); } while (0);
    // 0x510e80: 0xa6004dfc  sh          $zero, 0x4DFC($s0)
    ctx->pc = 0x510e80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x903E7Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903E7Cu, _value); } while (0);
    // 0x510e84: 0xc144ab4  jal         func_512AD0
    ctx->pc = 0x510E84u;
    SET_GPR_U32(ctx, 31, 0x510E8Cu);
    ctx->pc = 0x510E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510E84u;
    // 0x510e88: 0xa6004e46  sh          $zero, 0x4E46($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 20038), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AD0u, 0x510E84u, 0x510E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510E8Cu;
label_510e8c:
    // 0x510e8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x510e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x510e90: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x510e90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x510e94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x510e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x510e98: 0xa6004e40  sh          $zero, 0x4E40($s0)
    ctx->pc = 0x510e98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20032), (uint16_t)GPR_U32(ctx, 0));
    // 0x510e9c: 0xa6004e30  sh          $zero, 0x4E30($s0)
    ctx->pc = 0x510e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20016), (uint16_t)GPR_U32(ctx, 0));
    // 0x510ea0: 0xa6004e32  sh          $zero, 0x4E32($s0)
    ctx->pc = 0x510ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20018), (uint16_t)GPR_U32(ctx, 0));
    // 0x510ea4: 0xa6004e34  sh          $zero, 0x4E34($s0)
    ctx->pc = 0x510ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20020), (uint16_t)GPR_U32(ctx, 0));
    // 0x510ea8: 0xa6004e36  sh          $zero, 0x4E36($s0)
    ctx->pc = 0x510ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20022), (uint16_t)GPR_U32(ctx, 0));
    // 0x510eac: 0xa6004e38  sh          $zero, 0x4E38($s0)
    ctx->pc = 0x510eacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20024), (uint16_t)GPR_U32(ctx, 0));
    // 0x510eb0: 0xa6004e3a  sh          $zero, 0x4E3A($s0)
    ctx->pc = 0x510eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20026), (uint16_t)GPR_U32(ctx, 0));
    // 0x510eb4: 0xa6004e3c  sh          $zero, 0x4E3C($s0)
    ctx->pc = 0x510eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20028), (uint16_t)GPR_U32(ctx, 0));
    // 0x510eb8: 0xa6004e3e  sh          $zero, 0x4E3E($s0)
    ctx->pc = 0x510eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20030), (uint16_t)GPR_U32(ctx, 0));
    // 0x510ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x510ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x510EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510EC0u;
        // 0x510ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510EC8u;
}
