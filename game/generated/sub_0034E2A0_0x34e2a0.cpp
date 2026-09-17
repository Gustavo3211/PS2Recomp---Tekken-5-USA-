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

// Function: sub_0034E2A0
// Address: 0x34e2a0 - 0x34e424
void sub_0034E2A0_0x34e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E2A0_0x34e2a0");
#endif

    switch (ctx->pc) {
        case 0x34e2e4u: goto label_34e2e4;
        case 0x34e2f8u: goto label_34e2f8;
        case 0x34e358u: goto label_34e358;
        case 0x34e380u: goto label_34e380;
        case 0x34e3c8u: goto label_34e3c8;
        case 0x34e3dcu: goto label_34e3dc;
        default: break;
    }

    ctx->pc = 0x34e2a0u;

    // 0x34e2a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e2a4: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34e2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34e2a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34e2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34e2ac: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34e2acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2b0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34e2b4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34e2b8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34e2bc: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34e2c0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e2c4: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34e2c8: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34e2cc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34e2d0: 0x24420117  addiu       $v0, $v0, 0x117
    ctx->pc = 0x34e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 279));
    // 0x34e2d4: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34e2d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34e2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2dc: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x34E2DCu;
    SET_GPR_U32(ctx, 31, 0x34E2E4u);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x34E2DCu, 0x34E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E2E4u;
label_34e2e4:
    // 0x34e2e4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x34e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34e2e8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e2ec: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e2f0: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34E2F0u;
    SET_GPR_U32(ctx, 31, 0x34E2F8u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34E2F0u, 0x34E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E2F8u;
label_34e2f8:
    // 0x34e2f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34e2fc: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34e2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34e300: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x34e300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e304: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e308: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34e30c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x34e310: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e310u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e314: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e318: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x34e318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x34e31c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E31Cu;
    {
        const bool branch_taken_0x34e31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e31c) {
            ctx->pc = 0x34E334u;
            goto label_34e334;
        }
    }
    ctx->pc = 0x34E324u;
    // 0x34e324: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e328: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34e328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x34e32c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x34E32Cu;
    {
        const bool branch_taken_0x34e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e32c) {
            ctx->pc = 0x34E40Cu;
            goto label_34e40c;
        }
    }
    ctx->pc = 0x34E334u;
label_34e334:
    // 0x34e334: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e338: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34e338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34e33c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34e340: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34e344: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e344u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e348: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34e34c: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34e350: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E350u;
    SET_GPR_U32(ctx, 31, 0x34E358u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E350u, 0x34E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E358u;
label_34e358:
    // 0x34e358: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e35c: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34e360: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34e360u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34e364: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34e368: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x34e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x34e36c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e370: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34e370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e374: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34e374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e378: 0xc04a125  jal         func_128494
    ctx->pc = 0x34E378u;
    SET_GPR_U32(ctx, 31, 0x34E380u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34E378u, 0x34E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E380u;
label_34e380:
    // 0x34e380: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34e384: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34e388: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34e388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34e38c: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34e390: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e394: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34e394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34e398: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34e39c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34e3a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34e3a4: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34e3a8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e3ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34e3b0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x34e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34e3b4: 0x8fc5001c  lw          $a1, 0x1C($fp)
    ctx->pc = 0x34e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34e3b8: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34e3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e3bc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34e3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e3c0: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34E3C0u;
    SET_GPR_U32(ctx, 31, 0x34E3C8u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34E3C0u, 0x34E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E3C8u;
label_34e3c8:
    // 0x34e3c8: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34e3cc: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34e3d0: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34e3d4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34E3D4u;
    SET_GPR_U32(ctx, 31, 0x34E3DCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34E3D4u, 0x34E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E3DCu;
label_34e3dc:
    // 0x34e3dc: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e3e0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E3E0u;
    {
        const bool branch_taken_0x34e3e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34e3e0) {
            ctx->pc = 0x34E3F8u;
            goto label_34e3f8;
        }
    }
    ctx->pc = 0x34E3E8u;
    // 0x34e3e8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e3ec: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34e3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34e3f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34E3F0u;
    {
        const bool branch_taken_0x34e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e3f0) {
            ctx->pc = 0x34E40Cu;
            goto label_34e40c;
        }
    }
    ctx->pc = 0x34E3F8u;
label_34e3f8:
    // 0x34e3f8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e3fc: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34e400: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34e400u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34e404: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34e408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34e40c:
    // 0x34e40c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34e40cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e410: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34e410u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e414: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34e414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e418: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34e418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34e41c: 0x3e00008  jr          $ra
    ctx->pc = 0x34E41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E424u;
}
