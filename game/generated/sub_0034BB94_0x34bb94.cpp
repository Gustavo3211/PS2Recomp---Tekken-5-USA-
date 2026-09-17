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

// Function: sub_0034BB94
// Address: 0x34bb94 - 0x34bc1c
void sub_0034BB94_0x34bb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BB94_0x34bb94");
#endif

    switch (ctx->pc) {
        case 0x34bbd8u: goto label_34bbd8;
        case 0x34bc00u: goto label_34bc00;
        default: break;
    }

    ctx->pc = 0x34bb94u;

    // 0x34bb94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bb94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34bb98: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34bb9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34bba0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34bba0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bba4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34bba8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34bbac: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bbb0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34bbb4: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bbb8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bbbc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34bbc0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x34bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bbc4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x34bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34bbc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34bbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bbcc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x34bbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x34bbd0: 0xc04a125  jal         func_128494
    ctx->pc = 0x34BBD0u;
    SET_GPR_U32(ctx, 31, 0x34BBD8u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34BBD0u, 0x34BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BBD8u;
label_34bbd8:
    // 0x34bbd8: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bbdc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bbe0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x34bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bbe4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34bbe8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x34bbec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bbf0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x34bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34bbf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34bbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bbf8: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x34BBF8u;
    SET_GPR_U32(ctx, 31, 0x34BC00u);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x34BBF8u, 0x34BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC00u;
label_34bc00:
    // 0x34bc00: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bc04: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34bc04u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc08: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34bc08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bc0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34bc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34bc10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34bc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34bc14: 0x3e00008  jr          $ra
    ctx->pc = 0x34BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BC1Cu;
}
