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

// Function: sub_004AB328
// Address: 0x4ab328 - 0x4ab660
void sub_004AB328_0x4ab328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB328_0x4ab328");
#endif

    switch (ctx->pc) {
        case 0x4ab34cu: goto label_4ab34c;
        case 0x4ab354u: goto label_4ab354;
        case 0x4ab420u: goto label_4ab420;
        case 0x4ab4b4u: goto label_4ab4b4;
        case 0x4ab598u: goto label_4ab598;
        case 0x4ab628u: goto label_4ab628;
        default: break;
    }

    ctx->pc = 0x4ab328u;

    // 0x4ab328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ab328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ab32c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ab32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ab330: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ab330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ab334: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4ab334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4ab338: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4ab338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4ab33c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4ab33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4ab340: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4ab340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4ab344: 0xc1232f6  jal         func_48CBD8
    ctx->pc = 0x4AB344u;
    SET_GPR_U32(ctx, 31, 0x4AB34Cu);
    ctx->pc = 0x4AB348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB344u;
    // 0x4ab348: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBD8u, 0x4AB344u, 0x4AB34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB34Cu;
label_4ab34c:
    // 0x4ab34c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AB34Cu;
    SET_GPR_U32(ctx, 31, 0x4AB354u);
    ctx->pc = 0x4AB350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB34Cu;
    // 0x4ab350: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AB34Cu, 0x4AB354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB354u;
label_4ab354:
    // 0x4ab354: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4ab354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab358: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ab358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab35c: 0x86830004  lh          $v1, 0x4($s4)
    ctx->pc = 0x4ab35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4ab360: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4ab360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab364: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ab368: 0x2672005e  addiu       $s2, $s3, 0x5E
    ctx->pc = 0x4ab368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 94));
    // 0x4ab36c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4ab36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4ab370: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x4ab370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ab374: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4ab374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4ab378: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4ab378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ab37c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4ab37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ab380: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4ab380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ab384: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ab384u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ab388: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AB388u;
    {
        const bool branch_taken_0x4ab388 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4AB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB388u;
        // 0x4ab38c: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab388) {
            ctx->pc = 0x4AB3A8u;
            goto label_4ab3a8;
        }
    }
    ctx->pc = 0x4AB390u;
    // 0x4ab390: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4ab390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab394: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4AB394u;
    {
        const bool branch_taken_0x4ab394 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB394u;
        // 0x4ab398: 0x97a70000  lhu         $a3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab394) {
            ctx->pc = 0x4AB424u;
            goto label_4ab424;
        }
    }
    ctx->pc = 0x4AB39Cu;
    // 0x4ab39c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x4ab39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4ab3a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AB3A0u;
    {
        const bool branch_taken_0x4ab3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB3A0u;
        // 0x4ab3a4: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab3a0) {
            ctx->pc = 0x4AB3B4u;
            goto label_4ab3b4;
        }
    }
    ctx->pc = 0x4AB3A8u;
label_4ab3a8:
    // 0x4ab3a8: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4ab3a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab3ac: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4AB3ACu;
    {
        const bool branch_taken_0x4ab3ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4AB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB3ACu;
        // 0x4ab3b0: 0x97a70000  lhu         $a3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab3ac) {
            ctx->pc = 0x4AB424u;
            goto label_4ab424;
        }
    }
    ctx->pc = 0x4AB3B4u;
label_4ab3b4:
    // 0x4ab3b4: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4ab3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab3b8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ab3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab3bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ab3bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ab3c0: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4ab3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab3c4: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4ab3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4ab3c8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ab3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ab3cc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ab3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ab3d0: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4ab3d0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4ab3d4: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4ab3d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab3d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ab3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab3dc: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4ab3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab3e0: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4ab3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab3e4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x4ab3e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x4ab3e8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4ab3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4ab3ec: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x4ab3ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4ab3f0: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4ab3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab3f4: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4ab3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab3f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ab3f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ab3fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ab3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ab400: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ab400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ab404: 0xa28024  and         $s0, $a1, $v0
    ctx->pc = 0x4ab404u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ab408: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4ab408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab40c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ab40cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ab410: 0xe32818  mult        $a1, $a3, $v1
    ctx->pc = 0x4ab410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ab414: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4ab414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4ab418: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AB418u;
    SET_GPR_U32(ctx, 31, 0x4AB420u);
    ctx->pc = 0x4AB41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB418u;
    // 0x4ab41c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AB418u, 0x4AB420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB420u;
