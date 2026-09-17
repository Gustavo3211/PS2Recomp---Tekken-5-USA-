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

// Function: sub_0034F134
// Address: 0x34f134 - 0x34f274
void sub_0034F134_0x34f134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F134_0x34f134");
#endif

    switch (ctx->pc) {
        case 0x34f134u: goto label_34f134;
        case 0x34f138u: goto label_34f138;
        case 0x34f13cu: goto label_34f13c;
        case 0x34f140u: goto label_34f140;
        case 0x34f144u: goto label_34f144;
        case 0x34f148u: goto label_34f148;
        case 0x34f14cu: goto label_34f14c;
        case 0x34f150u: goto label_34f150;
        case 0x34f154u: goto label_34f154;
        case 0x34f158u: goto label_34f158;
        case 0x34f15cu: goto label_34f15c;
        case 0x34f160u: goto label_34f160;
        case 0x34f164u: goto label_34f164;
        case 0x34f168u: goto label_34f168;
        case 0x34f16cu: goto label_34f16c;
        case 0x34f170u: goto label_34f170;
        case 0x34f174u: goto label_34f174;
        case 0x34f178u: goto label_34f178;
        case 0x34f17cu: goto label_34f17c;
        case 0x34f180u: goto label_34f180;
        case 0x34f184u: goto label_34f184;
        case 0x34f188u: goto label_34f188;
        case 0x34f18cu: goto label_34f18c;
        case 0x34f190u: goto label_34f190;
        case 0x34f194u: goto label_34f194;
        case 0x34f198u: goto label_34f198;
        case 0x34f19cu: goto label_34f19c;
        case 0x34f1a0u: goto label_34f1a0;
        case 0x34f1a4u: goto label_34f1a4;
        case 0x34f1a8u: goto label_34f1a8;
        case 0x34f1acu: goto label_34f1ac;
        case 0x34f1b0u: goto label_34f1b0;
        case 0x34f1b4u: goto label_34f1b4;
        case 0x34f1b8u: goto label_34f1b8;
        case 0x34f1bcu: goto label_34f1bc;
        case 0x34f1c0u: goto label_34f1c0;
        case 0x34f1c4u: goto label_34f1c4;
        case 0x34f1c8u: goto label_34f1c8;
        case 0x34f1ccu: goto label_34f1cc;
        case 0x34f1d0u: goto label_34f1d0;
        case 0x34f1d4u: goto label_34f1d4;
        case 0x34f1d8u: goto label_34f1d8;
        case 0x34f1dcu: goto label_34f1dc;
        case 0x34f1e0u: goto label_34f1e0;
        case 0x34f1e4u: goto label_34f1e4;
        case 0x34f1e8u: goto label_34f1e8;
        case 0x34f1ecu: goto label_34f1ec;
        case 0x34f1f0u: goto label_34f1f0;
        case 0x34f1f4u: goto label_34f1f4;
        case 0x34f1f8u: goto label_34f1f8;
        case 0x34f1fcu: goto label_34f1fc;
        case 0x34f200u: goto label_34f200;
        case 0x34f204u: goto label_34f204;
        case 0x34f208u: goto label_34f208;
        case 0x34f20cu: goto label_34f20c;
        case 0x34f210u: goto label_34f210;
        case 0x34f214u: goto label_34f214;
        case 0x34f218u: goto label_34f218;
        case 0x34f21cu: goto label_34f21c;
        case 0x34f220u: goto label_34f220;
        case 0x34f224u: goto label_34f224;
        case 0x34f228u: goto label_34f228;
        case 0x34f22cu: goto label_34f22c;
        case 0x34f230u: goto label_34f230;
        case 0x34f234u: goto label_34f234;
        case 0x34f238u: goto label_34f238;
        case 0x34f23cu: goto label_34f23c;
        case 0x34f240u: goto label_34f240;
        case 0x34f244u: goto label_34f244;
        case 0x34f248u: goto label_34f248;
        case 0x34f24cu: goto label_34f24c;
        case 0x34f250u: goto label_34f250;
        case 0x34f254u: goto label_34f254;
        case 0x34f258u: goto label_34f258;
        case 0x34f25cu: goto label_34f25c;
        case 0x34f260u: goto label_34f260;
        case 0x34f264u: goto label_34f264;
        case 0x34f268u: goto label_34f268;
        case 0x34f26cu: goto label_34f26c;
        case 0x34f270u: goto label_34f270;
        default: break;
    }

    ctx->pc = 0x34f134u;

