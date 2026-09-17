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

// Function: sub_0034FB10
// Address: 0x34fb10 - 0x34fb90
void sub_0034FB10_0x34fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FB10_0x34fb10");
#endif

    switch (ctx->pc) {
        case 0x34fb10u: goto label_34fb10;
        case 0x34fb14u: goto label_34fb14;
        case 0x34fb18u: goto label_34fb18;
        case 0x34fb1cu: goto label_34fb1c;
        case 0x34fb20u: goto label_34fb20;
        case 0x34fb24u: goto label_34fb24;
        case 0x34fb28u: goto label_34fb28;
        case 0x34fb2cu: goto label_34fb2c;
        case 0x34fb30u: goto label_34fb30;
        case 0x34fb34u: goto label_34fb34;
        case 0x34fb38u: goto label_34fb38;
        case 0x34fb3cu: goto label_34fb3c;
        case 0x34fb40u: goto label_34fb40;
        case 0x34fb44u: goto label_34fb44;
        case 0x34fb48u: goto label_34fb48;
        case 0x34fb4cu: goto label_34fb4c;
        case 0x34fb50u: goto label_34fb50;
        case 0x34fb54u: goto label_34fb54;
        case 0x34fb58u: goto label_34fb58;
        case 0x34fb5cu: goto label_34fb5c;
        case 0x34fb60u: goto label_34fb60;
        case 0x34fb64u: goto label_34fb64;
        case 0x34fb68u: goto label_34fb68;
        case 0x34fb6cu: goto label_34fb6c;
        case 0x34fb70u: goto label_34fb70;
        case 0x34fb74u: goto label_34fb74;
        case 0x34fb78u: goto label_34fb78;
        case 0x34fb7cu: goto label_34fb7c;
        case 0x34fb80u: goto label_34fb80;
        case 0x34fb84u: goto label_34fb84;
        case 0x34fb88u: goto label_34fb88;
        case 0x34fb8cu: goto label_34fb8c;
        default: break;
    }

    ctx->pc = 0x34fb10u;

label_34fb10:
    // 0x34fb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34fb14:
    // 0x34fb14: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34fb18:
    // 0x34fb18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34fb1c:
    // 0x34fb1c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34fb1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34fb20:
    // 0x34fb20: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34fb24:
    // 0x34fb24: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34fb28:
    // 0x34fb28: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34fb2c:
    // 0x34fb2c: 0xc0d3fc6  jal         func_34FF18
label_34fb30:
    if (ctx->pc == 0x34FB30u) {
        ctx->pc = 0x34FB34u;
        goto label_34fb34;
    }
    ctx->pc = 0x34FB2Cu;
    SET_GPR_U32(ctx, 31, 0x34FB34u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34FB2Cu, 0x34FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FB34u;
label_34fb34:
    // 0x34fb34: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34fb38:
    // 0x34fb38: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34fb3c:
    // 0x34fb3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34fb40:
    if (ctx->pc == 0x34FB40u) {
        ctx->pc = 0x34FB44u;
        goto label_34fb44;
    }
    ctx->pc = 0x34FB3Cu;
    {
        const bool branch_taken_0x34fb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fb3c) {
            ctx->pc = 0x34FB54u;
            goto label_34fb54;
        }
    }
    ctx->pc = 0x34FB44u;
label_34fb44:
    // 0x34fb44: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34fb48:
    // 0x34fb48: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34fb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34fb4c:
    // 0x34fb4c: 0x1000000a  b           . + 4 + (0xA << 2)
label_34fb50:
    if (ctx->pc == 0x34FB50u) {
        ctx->pc = 0x34FB54u;
        goto label_34fb54;
    }
    ctx->pc = 0x34FB4Cu;
    {
        const bool branch_taken_0x34fb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fb4c) {
            ctx->pc = 0x34FB78u;
            goto label_34fb78;
        }
    }
    ctx->pc = 0x34FB54u;
label_34fb54:
    // 0x34fb54: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34fb58:
    // 0x34fb58: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34fb5c:
    // 0x34fb5c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x34fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_34fb60:
    // 0x34fb60: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x34fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34fb64:
    // 0x34fb64: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34fb68:
    // 0x34fb68: 0x40f809  jalr        $v0
label_34fb6c:
    if (ctx->pc == 0x34FB6Cu) {
        ctx->pc = 0x34FB70u;
        goto label_34fb70;
    }
    ctx->pc = 0x34FB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34FB70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FB68u, 0x34FB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34FB70u;
label_34fb70:
    // 0x34fb70: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34fb74:
    // 0x34fb74: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34fb78:
    // 0x34fb78: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34fb78u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34fb7c:
    // 0x34fb7c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34fb7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34fb80:
    // 0x34fb80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34fb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34fb84:
    // 0x34fb84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34fb84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34fb88:
    // 0x34fb88: 0x3e00008  jr          $ra
label_34fb8c:
    if (ctx->pc == 0x34FB8Cu) {
        ctx->pc = 0x34FB90u;
        goto label_fallthrough_0x34fb88;
    }
    ctx->pc = 0x34FB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34fb88:
    ctx->pc = 0x34FB90u;
}
