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

// Function: sub_00283EC8
// Address: 0x283ec8 - 0x283f40
void sub_00283EC8_0x283ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283EC8_0x283ec8");
#endif

    ctx->pc = 0x283ec8u;

    // 0x283ec8: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x283ec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x283ecc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x283eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x283ed0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x283ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x283ed4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x283ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283ed8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x283ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283edc: 0x8c4588a8  lw          $a1, -0x7758($v0)
    ctx->pc = 0x283edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936744)));
    // 0x283ee0: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x283ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x283ee4: 0xac27cab8  sw          $a3, -0x3548($at)
    ctx->pc = 0x283ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953656), GPR_U32(ctx, 7));
    // 0x283ee8: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x283ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x283eec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x283eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283ef0: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x283ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x283ef4: 0xac26ca98  sw          $a2, -0x3568($at)
    ctx->pc = 0x283ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953624), GPR_U32(ctx, 6));
    // 0x283ef8: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x283ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x283efc: 0x663004  sllv        $a2, $a2, $v1
    ctx->pc = 0x283efcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x283f00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x283f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283f04: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x283f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x283f08: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x283f08u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x283f0c: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x283f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x283f10: 0xac25ca90  sw          $a1, -0x3570($at)
    ctx->pc = 0x283f10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953616), GPR_U32(ctx, 5));
    // 0x283f14: 0x3e00008  jr          $ra
    ctx->pc = 0x283F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283F1Cu;
    // 0x283f1c: 0x0  nop
    ctx->pc = 0x283f1cu;
    // NOP
    // 0x283f20: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x283f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x283f24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x283f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x283f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283f2c: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x283f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x283f30: 0xac23caa0  sw          $v1, -0x3560($at)
    ctx->pc = 0x283f30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 3));
    // 0x283f34: 0x3e00008  jr          $ra
    ctx->pc = 0x283F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283F3Cu;
    // 0x283f3c: 0x0  nop
    ctx->pc = 0x283f3cu;
    // NOP
    ctx->pc = 0x283f40u;
}