label_34f134:
    // 0x34f134: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34f134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_34f138:
    // 0x34f138: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_34f13c:
    // 0x34f13c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34f13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_34f140:
    // 0x34f140: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f140u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f144:
    // 0x34f144: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f144u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f148:
    // 0x34f148: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f148u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f14c:
    // 0x34f14c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f150:
    // 0x34f150: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34f150u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_34f154:
    // 0x34f154: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34f154u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
label_34f158:
    // 0x34f158: 0xafc90014  sw          $t1, 0x14($fp)
    ctx->pc = 0x34f158u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 9));
label_34f15c:
    // 0x34f15c: 0xafca0018  sw          $t2, 0x18($fp)
    ctx->pc = 0x34f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 10));
label_34f160:
    // 0x34f160: 0xc0d3f53  jal         func_34FD4C
label_34f164:
    if (ctx->pc == 0x34F164u) {
        ctx->pc = 0x34F168u;
        goto label_34f168;
    }
    ctx->pc = 0x34F160u;
    SET_GPR_U32(ctx, 31, 0x34F168u);
    ctx->pc = 0x34FD4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD4Cu, 0x34F160u, 0x34F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F168u;
label_34f168:
    // 0x34f168: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34f168u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_34f16c:
    // 0x34f16c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_34f170:
    // 0x34f170: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_34f174:
    if (ctx->pc == 0x34F174u) {
        ctx->pc = 0x34F178u;
        goto label_34f178;
    }
    ctx->pc = 0x34F170u;
    {
        const bool branch_taken_0x34f170 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34f170) {
            ctx->pc = 0x34F184u;
            goto label_34f184;
        }
    }
    ctx->pc = 0x34F178u;
label_34f178:
    // 0x34f178: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_34f17c:
    // 0x34f17c: 0x10000037  b           . + 4 + (0x37 << 2)
label_34f180:
    if (ctx->pc == 0x34F180u) {
        ctx->pc = 0x34F184u;
        goto label_34f184;
    }
    ctx->pc = 0x34F17Cu;
    {
        const bool branch_taken_0x34f17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f17c) {
            ctx->pc = 0x34F25Cu;
            goto label_34f25c;
        }
    }
    ctx->pc = 0x34F184u;
label_34f184:
    // 0x34f184: 0x8fc40020  lw          $a0, 0x20($fp)
    ctx->pc = 0x34f184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_34f188:
    // 0x34f188: 0xc0d3fc6  jal         func_34FF18
label_34f18c:
    if (ctx->pc == 0x34F18Cu) {
        ctx->pc = 0x34F190u;
        goto label_34f190;
    }
    ctx->pc = 0x34F188u;
    SET_GPR_U32(ctx, 31, 0x34F190u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F188u, 0x34F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F190u;
label_34f190:
    // 0x34f190: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34f190u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_34f194:
    // 0x34f194: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f198:
    // 0x34f198: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f19c:
    if (ctx->pc == 0x34F19Cu) {
        ctx->pc = 0x34F1A0u;
        goto label_34f1a0;
    }
    ctx->pc = 0x34F198u;
    {
        const bool branch_taken_0x34f198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f198) {
            ctx->pc = 0x34F1B0u;
            goto label_34f1b0;
        }
    }
    ctx->pc = 0x34F1A0u;
label_34f1a0:
    // 0x34f1a0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f1a4:
    // 0x34f1a4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f1a8:
    // 0x34f1a8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_34f1ac:
    if (ctx->pc == 0x34F1ACu) {
        ctx->pc = 0x34F1B0u;
        goto label_34f1b0;
    }
    ctx->pc = 0x34F1A8u;
    {
        const bool branch_taken_0x34f1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f1a8) {
            ctx->pc = 0x34F25Cu;
            goto label_34f25c;
        }
    }
    ctx->pc = 0x34F1B0u;
