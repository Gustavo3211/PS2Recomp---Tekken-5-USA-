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

// Function: sub_0031B398
// Address: 0x31b398 - 0x31b4a8
void sub_0031B398_0x31b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B398_0x31b398");
#endif

    switch (ctx->pc) {
        case 0x31b398u: goto label_31b398;
        case 0x31b39cu: goto label_31b39c;
        case 0x31b3a0u: goto label_31b3a0;
        case 0x31b3a4u: goto label_31b3a4;
        case 0x31b3a8u: goto label_31b3a8;
        case 0x31b3acu: goto label_31b3ac;
        case 0x31b3b0u: goto label_31b3b0;
        case 0x31b3b4u: goto label_31b3b4;
        case 0x31b3b8u: goto label_31b3b8;
        case 0x31b3bcu: goto label_31b3bc;
        case 0x31b3c0u: goto label_31b3c0;
        case 0x31b3c4u: goto label_31b3c4;
        case 0x31b3c8u: goto label_31b3c8;
        case 0x31b3ccu: goto label_31b3cc;
        case 0x31b3d0u: goto label_31b3d0;
        case 0x31b3d4u: goto label_31b3d4;
        case 0x31b3d8u: goto label_31b3d8;
        case 0x31b3dcu: goto label_31b3dc;
        case 0x31b3e0u: goto label_31b3e0;
        case 0x31b3e4u: goto label_31b3e4;
        case 0x31b3e8u: goto label_31b3e8;
        case 0x31b3ecu: goto label_31b3ec;
        case 0x31b3f0u: goto label_31b3f0;
        case 0x31b3f4u: goto label_31b3f4;
        case 0x31b3f8u: goto label_31b3f8;
        case 0x31b3fcu: goto label_31b3fc;
        case 0x31b400u: goto label_31b400;
        case 0x31b404u: goto label_31b404;
        case 0x31b408u: goto label_31b408;
        case 0x31b40cu: goto label_31b40c;
        case 0x31b410u: goto label_31b410;
        case 0x31b414u: goto label_31b414;
        case 0x31b418u: goto label_31b418;
        case 0x31b41cu: goto label_31b41c;
        case 0x31b420u: goto label_31b420;
        case 0x31b424u: goto label_31b424;
        case 0x31b428u: goto label_31b428;
        case 0x31b42cu: goto label_31b42c;
        case 0x31b430u: goto label_31b430;
        case 0x31b434u: goto label_31b434;
        case 0x31b438u: goto label_31b438;
        case 0x31b43cu: goto label_31b43c;
        case 0x31b440u: goto label_31b440;
        case 0x31b444u: goto label_31b444;
        case 0x31b448u: goto label_31b448;
        case 0x31b44cu: goto label_31b44c;
        case 0x31b450u: goto label_31b450;
        case 0x31b454u: goto label_31b454;
        case 0x31b458u: goto label_31b458;
        case 0x31b45cu: goto label_31b45c;
        case 0x31b460u: goto label_31b460;
        case 0x31b464u: goto label_31b464;
        case 0x31b468u: goto label_31b468;
        case 0x31b46cu: goto label_31b46c;
        case 0x31b470u: goto label_31b470;
        case 0x31b474u: goto label_31b474;
        case 0x31b478u: goto label_31b478;
        case 0x31b47cu: goto label_31b47c;
        case 0x31b480u: goto label_31b480;
        case 0x31b484u: goto label_31b484;
        case 0x31b488u: goto label_31b488;
        case 0x31b48cu: goto label_31b48c;
        case 0x31b490u: goto label_31b490;
        case 0x31b494u: goto label_31b494;
        case 0x31b498u: goto label_31b498;
        case 0x31b49cu: goto label_31b49c;
        case 0x31b4a0u: goto label_31b4a0;
        case 0x31b4a4u: goto label_31b4a4;
        default: break;
    }

    ctx->pc = 0x31b398u;

label_31b398:
    // 0x31b398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31b39c:
    // 0x31b39c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_31b3a0:
    // 0x31b3a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_31b3a4:
    // 0x31b3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31b3a8:
    // 0x31b3a8: 0xc0c8864  jal         func_322190
label_31b3ac:
    if (ctx->pc == 0x31B3ACu) {
        ctx->pc = 0x31B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3A8u;
        // 0x31b3ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3B0u;
        goto label_31b3b0;
    }
    ctx->pc = 0x31B3A8u;
    SET_GPR_U32(ctx, 31, 0x31B3B0u);
    ctx->pc = 0x31B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3A8u;
    // 0x31b3ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x31B3A8u, 0x31B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3B0u;
label_31b3b0:
    // 0x31b3b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x31b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_31b3b4:
    // 0x31b3b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31b3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b3b8:
    // 0x31b3b8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x31b3b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31b3bc:
    // 0x31b3bc: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x31b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_31b3c0:
    // 0x31b3c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b3c4:
    // 0x31b3c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b3c8:
    // 0x31b3c8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x31b3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_31b3cc:
    // 0x31b3cc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x31b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_31b3d0:
    // 0x31b3d0: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x31b3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_31b3d4:
    // 0x31b3d4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31b3d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31b3d8:
    // 0x31b3d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31b3dc:
    // 0x31b3dc: 0x40f809  jalr        $v0
label_31b3e0:
    if (ctx->pc == 0x31B3E0u) {
        ctx->pc = 0x31B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3DCu;
        // 0x31b3e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3E4u;
        goto label_31b3e4;
    }
    ctx->pc = 0x31B3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B3E4u);
        ctx->pc = 0x31B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3DCu;
        // 0x31b3e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B3DCu, 0x31B3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B3E4u;
