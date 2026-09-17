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

// Function: sub_00100768
// Address: 0x100768 - 0x1007a8
void sub_00100768_0x100768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100768_0x100768");
#endif

    ctx->pc = 0x100768u;

    // 0x100768: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x10076c: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x10076cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x100770: 0x3463c880  ori         $v1, $v1, 0xC880
    ctx->pc = 0x100770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51328);
    // 0x100774: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100778: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x100778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x10077c: 0x3c05000d  lui         $a1, 0xD
    ctx->pc = 0x10077cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13 << 16));
    // 0x100780: 0x34a54480  ori         $a1, $a1, 0x4480
    ctx->pc = 0x100780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17536);
    // 0x100784: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x100784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x100788: 0x3c06000d  lui         $a2, 0xD
    ctx->pc = 0x100788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)13 << 16));
    // 0x10078c: 0x34c64880  ori         $a2, $a2, 0x4880
    ctx->pc = 0x10078cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)18560);
    // 0x100790: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x100790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x100794: 0xac430144  sw          $v1, 0x144($v0)
    ctx->pc = 0x100794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA304u, _value); } while (0);
    // 0x100798: 0xac4500c4  sw          $a1, 0xC4($v0)
    ctx->pc = 0x100798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1BCA284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA284u, _value); } while (0);
    // 0x10079c: 0xac460140  sw          $a2, 0x140($v0)
    ctx->pc = 0x10079cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1BCA300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA300u, _value); } while (0);
    // 0x1007a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1007A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1007A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007A0u;
        // 0x1007a4: 0xac4400c0  sw          $a0, 0xC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1007A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1007A8u;
}