label_4ab420:
    // 0x4ab420: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x4ab420u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_4ab424:
    // 0x4ab424: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x4ab424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ab428: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4ab428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab42c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ab42cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ab430: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ab430u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab434: 0x2445003f  addiu       $a1, $v0, 0x3F
    ctx->pc = 0x4ab434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4ab438: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4ab438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab43c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x4ab43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ab440: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ab440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ab444: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x4ab444u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4ab448: 0x2113024  and         $a2, $s0, $s1
    ctx->pc = 0x4ab448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
    // 0x4ab44c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x4ab44cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x4ab450: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ab450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ab454: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x4ab454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ab458: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4ab458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4ab45c: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x4ab45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ab460: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4ab460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ab464: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4ab464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ab468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ab46c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ab46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ab470: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x4ab470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ab474: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x4ab474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4ab478: 0xc38025  or          $s0, $a2, $v1
    ctx->pc = 0x4ab478u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4ab47c: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4ab47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab480: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4ab480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab484: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ab484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ab488: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4ab488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4ab48c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ab48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ab490: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4ab490u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ab494: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x4ab494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x4ab498: 0x2c630400  sltiu       $v1, $v1, 0x400
    ctx->pc = 0x4ab498u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x4ab49c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4AB49Cu;
    {
        const bool branch_taken_0x4ab49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB49Cu;
        // 0x4ab4a0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab49c) {
            ctx->pc = 0x4AB4CCu;
            goto label_4ab4cc;
        }
    }
    ctx->pc = 0x4AB4A4u;
    // 0x4ab4a4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4ab4a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab4a8: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4ab4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ab4ac: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4AB4ACu;
    SET_GPR_U32(ctx, 31, 0x4AB4B4u);
    ctx->pc = 0x4AB4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB4ACu;
    // 0x4ab4b0: 0x87a40000  lh          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4AB4ACu, 0x4AB4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB4B4u;
label_4ab4b4:
    // 0x4ab4b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ab4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab4b8: 0x2111024  and         $v0, $s0, $s1
    ctx->pc = 0x4ab4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
    // 0x4ab4bc: 0xa6700066  sh          $s0, 0x66($s3)
    ctx->pc = 0x4ab4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 102), (uint16_t)GPR_U32(ctx, 16));
    // 0x4ab4c0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4ab4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4ab4c4: 0xa6620064  sh          $v0, 0x64($s3)
    ctx->pc = 0x4ab4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ab4c8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4ab4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4ab4cc:
    // 0x4ab4cc: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x4ab4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x4ab4d0: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x4ab4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ab4d4: 0x2672005c  addiu       $s2, $s3, 0x5C
    ctx->pc = 0x4ab4d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    // 0x4ab4d8: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4ab4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab4dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ab4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ab4e0: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4ab4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab4e4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4ab4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4ab4e8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4ab4e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ab4ec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ab4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ab4f0: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4ab4f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ab4f4: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4ab4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab4f8: 0x32403  sra         $a0, $v1, 16
    ctx->pc = 0x4ab4f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ab4fc: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4AB4FCu;
    {
        const bool branch_taken_0x4ab4fc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4AB500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB4FCu;
        // 0x4ab500: 0x87a20000  lh          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab4fc) {
            ctx->pc = 0x4AB528u;
            goto label_4ab528;
        }
    }
    ctx->pc = 0x4AB504u;
    // 0x4ab504: 0x4400025  bltz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4AB504u;
    {
        const bool branch_taken_0x4ab504 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB504u;
        // 0x4ab508: 0x97a70000  lhu         $a3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab504) {
            ctx->pc = 0x4AB59Cu;
            goto label_4ab59c;
        }
    }
    ctx->pc = 0x4AB50Cu;
    // 0x4ab50c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x4ab50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4ab510: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4ab510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab514: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ab514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ab518: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4ab518u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab51c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AB51Cu;
    {
        const bool branch_taken_0x4ab51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB51Cu;
        // 0x4ab520: 0x101c00  sll         $v1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab51c) {
            ctx->pc = 0x4AB530u;
            goto label_4ab530;
        }
    }
    ctx->pc = 0x4AB524u;
    // 0x4ab524: 0x0  nop
    ctx->pc = 0x4ab524u;
    // NOP
