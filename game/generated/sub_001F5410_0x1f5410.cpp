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

// Function: sub_001F5410
// Address: 0x1f5410 - 0x1f5668
void sub_001F5410_0x1f5410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5410_0x1f5410");
#endif

    switch (ctx->pc) {
        case 0x1f544cu: goto label_1f544c;
        case 0x1f54dcu: goto label_1f54dc;
        case 0x1f55d8u: goto label_1f55d8;
        case 0x1f55e8u: goto label_1f55e8;
        default: break;
    }

    ctx->pc = 0x1f5410u;

    // 0x1f5410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5418: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f541c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5424: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f5424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5428: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f542c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f5430: 0x92020564  lbu         $v0, 0x564($s0)
    ctx->pc = 0x1f5430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x1f5434: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5434u;
    {
        const bool branch_taken_0x1f5434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5434u;
        // 0x1f5438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5434) {
            ctx->pc = 0x1F5448u;
            goto label_1f5448;
        }
    }
    ctx->pc = 0x1F543Cu;
    // 0x1f543c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F543Cu;
    {
        const bool branch_taken_0x1f543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F543Cu;
        // 0x1f5440: 0x26120520  addiu       $s2, $s0, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f543c) {
            ctx->pc = 0x1F5478u;
            goto label_1f5478;
        }
    }
    ctx->pc = 0x1F5444u;
    // 0x1f5444: 0x0  nop
    ctx->pc = 0x1f5444u;
    // NOP
label_1f5448:
    // 0x1f5448: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f5448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f544c:
    // 0x1f544c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1f544cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f5450: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1f5450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f5454: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5454u;
    {
        const bool branch_taken_0x1f5454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5454u;
        // 0x1f5458: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5454) {
            ctx->pc = 0x1F5478u;
            goto label_1f5478;
        }
    }
    ctx->pc = 0x1F545Cu;
    // 0x1f545c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1f545cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f5460: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1f5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1f5464: 0x90430564  lbu         $v1, 0x564($v0)
    ctx->pc = 0x1f5464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x1f5468: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F5468u;
    {
        const bool branch_taken_0x1f5468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5468) {
            ctx->pc = 0x1F546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5468u;
            // 0x1f546c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F544Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f544c;
        }
    }
    ctx->pc = 0x1F5470u;
    // 0x1f5470: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x1f5470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1f5474: 0x24520520  addiu       $s2, $v0, 0x520
    ctx->pc = 0x1f5474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1312));
label_1f5478:
    // 0x1f5478: 0x5240006b  beql        $s2, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x1F5478u;
    {
        const bool branch_taken_0x1f5478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5478) {
            ctx->pc = 0x1F547Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5478u;
            // 0x1f547c: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5628u;
            goto label_1f5628;
        }
    }
    ctx->pc = 0x1F5480u;
    // 0x1f5480: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1f5480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f5484: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F5484u;
    {
        const bool branch_taken_0x1f5484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5484u;
        // 0x1f5488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5484) {
            ctx->pc = 0x1F54D4u;
            goto label_1f54d4;
        }
    }
    ctx->pc = 0x1F548Cu;
    // 0x1f548c: 0x8f86a530  lw          $a2, -0x5AD0($gp)
    ctx->pc = 0x1f548cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x1f5490: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x1f5490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x1f5494: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5494u;
    {
        const bool branch_taken_0x1f5494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5494u;
        // 0x1f5498: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5494) {
            ctx->pc = 0x1F54B4u;
            goto label_1f54b4;
        }
    }
    ctx->pc = 0x1F549Cu;
    // 0x1f549c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f549cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f54a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f54a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f54a4: 0x8c8288d0  lw          $v0, -0x7730($a0)
    ctx->pc = 0x1f54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f54a8: 0x84430180  lh          $v1, 0x180($v0)
    ctx->pc = 0x1f54a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x1f54ac: 0x1065005d  beq         $v1, $a1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1F54ACu;
    {
        const bool branch_taken_0x1f54ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54ACu;
        // 0x1f54b0: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54ac) {
            ctx->pc = 0x1F5624u;
            goto label_1f5624;
        }
    }
    ctx->pc = 0x1F54B4u;
