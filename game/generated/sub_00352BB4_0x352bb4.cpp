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

// Function: sub_00352BB4
// Address: 0x352bb4 - 0x352c68
void sub_00352BB4_0x352bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352BB4_0x352bb4");
#endif

    switch (ctx->pc) {
        case 0x352bb4u: goto label_352bb4;
        case 0x352bb8u: goto label_352bb8;
        case 0x352bbcu: goto label_352bbc;
        case 0x352bc0u: goto label_352bc0;
        case 0x352bc4u: goto label_352bc4;
        case 0x352bc8u: goto label_352bc8;
        case 0x352bccu: goto label_352bcc;
        case 0x352bd0u: goto label_352bd0;
        case 0x352bd4u: goto label_352bd4;
        case 0x352bd8u: goto label_352bd8;
        case 0x352bdcu: goto label_352bdc;
        case 0x352be0u: goto label_352be0;
        case 0x352be4u: goto label_352be4;
        case 0x352be8u: goto label_352be8;
        case 0x352becu: goto label_352bec;
        case 0x352bf0u: goto label_352bf0;
        case 0x352bf4u: goto label_352bf4;
        case 0x352bf8u: goto label_352bf8;
        case 0x352bfcu: goto label_352bfc;
        case 0x352c00u: goto label_352c00;
        case 0x352c04u: goto label_352c04;
        case 0x352c08u: goto label_352c08;
        case 0x352c0cu: goto label_352c0c;
        case 0x352c10u: goto label_352c10;
        case 0x352c14u: goto label_352c14;
        case 0x352c18u: goto label_352c18;
        case 0x352c1cu: goto label_352c1c;
        case 0x352c20u: goto label_352c20;
        case 0x352c24u: goto label_352c24;
        case 0x352c28u: goto label_352c28;
        case 0x352c2cu: goto label_352c2c;
        case 0x352c30u: goto label_352c30;
        case 0x352c34u: goto label_352c34;
        case 0x352c38u: goto label_352c38;
        case 0x352c3cu: goto label_352c3c;
        case 0x352c40u: goto label_352c40;
        case 0x352c44u: goto label_352c44;
        case 0x352c48u: goto label_352c48;
        case 0x352c4cu: goto label_352c4c;
        case 0x352c50u: goto label_352c50;
        case 0x352c54u: goto label_352c54;
        case 0x352c58u: goto label_352c58;
        case 0x352c5cu: goto label_352c5c;
        case 0x352c60u: goto label_352c60;
        case 0x352c64u: goto label_352c64;
        default: break;
    }

    ctx->pc = 0x352bb4u;

label_352bb4:
    // 0x352bb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352bb8:
    // 0x352bb8: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352bbc:
    // 0x352bbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352bc0:
    // 0x352bc0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352bc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352bc4:
    // 0x352bc4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352bc8:
    // 0x352bc8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352bcc:
    // 0x352bcc: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352bccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352bd0:
    // 0x352bd0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352bd4:
    // 0x352bd4: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352bd8:
    // 0x352bd8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352bdc:
    // 0x352bdc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x352bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352be0:
    // 0x352be0: 0xc0d32b8  jal         func_34CAE0
label_352be4:
    if (ctx->pc == 0x352BE4u) {
        ctx->pc = 0x352BE8u;
        goto label_352be8;
    }
    ctx->pc = 0x352BE0u;
    SET_GPR_U32(ctx, 31, 0x352BE8u);
    ctx->pc = 0x34CAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CAE0u, 0x352BE0u, 0x352BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352BE8u;
label_352be8:
    // 0x352be8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352be8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352bec:
    // 0x352bec: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352bf0:
    // 0x352bf0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x352bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_352bf4:
    // 0x352bf4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352bf8:
    if (ctx->pc == 0x352BF8u) {
        ctx->pc = 0x352BFCu;
        goto label_352bfc;
    }
    ctx->pc = 0x352BF4u;
    {
        const bool branch_taken_0x352bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352bf4) {
            ctx->pc = 0x352C4Cu;
            goto label_352c4c;
        }
    }
    ctx->pc = 0x352BFCu;
label_352bfc:
    // 0x352bfc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352c00:
    // 0x352c00: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352c04:
    // 0x352c04: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352c08:
    // 0x352c08: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x352c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_352c0c:
    // 0x352c0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352c10:
    // 0x352c10: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352c14:
    // 0x352c14: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x352c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_352c18:
    // 0x352c18: 0x40f809  jalr        $v0
label_352c1c:
    if (ctx->pc == 0x352C1Cu) {
        ctx->pc = 0x352C20u;
        goto label_352c20;
    }
    ctx->pc = 0x352C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352C20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352C18u, 0x352C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352C20u;
label_352c20:
    // 0x352c20: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352c20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352c24:
    // 0x352c24: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352c28:
    // 0x352c28: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352c2c:
    if (ctx->pc == 0x352C2Cu) {
        ctx->pc = 0x352C30u;
        goto label_352c30;
    }
    ctx->pc = 0x352C28u;
    {
        const bool branch_taken_0x352c28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352c28) {
            ctx->pc = 0x352C4Cu;
            goto label_352c4c;
        }
    }
    ctx->pc = 0x352C30u;
label_352c30:
    // 0x352c30: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352c34:
    // 0x352c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352c38:
    // 0x352c38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352c3c:
    if (ctx->pc == 0x352C3Cu) {
        ctx->pc = 0x352C40u;
        goto label_352c40;
    }
    ctx->pc = 0x352C38u;
    {
        const bool branch_taken_0x352c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352c38) {
            ctx->pc = 0x352C4Cu;
            goto label_352c4c;
        }
    }
    ctx->pc = 0x352C40u;
label_352c40:
    // 0x352c40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352c44:
    // 0x352c44: 0x10000002  b           . + 4 + (0x2 << 2)
label_352c48:
    if (ctx->pc == 0x352C48u) {
        ctx->pc = 0x352C4Cu;
        goto label_352c4c;
    }
    ctx->pc = 0x352C44u;
    {
        const bool branch_taken_0x352c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352c44) {
            ctx->pc = 0x352C50u;
            goto label_352c50;
        }
    }
    ctx->pc = 0x352C4Cu;
label_352c4c:
    // 0x352c4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352c50:
    // 0x352c50: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352c50u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352c54:
    // 0x352c54: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352c54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352c58:
    // 0x352c58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352c5c:
    // 0x352c5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352c60:
    // 0x352c60: 0x3e00008  jr          $ra
label_352c64:
    if (ctx->pc == 0x352C64u) {
        ctx->pc = 0x352C68u;
        goto label_fallthrough_0x352c60;
    }
    ctx->pc = 0x352C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352c60:
    ctx->pc = 0x352C68u;
}
