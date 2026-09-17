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

// Function: sub_004E98E0
// Address: 0x4e98e0 - 0x4e9960
void sub_004E98E0_0x4e98e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E98E0_0x4e98e0");
#endif

    switch (ctx->pc) {
        case 0x4e98f4u: goto label_4e98f4;
        default: break;
    }

    ctx->pc = 0x4e98e0u;

    // 0x4e98e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e98e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e98e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e98e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e98e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e98e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e98ec: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E98ECu;
    SET_GPR_U32(ctx, 31, 0x4E98F4u);
    ctx->pc = 0x4E98F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E98ECu;
    // 0x4e98f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E98ECu, 0x4E98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E98F4u;
label_4e98f4:
    // 0x4e98f4: 0x24030088  addiu       $v1, $zero, 0x88
    ctx->pc = 0x4e98f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x4e98f8: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4e98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4e98fc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e98fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e9900: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x4e9900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4e9904: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e9904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9908: 0x24470014  addiu       $a3, $v0, 0x14
    ctx->pc = 0x4e9908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4e990c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4e990cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e9910: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4e9910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4e9914: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e9914u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9918: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e991c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e991cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e9920: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9924: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e9924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e9928: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4e9928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e992c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e992cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e9930: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9934: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9938: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e9938u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e993c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x4e993cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e9940: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e9940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e9944: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e9948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e994c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e994cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9950: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4e9950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4e9954: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9954u;
        // 0x4e9958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E995Cu;
    // 0x4e995c: 0x0  nop
    ctx->pc = 0x4e995cu;
    // NOP
    ctx->pc = 0x4e9960u;
}
