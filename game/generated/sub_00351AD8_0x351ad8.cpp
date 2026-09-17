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

// Function: sub_00351AD8
// Address: 0x351ad8 - 0x351b90
void sub_00351AD8_0x351ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351AD8_0x351ad8");
#endif

    switch (ctx->pc) {
        case 0x351b00u: goto label_351b00;
        case 0x351b78u: goto label_351b78;
        default: break;
    }

    ctx->pc = 0x351ad8u;

    // 0x351ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351adc: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351ae0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351ae4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351ae4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351ae8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351aec: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351aecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351af0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351af0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351af4: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x351af4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351af8: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351AF8u;
    SET_GPR_U32(ctx, 31, 0x351B00u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351AF8u, 0x351B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351B00u;
label_351b00:
    // 0x351b00: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351b00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351b04: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351b08: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351b08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351b0c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351b10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351B10u;
    {
        const bool branch_taken_0x351b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351b10) {
            ctx->pc = 0x351B28u;
            goto label_351b28;
        }
    }
    ctx->pc = 0x351B18u;
    // 0x351b18: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351b1c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351b20: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x351B20u;
    {
        const bool branch_taken_0x351b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351b20) {
            ctx->pc = 0x351B78u;
            goto label_351b78;
        }
    }
    ctx->pc = 0x351B28u;
label_351b28:
    // 0x351b28: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351b2c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351b30: 0x24422e6c  addiu       $v0, $v0, 0x2E6C
    ctx->pc = 0x351b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11884));
    // 0x351b34: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351b38: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351b3c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351b40: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351b44: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351b48: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351b4c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351b50: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351b54: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351b58: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351b5c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351b60: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351b64: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x351b68: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x351b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351b6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351b70: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351B70u;
    SET_GPR_U32(ctx, 31, 0x351B78u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351B70u, 0x351B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351B78u;
label_351b78:
    // 0x351b78: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351b78u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351b7c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351b7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351b80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351b84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351b88: 0x3e00008  jr          $ra
    ctx->pc = 0x351B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351B90u;
}
