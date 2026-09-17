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

// Function: sub_002EB448
// Address: 0x2eb448 - 0x2eb640
void sub_002EB448_0x2eb448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB448_0x2eb448");
#endif

    switch (ctx->pc) {
        case 0x2eb474u: goto label_2eb474;
        case 0x2eb4b0u: goto label_2eb4b0;
        case 0x2eb4f0u: goto label_2eb4f0;
        case 0x2eb530u: goto label_2eb530;
        case 0x2eb570u: goto label_2eb570;
        case 0x2eb5b0u: goto label_2eb5b0;
        case 0x2eb5f0u: goto label_2eb5f0;
        case 0x2eb630u: goto label_2eb630;
        default: break;
    }

    ctx->pc = 0x2eb448u;

    // 0x2eb448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb44c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eb44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2eb450: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eb450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2eb454: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2eb454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x2eb458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb45c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb460: 0x34a5014b  ori         $a1, $a1, 0x14B
    ctx->pc = 0x2eb460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)331);
    // 0x2eb464: 0x34c6014c  ori         $a2, $a2, 0x14C
    ctx->pc = 0x2eb464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)332);
    // 0x2eb468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eb468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eb46c: 0xc0bbe04  jal         func_2EF810
    ctx->pc = 0x2EB46Cu;
    SET_GPR_U32(ctx, 31, 0x2EB474u);
    ctx->pc = 0x2EB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB46Cu;
    // 0x2eb470: 0x34e7014d  ori         $a3, $a3, 0x14D (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)333);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2EB46Cu, 0x2EB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB474u;
label_2eb474:
    // 0x2eb474: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x2eb474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2eb478: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb47c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB47Cu;
    {
        const bool branch_taken_0x2eb47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb47c) {
            ctx->pc = 0x2EB480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB47Cu;
            // 0x2eb480: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB498u;
            goto label_2eb498;
        }
    }
    ctx->pc = 0x2EB484u;
    // 0x2eb484: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb488: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb48c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB48Cu;
    {
        const bool branch_taken_0x2eb48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb48c) {
            ctx->pc = 0x2EB490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB48Cu;
            // 0x2eb490: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB4A4u;
            goto label_2eb4a4;
        }
    }
    ctx->pc = 0x2EB494u;
    // 0x2eb494: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb498:
    // 0x2eb498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb49c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb49cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eb4a0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eb4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2eb4a4:
    // 0x2eb4a4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eb4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2eb4a8: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EB4A8u;
    SET_GPR_U32(ctx, 31, 0x2EB4B0u);
    ctx->pc = 0x2EB4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB4A8u;
    // 0x2eb4ac: 0x34c600a3  ori         $a2, $a2, 0xA3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)163);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EB4A8u, 0x2EB4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4B0u;
label_2eb4b0:
    // 0x2eb4b0: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x2eb4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2eb4b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb4b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB4B8u;
    {
        const bool branch_taken_0x2eb4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb4b8) {
            ctx->pc = 0x2EB4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB4B8u;
            // 0x2eb4bc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB4D4u;
            goto label_2eb4d4;
        }
    }
    ctx->pc = 0x2EB4C0u;
    // 0x2eb4c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb4c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb4c8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB4C8u;
    {
        const bool branch_taken_0x2eb4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb4c8) {
            ctx->pc = 0x2EB4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB4C8u;
            // 0x2eb4cc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB4E0u;
            goto label_2eb4e0;
        }
    }
    ctx->pc = 0x2EB4D0u;
    // 0x2eb4d0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb4d4:
    // 0x2eb4d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4d8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eb4dc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eb4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eb4e0:
    // 0x2eb4e0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eb4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2eb4e4: 0x34a50024  ori         $a1, $a1, 0x24
    ctx->pc = 0x2eb4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36);
    // 0x2eb4e8: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EB4E8u;
    SET_GPR_U32(ctx, 31, 0x2EB4F0u);
    ctx->pc = 0x2EB4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB4E8u;
    // 0x2eb4ec: 0x34c600a4  ori         $a2, $a2, 0xA4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)164);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EB4E8u, 0x2EB4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4F0u;
label_2eb4f0:
    // 0x2eb4f0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x2eb4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2eb4f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb4f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB4F8u;
    {
        const bool branch_taken_0x2eb4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb4f8) {
            ctx->pc = 0x2EB4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB4F8u;
            // 0x2eb4fc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB514u;
            goto label_2eb514;
        }
    }
    ctx->pc = 0x2EB500u;
    // 0x2eb500: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb504: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb508: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB508u;
    {
        const bool branch_taken_0x2eb508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb508) {
            ctx->pc = 0x2EB50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB508u;
            // 0x2eb50c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB520u;
            goto label_2eb520;
        }
    }
    ctx->pc = 0x2EB510u;
    // 0x2eb510: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb514:
    // 0x2eb514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb518: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eb51c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eb51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eb520:
    // 0x2eb520: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eb520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2eb524: 0x34a50067  ori         $a1, $a1, 0x67
    ctx->pc = 0x2eb524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)103);
    // 0x2eb528: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EB528u;
    SET_GPR_U32(ctx, 31, 0x2EB530u);
    ctx->pc = 0x2EB52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB528u;
    // 0x2eb52c: 0x34c600a5  ori         $a2, $a2, 0xA5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)165);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EB528u, 0x2EB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB530u;
