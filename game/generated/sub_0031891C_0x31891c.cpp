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

// Function: sub_0031891C
// Address: 0x31891c - 0x3189c8
void sub_0031891C_0x31891c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031891C_0x31891c");
#endif

    switch (ctx->pc) {
        case 0x318930u: goto label_318930;
        case 0x318940u: goto label_318940;
        case 0x31895cu: goto label_31895c;
        case 0x31898cu: goto label_31898c;
        case 0x3189b0u: goto label_3189b0;
        default: break;
    }

    ctx->pc = 0x31891cu;

    // 0x31891c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31891cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x318920: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x318920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x318924: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x318924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x318928: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x318928u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31892c: 0xafc40004  sw          $a0, 0x4($fp)
    ctx->pc = 0x31892cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
label_318930:
    // 0x318930: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318934: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x318938: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x318938u;
    SET_GPR_U32(ctx, 31, 0x318940u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x318938u, 0x318940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318940u;
label_318940:
    // 0x318940: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318944: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x318944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x318948: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x318948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x31894c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x31894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318950: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x318954: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x318954u;
    SET_GPR_U32(ctx, 31, 0x31895Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318954u, 0x31895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31895Cu;
label_31895c:
    // 0x31895c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x31895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318960: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x318960u;
    {
        const bool branch_taken_0x318960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318960) {
            ctx->pc = 0x318980u;
            goto label_318980;
        }
    }
    ctx->pc = 0x318968u;
    // 0x318968: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x31896c: 0x8c624198  lw          $v0, 0x4198($v1)
    ctx->pc = 0x31896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
    // 0x318970: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318970u;
    {
        const bool branch_taken_0x318970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318970) {
            ctx->pc = 0x318980u;
            goto label_318980;
        }
    }
    ctx->pc = 0x318978u;
    // 0x318978: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x318978u;
    {
        const bool branch_taken_0x318978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318978) {
            ctx->pc = 0x318994u;
            goto label_318994;
        }
    }
    ctx->pc = 0x318980u;
label_318980:
    // 0x318980: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x318980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318984: 0xc0c6272  jal         func_3189C8
    ctx->pc = 0x318984u;
    SET_GPR_U32(ctx, 31, 0x31898Cu);
    ctx->pc = 0x3189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3189C8u, 0x318984u, 0x31898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31898Cu;
label_31898c:
    // 0x31898c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x31898Cu;
    {
        const bool branch_taken_0x31898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31898c) {
            ctx->pc = 0x318930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318930;
        }
    }
    ctx->pc = 0x318994u;
label_318994:
    // 0x318994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318998: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x318998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x31899c: 0xac624198  sw          $v0, 0x4198($v1)
    ctx->pc = 0x31899cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16792), GPR_U32(ctx, 2));
    // 0x3189a0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3189a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3189a4: 0xac404194  sw          $zero, 0x4194($v0)
    ctx->pc = 0x3189a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16788), GPR_U32(ctx, 0));
    // 0x3189a8: 0xc043c78  jal         func_10F1E0
    ctx->pc = 0x3189A8u;
    SET_GPR_U32(ctx, 31, 0x3189B0u);
    ctx->pc = 0x10F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E0u, 0x3189A8u, 0x3189B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3189B0u;
label_3189b0:
    // 0x3189b0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3189b0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3189b4: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3189b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3189b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3189b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3189bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3189bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3189c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3189C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3189C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3189C8u;
}
