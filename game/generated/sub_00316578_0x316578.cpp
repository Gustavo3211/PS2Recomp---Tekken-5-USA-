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

// Function: sub_00316578
// Address: 0x316578 - 0x3165fc
void sub_00316578_0x316578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316578_0x316578");
#endif

    switch (ctx->pc) {
        case 0x3165c4u: goto label_3165c4;
        default: break;
    }

    ctx->pc = 0x316578u;

label_316578:
    // 0x316578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31657c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x31657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x316580: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316580u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316584: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x316584u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x316588: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x31658c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31658cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316590: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x316590u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316594: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x316594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316598: 0x3e00008  jr          $ra
    ctx->pc = 0x316598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3165A0u;
    // 0x3165a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3165a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3165a4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3165a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3165a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3165a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3165ac: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3165acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165b0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3165b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3165b4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3165b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3165b8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3165b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3165bc: 0xc0c595e  jal         func_316578
    ctx->pc = 0x3165BCu;
    SET_GPR_U32(ctx, 31, 0x3165C4u);
    ctx->pc = 0x316578u;
    goto label_316578;
    ctx->pc = 0x3165C4u;
label_3165c4:
    // 0x3165c4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3165c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3165c8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3165c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3165cc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3165ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3165d0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3165d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3165d4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3165d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3165d8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x3165d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3165dc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3165dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3165e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3165e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3165e4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3165e4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165e8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3165e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3165ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3165ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3165f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3165f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3165f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3165F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3165F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3165FCu;
}