label_4ab528:
    // 0x4ab528: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4AB528u;
    {
        const bool branch_taken_0x4ab528 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4AB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB528u;
        // 0x4ab52c: 0x97a70000  lhu         $a3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab528) {
            ctx->pc = 0x4AB59Cu;
            goto label_4ab59c;
        }
    }
    ctx->pc = 0x4AB530u;
label_4ab530:
    // 0x4ab530: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x4ab530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ab534: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4ab534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab538: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ab538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab53c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4ab53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4ab540: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ab540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ab544: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ab544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ab548: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4ab548u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab54c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4ab54cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4ab550: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4ab550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab554: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4ab554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab558: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x4ab558u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x4ab55c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ab55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab560: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4ab560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4ab564: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x4ab564u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4ab568: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4ab568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab56c: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4ab56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab570: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ab570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ab574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ab574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ab578: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ab578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ab57c: 0xa28024  and         $s0, $a1, $v0
    ctx->pc = 0x4ab57cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ab580: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4ab580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab584: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ab584u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ab588: 0xe32818  mult        $a1, $a3, $v1
    ctx->pc = 0x4ab588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ab58c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4ab58cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4ab590: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AB590u;
    SET_GPR_U32(ctx, 31, 0x4AB598u);
    ctx->pc = 0x4AB594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB590u;
    // 0x4ab594: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AB590u, 0x4AB598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB598u;
label_4ab598:
    // 0x4ab598: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x4ab598u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_4ab59c:
    // 0x4ab59c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x4ab59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ab5a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4ab5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab5a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ab5a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ab5a8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ab5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab5ac: 0x2445003f  addiu       $a1, $v0, 0x3F
    ctx->pc = 0x4ab5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4ab5b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4ab5b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab5b4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x4ab5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ab5b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ab5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ab5bc: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x4ab5bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4ab5c0: 0x2113024  and         $a2, $s0, $s1
    ctx->pc = 0x4ab5c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
    // 0x4ab5c4: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x4ab5c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x4ab5c8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ab5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ab5cc: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x4ab5ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ab5d0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4ab5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4ab5d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ab5d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ab5d8: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4ab5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ab5dc: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4ab5dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab5e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ab5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ab5e4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ab5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ab5e8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ab5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ab5ec: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x4ab5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4ab5f0: 0xc48025  or          $s0, $a2, $a0
    ctx->pc = 0x4ab5f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4ab5f4: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4ab5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4ab5f8: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4ab5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ab5fc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ab5fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ab600: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x4ab600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x4ab604: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x4ab604u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4ab608: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x4ab608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x4ab60c: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x4ab60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x4ab610: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4AB610u;
    {
        const bool branch_taken_0x4ab610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB610u;
        // 0x4ab614: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab610) {
            ctx->pc = 0x4AB63Cu;
            goto label_4ab63c;
        }
    }
    ctx->pc = 0x4AB618u;
    // 0x4ab618: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4ab618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab61c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4ab61cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ab620: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4AB620u;
    SET_GPR_U32(ctx, 31, 0x4AB628u);
    ctx->pc = 0x4AB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB620u;
    // 0x4ab624: 0x87a40000  lh          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4AB620u, 0x4AB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB628u;
label_4ab628:
    // 0x4ab628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ab628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab62c: 0x2111024  and         $v0, $s0, $s1
    ctx->pc = 0x4ab62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
    // 0x4ab630: 0xa6700062  sh          $s0, 0x62($s3)
    ctx->pc = 0x4ab630u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 98), (uint16_t)GPR_U32(ctx, 16));
    // 0x4ab634: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4ab634u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4ab638: 0xa6620060  sh          $v0, 0x60($s3)
    ctx->pc = 0x4ab638u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 2));
label_4ab63c:
    // 0x4ab63c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ab63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ab640: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4ab640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ab644: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ab644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ab648: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4ab648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ab64c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4ab64cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ab650: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4ab650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ab654: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB654u;
        // 0x4ab658: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB65Cu;
    // 0x4ab65c: 0x0  nop
    ctx->pc = 0x4ab65cu;
    // NOP
    ctx->pc = 0x4ab660u;
}
