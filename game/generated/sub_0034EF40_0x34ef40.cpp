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

// Function: sub_0034EF40
// Address: 0x34ef40 - 0x34f09c
void sub_0034EF40_0x34ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EF40_0x34ef40");
#endif

    switch (ctx->pc) {
        case 0x34ef7cu: goto label_34ef7c;
        case 0x34efdcu: goto label_34efdc;
        case 0x34f004u: goto label_34f004;
        case 0x34f040u: goto label_34f040;
        case 0x34f054u: goto label_34f054;
        default: break;
    }

    ctx->pc = 0x34ef40u;

    // 0x34ef40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34ef44: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34ef48: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34ef4c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34ef4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef50: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34ef54: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34ef58: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34ef5c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ef60: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34ef64: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34ef68: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ef6c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34ef70: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34ef74: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34EF74u;
    SET_GPR_U32(ctx, 31, 0x34EF7Cu);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34EF74u, 0x34EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF7Cu;
label_34ef7c:
    // 0x34ef7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34ef80: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34ef84: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ef88: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34ef8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34ef90: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x34ef94: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34ef98: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ef9c: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x34ef9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x34efa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EFA0u;
    {
        const bool branch_taken_0x34efa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34efa0) {
            ctx->pc = 0x34EFB8u;
            goto label_34efb8;
        }
    }
    ctx->pc = 0x34EFA8u;
    // 0x34efa8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34efac: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x34efb0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x34EFB0u;
    {
        const bool branch_taken_0x34efb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34efb0) {
            ctx->pc = 0x34F084u;
            goto label_34f084;
        }
    }
    ctx->pc = 0x34EFB8u;
label_34efb8:
    // 0x34efb8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34efbc: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34efc0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34efc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34efc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34efc8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34efcc: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34efd0: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34efd4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34EFD4u;
    SET_GPR_U32(ctx, 31, 0x34EFDCu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34EFD4u, 0x34EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EFDCu;
label_34efdc:
    // 0x34efdc: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34efe0: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34efe4: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34efe8: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34efec: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x34efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x34eff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34eff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eff4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34eff8: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34effc: 0xc04a125  jal         func_128494
    ctx->pc = 0x34EFFCu;
    SET_GPR_U32(ctx, 31, 0x34F004u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34EFFCu, 0x34F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F004u;
label_34f004:
    // 0x34f004: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34f004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34f008: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34f00c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34f010: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34f010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34f014: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34f018: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34f018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34f01c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34f020: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34f024: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34f024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34f028: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x34f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34f02c: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x34f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34f030: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34f030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34f034: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34f034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34f038: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34F038u;
    SET_GPR_U32(ctx, 31, 0x34F040u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34F038u, 0x34F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F040u;
label_34f040:
    // 0x34f040: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34f040u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34f044: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34f048: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34f048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34f04c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34F04Cu;
    SET_GPR_U32(ctx, 31, 0x34F054u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34F04Cu, 0x34F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F054u;
label_34f054:
    // 0x34f054: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34f058: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F058u;
    {
        const bool branch_taken_0x34f058 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34f058) {
            ctx->pc = 0x34F070u;
            goto label_34f070;
        }
    }
    ctx->pc = 0x34F060u;
    // 0x34f060: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34f064: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34f064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34f068: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34F068u;
    {
        const bool branch_taken_0x34f068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f068) {
            ctx->pc = 0x34F084u;
            goto label_34f084;
        }
    }
    ctx->pc = 0x34F070u;
label_34f070:
    // 0x34f070: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34f074: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34f078: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34f078u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34f07c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34f080: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f084:
    // 0x34f084: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f084u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f088: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34f088u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34f08c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34f08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f090: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34f094: 0x3e00008  jr          $ra
    ctx->pc = 0x34F094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F09Cu;
}
