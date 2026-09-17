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

// Function: sub_0034BF3C
// Address: 0x34bf3c - 0x34bfb4
void sub_0034BF3C_0x34bf3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BF3C_0x34bf3c");
#endif

    switch (ctx->pc) {
        case 0x34bf3cu: goto label_34bf3c;
        case 0x34bf40u: goto label_34bf40;
        case 0x34bf44u: goto label_34bf44;
        case 0x34bf48u: goto label_34bf48;
        case 0x34bf4cu: goto label_34bf4c;
        case 0x34bf50u: goto label_34bf50;
        case 0x34bf54u: goto label_34bf54;
        case 0x34bf58u: goto label_34bf58;
        case 0x34bf5cu: goto label_34bf5c;
        case 0x34bf60u: goto label_34bf60;
        case 0x34bf64u: goto label_34bf64;
        case 0x34bf68u: goto label_34bf68;
        case 0x34bf6cu: goto label_34bf6c;
        case 0x34bf70u: goto label_34bf70;
        case 0x34bf74u: goto label_34bf74;
        case 0x34bf78u: goto label_34bf78;
        case 0x34bf7cu: goto label_34bf7c;
        case 0x34bf80u: goto label_34bf80;
        case 0x34bf84u: goto label_34bf84;
        case 0x34bf88u: goto label_34bf88;
        case 0x34bf8cu: goto label_34bf8c;
        case 0x34bf90u: goto label_34bf90;
        case 0x34bf94u: goto label_34bf94;
        case 0x34bf98u: goto label_34bf98;
        case 0x34bf9cu: goto label_34bf9c;
        case 0x34bfa0u: goto label_34bfa0;
        case 0x34bfa4u: goto label_34bfa4;
        case 0x34bfa8u: goto label_34bfa8;
        case 0x34bfacu: goto label_34bfac;
        case 0x34bfb0u: goto label_34bfb0;
        default: break;
    }

    ctx->pc = 0x34bf3cu;

label_34bf3c:
    // 0x34bf3c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bf3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34bf40:
    // 0x34bf40: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34bf44:
    // 0x34bf44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34bf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34bf48:
    // 0x34bf48: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34bf48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34bf4c:
    // 0x34bf4c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34bf50:
    // 0x34bf50: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34bf54:
    // 0x34bf54: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x34bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
label_34bf58:
    // 0x34bf58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34bf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34bf5c:
    // 0x34bf5c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34bf5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34bf60:
    // 0x34bf60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34bf64:
    if (ctx->pc == 0x34BF64u) {
        ctx->pc = 0x34BF68u;
        goto label_34bf68;
    }
    ctx->pc = 0x34BF60u;
    {
        const bool branch_taken_0x34bf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bf60) {
            ctx->pc = 0x34BF78u;
            goto label_34bf78;
        }
    }
    ctx->pc = 0x34BF68u;
label_34bf68:
    // 0x34bf68: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x34bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_34bf6c:
    // 0x34bf6c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34bf70:
    // 0x34bf70: 0x10000002  b           . + 4 + (0x2 << 2)
label_34bf74:
    if (ctx->pc == 0x34BF74u) {
        ctx->pc = 0x34BF78u;
        goto label_34bf78;
    }
    ctx->pc = 0x34BF70u;
    {
        const bool branch_taken_0x34bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bf70) {
            ctx->pc = 0x34BF7Cu;
            goto label_34bf7c;
        }
    }
    ctx->pc = 0x34BF78u;
label_34bf78:
    // 0x34bf78: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x34bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_34bf7c:
    // 0x34bf7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34bf80:
    // 0x34bf80: 0x2442ba4c  addiu       $v0, $v0, -0x45B4
    ctx->pc = 0x34bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949452));
label_34bf84:
    // 0x34bf84: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34bf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34bf88:
    // 0x34bf88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34bf8c:
    // 0x34bf8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34bf90:
    // 0x34bf90: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34bf94:
    // 0x34bf94: 0x40f809  jalr        $v0
label_34bf98:
    if (ctx->pc == 0x34BF98u) {
        ctx->pc = 0x34BF9Cu;
        goto label_34bf9c;
    }
    ctx->pc = 0x34BF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34BF9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BF94u, 0x34BF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34BF9Cu;
label_34bf9c:
    // 0x34bf9c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34bf9cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34bfa0:
    // 0x34bfa0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34bfa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34bfa4:
    // 0x34bfa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34bfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34bfa8:
    // 0x34bfa8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34bfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34bfac:
    // 0x34bfac: 0x3e00008  jr          $ra
label_34bfb0:
    if (ctx->pc == 0x34BFB0u) {
        ctx->pc = 0x34BFB4u;
        goto label_fallthrough_0x34bfac;
    }
    ctx->pc = 0x34BFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34bfac:
    ctx->pc = 0x34BFB4u;
}
