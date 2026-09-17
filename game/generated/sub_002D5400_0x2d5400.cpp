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

// Function: sub_002D5400
// Address: 0x2d5400 - 0x2d55c8
void sub_002D5400_0x2d5400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5400_0x2d5400");
#endif

    switch (ctx->pc) {
        case 0x2d541cu: goto label_2d541c;
        case 0x2d5488u: goto label_2d5488;
        case 0x2d549cu: goto label_2d549c;
        case 0x2d54b0u: goto label_2d54b0;
        case 0x2d54c4u: goto label_2d54c4;
        case 0x2d5524u: goto label_2d5524;
        case 0x2d5538u: goto label_2d5538;
        case 0x2d5570u: goto label_2d5570;
        case 0x2d55a4u: goto label_2d55a4;
        default: break;
    }

    ctx->pc = 0x2d5400u;

    // 0x2d5400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5404: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d5404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d5408: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d5408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d540c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d5410: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d5410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2d5414: 0xc085114  jal         func_214450
    ctx->pc = 0x2D5414u;
    SET_GPR_U32(ctx, 31, 0x2D541Cu);
    ctx->pc = 0x214450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214450u, 0x2D5414u, 0x2D541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D541Cu;
label_2d541c:
    // 0x2d541c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d541cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5420: 0x12000062  beqz        $s0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2D5420u;
    {
        const bool branch_taken_0x2d5420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5420u;
        // 0x2d5424: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5420) {
            ctx->pc = 0x2D55ACu;
            goto label_2d55ac;
        }
    }
    ctx->pc = 0x2D5428u;
    // 0x2d5428: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x2d5428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x2d542c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2d542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d5430: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2d5430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2d5434: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5434u;
    {
        const bool branch_taken_0x2d5434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5434u;
        // 0x2d5438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5434) {
            ctx->pc = 0x2D5448u;
            goto label_2d5448;
        }
    }
    ctx->pc = 0x2D543Cu;
    // 0x2d543c: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x2d543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x2d5440: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5440u;
    {
        const bool branch_taken_0x2d5440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d5440) {
            ctx->pc = 0x2D544Cu;
            goto label_2d544c;
        }
    }
    ctx->pc = 0x2D5448u;
label_2d5448:
    // 0x2d5448: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d544c:
    // 0x2d544c: 0x54a00058  bnel        $a1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x2D544Cu;
    {
        const bool branch_taken_0x2d544c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d544c) {
            ctx->pc = 0x2D5450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D544Cu;
            // 0x2d5450: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D55B0u;
            goto label_2d55b0;
        }
    }
    ctx->pc = 0x2D5454u;
    // 0x2d5454: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d5454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d5458: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2d5458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d545c: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x2d545cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2d5460: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5460u;
    {
        const bool branch_taken_0x2d5460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D5464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5460u;
        // 0x2d5464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5460) {
            ctx->pc = 0x2D5474u;
            goto label_2d5474;
        }
    }
    ctx->pc = 0x2D5468u;
    // 0x2d5468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d546c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D546Cu;
    {
        const bool branch_taken_0x2d546c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d546c) {
            ctx->pc = 0x2D5478u;
            goto label_2d5478;
        }
    }
    ctx->pc = 0x2D5474u;
label_2d5474:
    // 0x2d5474: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d5478:
    // 0x2d5478: 0x54a0004d  bnel        $a1, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x2D5478u;
    {
        const bool branch_taken_0x2d5478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5478) {
            ctx->pc = 0x2D547Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5478u;
            // 0x2d547c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D55B0u;
            goto label_2d55b0;
        }
    }
    ctx->pc = 0x2D5480u;
    // 0x2d5480: 0xc08215c  jal         func_208570
    ctx->pc = 0x2D5480u;
    SET_GPR_U32(ctx, 31, 0x2D5488u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x2D5480u, 0x2D5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5488u;
label_2d5488:
    // 0x2d5488: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2d5488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2d548c: 0x50430048  beql        $v0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2D548Cu;
    {
        const bool branch_taken_0x2d548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d548c) {
            ctx->pc = 0x2D5490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D548Cu;
            // 0x2d5490: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D55B0u;
            goto label_2d55b0;
        }
    }
    ctx->pc = 0x2D5494u;
    // 0x2d5494: 0xc08215c  jal         func_208570
    ctx->pc = 0x2D5494u;
    SET_GPR_U32(ctx, 31, 0x2D549Cu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x2D5494u, 0x2D549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D549Cu;
label_2d549c:
    // 0x2d549c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2d549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d54a0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D54A0u;
    {
        const bool branch_taken_0x2d54a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d54a0) {
            ctx->pc = 0x2D54BCu;
            goto label_2d54bc;
        }
    }
    ctx->pc = 0x2D54A8u;
    // 0x2d54a8: 0xc08215e  jal         func_208578
    ctx->pc = 0x2D54A8u;
    SET_GPR_U32(ctx, 31, 0x2D54B0u);
    ctx->pc = 0x208578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208578u, 0x2D54A8u, 0x2D54B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54B0u;
label_2d54b0:
    // 0x2d54b0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2d54b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d54b4: 0x5043003e  beql        $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D54B4u;
    {
        const bool branch_taken_0x2d54b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d54b4) {
            ctx->pc = 0x2D54B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D54B4u;
            // 0x2d54b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D55B0u;
            goto label_2d55b0;
        }
    }
    ctx->pc = 0x2D54BCu;