label_31b3e4:
    // 0x31b3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31b3e8:
    // 0x31b3e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31b3ec:
    // 0x31b3ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31b3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_31b3f0:
    // 0x31b3f0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_31b3f4:
    if (ctx->pc == 0x31B3F4u) {
        ctx->pc = 0x31B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3F0u;
        // 0x31b3f4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B3F8u;
        goto label_31b3f8;
    }
    ctx->pc = 0x31B3F0u;
    {
        const bool branch_taken_0x31b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3F0u;
        // 0x31b3f4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3f0) {
            ctx->pc = 0x31B430u;
            goto label_31b430;
        }
    }
    ctx->pc = 0x31B3F8u;
label_31b3f8:
    // 0x31b3f8: 0xc0c6cda  jal         func_31B368
label_31b3fc:
    if (ctx->pc == 0x31B3FCu) {
        ctx->pc = 0x31B400u;
        goto label_31b400;
    }
    ctx->pc = 0x31B3F8u;
    SET_GPR_U32(ctx, 31, 0x31B400u);
    ctx->pc = 0x31B368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B368u, 0x31B3F8u, 0x31B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B400u;
label_31b400:
    // 0x31b400: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b404:
    // 0x31b404: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x31b404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_31b408:
    // 0x31b408: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31b408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b40c:
    // 0x31b40c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x31b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_31b410:
    // 0x31b410: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x31b410u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_31b414:
    // 0x31b414: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31b414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31b418:
    // 0x31b418: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x31b418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
label_31b41c:
    // 0x31b41c: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x31b41cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31b420:
    // 0x31b420: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x31b420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_31b424:
    // 0x31b424: 0x140f809  jalr        $t2
label_31b428:
    if (ctx->pc == 0x31B428u) {
        ctx->pc = 0x31B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B424u;
        // 0x31b428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B42Cu;
        goto label_31b42c;
    }
    ctx->pc = 0x31B424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        SET_GPR_U32(ctx, 31, 0x31B42Cu);
        ctx->pc = 0x31B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B424u;
        // 0x31b428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B424u, 0x31B42Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B42Cu;
label_31b42c:
    // 0x31b42c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31b430:
    // 0x31b430: 0xc0c6cd4  jal         func_31B350
label_31b434:
    if (ctx->pc == 0x31B434u) {
        ctx->pc = 0x31B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B430u;
        // 0x31b434: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B438u;
        goto label_31b438;
    }
    ctx->pc = 0x31B430u;
    SET_GPR_U32(ctx, 31, 0x31B438u);
    ctx->pc = 0x31B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B430u;
    // 0x31b434: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B350u, 0x31B430u, 0x31B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B438u;
label_31b438:
    // 0x31b438: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b43c:
    // 0x31b43c: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x31b43cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31b440:
    // 0x31b440: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x31b440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_31b444:
    // 0x31b444: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x31b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_31b448:
    // 0x31b448: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x31b448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31b44c:
    // 0x31b44c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31b44cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31b450:
    // 0x31b450: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31b450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b454:
    // 0x31b454: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x31b454u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31b458:
    // 0x31b458: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x31b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_31b45c:
    // 0x31b45c: 0x140f809  jalr        $t2
label_31b460:
    if (ctx->pc == 0x31B460u) {
        ctx->pc = 0x31B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B45Cu;
        // 0x31b460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B464u;
        goto label_31b464;
    }
    ctx->pc = 0x31B45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        SET_GPR_U32(ctx, 31, 0x31B464u);
        ctx->pc = 0x31B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B45Cu;
        // 0x31b460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B45Cu, 0x31B464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B464u;
label_31b464:
    // 0x31b464: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x31b464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_31b468:
    // 0x31b468: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x31b468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31b46c:
    // 0x31b46c: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x31b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
label_31b470:
    // 0x31b470: 0xc0ce5f2  jal         func_3397C8
label_31b474:
    if (ctx->pc == 0x31B474u) {
        ctx->pc = 0x31B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B470u;
        // 0x31b474: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B478u;
        goto label_31b478;
    }
    ctx->pc = 0x31B470u;
    SET_GPR_U32(ctx, 31, 0x31B478u);
    ctx->pc = 0x31B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B470u;
    // 0x31b474: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3397C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3397C8u, 0x31B470u, 0x31B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B478u;
label_31b478:
    // 0x31b478: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b47c:
    // 0x31b47c: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x31b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
label_31b480:
    // 0x31b480: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31b480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31b484:
    // 0x31b484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31b488:
    // 0x31b488: 0x40f809  jalr        $v0
label_31b48c:
    if (ctx->pc == 0x31B48Cu) {
        ctx->pc = 0x31B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B488u;
        // 0x31b48c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B490u;
        goto label_31b490;
    }
    ctx->pc = 0x31B488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B490u);
        ctx->pc = 0x31B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B488u;
        // 0x31b48c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B488u, 0x31B490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B490u;
label_31b490:
    // 0x31b490: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31b490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31b494:
    // 0x31b494: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31b494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31b498:
    // 0x31b498: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31b498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31b49c:
    // 0x31b49c: 0x3e00008  jr          $ra
label_31b4a0:
    if (ctx->pc == 0x31B4A0u) {
        ctx->pc = 0x31B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B49Cu;
        // 0x31b4a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B4A4u;
        goto label_31b4a4;
    }
    ctx->pc = 0x31B49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B49Cu;
        // 0x31b4a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B4A4u;
label_31b4a4:
    // 0x31b4a4: 0x0  nop
    ctx->pc = 0x31b4a4u;
    // NOP
    ctx->pc = 0x31b4a8u;
}
