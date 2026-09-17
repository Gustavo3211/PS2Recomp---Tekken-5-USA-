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

// Function: sub_00357210
// Address: 0x357210 - 0x3573b8
void sub_00357210_0x357210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357210_0x357210");
#endif

    switch (ctx->pc) {
        case 0x357238u: goto label_357238;
        case 0x35724cu: goto label_35724c;
        case 0x357260u: goto label_357260;
        case 0x3572b0u: goto label_3572b0;
        case 0x35739cu: goto label_35739c;
        default: break;
    }

    ctx->pc = 0x357210u;

    // 0x357210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357214: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x357214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x357218: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x357218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35721c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35721cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357220: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x357220u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x357224: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x357224u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x357228: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x357228u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x35722c: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x35722cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x357230: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x357230u;
    SET_GPR_U32(ctx, 31, 0x357238u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x357230u, 0x357238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357238u;
label_357238:
    // 0x357238: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x357238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35723c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x35723cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x357240: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x357240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x357244: 0xc0435fc  jal         func_10D7F0
    ctx->pc = 0x357244u;
    SET_GPR_U32(ctx, 31, 0x35724Cu);
    ctx->pc = 0x10D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D7F0u, 0x357244u, 0x35724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35724Cu;
label_35724c:
    // 0x35724c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35724Cu;
    {
        const bool branch_taken_0x35724c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35724c) {
            ctx->pc = 0x35725Cu;
            goto label_35725c;
        }
    }
    ctx->pc = 0x357254u;
    // 0x357254: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x357254u;
    {
        const bool branch_taken_0x357254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357254) {
            ctx->pc = 0x357294u;
            goto label_357294;
        }
    }
    ctx->pc = 0x35725Cu;
label_35725c:
    // 0x35725c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x35725cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_357260:
    // 0x357260: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x357264: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x357264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x357268: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x357268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35726c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x35726cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x357270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357270u;
    {
        const bool branch_taken_0x357270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357270) {
            ctx->pc = 0x357280u;
            goto label_357280;
        }
    }
    ctx->pc = 0x357278u;
    // 0x357278: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x357278u;
    {
        const bool branch_taken_0x357278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357278) {
            ctx->pc = 0x357238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357238;
        }
    }
    ctx->pc = 0x357280u;
label_357280:
    // 0x357280: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x357280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x357284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x357284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357288: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x357288u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x35728c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x35728Cu;
    {
        const bool branch_taken_0x35728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35728c) {
            ctx->pc = 0x357260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357260;
        }
    }
    ctx->pc = 0x357294u;
label_357294:
    // 0x357294: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x357294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x357298: 0x27c30014  addiu       $v1, $fp, 0x14
    ctx->pc = 0x357298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x35729c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3572a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572a4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3572a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572a8: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x3572A8u;
    SET_GPR_U32(ctx, 31, 0x3572B0u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x3572A8u, 0x3572B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572B0u;
label_3572b0:
    // 0x3572b0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3572b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3572b4: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x3572b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x3572b8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3572b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3572bc: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x3572bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3572c0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3572C0u;
    {
        const bool branch_taken_0x3572c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3572c0) {
            ctx->pc = 0x357340u;
            goto label_357340;
        }
    }
    ctx->pc = 0x3572C8u;
    // 0x3572c8: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x3572c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3572cc: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x3572ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x3572d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3572D0u;
    {
        const bool branch_taken_0x3572d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3572d0) {
            ctx->pc = 0x3572F0u;
            goto label_3572f0;
        }
    }
    ctx->pc = 0x3572D8u;
    // 0x3572d8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3572d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3572dc: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x3572dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3572e0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3572E0u;
    {
        const bool branch_taken_0x3572e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3572e0) {
            ctx->pc = 0x357354u;
            goto label_357354;
        }
    }
    ctx->pc = 0x3572E8u;
    // 0x3572e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3572E8u;
    {
        const bool branch_taken_0x3572e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3572e8) {
            ctx->pc = 0x357368u;
            goto label_357368;
        }
    }
    ctx->pc = 0x3572F0u;
label_3572f0:
    // 0x3572f0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3572f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3572f4: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x3572f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3572f8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3572F8u;
    {
        const bool branch_taken_0x3572f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3572f8) {
            ctx->pc = 0x35732Cu;
            goto label_35732c;
        }
    }
    ctx->pc = 0x357300u;
    // 0x357300: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x357300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x357304: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x357304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x357308: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357308u;
    {
        const bool branch_taken_0x357308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357308) {
            ctx->pc = 0x357318u;
            goto label_357318;
        }
    }
    ctx->pc = 0x357310u;
    // 0x357310: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x357310u;
    {
        const bool branch_taken_0x357310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357310) {
            ctx->pc = 0x357368u;
            goto label_357368;
        }
    }
    ctx->pc = 0x357318u;
label_357318:
    // 0x357318: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x35731c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357320: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357320u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357324: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x357324u;
    {
        const bool branch_taken_0x357324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357324) {
            ctx->pc = 0x357390u;
            goto label_357390;
        }
    }
    ctx->pc = 0x35732Cu;
label_35732c:
    // 0x35732c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x35732cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357330: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x357330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x357334: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357334u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357338: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x357338u;
    {
        const bool branch_taken_0x357338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357338) {
            ctx->pc = 0x357390u;
            goto label_357390;
        }
    }
    ctx->pc = 0x357340u;
label_357340:
    // 0x357340: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357344: 0x3442fff6  ori         $v0, $v0, 0xFFF6
    ctx->pc = 0x357344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65526);
    // 0x357348: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357348u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x35734c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35734Cu;
    {
        const bool branch_taken_0x35734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35734c) {
            ctx->pc = 0x357390u;
            goto label_357390;
        }
    }
    ctx->pc = 0x357354u;
label_357354:
    // 0x357354: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357358: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x357358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x35735c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35735cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357360: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x357360u;
    {
        const bool branch_taken_0x357360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357360) {
            ctx->pc = 0x357390u;
            goto label_357390;
        }
    }
    ctx->pc = 0x357368u;
label_357368:
    // 0x357368: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x357368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35736c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35736Cu;
    {
        const bool branch_taken_0x35736c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35736c) {
            ctx->pc = 0x357384u;
            goto label_357384;
        }
    }
    ctx->pc = 0x357374u;
    // 0x357374: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x357374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x357378: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357378u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x35737c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35737Cu;
    {
        const bool branch_taken_0x35737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35737c) {
            ctx->pc = 0x357390u;
            goto label_357390;
        }
    }
    ctx->pc = 0x357384u;
label_357384:
    // 0x357384: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357388: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x357388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x35738c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35738cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_357390:
    // 0x357390: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x357390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x357394: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x357394u;
    SET_GPR_U32(ctx, 31, 0x35739Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x357394u, 0x35739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35739Cu;
label_35739c:
    // 0x35739c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3573a0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3573a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3573a4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3573a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3573a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3573a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3573ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3573acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3573b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3573B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3573B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3573B8u;
}
