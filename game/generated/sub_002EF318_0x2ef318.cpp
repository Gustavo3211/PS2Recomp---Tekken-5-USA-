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

// Function: sub_002EF318
// Address: 0x2ef318 - 0x2ef4e0
void sub_002EF318_0x2ef318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF318_0x2ef318");
#endif

    switch (ctx->pc) {
        case 0x2ef318u: goto label_2ef318;
        case 0x2ef31cu: goto label_2ef31c;
        case 0x2ef320u: goto label_2ef320;
        case 0x2ef324u: goto label_2ef324;
        case 0x2ef328u: goto label_2ef328;
        case 0x2ef32cu: goto label_2ef32c;
        case 0x2ef330u: goto label_2ef330;
        case 0x2ef334u: goto label_2ef334;
        case 0x2ef338u: goto label_2ef338;
        case 0x2ef33cu: goto label_2ef33c;
        case 0x2ef340u: goto label_2ef340;
        case 0x2ef344u: goto label_2ef344;
        case 0x2ef348u: goto label_2ef348;
        case 0x2ef34cu: goto label_2ef34c;
        case 0x2ef350u: goto label_2ef350;
        case 0x2ef354u: goto label_2ef354;
        case 0x2ef358u: goto label_2ef358;
        case 0x2ef35cu: goto label_2ef35c;
        case 0x2ef360u: goto label_2ef360;
        case 0x2ef364u: goto label_2ef364;
        case 0x2ef368u: goto label_2ef368;
        case 0x2ef36cu: goto label_2ef36c;
        case 0x2ef370u: goto label_2ef370;
        case 0x2ef374u: goto label_2ef374;
        case 0x2ef378u: goto label_2ef378;
        case 0x2ef37cu: goto label_2ef37c;
        case 0x2ef380u: goto label_2ef380;
        case 0x2ef384u: goto label_2ef384;
        case 0x2ef388u: goto label_2ef388;
        case 0x2ef38cu: goto label_2ef38c;
        case 0x2ef390u: goto label_2ef390;
        case 0x2ef394u: goto label_2ef394;
        case 0x2ef398u: goto label_2ef398;
        case 0x2ef39cu: goto label_2ef39c;
        case 0x2ef3a0u: goto label_2ef3a0;
        case 0x2ef3a4u: goto label_2ef3a4;
        case 0x2ef3a8u: goto label_2ef3a8;
        case 0x2ef3acu: goto label_2ef3ac;
        case 0x2ef3b0u: goto label_2ef3b0;
        case 0x2ef3b4u: goto label_2ef3b4;
        case 0x2ef3b8u: goto label_2ef3b8;
        case 0x2ef3bcu: goto label_2ef3bc;
        case 0x2ef3c0u: goto label_2ef3c0;
        case 0x2ef3c4u: goto label_2ef3c4;
        case 0x2ef3c8u: goto label_2ef3c8;
        case 0x2ef3ccu: goto label_2ef3cc;
        case 0x2ef3d0u: goto label_2ef3d0;
        case 0x2ef3d4u: goto label_2ef3d4;
        case 0x2ef3d8u: goto label_2ef3d8;
        case 0x2ef3dcu: goto label_2ef3dc;
        case 0x2ef3e0u: goto label_2ef3e0;
        case 0x2ef3e4u: goto label_2ef3e4;
        case 0x2ef3e8u: goto label_2ef3e8;
        case 0x2ef3ecu: goto label_2ef3ec;
        case 0x2ef3f0u: goto label_2ef3f0;
        case 0x2ef3f4u: goto label_2ef3f4;
        case 0x2ef3f8u: goto label_2ef3f8;
        case 0x2ef3fcu: goto label_2ef3fc;
        case 0x2ef400u: goto label_2ef400;
        case 0x2ef404u: goto label_2ef404;
        case 0x2ef408u: goto label_2ef408;
        case 0x2ef40cu: goto label_2ef40c;
        case 0x2ef410u: goto label_2ef410;
        case 0x2ef414u: goto label_2ef414;
        case 0x2ef418u: goto label_2ef418;
        case 0x2ef41cu: goto label_2ef41c;
        case 0x2ef420u: goto label_2ef420;
        case 0x2ef424u: goto label_2ef424;
        case 0x2ef428u: goto label_2ef428;
        case 0x2ef42cu: goto label_2ef42c;
        case 0x2ef430u: goto label_2ef430;
        case 0x2ef434u: goto label_2ef434;
        case 0x2ef438u: goto label_2ef438;
        case 0x2ef43cu: goto label_2ef43c;
        case 0x2ef440u: goto label_2ef440;
        case 0x2ef444u: goto label_2ef444;
        case 0x2ef448u: goto label_2ef448;
        case 0x2ef44cu: goto label_2ef44c;
        case 0x2ef450u: goto label_2ef450;
        case 0x2ef454u: goto label_2ef454;
        case 0x2ef458u: goto label_2ef458;
        case 0x2ef45cu: goto label_2ef45c;
        case 0x2ef460u: goto label_2ef460;
        case 0x2ef464u: goto label_2ef464;
        case 0x2ef468u: goto label_2ef468;
        case 0x2ef46cu: goto label_2ef46c;
        case 0x2ef470u: goto label_2ef470;
        case 0x2ef474u: goto label_2ef474;
        case 0x2ef478u: goto label_2ef478;
        case 0x2ef47cu: goto label_2ef47c;
        case 0x2ef480u: goto label_2ef480;
        case 0x2ef484u: goto label_2ef484;
        case 0x2ef488u: goto label_2ef488;
        case 0x2ef48cu: goto label_2ef48c;
        case 0x2ef490u: goto label_2ef490;
        case 0x2ef494u: goto label_2ef494;
        case 0x2ef498u: goto label_2ef498;
        case 0x2ef49cu: goto label_2ef49c;
        case 0x2ef4a0u: goto label_2ef4a0;
        case 0x2ef4a4u: goto label_2ef4a4;
        case 0x2ef4a8u: goto label_2ef4a8;
        case 0x2ef4acu: goto label_2ef4ac;
        case 0x2ef4b0u: goto label_2ef4b0;
        case 0x2ef4b4u: goto label_2ef4b4;
        case 0x2ef4b8u: goto label_2ef4b8;
        case 0x2ef4bcu: goto label_2ef4bc;
        case 0x2ef4c0u: goto label_2ef4c0;
        case 0x2ef4c4u: goto label_2ef4c4;
        case 0x2ef4c8u: goto label_2ef4c8;
        case 0x2ef4ccu: goto label_2ef4cc;
        case 0x2ef4d0u: goto label_2ef4d0;
        case 0x2ef4d4u: goto label_2ef4d4;
        case 0x2ef4d8u: goto label_2ef4d8;
        case 0x2ef4dcu: goto label_2ef4dc;
        default: break;
    }

    ctx->pc = 0x2ef318u;

