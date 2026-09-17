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

// Function: sub_0034CB64
// Address: 0x34cb64 - 0x34cbe0
void sub_0034CB64_0x34cb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CB64_0x34cb64");
#endif

    switch (ctx->pc) {
        case 0x34cb64u: goto label_34cb64;
        case 0x34cb68u: goto label_34cb68;
        case 0x34cb6cu: goto label_34cb6c;
        case 0x34cb70u: goto label_34cb70;
        case 0x34cb74u: goto label_34cb74;
        case 0x34cb78u: goto label_34cb78;
        case 0x34cb7cu: goto label_34cb7c;
        case 0x34cb80u: goto label_34cb80;
        case 0x34cb84u: goto label_34cb84;
        case 0x34cb88u: goto label_34cb88;
        case 0x34cb8cu: goto label_34cb8c;
        case 0x34cb90u: goto label_34cb90;
        case 0x34cb94u: goto label_34cb94;
        case 0x34cb98u: goto label_34cb98;
        case 0x34cb9cu: goto label_34cb9c;
        case 0x34cba0u: goto label_34cba0;
        case 0x34cba4u: goto label_34cba4;
        case 0x34cba8u: goto label_34cba8;
        case 0x34cbacu: goto label_34cbac;
        case 0x34cbb0u: goto label_34cbb0;
        case 0x34cbb4u: goto label_34cbb4;
        case 0x34cbb8u: goto label_34cbb8;
        case 0x34cbbcu: goto label_34cbbc;
        case 0x34cbc0u: goto label_34cbc0;
        case 0x34cbc4u: goto label_34cbc4;
        case 0x34cbc8u: goto label_34cbc8;
        case 0x34cbccu: goto label_34cbcc;
        case 0x34cbd0u: goto label_34cbd0;
        case 0x34cbd4u: goto label_34cbd4;
        case 0x34cbd8u: goto label_34cbd8;
        case 0x34cbdcu: goto label_34cbdc;
        default: break;
    }

    ctx->pc = 0x34cb64u;

label_34cb64:
    // 0x34cb64: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cb64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34cb68:
    // 0x34cb68: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34cb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34cb6c:
    // 0x34cb6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34cb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34cb70:
    // 0x34cb70: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34cb70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34cb74:
    // 0x34cb74: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34cb78:
    // 0x34cb78: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34cb7c:
    // 0x34cb7c: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x34cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
label_34cb80:
    // 0x34cb80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34cb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34cb84:
    // 0x34cb84: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34cb84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34cb88:
    // 0x34cb88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34cb8c:
    if (ctx->pc == 0x34CB8Cu) {
        ctx->pc = 0x34CB90u;
        goto label_34cb90;
    }
    ctx->pc = 0x34CB88u;
    {
        const bool branch_taken_0x34cb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cb88) {
            ctx->pc = 0x34CBA0u;
            goto label_34cba0;
        }
    }
    ctx->pc = 0x34CB90u;
label_34cb90:
    // 0x34cb90: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x34cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_34cb94:
    // 0x34cb94: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34cb98:
    // 0x34cb98: 0x10000003  b           . + 4 + (0x3 << 2)
label_34cb9c:
    if (ctx->pc == 0x34CB9Cu) {
        ctx->pc = 0x34CBA0u;
        goto label_34cba0;
    }
    ctx->pc = 0x34CB98u;
    {
        const bool branch_taken_0x34cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cb98) {
            ctx->pc = 0x34CBA8u;
            goto label_34cba8;
        }
    }
    ctx->pc = 0x34CBA0u;
label_34cba0:
    // 0x34cba0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x34cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_34cba4:
    // 0x34cba4: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x34cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
label_34cba8:
    // 0x34cba8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34cbac:
    // 0x34cbac: 0x2442ba50  addiu       $v0, $v0, -0x45B0
    ctx->pc = 0x34cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949456));
label_34cbb0:
    // 0x34cbb0: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34cbb4:
    // 0x34cbb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34cbb8:
    // 0x34cbb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34cbbc:
    // 0x34cbbc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34cbc0:
    // 0x34cbc0: 0x40f809  jalr        $v0
label_34cbc4:
    if (ctx->pc == 0x34CBC4u) {
        ctx->pc = 0x34CBC8u;
        goto label_34cbc8;
    }
    ctx->pc = 0x34CBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34CBC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CBC0u, 0x34CBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CBC8u;
label_34cbc8:
    // 0x34cbc8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34cbc8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34cbcc:
    // 0x34cbcc: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34cbccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34cbd0:
    // 0x34cbd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34cbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34cbd4:
    // 0x34cbd4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34cbd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34cbd8:
    // 0x34cbd8: 0x3e00008  jr          $ra
label_34cbdc:
    if (ctx->pc == 0x34CBDCu) {
        ctx->pc = 0x34CBE0u;
        goto label_fallthrough_0x34cbd8;
    }
    ctx->pc = 0x34CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34cbd8:
    ctx->pc = 0x34CBE0u;
}
