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

// Function: sub_004F2A40
// Address: 0x4f2a40 - 0x4f2ab8
void sub_004F2A40_0x4f2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2A40_0x4f2a40");
#endif

    ctx->pc = 0x4f2a40u;

    // 0x4f2a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f2a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f2a44: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4f2a44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4f2a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f2a4c: 0x24e71210  addiu       $a3, $a3, 0x1210
    ctx->pc = 0x4f2a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4624));
    // 0x4f2a50: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4f2a50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2a54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4f2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2a58: 0x8505015e  lh          $a1, 0x15E($t0)
    ctx->pc = 0x4f2a58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 350)));
    // 0x4f2a5c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f2a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f2a60: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4f2a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4f2a64: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f2a68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2a6c: 0x8c461228  lw          $a2, 0x1228($v0)
    ctx->pc = 0x4f2a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1228u));
    // 0x4f2a70: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4f2a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4f2a74: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f2a74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f2a78: 0x84c5015e  lh          $a1, 0x15E($a2)
    ctx->pc = 0x4f2a78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 350)));
    // 0x4f2a7c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4f2a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f2a80: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F2A80u;
    {
        const bool branch_taken_0x4f2a80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2A80u;
        // 0x4f2a84: 0x250901bc  addiu       $t1, $t0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2a80) {
            ctx->pc = 0x4F2A98u;
            goto label_4f2a98;
        }
    }
    ctx->pc = 0x4F2A88u;
    // 0x4f2a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2a8c: 0x813cab4  j           func_4F2AD0
    ctx->pc = 0x4F2A8Cu;
    ctx->pc = 0x4F2A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2A8Cu;
    // 0x4f2a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AD0u;
    sub_004F2AD0_0x4f2ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F2A94u;
    // 0x4f2a94: 0x0  nop
    ctx->pc = 0x4f2a94u;
    // NOP
label_4f2a98:
    // 0x4f2a98: 0x95030162  lhu         $v1, 0x162($t0)
    ctx->pc = 0x4f2a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 354)));
    // 0x4f2a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2aa0: 0xa503000c  sh          $v1, 0xC($t0)
    ctx->pc = 0x4f2aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f2aa4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4f2aa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f2aa8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f2aac: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4f2aacu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f2ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2AB0u;
        // 0x4f2ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2AB8u;
}