label_2d54bc:
    // 0x2d54bc: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2D54BCu;
    SET_GPR_U32(ctx, 31, 0x2D54C4u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2D54BCu, 0x2D54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54C4u;
label_2d54c4:
    // 0x2d54c4: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D54C4u;
    {
        const bool branch_taken_0x2d54c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d54c4) {
            ctx->pc = 0x2D54C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D54C4u;
            // 0x2d54c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D55B0u;
            goto label_2d55b0;
        }
    }
    ctx->pc = 0x2D54CCu;
    // 0x2d54cc: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2d54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2d54d0: 0x2a0303e8  slti        $v1, $s0, 0x3E8
    ctx->pc = 0x2d54d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2d54d4: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2d54d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2d54d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d54dc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d54dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d54e0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D54E0u;
    {
        const bool branch_taken_0x2d54e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54E0u;
        // 0x2d54e4: 0x8c928884  lw          $s2, -0x777C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54e0) {
            ctx->pc = 0x2D5500u;
            goto label_2d5500;
        }
    }
    ctx->pc = 0x2D54E8u;
    // 0x2d54e8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2d54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d54ec: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2d54ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d54f0: 0x52300b  movn        $a2, $v0, $s2
    ctx->pc = 0x2d54f0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x2d54f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D54F4u;
    {
        const bool branch_taken_0x2d54f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54F4u;
        // 0x2d54f8: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54f4) {
            ctx->pc = 0x2D5510u;
            goto label_2d5510;
        }
    }
    ctx->pc = 0x2D54FCu;
    // 0x2d54fc: 0x0  nop
    ctx->pc = 0x2d54fcu;
    // NOP
label_2d5500:
    // 0x2d5500: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2d5500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d5504: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2d5504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d5508: 0x52300b  movn        $a2, $v0, $s2
    ctx->pc = 0x2d5508u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x2d550c: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x2d550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_2d5510:
    // 0x2d5510: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d5510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d5514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5518: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d551c: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D551Cu;
    SET_GPR_U32(ctx, 31, 0x2D5524u);
    ctx->pc = 0x2D5520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D551Cu;
    // 0x2d5520: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D551Cu, 0x2D5524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5524u;
label_2d5524:
    // 0x2d5524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d5524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5528: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D5528u;
    {
        const bool branch_taken_0x2d5528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5528u;
        // 0x2d552c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5528) {
            ctx->pc = 0x2D5564u;
            goto label_2d5564;
        }
    }
    ctx->pc = 0x2D5530u;
    // 0x2d5530: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2d5530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d5534: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x2d5534u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2d5538:
    // 0x2d5538: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2d5538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d553c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d553cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d5540: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2d5540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2d5544: 0x2a040003  slti        $a0, $s0, 0x3
    ctx->pc = 0x2d5544u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d5548: 0x3012  mflo        $a2
    ctx->pc = 0x2d5548u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2d554c: 0x2810  mfhi        $a1
    ctx->pc = 0x2d554cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2d5550: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2d5550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2d5554: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5554u;
    {
        const bool branch_taken_0x2d5554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5554u;
        // 0x2d5558: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5554) {
            ctx->pc = 0x2D5564u;
            goto label_2d5564;
        }
    }
    ctx->pc = 0x2D555Cu;
    // 0x2d555c: 0x54c0fff6  bnel        $a2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D555Cu;
    {
        const bool branch_taken_0x2d555c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d555c) {
            ctx->pc = 0x2D5560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D555Cu;
            // 0x2d5560: 0x47001a  div         $zero, $v0, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5538;
        }
    }
    ctx->pc = 0x2D5564u;
label_2d5564:
    // 0x2d5564: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d5564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d5568: 0x6000010  bltz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5568u;
    {
        const bool branch_taken_0x2d5568 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2D556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5568u;
        // 0x2d556c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5568) {
            ctx->pc = 0x2D55ACu;
            goto label_2d55ac;
        }
    }
    ctx->pc = 0x2D5570u;
label_2d5570:
    // 0x2d5570: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2d5570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d5574: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d5574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d5578: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2d5578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2d557c: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x2d557cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2d5580: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d5580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5584: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2d5584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2d5588: 0x24c60019  addiu       $a2, $a2, 0x19
    ctx->pc = 0x2d5588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25));
    // 0x2d558c: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d5590: 0x24a5003f  addiu       $a1, $a1, 0x3F
    ctx->pc = 0x2d5590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x2d5594: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5598: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d559c: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D559Cu;
    SET_GPR_U32(ctx, 31, 0x2D55A4u);
    ctx->pc = 0x2D55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D559Cu;
    // 0x2d55a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D559Cu, 0x2D55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55A4u;
label_2d55a4:
    // 0x2d55a4: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D55A4u;
    {
        const bool branch_taken_0x2d55a4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2D55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55A4u;
        // 0x2d55a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d55a4) {
            ctx->pc = 0x2D5570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5570;
        }
    }
    ctx->pc = 0x2D55ACu;
label_2d55ac:
    // 0x2d55ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d55acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d55b0:
    // 0x2d55b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d55b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d55b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d55b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d55b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d55b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d55bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D55BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55BCu;
        // 0x2d55c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D55BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D55C4u;
    // 0x2d55c4: 0x0  nop
    ctx->pc = 0x2d55c4u;
    // NOP
    ctx->pc = 0x2d55c8u;
}
