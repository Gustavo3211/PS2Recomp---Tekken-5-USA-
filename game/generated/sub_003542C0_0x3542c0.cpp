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

// Function: sub_003542C0
// Address: 0x3542c0 - 0x354364
void sub_003542C0_0x3542c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003542C0_0x3542c0");
#endif

    switch (ctx->pc) {
        case 0x3542c0u: goto label_3542c0;
        case 0x3542c4u: goto label_3542c4;
        case 0x3542c8u: goto label_3542c8;
        case 0x3542ccu: goto label_3542cc;
        case 0x3542d0u: goto label_3542d0;
        case 0x3542d4u: goto label_3542d4;
        case 0x3542d8u: goto label_3542d8;
        case 0x3542dcu: goto label_3542dc;
        case 0x3542e0u: goto label_3542e0;
        case 0x3542e4u: goto label_3542e4;
        case 0x3542e8u: goto label_3542e8;
        case 0x3542ecu: goto label_3542ec;
        case 0x3542f0u: goto label_3542f0;
        case 0x3542f4u: goto label_3542f4;
        case 0x3542f8u: goto label_3542f8;
        case 0x3542fcu: goto label_3542fc;
        case 0x354300u: goto label_354300;
        case 0x354304u: goto label_354304;
        case 0x354308u: goto label_354308;
        case 0x35430cu: goto label_35430c;
        case 0x354310u: goto label_354310;
        case 0x354314u: goto label_354314;
        case 0x354318u: goto label_354318;
        case 0x35431cu: goto label_35431c;
        case 0x354320u: goto label_354320;
        case 0x354324u: goto label_354324;
        case 0x354328u: goto label_354328;
        case 0x35432cu: goto label_35432c;
        case 0x354330u: goto label_354330;
        case 0x354334u: goto label_354334;
        case 0x354338u: goto label_354338;
        case 0x35433cu: goto label_35433c;
        case 0x354340u: goto label_354340;
        case 0x354344u: goto label_354344;
        case 0x354348u: goto label_354348;
        case 0x35434cu: goto label_35434c;
        case 0x354350u: goto label_354350;
        case 0x354354u: goto label_354354;
        case 0x354358u: goto label_354358;
        case 0x35435cu: goto label_35435c;
        case 0x354360u: goto label_354360;
        default: break;
    }

    ctx->pc = 0x3542c0u;

label_3542c0:
    // 0x3542c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3542c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3542c4:
    // 0x3542c4: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x3542c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_3542c8:
    // 0x3542c8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3542c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_3542cc:
    // 0x3542cc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3542ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3542d0:
    // 0x3542d0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3542d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3542d4:
    // 0x3542d4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3542d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_3542d8:
    // 0x3542d8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3542d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_3542dc:
    // 0x3542dc: 0x8f82cbe0  lw          $v0, -0x3420($gp)
    ctx->pc = 0x3542dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953952)));
label_3542e0:
    // 0x3542e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3542e4:
    if (ctx->pc == 0x3542E4u) {
        ctx->pc = 0x3542E8u;
        goto label_3542e8;
    }
    ctx->pc = 0x3542E0u;
    {
        const bool branch_taken_0x3542e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3542e0) {
            ctx->pc = 0x3542F8u;
            goto label_3542f8;
        }
    }
    ctx->pc = 0x3542E8u;
label_3542e8:
    // 0x3542e8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3542e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_3542ec:
    // 0x3542ec: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x3542ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
label_3542f0:
    // 0x3542f0: 0x10000016  b           . + 4 + (0x16 << 2)
label_3542f4:
    if (ctx->pc == 0x3542F4u) {
        ctx->pc = 0x3542F8u;
        goto label_3542f8;
    }
    ctx->pc = 0x3542F0u;
    {
        const bool branch_taken_0x3542f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3542f0) {
            ctx->pc = 0x35434Cu;
            goto label_35434c;
        }
    }
    ctx->pc = 0x3542F8u;
label_3542f8:
    // 0x3542f8: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x3542f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_3542fc:
    // 0x3542fc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3542fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_354300:
    // 0x354300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354304:
    // 0x354304: 0xc0d521a  jal         func_354868
label_354308:
    if (ctx->pc == 0x354308u) {
        ctx->pc = 0x35430Cu;
        goto label_35430c;
    }
    ctx->pc = 0x354304u;
    SET_GPR_U32(ctx, 31, 0x35430Cu);
    ctx->pc = 0x354868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354868u, 0x354304u, 0x35430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35430Cu;
label_35430c:
    // 0x35430c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x35430cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_354310:
    // 0x354310: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x354310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_354314:
    // 0x354314: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_354318:
    if (ctx->pc == 0x354318u) {
        ctx->pc = 0x35431Cu;
        goto label_35431c;
    }
    ctx->pc = 0x354314u;
    {
        const bool branch_taken_0x354314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354314) {
            ctx->pc = 0x35432Cu;
            goto label_35432c;
        }
    }
    ctx->pc = 0x35431Cu;
label_35431c:
    // 0x35431c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_354320:
    // 0x354320: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x354320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_354324:
    // 0x354324: 0x10000009  b           . + 4 + (0x9 << 2)
label_354328:
    if (ctx->pc == 0x354328u) {
        ctx->pc = 0x35432Cu;
        goto label_35432c;
    }
    ctx->pc = 0x354324u;
    {
        const bool branch_taken_0x354324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354324) {
            ctx->pc = 0x35434Cu;
            goto label_35434c;
        }
    }
    ctx->pc = 0x35432Cu;
label_35432c:
    // 0x35432c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x35432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_354330:
    // 0x354330: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x354330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_354334:
    // 0x354334: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x354334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_354338:
    // 0x354338: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x354338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35433c:
    // 0x35433c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x35433cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_354340:
    // 0x354340: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x354340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_354344:
    // 0x354344: 0x40f809  jalr        $v0
label_354348:
    if (ctx->pc == 0x354348u) {
        ctx->pc = 0x35434Cu;
        goto label_35434c;
    }
    ctx->pc = 0x354344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35434Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354344u, 0x35434Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35434Cu;
label_35434c:
    // 0x35434c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35434cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_354350:
    // 0x354350: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x354350u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_354354:
    // 0x354354: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x354354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_354358:
    // 0x354358: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x354358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35435c:
    // 0x35435c: 0x3e00008  jr          $ra
label_354360:
    if (ctx->pc == 0x354360u) {
        ctx->pc = 0x354364u;
        goto label_fallthrough_0x35435c;
    }
    ctx->pc = 0x35435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35435Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35435c:
    ctx->pc = 0x354364u;
}