label_1f54b4:
    // 0x1f54b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F54B4u;
    {
        const bool branch_taken_0x1f54b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54B4u;
        // 0x1f54b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54b4) {
            ctx->pc = 0x1F54D4u;
            goto label_1f54d4;
        }
    }
    ctx->pc = 0x1F54BCu;
    // 0x1f54bc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f54bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f54c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f54c4: 0x8c8288d4  lw          $v0, -0x772C($a0)
    ctx->pc = 0x1f54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f54c8: 0x84430180  lh          $v1, 0x180($v0)
    ctx->pc = 0x1f54c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x1f54cc: 0x10650055  beq         $v1, $a1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1F54CCu;
    {
        const bool branch_taken_0x1f54cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54CCu;
        // 0x1f54d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54cc) {
            ctx->pc = 0x1F5624u;
            goto label_1f5624;
        }
    }
    ctx->pc = 0x1F54D4u;
label_1f54d4:
    // 0x1f54d4: 0xc07d19a  jal         func_1F4668
    ctx->pc = 0x1F54D4u;
    SET_GPR_U32(ctx, 31, 0x1F54DCu);
    ctx->pc = 0x1F54D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54D4u;
    // 0x1f54d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4668u, 0x1F54D4u, 0x1F54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54DCu;
label_1f54dc:
    // 0x1f54dc: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x1F54DCu;
    {
        const bool branch_taken_0x1f54dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f54dc) {
            ctx->pc = 0x1F54E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F54DCu;
            // 0x1f54e0: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5628u;
            goto label_1f5628;
        }
    }
    ctx->pc = 0x1F54E4u;
    // 0x1f54e4: 0x96260150  lhu         $a2, 0x150($s1)
    ctx->pc = 0x1f54e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1f54e8: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x1f54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x1f54ec: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1f54ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1f54f0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F54F0u;
    {
        const bool branch_taken_0x1f54f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54F0u;
        // 0x1f54f4: 0x2402041f  addiu       $v0, $zero, 0x41F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54f0) {
            ctx->pc = 0x1F5508u;
            goto label_1f5508;
        }
    }
    ctx->pc = 0x1F54F8u;
    // 0x1f54f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F54F8u;
    {
        const bool branch_taken_0x1f54f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54F8u;
        // 0x1f54fc: 0x24020907  addiu       $v0, $zero, 0x907 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2311));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54f8) {
            ctx->pc = 0x1F5508u;
            goto label_1f5508;
        }
    }
    ctx->pc = 0x1F5500u;
    // 0x1f5500: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F5500u;
    {
        const bool branch_taken_0x1f5500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5500u;
        // 0x1f5504: 0x24020b07  addiu       $v0, $zero, 0xB07 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2823));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5500) {
            ctx->pc = 0x1F5578u;
            goto label_1f5578;
        }
    }
    ctx->pc = 0x1F5508u;
label_1f5508:
    // 0x1f5508: 0x92050185  lbu         $a1, 0x185($s0)
    ctx->pc = 0x1f5508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 389)));
    // 0x1f550c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1f550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f5510: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1f5510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f5514: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5514u;
    {
        const bool branch_taken_0x1f5514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5514u;
        // 0x1f5518: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5514) {
            ctx->pc = 0x1F5524u;
            goto label_1f5524;
        }
    }
    ctx->pc = 0x1F551Cu;
    // 0x1f551c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F551Cu;
    {
        const bool branch_taken_0x1f551c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F551Cu;
        // 0x1f5520: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f551c) {
            ctx->pc = 0x1F5558u;
            goto label_1f5558;
        }
    }
    ctx->pc = 0x1F5524u;