label_2ef318:
    // 0x2ef318: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ef318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ef31c:
    // 0x2ef31c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ef31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2ef320:
    // 0x2ef320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef324:
    // 0x2ef324: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ef324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2ef328:
    // 0x2ef328: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ef328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ef32c:
    // 0x2ef32c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ef32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef330:
    // 0x2ef330: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ef330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2ef334:
    // 0x2ef334: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ef334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2ef338:
    // 0x2ef338: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2ef338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2ef33c:
    // 0x2ef33c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2ef33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2ef340:
    // 0x2ef340: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2ef340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2ef344:
    // 0x2ef344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ef344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ef348:
    // 0x2ef348: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ef348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef34c:
    // 0x2ef34c: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2ef34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2ef350:
    // 0x2ef350: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ef350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ef354:
    // 0x2ef354: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ef354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ef358:
    // 0x2ef358: 0x40f809  jalr        $v0
label_2ef35c:
    if (ctx->pc == 0x2EF35Cu) {
        ctx->pc = 0x2EF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF358u;
        // 0x2ef35c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF360u;
        goto label_2ef360;
    }
    ctx->pc = 0x2EF358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF360u);
        ctx->pc = 0x2EF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF358u;
        // 0x2ef35c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF358u, 0x2EF360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF360u;
label_2ef360:
    // 0x2ef360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef364:
    // 0x2ef364: 0xc0bb974  jal         func_2EE5D0
