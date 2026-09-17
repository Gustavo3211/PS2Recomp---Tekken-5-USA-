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

// Function: sub_0031E878
// Address: 0x31e878 - 0x31e8b8
void sub_0031E878_0x31e878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E878_0x31e878");
#endif

    ctx->pc = 0x31e878u;

    // 0x31e878: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x31e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x31e87c: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x31e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x31e880: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x31e880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x31e884: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x31e884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e888: 0xa4850412  sh          $a1, 0x412($a0)
    ctx->pc = 0x31e888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1042), (uint16_t)GPR_U32(ctx, 5));
    // 0x31e88c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x31e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31e890: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x31e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31e894: 0xa4800400  sh          $zero, 0x400($a0)
    ctx->pc = 0x31e894u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1024), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e898: 0xa4860408  sh          $a2, 0x408($a0)
    ctx->pc = 0x31e898u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1032), (uint16_t)GPR_U32(ctx, 6));
    // 0x31e89c: 0xa4850414  sh          $a1, 0x414($a0)
    ctx->pc = 0x31e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1044), (uint16_t)GPR_U32(ctx, 5));
    // 0x31e8a0: 0xa4820404  sh          $v0, 0x404($a0)
    ctx->pc = 0x31e8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1028), (uint16_t)GPR_U32(ctx, 2));
    // 0x31e8a4: 0xa4860410  sh          $a2, 0x410($a0)
    ctx->pc = 0x31e8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1040), (uint16_t)GPR_U32(ctx, 6));
    // 0x31e8a8: 0xa4800406  sh          $zero, 0x406($a0)
    ctx->pc = 0x31e8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1030), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31E8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8ACu;
        // 0x31e8b0: 0xa4830402  sh          $v1, 0x402($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1026), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E8B4u;
    // 0x31e8b4: 0x0  nop
    ctx->pc = 0x31e8b4u;
    // NOP
    ctx->pc = 0x31e8b8u;
}