label_1f5524:
    // 0x1f5524: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1f5524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1f5528: 0x86040096  lh          $a0, 0x96($s0)
    ctx->pc = 0x1f5528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1f552c: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x1f552cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1f5530: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f5530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f5534: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5534u;
    {
        const bool branch_taken_0x1f5534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5534) {
            ctx->pc = 0x1F5538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5534u;
            // 0x1f5538: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5554u;
            goto label_1f5554;
        }
    }
    ctx->pc = 0x1F553Cu;
    // 0x1f553c: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x1f553cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1f5540: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f5544: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1f5544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f5548: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F5548u;
    {
        const bool branch_taken_0x1f5548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5548) {
            ctx->pc = 0x1F554Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5548u;
            // 0x1f554c: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5628u;
            goto label_1f5628;
        }
    }
    ctx->pc = 0x1F5550u;
    // 0x1f5550: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1f5550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1f5554:
    // 0x1f5554: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1f5554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1f5558:
    // 0x1f5558: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5558u;
    {
        const bool branch_taken_0x1f5558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5558u;
        // 0x1f555c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5558) {
            ctx->pc = 0x1F5568u;
            goto label_1f5568;
        }
    }
    ctx->pc = 0x1F5560u;
    // 0x1f5560: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5560u;
    {
        const bool branch_taken_0x1f5560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5560u;
        // 0x1f5564: 0x24020b07  addiu       $v0, $zero, 0xB07 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2823));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5560) {
            ctx->pc = 0x1F5578u;
            goto label_1f5578;
        }
    }
    ctx->pc = 0x1F5568u;
label_1f5568:
    // 0x1f5568: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x1f5568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x1f556c: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F556Cu;
    {
        const bool branch_taken_0x1f556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f556c) {
            ctx->pc = 0x1F5570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F556Cu;
            // 0x1f5570: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5628u;
            goto label_1f5628;
        }
    }
    ctx->pc = 0x1F5574u;
    // 0x1f5574: 0x24020b07  addiu       $v0, $zero, 0xB07
    ctx->pc = 0x1f5574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2823));
label_1f5578:
    // 0x1f5578: 0x54c2000a  bnel        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5578u;
    {
        const bool branch_taken_0x1f5578 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5578) {
            ctx->pc = 0x1F557Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5578u;
            // 0x1f557c: 0x96220150  lhu         $v0, 0x150($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F55A4u;
            goto label_1f55a4;
        }
    }
    ctx->pc = 0x1F5580u;
    // 0x1f5580: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x1f5580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x1f5584: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5584u;
    {
        const bool branch_taken_0x1f5584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5584) {
            ctx->pc = 0x1F5588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5584u;
            // 0x1f5588: 0x96220150  lhu         $v0, 0x150($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F55A4u;
            goto label_1f55a4;
        }
    }
    ctx->pc = 0x1F558Cu;
    // 0x1f558c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1f558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1f5590: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1f5590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f5594: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f5594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1f5598: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F5598u;
    {
        const bool branch_taken_0x1f5598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5598) {
            ctx->pc = 0x1F559Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5598u;
            // 0x1f559c: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5628u;
            goto label_1f5628;
        }
    }
    ctx->pc = 0x1F55A0u;
    // 0x1f55a0: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x1f55a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
label_1f55a4:
    // 0x1f55a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f55a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f55a8: 0x92030198  lbu         $v1, 0x198($s0)
    ctx->pc = 0x1f55a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x1f55ac: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x1f55acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f55b0: 0x960500cc  lhu         $a1, 0xCC($s0)
    ctx->pc = 0x1f55b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f55b4: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x1f55b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x1f55b8: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1f55b8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f55bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1f55bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1f55c0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f55c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f55c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F55C4u;
    {
        const bool branch_taken_0x1f55c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55C4u;
        // 0x1f55c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f55c4) {
            ctx->pc = 0x1F5624u;
            goto label_1f5624;
        }
    }
    ctx->pc = 0x1F55CCu;
    // 0x1f55cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f55ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55d0: 0xc0837b6  jal         func_20DED8
    ctx->pc = 0x1F55D0u;
    SET_GPR_U32(ctx, 31, 0x1F55D8u);
    ctx->pc = 0x1F55D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55D0u;
    // 0x1f55d4: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED8u, 0x1F55D0u, 0x1F55D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55D8u;