label_2ef368:
    if (ctx->pc == 0x2EF368u) {
        ctx->pc = 0x2EF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF364u;
        // 0x2ef368: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF36Cu;
        goto label_2ef36c;
    }
    ctx->pc = 0x2EF364u;
    SET_GPR_U32(ctx, 31, 0x2EF36Cu);
    ctx->pc = 0x2EF368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF364u;
    // 0x2ef368: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5D0u, 0x2EF364u, 0x2EF36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF36Cu;
label_2ef36c:
    // 0x2ef36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef370:
    // 0x2ef370: 0xc0bb978  jal         func_2EE5E0
label_2ef374:
    if (ctx->pc == 0x2EF374u) {
        ctx->pc = 0x2EF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF370u;
        // 0x2ef374: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF378u;
        goto label_2ef378;
    }
    ctx->pc = 0x2EF370u;
    SET_GPR_U32(ctx, 31, 0x2EF378u);
    ctx->pc = 0x2EF374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF370u;
    // 0x2ef374: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5E0u, 0x2EF370u, 0x2EF378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF378u;
label_2ef378:
    // 0x2ef378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef37c:
    // 0x2ef37c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef380:
    // 0x2ef380: 0xc0bb97c  jal         func_2EE5F0
label_2ef384:
    if (ctx->pc == 0x2EF384u) {
        ctx->pc = 0x2EF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF380u;
        // 0x2ef384: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF388u;
        goto label_2ef388;
    }
    ctx->pc = 0x2EF380u;
    SET_GPR_U32(ctx, 31, 0x2EF388u);
    ctx->pc = 0x2EF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF380u;
    // 0x2ef384: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5F0u, 0x2EF380u, 0x2EF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF388u;
label_2ef388:
    // 0x2ef388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef38c:
    // 0x2ef38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ef38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef390:
    // 0x2ef390: 0xc0bb97c  jal         func_2EE5F0
label_2ef394:
    if (ctx->pc == 0x2EF394u) {
        ctx->pc = 0x2EF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF390u;
        // 0x2ef394: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF398u;
        goto label_2ef398;
    }
    ctx->pc = 0x2EF390u;
    SET_GPR_U32(ctx, 31, 0x2EF398u);
    ctx->pc = 0x2EF394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF390u;
    // 0x2ef394: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5F0u, 0x2EF390u, 0x2EF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF398u;
label_2ef398:
    // 0x2ef398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef39c:
    // 0x2ef39c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2ef39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ef3a0:
    // 0x2ef3a0: 0xc0bb986  jal         func_2EE618
label_2ef3a4:
    if (ctx->pc == 0x2EF3A4u) {
        ctx->pc = 0x2EF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3A0u;
        // 0x2ef3a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3A8u;
        goto label_2ef3a8;
    }
    ctx->pc = 0x2EF3A0u;
    SET_GPR_U32(ctx, 31, 0x2EF3A8u);
    ctx->pc = 0x2EF3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF3A0u;
    // 0x2ef3a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE618u, 0x2EF3A0u, 0x2EF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3A8u;
label_2ef3a8:
    // 0x2ef3a8: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x2ef3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2ef3ac:
    // 0x2ef3ac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2ef3b0:
    if (ctx->pc == 0x2EF3B0u) {
        ctx->pc = 0x2EF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3ACu;
        // 0x2ef3b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3B4u;
        goto label_2ef3b4;
    }
    ctx->pc = 0x2EF3ACu;
    {
        const bool branch_taken_0x2ef3ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3ACu;
        // 0x2ef3b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3ac) {
            ctx->pc = 0x2EF3C8u;
            goto label_2ef3c8;
        }
    }
    ctx->pc = 0x2EF3B4u;
label_2ef3b4:
    // 0x2ef3b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef3b8:
    // 0x2ef3b8: 0xc0a5d52  jal         func_297548
label_2ef3bc:
    if (ctx->pc == 0x2EF3BCu) {
        ctx->pc = 0x2EF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3B8u;
        // 0x2ef3bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3C0u;
        goto label_2ef3c0;
    }
    ctx->pc = 0x2EF3B8u;
    SET_GPR_U32(ctx, 31, 0x2EF3C0u);
    ctx->pc = 0x2EF3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF3B8u;
    // 0x2ef3bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2EF3B8u, 0x2EF3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3C0u;
