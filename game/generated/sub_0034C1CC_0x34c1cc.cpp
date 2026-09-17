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

// Function: sub_0034C1CC
// Address: 0x34c1cc - 0x34c2b4
void sub_0034C1CC_0x34c1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C1CC_0x34c1cc");
#endif

    switch (ctx->pc) {
        case 0x34c1ccu: goto label_34c1cc;
        case 0x34c1d0u: goto label_34c1d0;
        case 0x34c1d4u: goto label_34c1d4;
        case 0x34c1d8u: goto label_34c1d8;
        case 0x34c1dcu: goto label_34c1dc;
        case 0x34c1e0u: goto label_34c1e0;
        case 0x34c1e4u: goto label_34c1e4;
        case 0x34c1e8u: goto label_34c1e8;
        case 0x34c1ecu: goto label_34c1ec;
        case 0x34c1f0u: goto label_34c1f0;
        case 0x34c1f4u: goto label_34c1f4;
        case 0x34c1f8u: goto label_34c1f8;
        case 0x34c1fcu: goto label_34c1fc;
        case 0x34c200u: goto label_34c200;
        case 0x34c204u: goto label_34c204;
        case 0x34c208u: goto label_34c208;
        case 0x34c20cu: goto label_34c20c;
        case 0x34c210u: goto label_34c210;
        case 0x34c214u: goto label_34c214;
        case 0x34c218u: goto label_34c218;
        case 0x34c21cu: goto label_34c21c;
        case 0x34c220u: goto label_34c220;
        case 0x34c224u: goto label_34c224;
        case 0x34c228u: goto label_34c228;
        case 0x34c22cu: goto label_34c22c;
        case 0x34c230u: goto label_34c230;
        case 0x34c234u: goto label_34c234;
        case 0x34c238u: goto label_34c238;
        case 0x34c23cu: goto label_34c23c;
        case 0x34c240u: goto label_34c240;
        case 0x34c244u: goto label_34c244;
        case 0x34c248u: goto label_34c248;
        case 0x34c24cu: goto label_34c24c;
        case 0x34c250u: goto label_34c250;
        case 0x34c254u: goto label_34c254;
        case 0x34c258u: goto label_34c258;
        case 0x34c25cu: goto label_34c25c;
        case 0x34c260u: goto label_34c260;
        case 0x34c264u: goto label_34c264;
        case 0x34c268u: goto label_34c268;
        case 0x34c26cu: goto label_34c26c;
        case 0x34c270u: goto label_34c270;
        case 0x34c274u: goto label_34c274;
        case 0x34c278u: goto label_34c278;
        case 0x34c27cu: goto label_34c27c;
        case 0x34c280u: goto label_34c280;
        case 0x34c284u: goto label_34c284;
        case 0x34c288u: goto label_34c288;
        case 0x34c28cu: goto label_34c28c;
        case 0x34c290u: goto label_34c290;
        case 0x34c294u: goto label_34c294;
        case 0x34c298u: goto label_34c298;
        case 0x34c29cu: goto label_34c29c;
        case 0x34c2a0u: goto label_34c2a0;
        case 0x34c2a4u: goto label_34c2a4;
        case 0x34c2a8u: goto label_34c2a8;
        case 0x34c2acu: goto label_34c2ac;
        case 0x34c2b0u: goto label_34c2b0;
        default: break;
    }

    ctx->pc = 0x34c1ccu;

label_34c1cc:
    // 0x34c1cc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34c1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34c1d0:
    // 0x34c1d0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_34c1d4:
    // 0x34c1d4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_34c1d8:
    // 0x34c1d8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c1d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c1dc:
    // 0x34c1dc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34c1e0:
    // 0x34c1e0: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34c1e4:
    // 0x34c1e4: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x34c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_34c1e8:
    // 0x34c1e8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c1ec:
    // 0x34c1ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c1f0:
    // 0x34c1f0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34c1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34c1f4:
    // 0x34c1f4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34c1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34c1f8:
    // 0x34c1f8: 0xc0d3332  jal         func_34CCC8
label_34c1fc:
    if (ctx->pc == 0x34C1FCu) {
        ctx->pc = 0x34C200u;
        goto label_34c200;
    }
    ctx->pc = 0x34C1F8u;
    SET_GPR_U32(ctx, 31, 0x34C200u);
    ctx->pc = 0x34CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCC8u, 0x34C1F8u, 0x34C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C200u;