label_1f55d8:
    // 0x1f55d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F55D8u;
    {
        const bool branch_taken_0x1f55d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55D8u;
        // 0x1f55dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f55d8) {
            ctx->pc = 0x1F5624u;
            goto label_1f5624;
        }
    }
    ctx->pc = 0x1F55E0u;
    // 0x1f55e0: 0xc07d18a  jal         func_1F4628
    ctx->pc = 0x1F55E0u;
    SET_GPR_U32(ctx, 31, 0x1F55E8u);
    ctx->pc = 0x1F55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55E0u;
    // 0x1f55e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4628u, 0x1F55E0u, 0x1F55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55E8u;
label_1f55e8:
    // 0x1f55e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f55ec: 0xa222018a  sb          $v0, 0x18A($s1)
    ctx->pc = 0x1f55ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 394), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f55f0: 0xa2220188  sb          $v0, 0x188($s1)
    ctx->pc = 0x1f55f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f55f4: 0xa22201f0  sb          $v0, 0x1F0($s1)
    ctx->pc = 0x1f55f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 496), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f55f8: 0xa2020187  sb          $v0, 0x187($s0)
    ctx->pc = 0x1f55f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 391), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f55fc: 0xa20201ec  sb          $v0, 0x1EC($s0)
    ctx->pc = 0x1f55fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 492), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5600: 0xa2420044  sb          $v0, 0x44($s2)
    ctx->pc = 0x1f5600u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5604: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f5604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f5608: 0x8622014e  lh          $v0, 0x14E($s1)
    ctx->pc = 0x1f5608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    // 0x1f560c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F560Cu;
    {
        const bool branch_taken_0x1f560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F560Cu;
        // 0x1f5610: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f560c) {
            ctx->pc = 0x1F5620u;
            goto label_1f5620;
        }
    }
    ctx->pc = 0x1F5614u;
    // 0x1f5614: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x1f5614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x1f5618: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5618u;
    {
        const bool branch_taken_0x1f5618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5618u;
        // 0x1f561c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5618) {
            ctx->pc = 0x1F5624u;
            goto label_1f5624;
        }
    }
    ctx->pc = 0x1F5620u;
label_1f5620:
    // 0x1f5620: 0xa60202a2  sh          $v0, 0x2A2($s0)
    ctx->pc = 0x1f5620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 674), (uint16_t)GPR_U32(ctx, 2));
label_1f5624:
    // 0x1f5624: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1f5624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_1f5628:
    // 0x1f5628: 0x86240096  lh          $a0, 0x96($s1)
    ctx->pc = 0x1f5628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x1f562c: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x1f562cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x1f5630: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5630u;
    {
        const bool branch_taken_0x1f5630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5630u;
        // 0x1f5634: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5630) {
            ctx->pc = 0x1F5650u;
            goto label_1f5650;
        }
    }
    ctx->pc = 0x1F5638u;
    // 0x1f5638: 0x92220188  lbu         $v0, 0x188($s1)
    ctx->pc = 0x1f5638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1f563c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F563Cu;
    {
        const bool branch_taken_0x1f563c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f563c) {
            ctx->pc = 0x1F5640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F563Cu;
            // 0x1f5640: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5654u;
            goto label_1f5654;
        }
    }
    ctx->pc = 0x1F5644u;
    // 0x1f5644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5648: 0xa22201f1  sb          $v0, 0x1F1($s1)
    ctx->pc = 0x1f5648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 497), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f564c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f564cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5650:
    // 0x1f5650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f5654:
    // 0x1f5654: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5658: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f5658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f565c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F565Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F565Cu;
        // 0x1f5660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F565Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5664u;
    // 0x1f5664: 0x0  nop
    ctx->pc = 0x1f5664u;
    // NOP
    ctx->pc = 0x1f5668u;
}