label_2ef3c0:
    // 0x2ef3c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ef3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ef3c4:
    // 0x2ef3c4: 0x24520006  addiu       $s2, $v0, 0x6
    ctx->pc = 0x2ef3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_2ef3c8:
    // 0x2ef3c8: 0x6220019  bltzl       $s1, . + 4 + (0x19 << 2)
label_2ef3cc:
    if (ctx->pc == 0x2EF3CCu) {
        ctx->pc = 0x2EF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3C8u;
        // 0x2ef3cc: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3D0u;
        goto label_2ef3d0;
    }
    ctx->pc = 0x2EF3C8u;
    {
        const bool branch_taken_0x2ef3c8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2ef3c8) {
            ctx->pc = 0x2EF3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF3C8u;
            // 0x2ef3cc: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF430u;
            goto label_2ef430;
        }
    }
    ctx->pc = 0x2EF3D0u;
label_2ef3d0:
    // 0x2ef3d0: 0x16e0000d  bnez        $s7, . + 4 + (0xD << 2)
label_2ef3d4:
    if (ctx->pc == 0x2EF3D4u) {
        ctx->pc = 0x2EF3D8u;
        goto label_2ef3d8;
    }
    ctx->pc = 0x2EF3D0u;
    {
        const bool branch_taken_0x2ef3d0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef3d0) {
            ctx->pc = 0x2EF408u;
            goto label_2ef408;
        }
    }
    ctx->pc = 0x2EF3D8u;
label_2ef3d8:
    // 0x2ef3d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ef3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef3dc:
    // 0x2ef3dc: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2ef3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2ef3e0:
    // 0x2ef3e0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ef3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ef3e4:
    // 0x2ef3e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ef3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ef3e8:
    // 0x2ef3e8: 0x40f809  jalr        $v0
label_2ef3ec:
    if (ctx->pc == 0x2EF3ECu) {
        ctx->pc = 0x2EF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3E8u;
        // 0x2ef3ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3F0u;
        goto label_2ef3f0;
    }
    ctx->pc = 0x2EF3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF3F0u);
        ctx->pc = 0x2EF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3E8u;
        // 0x2ef3ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF3E8u, 0x2EF3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF3F0u;
label_2ef3f0:
    // 0x2ef3f0: 0x3c038070  lui         $v1, 0x8070
    ctx->pc = 0x2ef3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32880 << 16));
label_2ef3f4:
    // 0x2ef3f4: 0x3c0580df  lui         $a1, 0x80DF
    ctx->pc = 0x2ef3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32991 << 16));
label_2ef3f8:
    // 0x2ef3f8: 0x34637070  ori         $v1, $v1, 0x7070
    ctx->pc = 0x2ef3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28784);
label_2ef3fc:
    // 0x2ef3fc: 0x34a5cfcf  ori         $a1, $a1, 0xCFCF
    ctx->pc = 0x2ef3fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53199);
label_2ef400:
    // 0x2ef400: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ef404:
    if (ctx->pc == 0x2EF404u) {
        ctx->pc = 0x2EF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF400u;
        // 0x2ef404: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF408u;
        goto label_2ef408;
    }
    ctx->pc = 0x2EF400u;
    {
        const bool branch_taken_0x2ef400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF400u;
        // 0x2ef404: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef400) {
            ctx->pc = 0x2EF410u;
            goto label_2ef410;
        }
    }
    ctx->pc = 0x2EF408u;
label_2ef408:
    // 0x2ef408: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2ef408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_2ef40c:
    // 0x2ef40c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ef40cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2ef410:
    // 0x2ef410: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2ef410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_2ef414:
    // 0x2ef414: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ef414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef418:
    // 0x2ef418: 0x24840c28  addiu       $a0, $a0, 0xC28
    ctx->pc = 0x2ef418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3112));
label_2ef41c:
    // 0x2ef41c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef420:
    // 0x2ef420: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ef420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef424:
    // 0x2ef424: 0xc0b640e  jal         func_2D9038