label_34f1b0:
    // 0x34f1b0: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x34f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f1b4:
    // 0x34f1b4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f1b8:
    // 0x34f1b8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_34f1bc:
    // 0x34f1bc: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x34f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f1c0:
    // 0x34f1c0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f1c4:
    // 0x34f1c4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_34f1c8:
    // 0x34f1c8: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x34f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f1cc:
    // 0x34f1cc: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f1d0:
    // 0x34f1d0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x34f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_34f1d4:
    // 0x34f1d4: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x34f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f1d8:
    // 0x34f1d8: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f1dc:
    // 0x34f1dc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x34f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_34f1e0:
    // 0x34f1e0: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x34f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f1e4:
    // 0x34f1e4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f1e8:
    // 0x34f1e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34f1ec:
    // 0x34f1ec: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x34f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f1f0:
    // 0x34f1f0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f1f4:
    // 0x34f1f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f1f8:
    // 0x34f1f8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_34f1fc:
    // 0x34f1fc: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f200:
    // 0x34f200: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34f200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34f204:
    // 0x34f204: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f208:
    // 0x34f208: 0x8fc40024  lw          $a0, 0x24($fp)
    ctx->pc = 0x34f208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f20c:
    // 0x34f20c: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f210:
    // 0x34f210: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34f210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34f214:
    // 0x34f214: 0x8fc70010  lw          $a3, 0x10($fp)
    ctx->pc = 0x34f214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f218:
    // 0x34f218: 0x8fc80014  lw          $t0, 0x14($fp)
    ctx->pc = 0x34f218u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f21c:
    // 0x34f21c: 0x8fc90018  lw          $t1, 0x18($fp)
    ctx->pc = 0x34f21cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34f220:
    // 0x34f220: 0x40f809  jalr        $v0
label_34f224:
    if (ctx->pc == 0x34F224u) {
        ctx->pc = 0x34F228u;
        goto label_34f228;
    }
    ctx->pc = 0x34F220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F220u, 0x34F228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F228u;
label_34f228:
    // 0x34f228: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34f228u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_34f22c:
    // 0x34f22c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_34f230:
    // 0x34f230: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_34f234:
    if (ctx->pc == 0x34F234u) {
        ctx->pc = 0x34F238u;
        goto label_34f238;
    }
    ctx->pc = 0x34F230u;
    {
        const bool branch_taken_0x34f230 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34f230) {
            ctx->pc = 0x34F254u;
            goto label_34f254;
        }
    }
    ctx->pc = 0x34F238u;
label_34f238:
    // 0x34f238: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f23c:
    // 0x34f23c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f240:
    // 0x34f240: 0xc0d3f96  jal         func_34FE58
label_34f244:
    if (ctx->pc == 0x34F244u) {
        ctx->pc = 0x34F248u;
        goto label_34f248;
    }
    ctx->pc = 0x34F240u;
    SET_GPR_U32(ctx, 31, 0x34F248u);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34F240u, 0x34F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F248u;
label_34f248:
    // 0x34f248: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34f248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_34f24c:
    // 0x34f24c: 0x10000003  b           . + 4 + (0x3 << 2)
label_34f250:
    if (ctx->pc == 0x34F250u) {
        ctx->pc = 0x34F254u;
        goto label_34f254;
    }
    ctx->pc = 0x34F24Cu;
    {
        const bool branch_taken_0x34f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f24c) {
            ctx->pc = 0x34F25Cu;
            goto label_34f25c;
        }
    }
    ctx->pc = 0x34F254u;
label_34f254:
    // 0x34f254: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_34f258:
    // 0x34f258: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f25c:
    // 0x34f25c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f25cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34f260:
    // 0x34f260: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34f260u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34f264:
    // 0x34f264: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34f264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34f268:
    // 0x34f268: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34f268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_34f26c:
    // 0x34f26c: 0x3e00008  jr          $ra
label_34f270:
    if (ctx->pc == 0x34F270u) {
        ctx->pc = 0x34F274u;
        goto label_fallthrough_0x34f26c;
    }
    ctx->pc = 0x34F26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f26c:
    ctx->pc = 0x34F274u;
}
