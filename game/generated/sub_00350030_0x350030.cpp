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

// Function: sub_00350030
// Address: 0x350030 - 0x3500e8
void sub_00350030_0x350030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350030_0x350030");
#endif

    switch (ctx->pc) {
        case 0x350080u: goto label_350080;
        default: break;
    }

    ctx->pc = 0x350030u;

    // 0x350030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350034: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x350034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x350038: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x350038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35003c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35003cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350040: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350040u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350044: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x350044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x350048: 0x2442c248  addiu       $v0, $v0, -0x3DB8
    ctx->pc = 0x350048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951496));
    // 0x35004c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x35004cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x350050: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x350054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350058: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x350058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x35005c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35005Cu;
    {
        const bool branch_taken_0x35005c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35005c) {
            ctx->pc = 0x350070u;
            goto label_350070;
        }
    }
    ctx->pc = 0x350064u;
    // 0x350064: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x350064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x350068: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x350068u;
    {
        const bool branch_taken_0x350068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350068) {
            ctx->pc = 0x3500D0u;
            goto label_3500d0;
        }
    }
    ctx->pc = 0x350070u;
label_350070:
    // 0x350070: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350074: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x350074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350078: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x350078u;
    SET_GPR_U32(ctx, 31, 0x350080u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x350078u, 0x350080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350080u;
label_350080:
    // 0x350080: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x350080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x350084: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350084u;
    {
        const bool branch_taken_0x350084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350084) {
            ctx->pc = 0x350098u;
            goto label_350098;
        }
    }
    ctx->pc = 0x35008Cu;
    // 0x35008c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x350090: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x350090u;
    {
        const bool branch_taken_0x350090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350090) {
            ctx->pc = 0x3500D0u;
            goto label_3500d0;
        }
    }
    ctx->pc = 0x350098u;
label_350098:
    // 0x350098: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x350098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x35009c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3500a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3500a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3500a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3500a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3500a8: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x3500a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3500ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3500acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3500b0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3500b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3500b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3500b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3500b8: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3500b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3500bc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3500bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3500c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3500c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3500c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3500c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3500c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3500c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3500cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3500ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3500d0:
    // 0x3500d0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3500d0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3500d4: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3500d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3500d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3500d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3500dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3500dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3500e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3500E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3500E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3500E8u;
}