label_2eb530:
    // 0x2eb530: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2eb530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2eb534: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb538: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB538u;
    {
        const bool branch_taken_0x2eb538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb538) {
            ctx->pc = 0x2EB53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB538u;
            // 0x2eb53c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB554u;
            goto label_2eb554;
        }
    }
    ctx->pc = 0x2EB540u;
    // 0x2eb540: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb544: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb548: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB548u;
    {
        const bool branch_taken_0x2eb548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb548) {
            ctx->pc = 0x2EB54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB548u;
            // 0x2eb54c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB560u;
            goto label_2eb560;
        }
    }
    ctx->pc = 0x2EB550u;
    // 0x2eb550: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb554:
    // 0x2eb554: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb558: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eb55c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eb55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eb560:
    // 0x2eb560: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eb560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2eb564: 0x34a50078  ori         $a1, $a1, 0x78
    ctx->pc = 0x2eb564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)120);
    // 0x2eb568: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EB568u;
    SET_GPR_U32(ctx, 31, 0x2EB570u);
    ctx->pc = 0x2EB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB568u;
    // 0x2eb56c: 0x34c600a6  ori         $a2, $a2, 0xA6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)166);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EB568u, 0x2EB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB570u;
label_2eb570:
    // 0x2eb570: 0x26050078  addiu       $a1, $s0, 0x78
    ctx->pc = 0x2eb570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2eb574: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb578: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB578u;
    {
        const bool branch_taken_0x2eb578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb578) {
            ctx->pc = 0x2EB57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB578u;
            // 0x2eb57c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB594u;
            goto label_2eb594;
        }
    }
    ctx->pc = 0x2EB580u;
    // 0x2eb580: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb584: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb588: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB588u;
    {
        const bool branch_taken_0x2eb588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb588) {
            ctx->pc = 0x2EB58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB588u;
            // 0x2eb58c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5A0u;
            goto label_2eb5a0;
        }
    }
    ctx->pc = 0x2EB590u;
    // 0x2eb590: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb594:
    // 0x2eb594: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb598: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eb59c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eb59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eb5a0:
    // 0x2eb5a0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eb5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2eb5a4: 0x34a5007b  ori         $a1, $a1, 0x7B
    ctx->pc = 0x2eb5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)123);
    // 0x2eb5a8: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EB5A8u;
    SET_GPR_U32(ctx, 31, 0x2EB5B0u);
    ctx->pc = 0x2EB5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5A8u;
    // 0x2eb5ac: 0x34c600a7  ori         $a2, $a2, 0xA7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)167);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EB5A8u, 0x2EB5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5B0u;
label_2eb5b0:
    // 0x2eb5b0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2eb5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2eb5b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb5b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB5B8u;
    {
        const bool branch_taken_0x2eb5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb5b8) {
            ctx->pc = 0x2EB5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB5B8u;
            // 0x2eb5bc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5D4u;
            goto label_2eb5d4;
        }
    }
    ctx->pc = 0x2EB5C0u;
    // 0x2eb5c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb5c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb5c8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB5C8u;
    {
        const bool branch_taken_0x2eb5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb5c8) {
            ctx->pc = 0x2EB5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB5C8u;
            // 0x2eb5cc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5E0u;
            goto label_2eb5e0;
        }
    }
    ctx->pc = 0x2EB5D0u;
    // 0x2eb5d0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb5d4:
    // 0x2eb5d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5d8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eb5dc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eb5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eb5e0:
    // 0x2eb5e0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eb5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2eb5e4: 0x34a50099  ori         $a1, $a1, 0x99
    ctx->pc = 0x2eb5e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)153);
    // 0x2eb5e8: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EB5E8u;
    SET_GPR_U32(ctx, 31, 0x2EB5F0u);
    ctx->pc = 0x2EB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5E8u;
    // 0x2eb5ec: 0x34c600a8  ori         $a2, $a2, 0xA8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)168);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EB5E8u, 0x2EB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5F0u;
label_2eb5f0:
    // 0x2eb5f0: 0x26050088  addiu       $a1, $s0, 0x88
    ctx->pc = 0x2eb5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x2eb5f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb5f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB5F8u;
    {
        const bool branch_taken_0x2eb5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb5f8) {
            ctx->pc = 0x2EB5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB5F8u;
            // 0x2eb5fc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB614u;
            goto label_2eb614;
        }
    }
    ctx->pc = 0x2EB600u;
    // 0x2eb600: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb604: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb608: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB608u;
    {
        const bool branch_taken_0x2eb608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb608) {
            ctx->pc = 0x2EB60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB608u;
            // 0x2eb60c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB620u;
            goto label_2eb620;
        }
    }
    ctx->pc = 0x2EB610u;
    // 0x2eb610: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb614:
    // 0x2eb614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb618: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eb61c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2eb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2eb620:
    // 0x2eb620: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2eb620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2eb624: 0x34a5014a  ori         $a1, $a1, 0x14A
    ctx->pc = 0x2eb624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)330);
    // 0x2eb628: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2EB628u;
    SET_GPR_U32(ctx, 31, 0x2EB630u);
    ctx->pc = 0x2EB62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB628u;
    // 0x2eb62c: 0x34c600a9  ori         $a2, $a2, 0xA9 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)169);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EB628u, 0x2EB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB630u;
label_2eb630:
    // 0x2eb630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eb634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb638: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB638u;
        // 0x2eb63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB640u;
}
