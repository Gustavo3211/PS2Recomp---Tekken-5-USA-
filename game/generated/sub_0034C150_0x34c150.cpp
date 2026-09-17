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

// Function: sub_0034C150
// Address: 0x34c150 - 0x34c1cc
void sub_0034C150_0x34c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C150_0x34c150");
#endif

    switch (ctx->pc) {
        case 0x34c150u: goto label_34c150;
        case 0x34c154u: goto label_34c154;
        case 0x34c158u: goto label_34c158;
        case 0x34c15cu: goto label_34c15c;
        case 0x34c160u: goto label_34c160;
        case 0x34c164u: goto label_34c164;
        case 0x34c168u: goto label_34c168;
        case 0x34c16cu: goto label_34c16c;
        case 0x34c170u: goto label_34c170;
        case 0x34c174u: goto label_34c174;
        case 0x34c178u: goto label_34c178;
        case 0x34c17cu: goto label_34c17c;
        case 0x34c180u: goto label_34c180;
        case 0x34c184u: goto label_34c184;
        case 0x34c188u: goto label_34c188;
        case 0x34c18cu: goto label_34c18c;
        case 0x34c190u: goto label_34c190;
        case 0x34c194u: goto label_34c194;
        case 0x34c198u: goto label_34c198;
        case 0x34c19cu: goto label_34c19c;
        case 0x34c1a0u: goto label_34c1a0;
        case 0x34c1a4u: goto label_34c1a4;
        case 0x34c1a8u: goto label_34c1a8;
        case 0x34c1acu: goto label_34c1ac;
        case 0x34c1b0u: goto label_34c1b0;
        case 0x34c1b4u: goto label_34c1b4;
        case 0x34c1b8u: goto label_34c1b8;
        case 0x34c1bcu: goto label_34c1bc;
        case 0x34c1c0u: goto label_34c1c0;
        case 0x34c1c4u: goto label_34c1c4;
        case 0x34c1c8u: goto label_34c1c8;
        default: break;
    }

    ctx->pc = 0x34c150u;

label_34c150:
    // 0x34c150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34c154:
    // 0x34c154: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34c158:
    // 0x34c158: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34c15c:
    // 0x34c15c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c15cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c160:
    // 0x34c160: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c160u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34c164:
    // 0x34c164: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c168:
    // 0x34c168: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x34c168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
label_34c16c:
    // 0x34c16c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34c16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34c170:
    // 0x34c170: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34c170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34c174:
    // 0x34c174: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34c178:
    if (ctx->pc == 0x34C178u) {
        ctx->pc = 0x34C17Cu;
        goto label_34c17c;
    }
    ctx->pc = 0x34C174u;
    {
        const bool branch_taken_0x34c174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c174) {
            ctx->pc = 0x34C18Cu;
            goto label_34c18c;
        }
    }
    ctx->pc = 0x34C17Cu;
label_34c17c:
    // 0x34c17c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x34c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_34c180:
    // 0x34c180: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34c180u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34c184:
    // 0x34c184: 0x10000003  b           . + 4 + (0x3 << 2)
label_34c188:
    if (ctx->pc == 0x34C188u) {
        ctx->pc = 0x34C18Cu;
        goto label_34c18c;
    }
    ctx->pc = 0x34C184u;
    {
        const bool branch_taken_0x34c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c184) {
            ctx->pc = 0x34C194u;
            goto label_34c194;
        }
    }
    ctx->pc = 0x34C18Cu;
label_34c18c:
    // 0x34c18c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_34c190:
    // 0x34c190: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x34c190u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
label_34c194:
    // 0x34c194: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34c194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c198:
    // 0x34c198: 0x2442ba4c  addiu       $v0, $v0, -0x45B4
    ctx->pc = 0x34c198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949452));
label_34c19c:
    // 0x34c19c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c1a0:
    // 0x34c1a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c1a4:
    // 0x34c1a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c1a8:
    // 0x34c1a8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c1ac:
    // 0x34c1ac: 0x40f809  jalr        $v0
label_34c1b0:
    if (ctx->pc == 0x34C1B0u) {
        ctx->pc = 0x34C1B4u;
        goto label_34c1b4;
    }
    ctx->pc = 0x34C1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C1B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C1ACu, 0x34C1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C1B4u;
label_34c1b4:
    // 0x34c1b4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c1b4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c1b8:
    // 0x34c1b8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34c1b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34c1bc:
    // 0x34c1bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34c1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34c1c0:
    // 0x34c1c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34c1c4:
    // 0x34c1c4: 0x3e00008  jr          $ra
label_34c1c8:
    if (ctx->pc == 0x34C1C8u) {
        ctx->pc = 0x34C1CCu;
        goto label_fallthrough_0x34c1c4;
    }
    ctx->pc = 0x34C1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c1c4:
    ctx->pc = 0x34C1CCu;
}