label_2ef428:
    if (ctx->pc == 0x2EF428u) {
        ctx->pc = 0x2EF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF424u;
        // 0x2ef428: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF42Cu;
        goto label_2ef42c;
    }
    ctx->pc = 0x2EF424u;
    SET_GPR_U32(ctx, 31, 0x2EF42Cu);
    ctx->pc = 0x2EF428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF424u;
    // 0x2ef428: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EF424u, 0x2EF42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF42Cu;
label_2ef42c:
    // 0x2ef42c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2ef42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2ef430:
    // 0x2ef430: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ef434:
    if (ctx->pc == 0x2EF434u) {
        ctx->pc = 0x2EF438u;
        goto label_2ef438;
    }
    ctx->pc = 0x2EF430u;
    {
        const bool branch_taken_0x2ef430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef430) {
            ctx->pc = 0x2EF468u;
            goto label_2ef468;
        }
    }
    ctx->pc = 0x2EF438u;
label_2ef438:
    // 0x2ef438: 0x680000b  bltz        $s4, . + 4 + (0xB << 2)
label_2ef43c:
    if (ctx->pc == 0x2EF43Cu) {
        ctx->pc = 0x2EF440u;
        goto label_2ef440;
    }
    ctx->pc = 0x2EF438u;
    {
        const bool branch_taken_0x2ef438 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x2ef438) {
            ctx->pc = 0x2EF468u;
            goto label_2ef468;
        }
    }
    ctx->pc = 0x2EF440u;
label_2ef440:
    // 0x2ef440: 0x6600009  bltz        $s3, . + 4 + (0x9 << 2)
label_2ef444:
    if (ctx->pc == 0x2EF444u) {
        ctx->pc = 0x2EF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF440u;
        // 0x2ef444: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF448u;
        goto label_2ef448;
    }
    ctx->pc = 0x2EF440u;
    {
        const bool branch_taken_0x2ef440 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2EF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF440u;
        // 0x2ef444: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef440) {
            ctx->pc = 0x2EF468u;
            goto label_2ef468;
        }
    }
    ctx->pc = 0x2EF448u;
label_2ef448:
    // 0x2ef448: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2ef448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ef44c:
    // 0x2ef44c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ef44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ef450:
    // 0x2ef450: 0x24840c38  addiu       $a0, $a0, 0xC38
    ctx->pc = 0x2ef450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3128));
label_2ef454:
    // 0x2ef454: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ef454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef458:
    // 0x2ef458: 0x262400b  movn        $t0, $s3, $v0
    ctx->pc = 0x2ef458u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 19));
label_2ef45c:
    // 0x2ef45c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ef45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef460:
    // 0x2ef460: 0xc0b640e  jal         func_2D9038
label_2ef464:
    if (ctx->pc == 0x2EF464u) {
        ctx->pc = 0x2EF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF460u;
        // 0x2ef464: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF468u;
        goto label_2ef468;
    }
    ctx->pc = 0x2EF460u;
    SET_GPR_U32(ctx, 31, 0x2EF468u);
    ctx->pc = 0x2EF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF460u;
    // 0x2ef464: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EF460u, 0x2EF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF468u;
label_2ef468:
    // 0x2ef468: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
label_2ef46c:
    if (ctx->pc == 0x2EF46Cu) {
        ctx->pc = 0x2EF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF468u;
        // 0x2ef46c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF470u;
        goto label_2ef470;
    }
    ctx->pc = 0x2EF468u;
    {
        const bool branch_taken_0x2ef468 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF468u;
        // 0x2ef46c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef468) {
            ctx->pc = 0x2EF4B4u;
            goto label_2ef4b4;
        }
    }
    ctx->pc = 0x2EF470u;
label_2ef470:
    // 0x2ef470: 0x6a00009  bltz        $s5, . + 4 + (0x9 << 2)
label_2ef474:
    if (ctx->pc == 0x2EF474u) {
        ctx->pc = 0x2EF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF470u;
        // 0x2ef474: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF478u;
        goto label_2ef478;
    }
    ctx->pc = 0x2EF470u;
    {
        const bool branch_taken_0x2ef470 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x2EF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF470u;
        // 0x2ef474: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef470) {
            ctx->pc = 0x2EF498u;
            goto label_2ef498;
        }
    }
    ctx->pc = 0x2EF478u;
