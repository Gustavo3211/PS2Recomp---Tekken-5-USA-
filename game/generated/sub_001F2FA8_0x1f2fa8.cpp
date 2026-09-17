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

// Function: sub_001F2FA8
// Address: 0x1f2fa8 - 0x1f3000
void sub_001F2FA8_0x1f2fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2FA8_0x1f2fa8");
#endif

    switch (ctx->pc) {
        case 0x1f2fb8u: goto label_1f2fb8;
        case 0x1f2fc0u: goto label_1f2fc0;
        case 0x1f2fc8u: goto label_1f2fc8;
        case 0x1f2fd0u: goto label_1f2fd0;
        case 0x1f2fd8u: goto label_1f2fd8;
        case 0x1f2fe0u: goto label_1f2fe0;
        case 0x1f2fe8u: goto label_1f2fe8;
        default: break;
    }

    ctx->pc = 0x1f2fa8u;

    // 0x1f2fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f2fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2fb0: 0xc07d92a  jal         func_1F64A8
    ctx->pc = 0x1F2FB0u;
    SET_GPR_U32(ctx, 31, 0x1F2FB8u);
    ctx->pc = 0x1F64A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F64A8u, 0x1F2FB0u, 0x1F2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FB8u;
label_1f2fb8:
    // 0x1f2fb8: 0xc0958bc  jal         func_2562F0
    ctx->pc = 0x1F2FB8u;
    SET_GPR_U32(ctx, 31, 0x1F2FC0u);
    ctx->pc = 0x2562F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2562F0u, 0x1F2FB8u, 0x1F2FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FC0u;
label_1f2fc0:
    // 0x1f2fc0: 0xc09d726  jal         func_275C98
    ctx->pc = 0x1F2FC0u;
    SET_GPR_U32(ctx, 31, 0x1F2FC8u);
    ctx->pc = 0x275C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275C98u, 0x1F2FC0u, 0x1F2FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FC8u;
label_1f2fc8:
    // 0x1f2fc8: 0xc0b1022  jal         func_2C4088
    ctx->pc = 0x1F2FC8u;
    SET_GPR_U32(ctx, 31, 0x1F2FD0u);
    ctx->pc = 0x1F2FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FC8u;
    // 0x1f2fcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4088u, 0x1F2FC8u, 0x1F2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FD0u;
label_1f2fd0:
    // 0x1f2fd0: 0xc09fc3a  jal         func_27F0E8
    ctx->pc = 0x1F2FD0u;
    SET_GPR_U32(ctx, 31, 0x1F2FD8u);
    ctx->pc = 0x27F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0E8u, 0x1F2FD0u, 0x1F2FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FD8u;
label_1f2fd8:
    // 0x1f2fd8: 0xc07d854  jal         func_1F6150
    ctx->pc = 0x1F2FD8u;
    SET_GPR_U32(ctx, 31, 0x1F2FE0u);
    ctx->pc = 0x1F6150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6150u, 0x1F2FD8u, 0x1F2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FE0u;
label_1f2fe0:
    // 0x1f2fe0: 0xc08215c  jal         func_208570
    ctx->pc = 0x1F2FE0u;
    SET_GPR_U32(ctx, 31, 0x1F2FE8u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x1F2FE0u, 0x1F2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FE8u;
label_1f2fe8:
    // 0x1f2fe8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f2fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2ff0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f2ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f2ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FF4u;
        // 0x1f2ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2FFCu;
    // 0x1f2ffc: 0x0  nop
    ctx->pc = 0x1f2ffcu;
    // NOP
    ctx->pc = 0x1f3000u;
}
