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

// Function: sub_0034FC18
// Address: 0x34fc18 - 0x34fce8
void sub_0034FC18_0x34fc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FC18_0x34fc18");
#endif

    switch (ctx->pc) {
        case 0x34fc18u: goto label_34fc18;
        case 0x34fc1cu: goto label_34fc1c;
        case 0x34fc20u: goto label_34fc20;
        case 0x34fc24u: goto label_34fc24;
        case 0x34fc28u: goto label_34fc28;
        case 0x34fc2cu: goto label_34fc2c;
        case 0x34fc30u: goto label_34fc30;
        case 0x34fc34u: goto label_34fc34;
        case 0x34fc38u: goto label_34fc38;
        case 0x34fc3cu: goto label_34fc3c;
        case 0x34fc40u: goto label_34fc40;
        case 0x34fc44u: goto label_34fc44;
        case 0x34fc48u: goto label_34fc48;
        case 0x34fc4cu: goto label_34fc4c;
        case 0x34fc50u: goto label_34fc50;
        case 0x34fc54u: goto label_34fc54;
        case 0x34fc58u: goto label_34fc58;
        case 0x34fc5cu: goto label_34fc5c;
        case 0x34fc60u: goto label_34fc60;
        case 0x34fc64u: goto label_34fc64;
        case 0x34fc68u: goto label_34fc68;
        case 0x34fc6cu: goto label_34fc6c;
        case 0x34fc70u: goto label_34fc70;
        case 0x34fc74u: goto label_34fc74;
        case 0x34fc78u: goto label_34fc78;
        case 0x34fc7cu: goto label_34fc7c;
        case 0x34fc80u: goto label_34fc80;
        case 0x34fc84u: goto label_34fc84;
        case 0x34fc88u: goto label_34fc88;
        case 0x34fc8cu: goto label_34fc8c;
        case 0x34fc90u: goto label_34fc90;
        case 0x34fc94u: goto label_34fc94;
        case 0x34fc98u: goto label_34fc98;
        case 0x34fc9cu: goto label_34fc9c;
        case 0x34fca0u: goto label_34fca0;
        case 0x34fca4u: goto label_34fca4;
        case 0x34fca8u: goto label_34fca8;
        case 0x34fcacu: goto label_34fcac;
        case 0x34fcb0u: goto label_34fcb0;
        case 0x34fcb4u: goto label_34fcb4;
        case 0x34fcb8u: goto label_34fcb8;
        case 0x34fcbcu: goto label_34fcbc;
        case 0x34fcc0u: goto label_34fcc0;
        case 0x34fcc4u: goto label_34fcc4;
        case 0x34fcc8u: goto label_34fcc8;
        case 0x34fcccu: goto label_34fccc;
        case 0x34fcd0u: goto label_34fcd0;
        case 0x34fcd4u: goto label_34fcd4;
        case 0x34fcd8u: goto label_34fcd8;
        case 0x34fcdcu: goto label_34fcdc;
        case 0x34fce0u: goto label_34fce0;
        case 0x34fce4u: goto label_34fce4;
        default: break;
    }

    ctx->pc = 0x34fc18u;

label_34fc18:
    // 0x34fc18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34fc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34fc1c:
    // 0x34fc1c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34fc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34fc20:
    // 0x34fc20: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34fc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34fc24:
    // 0x34fc24: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34fc24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34fc28:
    // 0x34fc28: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34fc2c:
    // 0x34fc2c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34fc30:
    // 0x34fc30: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34fc34:
    // 0x34fc34: 0xc0d3f53  jal         func_34FD4C
label_34fc38:
    if (ctx->pc == 0x34FC38u) {
        ctx->pc = 0x34FC3Cu;
        goto label_34fc3c;
    }
    ctx->pc = 0x34FC34u;
    SET_GPR_U32(ctx, 31, 0x34FC3Cu);
    ctx->pc = 0x34FD4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD4Cu, 0x34FC34u, 0x34FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC3Cu;
label_34fc3c:
    // 0x34fc3c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34fc40:
    // 0x34fc40: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34fc44:
    // 0x34fc44: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_34fc48:
    if (ctx->pc == 0x34FC48u) {
        ctx->pc = 0x34FC4Cu;
        goto label_34fc4c;
    }
    ctx->pc = 0x34FC44u;
    {
        const bool branch_taken_0x34fc44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34fc44) {
            ctx->pc = 0x34FC58u;
            goto label_34fc58;
        }
    }
    ctx->pc = 0x34FC4Cu;
