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

// Function: sub_003573B8
// Address: 0x3573b8 - 0x357688
void sub_003573B8_0x3573b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003573B8_0x3573b8");
#endif

    switch (ctx->pc) {
        case 0x3573e0u: goto label_3573e0;
        case 0x3573f4u: goto label_3573f4;
        case 0x357408u: goto label_357408;
        case 0x357458u: goto label_357458;
        case 0x357544u: goto label_357544;
        case 0x357550u: goto label_357550;
        case 0x357564u: goto label_357564;
        case 0x3575b4u: goto label_3575b4;
        case 0x35766cu: goto label_35766c;
        default: break;
    }

    ctx->pc = 0x3573b8u;

    // 0x3573b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3573b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3573bc: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x3573bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x3573c0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3573c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3573c4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3573c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3573c8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3573c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3573cc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3573ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3573d0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3573d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3573d4: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3573d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3573d8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3573D8u;
    SET_GPR_U32(ctx, 31, 0x3573E0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3573D8u, 0x3573E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573E0u;
label_3573e0:
    // 0x3573e0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3573e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3573e4: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3573e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3573e8: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3573e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3573ec: 0xc043642  jal         func_10D908
    ctx->pc = 0x3573ECu;
    SET_GPR_U32(ctx, 31, 0x3573F4u);
    ctx->pc = 0x10D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D908u, 0x3573ECu, 0x3573F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573F4u;
label_3573f4:
    // 0x3573f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3573F4u;
    {
        const bool branch_taken_0x3573f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3573f4) {
            ctx->pc = 0x357404u;
            goto label_357404;
        }
    }
    ctx->pc = 0x3573FCu;
    // 0x3573fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3573FCu;
    {
        const bool branch_taken_0x3573fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3573fc) {
            ctx->pc = 0x35743Cu;
            goto label_35743c;
        }
    }
    ctx->pc = 0x357404u;
label_357404:
    // 0x357404: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x357404u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_357408:
    // 0x357408: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35740c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x35740cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x357410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x357410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x357414: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x357414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x357418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357418u;
    {
        const bool branch_taken_0x357418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357418) {
            ctx->pc = 0x357428u;
            goto label_357428;
        }
    }
    ctx->pc = 0x357420u;
    // 0x357420: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x357420u;
    {
        const bool branch_taken_0x357420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357420) {
            ctx->pc = 0x3573E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3573e0;
        }
    }
    ctx->pc = 0x357428u;
label_357428:
    // 0x357428: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35742c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357430: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x357430u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x357434: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x357434u;
    {
        const bool branch_taken_0x357434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357434) {
            ctx->pc = 0x357408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357408;
        }
    }
    ctx->pc = 0x35743Cu;
label_35743c:
    // 0x35743c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x35743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x357440: 0x27c30014  addiu       $v1, $fp, 0x14
    ctx->pc = 0x357440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x357444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x357444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35744c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x35744cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357450: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x357450u;
    SET_GPR_U32(ctx, 31, 0x357458u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x357450u, 0x357458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357458u;
label_357458:
    // 0x357458: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x357458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35745c: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x35745cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x357460: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x357460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x357464: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x357464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x357468: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x357468u;
    {
        const bool branch_taken_0x357468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357468) {
            ctx->pc = 0x3574E8u;
            goto label_3574e8;
        }
    }
    ctx->pc = 0x357470u;
    // 0x357470: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x357470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x357474: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x357474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x357478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x357478u;
    {
        const bool branch_taken_0x357478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357478) {
            ctx->pc = 0x357498u;
            goto label_357498;
        }
    }
    ctx->pc = 0x357480u;
    // 0x357480: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x357480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x357484: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x357484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x357488: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x357488u;
    {
        const bool branch_taken_0x357488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357488) {
            ctx->pc = 0x3574FCu;
            goto label_3574fc;
        }
    }
    ctx->pc = 0x357490u;
    // 0x357490: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x357490u;
    {
        const bool branch_taken_0x357490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357490) {
            ctx->pc = 0x357510u;
            goto label_357510;
        }
    }
    ctx->pc = 0x357498u;
