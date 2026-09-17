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

// Function: sub_0034F494
// Address: 0x34f494 - 0x34f50c
void sub_0034F494_0x34f494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F494_0x34f494");
#endif

    switch (ctx->pc) {
        case 0x34f494u: goto label_34f494;
        case 0x34f498u: goto label_34f498;
        case 0x34f49cu: goto label_34f49c;
        case 0x34f4a0u: goto label_34f4a0;
        case 0x34f4a4u: goto label_34f4a4;
        case 0x34f4a8u: goto label_34f4a8;
        case 0x34f4acu: goto label_34f4ac;
        case 0x34f4b0u: goto label_34f4b0;
        case 0x34f4b4u: goto label_34f4b4;
        case 0x34f4b8u: goto label_34f4b8;
        case 0x34f4bcu: goto label_34f4bc;
        case 0x34f4c0u: goto label_34f4c0;
        case 0x34f4c4u: goto label_34f4c4;
        case 0x34f4c8u: goto label_34f4c8;
        case 0x34f4ccu: goto label_34f4cc;
        case 0x34f4d0u: goto label_34f4d0;
        case 0x34f4d4u: goto label_34f4d4;
        case 0x34f4d8u: goto label_34f4d8;
        case 0x34f4dcu: goto label_34f4dc;
        case 0x34f4e0u: goto label_34f4e0;
        case 0x34f4e4u: goto label_34f4e4;
        case 0x34f4e8u: goto label_34f4e8;
        case 0x34f4ecu: goto label_34f4ec;
        case 0x34f4f0u: goto label_34f4f0;
        case 0x34f4f4u: goto label_34f4f4;
        case 0x34f4f8u: goto label_34f4f8;
        case 0x34f4fcu: goto label_34f4fc;
        case 0x34f500u: goto label_34f500;
        case 0x34f504u: goto label_34f504;
        case 0x34f508u: goto label_34f508;
        default: break;
    }

    ctx->pc = 0x34f494u;

label_34f494:
    // 0x34f494: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34f498:
    // 0x34f498: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34f49c:
    // 0x34f49c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34f49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34f4a0:
    // 0x34f4a0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f4a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f4a4:
    // 0x34f4a4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f4a8:
    // 0x34f4a8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f4ac:
    // 0x34f4ac: 0xc0d3fc6  jal         func_34FF18
label_34f4b0:
    if (ctx->pc == 0x34F4B0u) {
        ctx->pc = 0x34F4B4u;
        goto label_34f4b4;
    }
    ctx->pc = 0x34F4ACu;
    SET_GPR_U32(ctx, 31, 0x34F4B4u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F4ACu, 0x34F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F4B4u;
label_34f4b4:
    // 0x34f4b4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34f4b8:
    // 0x34f4b8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f4bc:
    // 0x34f4bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f4c0:
    if (ctx->pc == 0x34F4C0u) {
        ctx->pc = 0x34F4C4u;
        goto label_34f4c4;
    }
    ctx->pc = 0x34F4BCu;
    {
        const bool branch_taken_0x34f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f4bc) {
            ctx->pc = 0x34F4D4u;
            goto label_34f4d4;
        }
    }
    ctx->pc = 0x34F4C4u;
label_34f4c4:
    // 0x34f4c4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f4c8:
    // 0x34f4c8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f4cc:
    // 0x34f4cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_34f4d0:
    if (ctx->pc == 0x34F4D0u) {
        ctx->pc = 0x34F4D4u;
        goto label_34f4d4;
    }
    ctx->pc = 0x34F4CCu;
    {
        const bool branch_taken_0x34f4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f4cc) {
            ctx->pc = 0x34F4F4u;
            goto label_34f4f4;
        }
    }
    ctx->pc = 0x34F4D4u;
label_34f4d4:
    // 0x34f4d4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f4d8:
    // 0x34f4d8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34f4dc:
    // 0x34f4dc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x34f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_34f4e0:
    // 0x34f4e0: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f4e4:
    // 0x34f4e4: 0x40f809  jalr        $v0
label_34f4e8:
    if (ctx->pc == 0x34F4E8u) {
        ctx->pc = 0x34F4ECu;
        goto label_34f4ec;
    }
    ctx->pc = 0x34F4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F4ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F4E4u, 0x34F4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F4ECu;
label_34f4ec:
    // 0x34f4ec: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34f4f0:
    // 0x34f4f0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f4f4:
    // 0x34f4f4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f4f4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f4f8:
    // 0x34f4f8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34f4f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34f4fc:
    // 0x34f4fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34f4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34f500:
    // 0x34f500: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34f504:
    // 0x34f504: 0x3e00008  jr          $ra
label_34f508:
    if (ctx->pc == 0x34F508u) {
        ctx->pc = 0x34F50Cu;
        goto label_fallthrough_0x34f504;
    }
    ctx->pc = 0x34F504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f504:
    ctx->pc = 0x34F50Cu;
}