label_2ef478:
    // 0x2ef478: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2ef478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ef47c:
    // 0x2ef47c: 0x24844a98  addiu       $a0, $a0, 0x4A98
    ctx->pc = 0x2ef47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19096));
label_2ef480:
    // 0x2ef480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef484:
    // 0x2ef484: 0xc0b640e  jal         func_2D9038
label_2ef488:
    if (ctx->pc == 0x2EF488u) {
        ctx->pc = 0x2EF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF484u;
        // 0x2ef488: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF48Cu;
        goto label_2ef48c;
    }
    ctx->pc = 0x2EF484u;
    SET_GPR_U32(ctx, 31, 0x2EF48Cu);
    ctx->pc = 0x2EF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF484u;
    // 0x2ef488: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EF484u, 0x2EF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF48Cu;
label_2ef48c:
    // 0x2ef48c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2ef490:
    if (ctx->pc == 0x2EF490u) {
        ctx->pc = 0x2EF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF48Cu;
        // 0x2ef490: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF494u;
        goto label_2ef494;
    }
    ctx->pc = 0x2EF48Cu;
    {
        const bool branch_taken_0x2ef48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF48Cu;
        // 0x2ef490: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef48c) {
            ctx->pc = 0x2EF4B4u;
            goto label_2ef4b4;
        }
    }
    ctx->pc = 0x2EF494u;
label_2ef494:
    // 0x2ef494: 0x0  nop
    ctx->pc = 0x2ef494u;
    // NOP
label_2ef498:
    // 0x2ef498: 0x6c00005  bltz        $s6, . + 4 + (0x5 << 2)
label_2ef49c:
    if (ctx->pc == 0x2EF49Cu) {
        ctx->pc = 0x2EF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF498u;
        // 0x2ef49c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4A0u;
        goto label_2ef4a0;
    }
    ctx->pc = 0x2EF498u;
    {
        const bool branch_taken_0x2ef498 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x2EF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF498u;
        // 0x2ef49c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef498) {
            ctx->pc = 0x2EF4B0u;
            goto label_2ef4b0;
        }
    }
    ctx->pc = 0x2EF4A0u;
label_2ef4a0:
    // 0x2ef4a0: 0x24844a98  addiu       $a0, $a0, 0x4A98
    ctx->pc = 0x2ef4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19096));
label_2ef4a4:
    // 0x2ef4a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef4a8:
    // 0x2ef4a8: 0xc0b640e  jal         func_2D9038
label_2ef4ac:
    if (ctx->pc == 0x2EF4ACu) {
        ctx->pc = 0x2EF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4A8u;
        // 0x2ef4ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4B0u;
        goto label_2ef4b0;
    }
    ctx->pc = 0x2EF4A8u;
    SET_GPR_U32(ctx, 31, 0x2EF4B0u);
    ctx->pc = 0x2EF4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4A8u;
    // 0x2ef4ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EF4A8u, 0x2EF4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF4B0u;
label_2ef4b0:
    // 0x2ef4b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ef4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef4b4:
    // 0x2ef4b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ef4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ef4b8:
    // 0x2ef4b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ef4b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef4bc:
    // 0x2ef4bc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ef4bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ef4c0:
    // 0x2ef4c0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ef4c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ef4c4:
    // 0x2ef4c4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2ef4c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ef4c8:
    // 0x2ef4c8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2ef4c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ef4cc:
    // 0x2ef4cc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2ef4ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2ef4d0:
    // 0x2ef4d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ef4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef4d4:
    // 0x2ef4d4: 0x3e00008  jr          $ra
label_2ef4d8:
    if (ctx->pc == 0x2EF4D8u) {
        ctx->pc = 0x2EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D4u;
        // 0x2ef4d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4DCu;
        goto label_2ef4dc;
    }
    ctx->pc = 0x2EF4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D4u;
        // 0x2ef4d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF4DCu;
label_2ef4dc:
    // 0x2ef4dc: 0x0  nop
    ctx->pc = 0x2ef4dcu;
    // NOP
    ctx->pc = 0x2ef4e0u;
}
