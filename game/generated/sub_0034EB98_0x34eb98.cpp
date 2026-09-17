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

// Function: sub_0034EB98
// Address: 0x34eb98 - 0x34ecb8
void sub_0034EB98_0x34eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EB98_0x34eb98");
#endif

    switch (ctx->pc) {
        case 0x34ebdcu: goto label_34ebdc;
        case 0x34ec08u: goto label_34ec08;
        case 0x34ec5cu: goto label_34ec5c;
        case 0x34ec70u: goto label_34ec70;
        default: break;
    }

    ctx->pc = 0x34eb98u;

    // 0x34eb98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34eb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34eb9c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34eb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34eba0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34eba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34eba4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34eba4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eba8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34ebac: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34ebb0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34ebb4: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34ebb8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ebbc: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34ebc0: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34ebc4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ebc8: 0x24420117  addiu       $v0, $v0, 0x117
    ctx->pc = 0x34ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 279));
    // 0x34ebcc: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ebd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34ebd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ebd4: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x34EBD4u;
    SET_GPR_U32(ctx, 31, 0x34EBDCu);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x34EBD4u, 0x34EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EBDCu;
label_34ebdc:
    // 0x34ebdc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ebe0: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34ebe4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34ebe8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34ebec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34ebf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34ebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34ebf4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34ebf8: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34ebfc: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34ec00: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34EC00u;
    SET_GPR_U32(ctx, 31, 0x34EC08u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34EC00u, 0x34EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC08u;
label_34ec08:
    // 0x34ec08: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ec0c: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34ec10: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34ec14: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34ec18: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34ec1c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34ec20: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34ec24: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ec28: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34ec2c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34ec30: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34ec34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34ec38: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34ec3c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ec40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34ec44: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x34ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34ec48: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x34ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34ec4c: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34ec4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34ec50: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34ec50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ec54: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34EC54u;
    SET_GPR_U32(ctx, 31, 0x34EC5Cu);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34EC54u, 0x34EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC5Cu;
label_34ec5c:
    // 0x34ec5c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34ec60: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34ec64: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34ec68: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34EC68u;
    SET_GPR_U32(ctx, 31, 0x34EC70u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34EC68u, 0x34EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC70u;
label_34ec70:
    // 0x34ec70: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ec74: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EC74u;
    {
        const bool branch_taken_0x34ec74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34ec74) {
            ctx->pc = 0x34EC8Cu;
            goto label_34ec8c;
        }
    }
    ctx->pc = 0x34EC7Cu;
    // 0x34ec7c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34ec80: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34ec80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34ec84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34EC84u;
    {
        const bool branch_taken_0x34ec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ec84) {
            ctx->pc = 0x34ECA0u;
            goto label_34eca0;
        }
    }
    ctx->pc = 0x34EC8Cu;
label_34ec8c:
    // 0x34ec8c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ec90: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34ec94: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34ec98: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ec9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34eca0:
    // 0x34eca0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34eca0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eca4: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34eca4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34eca8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34eca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ecac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34ecacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34ecb0: 0x3e00008  jr          $ra
    ctx->pc = 0x34ECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ECB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ECB8u;
}