label_34fc4c:
    // 0x34fc4c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34fc50:
    // 0x34fc50: 0x1000001f  b           . + 4 + (0x1F << 2)
label_34fc54:
    if (ctx->pc == 0x34FC54u) {
        ctx->pc = 0x34FC58u;
        goto label_34fc58;
    }
    ctx->pc = 0x34FC50u;
    {
        const bool branch_taken_0x34fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fc50) {
            ctx->pc = 0x34FCD0u;
            goto label_34fcd0;
        }
    }
    ctx->pc = 0x34FC58u;
label_34fc58:
    // 0x34fc58: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34fc5c:
    // 0x34fc5c: 0xc0d3fc6  jal         func_34FF18
label_34fc60:
    if (ctx->pc == 0x34FC60u) {
        ctx->pc = 0x34FC64u;
        goto label_34fc64;
    }
    ctx->pc = 0x34FC5Cu;
    SET_GPR_U32(ctx, 31, 0x34FC64u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34FC5Cu, 0x34FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC64u;
label_34fc64:
    // 0x34fc64: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34fc68:
    // 0x34fc68: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34fc6c:
    // 0x34fc6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34fc70:
    if (ctx->pc == 0x34FC70u) {
        ctx->pc = 0x34FC74u;
        goto label_34fc74;
    }
    ctx->pc = 0x34FC6Cu;
    {
        const bool branch_taken_0x34fc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fc6c) {
            ctx->pc = 0x34FC84u;
            goto label_34fc84;
        }
    }
    ctx->pc = 0x34FC74u;
label_34fc74:
    // 0x34fc74: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34fc78:
    // 0x34fc78: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34fc7c:
    // 0x34fc7c: 0x10000014  b           . + 4 + (0x14 << 2)
label_34fc80:
    if (ctx->pc == 0x34FC80u) {
        ctx->pc = 0x34FC84u;
        goto label_34fc84;
    }
    ctx->pc = 0x34FC7Cu;
    {
        const bool branch_taken_0x34fc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fc7c) {
            ctx->pc = 0x34FCD0u;
            goto label_34fcd0;
        }
    }
    ctx->pc = 0x34FC84u;
label_34fc84:
    // 0x34fc84: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34fc88:
    // 0x34fc88: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34fc8c:
    // 0x34fc8c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34fc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34fc90:
    // 0x34fc90: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34fc94:
    // 0x34fc94: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34fc98:
    // 0x34fc98: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34fc9c:
    // 0x34fc9c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_34fca0:
    // 0x34fca0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34fca4:
    // 0x34fca4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34fca8:
    // 0x34fca8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x34fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_34fcac:
    // 0x34fcac: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34fcb0:
    // 0x34fcb0: 0x40f809  jalr        $v0
label_34fcb4:
    if (ctx->pc == 0x34FCB4u) {
        ctx->pc = 0x34FCB8u;
        goto label_34fcb8;
    }
    ctx->pc = 0x34FCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34FCB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FCB0u, 0x34FCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34FCB8u;
label_34fcb8:
    // 0x34fcb8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34fcbc:
    // 0x34fcbc: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34fcc0:
    // 0x34fcc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34fcc4:
    // 0x34fcc4: 0xc0d3f96  jal         func_34FE58
label_34fcc8:
    if (ctx->pc == 0x34FCC8u) {
        ctx->pc = 0x34FCCCu;
        goto label_34fccc;
    }
    ctx->pc = 0x34FCC4u;
    SET_GPR_U32(ctx, 31, 0x34FCCCu);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34FCC4u, 0x34FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FCCCu;
label_34fccc:
    // 0x34fccc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34fcd0:
    // 0x34fcd0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34fcd0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34fcd4:
    // 0x34fcd4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34fcd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34fcd8:
    // 0x34fcd8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34fcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34fcdc:
    // 0x34fcdc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34fcdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34fce0:
    // 0x34fce0: 0x3e00008  jr          $ra
label_34fce4:
    if (ctx->pc == 0x34FCE4u) {
        ctx->pc = 0x34FCE8u;
        goto label_fallthrough_0x34fce0;
    }
    ctx->pc = 0x34FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34fce0:
    ctx->pc = 0x34FCE8u;
}
