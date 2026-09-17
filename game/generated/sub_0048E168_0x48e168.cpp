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

// Function: sub_0048E168
// Address: 0x48e168 - 0x48e1c8
void sub_0048E168_0x48e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E168_0x48e168");
#endif

    switch (ctx->pc) {
        case 0x48e188u: goto label_48e188;
        case 0x48e1a8u: goto label_48e1a8;
        default: break;
    }

    ctx->pc = 0x48e168u;

    // 0x48e168: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e16c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48e170: 0x24632382  addiu       $v1, $v1, 0x2382
    ctx->pc = 0x48e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9090));
    // 0x48e174: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48e174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FA02u));
    // 0x48e178: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x48e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x48e17c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E17Cu;
        // 0x48e180: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E184u;
    // 0x48e184: 0x0  nop
    ctx->pc = 0x48e184u;
    // NOP
label_48e188:
    // 0x48e188: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e18c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48e190: 0x24632382  addiu       $v1, $v1, 0x2382
    ctx->pc = 0x48e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9090));
    // 0x48e194: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48e194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FA02u));
    // 0x48e198: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x48e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x48e19c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E19Cu;
        // 0x48e1a0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E1A4u;
    // 0x48e1a4: 0x0  nop
    ctx->pc = 0x48e1a4u;
    // NOP
label_48e1a8:
    // 0x48e1a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e1ac: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48e1b0: 0x24632382  addiu       $v1, $v1, 0x2382
    ctx->pc = 0x48e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9090));
    // 0x48e1b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48e1b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FA02u));
    // 0x48e1b8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x48e1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x48e1bc: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x48e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x48e1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x48E1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E1C0u;
        // 0x48e1c4: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E1C8u;
}
