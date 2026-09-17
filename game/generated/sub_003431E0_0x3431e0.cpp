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

// Function: sub_003431E0
// Address: 0x3431e0 - 0x343258
void sub_003431E0_0x3431e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003431E0_0x3431e0");
#endif

    ctx->pc = 0x3431e0u;

    // 0x3431e0: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x3431e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x3431e4: 0x30a80400  andi        $t0, $a1, 0x400
    ctx->pc = 0x3431e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x3431e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3431e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3431ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3431ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3431f0: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x3431f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x3431f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3431F4u;
    {
        const bool branch_taken_0x3431f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3431F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431F4u;
        // 0x3431f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3431f4) {
            ctx->pc = 0x343204u;
            goto label_343204;
        }
    }
    ctx->pc = 0x3431FCu;
    // 0x3431fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3431fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343200: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x343200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_343204:
    // 0x343204: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x343204u;
    {
        const bool branch_taken_0x343204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x343208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343204u;
        // 0x343208: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343204) {
            ctx->pc = 0x343218u;
            goto label_343218;
        }
    }
    ctx->pc = 0x34320Cu;
    // 0x34320c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34320cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343210: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x343210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x343214: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x343214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_343218:
    // 0x343218: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x343218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34321c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x343220: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x343220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x343224: 0xa8200b  movn        $a0, $a1, $t0
    ctx->pc = 0x343224u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x343228: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x343228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x34322c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x34322cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x343230: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x343230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x343234: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x343234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x343238: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x343238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x34323c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34323cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x343240: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x343240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x343244: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x343244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x343248: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x343248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34324c: 0x3e00008  jr          $ra
    ctx->pc = 0x34324Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34324Cu;
        // 0x343250: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34324Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343254u;
    // 0x343254: 0x0  nop
    ctx->pc = 0x343254u;
    // NOP
    ctx->pc = 0x343258u;
}