label_34c200:
    // 0x34c200: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34c200u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34c204:
    // 0x34c204: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x34c204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34c208:
    // 0x34c208: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34c20c:
    if (ctx->pc == 0x34C20Cu) {
        ctx->pc = 0x34C210u;
        goto label_34c210;
    }
    ctx->pc = 0x34C208u;
    {
        const bool branch_taken_0x34c208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c208) {
            ctx->pc = 0x34C220u;
            goto label_34c220;
        }
    }
    ctx->pc = 0x34C210u;
label_34c210:
    // 0x34c210: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34c210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34c214:
    // 0x34c214: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_34c218:
    // 0x34c218: 0x10000020  b           . + 4 + (0x20 << 2)
label_34c21c:
    if (ctx->pc == 0x34C21Cu) {
        ctx->pc = 0x34C220u;
        goto label_34c220;
    }
    ctx->pc = 0x34C218u;
    {
        const bool branch_taken_0x34c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c218) {
            ctx->pc = 0x34C29Cu;
            goto label_34c29c;
        }
    }
    ctx->pc = 0x34C220u;
label_34c220:
    // 0x34c220: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34c224:
    // 0x34c224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34c224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c228:
    // 0x34c228: 0xc0d407a  jal         func_3501E8
label_34c22c:
    if (ctx->pc == 0x34C22Cu) {
        ctx->pc = 0x34C230u;
        goto label_34c230;
    }
    ctx->pc = 0x34C228u;
    SET_GPR_U32(ctx, 31, 0x34C230u);
    ctx->pc = 0x3501E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501E8u, 0x34C228u, 0x34C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C230u;
label_34c230:
    // 0x34c230: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34c230u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
label_34c234:
    // 0x34c234: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x34c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34c238:
    // 0x34c238: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_34c23c:
    if (ctx->pc == 0x34C23Cu) {
        ctx->pc = 0x34C240u;
        goto label_34c240;
    }
    ctx->pc = 0x34C238u;
    {
        const bool branch_taken_0x34c238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c238) {
            ctx->pc = 0x34C25Cu;
            goto label_34c25c;
        }
    }
    ctx->pc = 0x34C240u;
label_34c240:
    // 0x34c240: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x34c240u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_34c244:
    // 0x34c244: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34c248:
    // 0x34c248: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34c248u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34c24c:
    // 0x34c24c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c250:
    // 0x34c250: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34c250u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34c254:
    // 0x34c254: 0x10000003  b           . + 4 + (0x3 << 2)
label_34c258:
    if (ctx->pc == 0x34C258u) {
        ctx->pc = 0x34C25Cu;
        goto label_34c25c;
    }
    ctx->pc = 0x34C254u;
    {
        const bool branch_taken_0x34c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c254) {
            ctx->pc = 0x34C264u;
            goto label_34c264;
        }
    }
    ctx->pc = 0x34C25Cu;
label_34c25c:
    // 0x34c25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34c260:
    // 0x34c260: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c260u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34c264:
    // 0x34c264: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34c268:
    // 0x34c268: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x34c268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34c26c:
    // 0x34c26c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x34c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_34c270:
    // 0x34c270: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c274:
    // 0x34c274: 0x2442ba50  addiu       $v0, $v0, -0x45B0
    ctx->pc = 0x34c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949456));
label_34c278:
    // 0x34c278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c27c:
    // 0x34c27c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c280:
    // 0x34c280: 0x8fc40034  lw          $a0, 0x34($fp)
    ctx->pc = 0x34c280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34c284:
    // 0x34c284: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34c284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34c288:
    // 0x34c288: 0x8fc60030  lw          $a2, 0x30($fp)
    ctx->pc = 0x34c288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34c28c:
    // 0x34c28c: 0x40f809  jalr        $v0
label_34c290:
    if (ctx->pc == 0x34C290u) {
        ctx->pc = 0x34C294u;
        goto label_34c294;
    }
    ctx->pc = 0x34C28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C294u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C28Cu, 0x34C294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C294u;
label_34c294:
    // 0x34c294: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34c294u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34c298:
    // 0x34c298: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c29c:
    // 0x34c29c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c29cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c2a0:
    // 0x34c2a0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34c2a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34c2a4:
    // 0x34c2a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34c2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_34c2a8:
    // 0x34c2a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34c2ac:
    // 0x34c2ac: 0x3e00008  jr          $ra
label_34c2b0:
    if (ctx->pc == 0x34C2B0u) {
        ctx->pc = 0x34C2B4u;
        goto label_fallthrough_0x34c2ac;
    }
    ctx->pc = 0x34C2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c2ac:
    ctx->pc = 0x34C2B4u;
}