label_357498:
    // 0x357498: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x357498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35749c: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x35749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3574a0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3574A0u;
    {
        const bool branch_taken_0x3574a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3574a0) {
            ctx->pc = 0x3574D4u;
            goto label_3574d4;
        }
    }
    ctx->pc = 0x3574A8u;
    // 0x3574a8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3574a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3574ac: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x3574acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3574b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3574B0u;
    {
        const bool branch_taken_0x3574b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3574b0) {
            ctx->pc = 0x3574C0u;
            goto label_3574c0;
        }
    }
    ctx->pc = 0x3574B8u;
    // 0x3574b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3574B8u;
    {
        const bool branch_taken_0x3574b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574b8) {
            ctx->pc = 0x357510u;
            goto label_357510;
        }
    }
    ctx->pc = 0x3574C0u;
label_3574c0:
    // 0x3574c0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3574c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3574c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3574c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3574c8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3574c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3574cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3574CCu;
    {
        const bool branch_taken_0x3574cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574cc) {
            ctx->pc = 0x357538u;
            goto label_357538;
        }
    }
    ctx->pc = 0x3574D4u;
label_3574d4:
    // 0x3574d4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3574d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3574d8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3574d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3574dc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3574dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3574e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3574E0u;
    {
        const bool branch_taken_0x3574e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574e0) {
            ctx->pc = 0x357538u;
            goto label_357538;
        }
    }
    ctx->pc = 0x3574E8u;
label_3574e8:
    // 0x3574e8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3574e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3574ec: 0x3442fff6  ori         $v0, $v0, 0xFFF6
    ctx->pc = 0x3574ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65526);
    // 0x3574f0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3574f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3574f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3574F4u;
    {
        const bool branch_taken_0x3574f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574f4) {
            ctx->pc = 0x357538u;
            goto label_357538;
        }
    }
    ctx->pc = 0x3574FCu;
label_3574fc:
    // 0x3574fc: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3574fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357500: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x357500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x357504: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357504u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357508: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x357508u;
    {
        const bool branch_taken_0x357508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357508) {
            ctx->pc = 0x357538u;
            goto label_357538;
        }
    }
    ctx->pc = 0x357510u;
label_357510:
    // 0x357510: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x357510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x357514: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357514u;
    {
        const bool branch_taken_0x357514 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x357514) {
            ctx->pc = 0x35752Cu;
            goto label_35752c;
        }
    }
    ctx->pc = 0x35751Cu;
    // 0x35751c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x35751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x357520: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357520u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357524u;
    {
        const bool branch_taken_0x357524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357524) {
            ctx->pc = 0x357538u;
            goto label_357538;
        }
    }
    ctx->pc = 0x35752Cu;
label_35752c:
    // 0x35752c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x35752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357530: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x357530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x357534: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357534u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_357538:
    // 0x357538: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x357538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35753c: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x35753Cu;
    {
        const bool branch_taken_0x35753c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35753c) {
            ctx->pc = 0x357660u;
            goto label_357660;
        }
    }
    ctx->pc = 0x357544u;
label_357544:
    // 0x357544: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x357544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x357548: 0xc0438a8  jal         func_10E2A0
    ctx->pc = 0x357548u;
    SET_GPR_U32(ctx, 31, 0x357550u);
    ctx->pc = 0x10E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E2A0u, 0x357548u, 0x357550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357550u;
label_357550:
    // 0x357550: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357550u;
    {
        const bool branch_taken_0x357550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357550) {
            ctx->pc = 0x357560u;
            goto label_357560;
        }
    }
    ctx->pc = 0x357558u;
    // 0x357558: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x357558u;
    {
        const bool branch_taken_0x357558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357558) {
            ctx->pc = 0x357598u;
            goto label_357598;
        }
    }
    ctx->pc = 0x357560u;
label_357560:
    // 0x357560: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x357560u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_357564:
    // 0x357564: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x357568: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x357568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x35756c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35756cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x357570: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x357570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x357574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357574u;
    {
        const bool branch_taken_0x357574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357574) {
            ctx->pc = 0x357584u;
            goto label_357584;
        }
    }
    ctx->pc = 0x35757Cu;
    // 0x35757c: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x35757Cu;
    {
        const bool branch_taken_0x35757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35757c) {
            ctx->pc = 0x357544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357544;
        }
    }
    ctx->pc = 0x357584u;
