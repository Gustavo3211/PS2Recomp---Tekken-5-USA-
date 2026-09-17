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

// Function: sub_0034C03C
// Address: 0x34c03c - 0x34c0c4
void sub_0034C03C_0x34c03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C03C_0x34c03c");
#endif

    switch (ctx->pc) {
        case 0x34c03cu: goto label_34c03c;
        case 0x34c040u: goto label_34c040;
        case 0x34c044u: goto label_34c044;
        case 0x34c048u: goto label_34c048;
        case 0x34c04cu: goto label_34c04c;
        case 0x34c050u: goto label_34c050;
        case 0x34c054u: goto label_34c054;
        case 0x34c058u: goto label_34c058;
        case 0x34c05cu: goto label_34c05c;
        case 0x34c060u: goto label_34c060;
        case 0x34c064u: goto label_34c064;
        case 0x34c068u: goto label_34c068;
        case 0x34c06cu: goto label_34c06c;
        case 0x34c070u: goto label_34c070;
        case 0x34c074u: goto label_34c074;
        case 0x34c078u: goto label_34c078;
        case 0x34c07cu: goto label_34c07c;
        case 0x34c080u: goto label_34c080;
        case 0x34c084u: goto label_34c084;
        case 0x34c088u: goto label_34c088;
        case 0x34c08cu: goto label_34c08c;
        case 0x34c090u: goto label_34c090;
        case 0x34c094u: goto label_34c094;
        case 0x34c098u: goto label_34c098;
        case 0x34c09cu: goto label_34c09c;
        case 0x34c0a0u: goto label_34c0a0;
        case 0x34c0a4u: goto label_34c0a4;
        case 0x34c0a8u: goto label_34c0a8;
        case 0x34c0acu: goto label_34c0ac;
        case 0x34c0b0u: goto label_34c0b0;
        case 0x34c0b4u: goto label_34c0b4;
        case 0x34c0b8u: goto label_34c0b8;
        case 0x34c0bcu: goto label_34c0bc;
        case 0x34c0c0u: goto label_34c0c0;
        default: break;
    }

    ctx->pc = 0x34c03cu;

label_34c03c:
    // 0x34c03c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34c03cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34c040:
    // 0x34c040: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34c040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34c044:
    // 0x34c044: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34c048:
    // 0x34c048: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c048u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c04c:
    // 0x34c04c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34c050:
    // 0x34c050: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34c050u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34c054:
    // 0x34c054: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34c054u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34c058:
    // 0x34c058: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c05c:
    // 0x34c05c: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x34c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
label_34c060:
    // 0x34c060: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34c060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34c064:
    // 0x34c064: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34c064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34c068:
    // 0x34c068: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34c06c:
    if (ctx->pc == 0x34C06Cu) {
        ctx->pc = 0x34C070u;
        goto label_34c070;
    }
    ctx->pc = 0x34C068u;
    {
        const bool branch_taken_0x34c068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c068) {
            ctx->pc = 0x34C080u;
            goto label_34c080;
        }
    }
    ctx->pc = 0x34C070u;
label_34c070:
    // 0x34c070: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x34c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_34c074:
    // 0x34c074: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c074u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34c078:
    // 0x34c078: 0x10000002  b           . + 4 + (0x2 << 2)
label_34c07c:
    if (ctx->pc == 0x34C07Cu) {
        ctx->pc = 0x34C080u;
        goto label_34c080;
    }
    ctx->pc = 0x34C078u;
    {
        const bool branch_taken_0x34c078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c078) {
            ctx->pc = 0x34C084u;
            goto label_34c084;
        }
    }
    ctx->pc = 0x34C080u;
label_34c080:
    // 0x34c080: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x34c080u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_34c084:
    // 0x34c084: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34c084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c088:
    // 0x34c088: 0x2442ba54  addiu       $v0, $v0, -0x45AC
    ctx->pc = 0x34c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949460));
label_34c08c:
    // 0x34c08c: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34c090:
    // 0x34c090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c094:
    // 0x34c094: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c098:
    // 0x34c098: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c09c:
    // 0x34c09c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c0a0:
    // 0x34c0a0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34c0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34c0a4:
    // 0x34c0a4: 0x40f809  jalr        $v0
label_34c0a8:
    if (ctx->pc == 0x34C0A8u) {
        ctx->pc = 0x34C0ACu;
        goto label_34c0ac;
    }
    ctx->pc = 0x34C0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C0ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C0A4u, 0x34C0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C0ACu;
label_34c0ac:
    // 0x34c0ac: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c0acu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c0b0:
    // 0x34c0b0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34c0b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34c0b4:
    // 0x34c0b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34c0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34c0b8:
    // 0x34c0b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34c0bc:
    // 0x34c0bc: 0x3e00008  jr          $ra
label_34c0c0:
    if (ctx->pc == 0x34C0C0u) {
        ctx->pc = 0x34C0C4u;
        goto label_fallthrough_0x34c0bc;
    }
    ctx->pc = 0x34C0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c0bc:
    ctx->pc = 0x34C0C4u;
}
