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

// Function: sub_0034DBD0
// Address: 0x34dbd0 - 0x34dd2c
void sub_0034DBD0_0x34dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DBD0_0x34dbd0");
#endif

    switch (ctx->pc) {
        case 0x34dc0cu: goto label_34dc0c;
        case 0x34dc6cu: goto label_34dc6c;
        case 0x34dc94u: goto label_34dc94;
        case 0x34dcd0u: goto label_34dcd0;
        case 0x34dce4u: goto label_34dce4;
        default: break;
    }

    ctx->pc = 0x34dbd0u;

    // 0x34dbd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34dbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34dbd4: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34dbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34dbd8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34dbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34dbdc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34dbdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dbe0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34dbe4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34dbe8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34dbec: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34dbf0: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34dbf4: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34dbf8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34dbfc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34dc00: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34dc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34dc04: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34DC04u;
    SET_GPR_U32(ctx, 31, 0x34DC0Cu);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34DC04u, 0x34DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC0Cu;
label_34dc0c:
    // 0x34dc0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34dc10: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34dc14: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34dc18: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34dc1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34dc20: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x34dc24: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34dc28: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34dc2c: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x34dc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x34dc30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DC30u;
    {
        const bool branch_taken_0x34dc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34dc30) {
            ctx->pc = 0x34DC48u;
            goto label_34dc48;
        }
    }
    ctx->pc = 0x34DC38u;
    // 0x34dc38: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34dc3c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34dc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x34dc40: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x34DC40u;
    {
        const bool branch_taken_0x34dc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dc40) {
            ctx->pc = 0x34DD14u;
            goto label_34dd14;
        }
    }
    ctx->pc = 0x34DC48u;
label_34dc48:
    // 0x34dc48: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34dc4c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34dc50: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34dc54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34dc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34dc58: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34dc5c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34dc60: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34dc64: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34DC64u;
    SET_GPR_U32(ctx, 31, 0x34DC6Cu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34DC64u, 0x34DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC6Cu;
label_34dc6c:
    // 0x34dc6c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34dc70: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34dc74: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34dc78: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34dc7c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x34dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x34dc80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dc84: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34dc88: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34dc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34dc8c: 0xc04a125  jal         func_128494
    ctx->pc = 0x34DC8Cu;
    SET_GPR_U32(ctx, 31, 0x34DC94u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34DC8Cu, 0x34DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC94u;
label_34dc94:
    // 0x34dc94: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34dc98: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34dc9c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34dca0: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34dca4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34dca8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34dcac: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34dcb0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34dcb4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34dcb8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x34dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34dcbc: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x34dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34dcc0: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34dcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34dcc4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34dcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34dcc8: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34DCC8u;
    SET_GPR_U32(ctx, 31, 0x34DCD0u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34DCC8u, 0x34DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DCD0u;
label_34dcd0:
    // 0x34dcd0: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34dcd4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34dcd8: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34dcdc: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34DCDCu;
    SET_GPR_U32(ctx, 31, 0x34DCE4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34DCDCu, 0x34DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DCE4u;
label_34dce4:
    // 0x34dce4: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34dce8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DCE8u;
    {
        const bool branch_taken_0x34dce8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34dce8) {
            ctx->pc = 0x34DD00u;
            goto label_34dd00;
        }
    }
    ctx->pc = 0x34DCF0u;
    // 0x34dcf0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34dcf4: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34dcf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34DCF8u;
    {
        const bool branch_taken_0x34dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dcf8) {
            ctx->pc = 0x34DD14u;
            goto label_34dd14;
        }
    }
    ctx->pc = 0x34DD00u;
label_34dd00:
    // 0x34dd00: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34dd04: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34dd08: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34dd0c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34dd10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34dd14:
    // 0x34dd14: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34dd14u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd18: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34dd18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34dd1c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34dd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34dd20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34dd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34dd24: 0x3e00008  jr          $ra
    ctx->pc = 0x34DD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DD2Cu;
}