label_357584:
    // 0x357584: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x357588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x357588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35758c: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x35758cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x357590: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x357590u;
    {
        const bool branch_taken_0x357590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357590) {
            ctx->pc = 0x357564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357564;
        }
    }
    ctx->pc = 0x357598u;
label_357598:
    // 0x357598: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x357598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x35759c: 0x27c30014  addiu       $v1, $fp, 0x14
    ctx->pc = 0x35759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x3575a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3575a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3575a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575a8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3575a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575ac: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x3575ACu;
    SET_GPR_U32(ctx, 31, 0x3575B4u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x3575ACu, 0x3575B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575B4u;
label_3575b4:
    // 0x3575b4: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3575b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3575b8: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x3575b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x3575bc: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3575bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3575c0: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3575c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3575c4: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3575C4u;
    {
        const bool branch_taken_0x3575c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3575c4) {
            ctx->pc = 0x35762Cu;
            goto label_35762c;
        }
    }
    ctx->pc = 0x3575CCu;
    // 0x3575cc: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3575ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3575d0: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x3575d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x3575d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3575D4u;
    {
        const bool branch_taken_0x3575d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575d4) {
            ctx->pc = 0x3575F4u;
            goto label_3575f4;
        }
    }
    ctx->pc = 0x3575DCu;
    // 0x3575dc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3575dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3575e0: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3575e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3575e4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3575E4u;
    {
        const bool branch_taken_0x3575e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3575e4) {
            ctx->pc = 0x357640u;
            goto label_357640;
        }
    }
    ctx->pc = 0x3575ECu;
    // 0x3575ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3575ECu;
    {
        const bool branch_taken_0x3575ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575ec) {
            ctx->pc = 0x357654u;
            goto label_357654;
        }
    }
    ctx->pc = 0x3575F4u;
label_3575f4:
    // 0x3575f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3575f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3575f8: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3575f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3575fc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3575FCu;
    {
        const bool branch_taken_0x3575fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3575fc) {
            ctx->pc = 0x357618u;
            goto label_357618;
        }
    }
    ctx->pc = 0x357604u;
    // 0x357604: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x357604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x357608: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x357608u;
    {
        const bool branch_taken_0x357608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357608) {
            ctx->pc = 0x357660u;
            goto label_357660;
        }
    }
    ctx->pc = 0x357610u;
    // 0x357610: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x357610u;
    {
        const bool branch_taken_0x357610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357610) {
            ctx->pc = 0x357654u;
            goto label_357654;
        }
    }
    ctx->pc = 0x357618u;
label_357618:
    // 0x357618: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x35761c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35761cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357620: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357620u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357624: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x357624u;
    {
        const bool branch_taken_0x357624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357624) {
            ctx->pc = 0x357660u;
            goto label_357660;
        }
    }
    ctx->pc = 0x35762Cu;
label_35762c:
    // 0x35762c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x35762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357630: 0x3442fff6  ori         $v0, $v0, 0xFFF6
    ctx->pc = 0x357630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65526);
    // 0x357634: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357634u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357638: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x357638u;
    {
        const bool branch_taken_0x357638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357638) {
            ctx->pc = 0x357660u;
            goto label_357660;
        }
    }
    ctx->pc = 0x357640u;
label_357640:
    // 0x357640: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357644: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x357644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x357648: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357648u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x35764c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35764Cu;
    {
        const bool branch_taken_0x35764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35764c) {
            ctx->pc = 0x357660u;
            goto label_357660;
        }
    }
    ctx->pc = 0x357654u;
label_357654:
    // 0x357654: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357658: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x357658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x35765c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35765cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_357660:
    // 0x357660: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x357660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x357664: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x357664u;
    SET_GPR_U32(ctx, 31, 0x35766Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x357664u, 0x35766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35766Cu;
label_35766c:
    // 0x35766c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x357670: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x357670u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357674: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x357674u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357678: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x357678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35767c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35767cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x357680: 0x3e00008  jr          $ra
    ctx->pc = 0x357680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357688u;
}
