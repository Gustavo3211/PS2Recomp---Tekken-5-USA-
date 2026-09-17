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

// Function: sub_00249A40
// Address: 0x249a40 - 0x249a80
void sub_00249A40_0x249a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249A40_0x249a40");
#endif

    switch (ctx->pc) {
        case 0x249a60u: goto label_249a60;
        default: break;
    }

    ctx->pc = 0x249a40u;

    // 0x249a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x249a44: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x249a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x249a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x249a58: 0xc0921de  jal         func_248778
    ctx->pc = 0x249A58u;
    SET_GPR_U32(ctx, 31, 0x249A60u);
    ctx->pc = 0x249A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A58u;
    // 0x249a5c: 0x24517270  addiu       $s1, $v0, 0x7270 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248778u, 0x249A58u, 0x249A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A60u;
label_249a60:
    // 0x249a60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x249A60u;
    {
        const bool branch_taken_0x249a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249a60) {
            ctx->pc = 0x249A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A60u;
            // 0x249a64: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A68u;
            goto label_249a68;
        }
    }
    ctx->pc = 0x249A68u;
label_249a68:
    // 0x249a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249a74: 0x3e00008  jr          $ra
    ctx->pc = 0x249A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A74u;
        // 0x249a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249A7Cu;
    // 0x249a7c: 0x0  nop
    ctx->pc = 0x249a7cu;
    // NOP
    ctx->pc = 0x249a80u;
}
