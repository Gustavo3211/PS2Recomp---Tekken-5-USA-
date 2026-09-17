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

// Function: sub_00217898
// Address: 0x217898 - 0x217a58
void sub_00217898_0x217898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217898_0x217898");
#endif

    switch (ctx->pc) {
        case 0x217924u: goto label_217924;
        case 0x21795cu: goto label_21795c;
        case 0x217970u: goto label_217970;
        case 0x217990u: goto label_217990;
        case 0x2179a4u: goto label_2179a4;
        case 0x2179b4u: goto label_2179b4;
        case 0x2179e8u: goto label_2179e8;
        case 0x2179f4u: goto label_2179f4;
        case 0x217a00u: goto label_217a00;
        case 0x217a34u: goto label_217a34;
        case 0x217a3cu: goto label_217a3c;
        default: break;
    }

    ctx->pc = 0x217898u;

    // 0x217898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21789c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2178a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2178a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2178a4: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2178a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2178a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2178a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2178ac: 0x26238858  addiu       $v1, $s1, -0x77A8
    ctx->pc = 0x2178acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936664));
    // 0x2178b0: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x2178b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2178b4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2178b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2178b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2178b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2178bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2178BCu;
    {
        const bool branch_taken_0x2178bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2178C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178BCu;
        // 0x2178c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178bc) {
            ctx->pc = 0x2178D4u;
            goto label_2178d4;
        }
    }
    ctx->pc = 0x2178C4u;
    // 0x2178c4: 0x8f82a850  lw          $v0, -0x57B0($gp)
    ctx->pc = 0x2178c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x2178c8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2178c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2178cc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2178CCu;
    {
        const bool branch_taken_0x2178cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2178D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178CCu;
        // 0x2178d0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178cc) {
            ctx->pc = 0x217918u;
            goto label_217918;
        }
    }
    ctx->pc = 0x2178D4u;
label_2178d4:
    // 0x2178d4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2178d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2178d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2178D8u;
    {
        const bool branch_taken_0x2178d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2178d8) {
            ctx->pc = 0x2178DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2178D8u;
            // 0x2178dc: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2178F4u;
            goto label_2178f4;
        }
    }
    ctx->pc = 0x2178E0u;
    // 0x2178e0: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x2178e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x2178e4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2178e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2178e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2178E8u;
    {
        const bool branch_taken_0x2178e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2178ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178E8u;
        // 0x2178ec: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178e8) {
            ctx->pc = 0x217918u;
            goto label_217918;
        }
    }
    ctx->pc = 0x2178F0u;
    // 0x2178f0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2178f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2178f4:
    // 0x2178f4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2178F4u;
    {
        const bool branch_taken_0x2178f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2178f4) {
            ctx->pc = 0x217968u;
            goto label_217968;
        }
    }
    ctx->pc = 0x2178FCu;
    // 0x2178fc: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x2178fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x217900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217904: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x217904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x217908: 0x8c63a850  lw          $v1, -0x57B0($v1)
    ctx->pc = 0x217908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944848)));
    // 0x21790c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x21790cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x217910: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x217910u;
    {
        const bool branch_taken_0x217910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217910u;
        // 0x217914: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217910) {
            ctx->pc = 0x217968u;
            goto label_217968;
        }
    }
    ctx->pc = 0x217918u;
label_217918:
    // 0x217918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x217918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21791c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x21791Cu;
    SET_GPR_U32(ctx, 31, 0x217924u);
    ctx->pc = 0x217920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21791Cu;
    // 0x217920: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x21791Cu, 0x217924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217924u;
label_217924:
    // 0x217924: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x217924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x217928: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x217928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21792c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21792Cu;
    {
        const bool branch_taken_0x21792c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21792c) {
            ctx->pc = 0x217930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21792Cu;
            // 0x217930: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217948u;
            goto label_217948;
        }
    }
    ctx->pc = 0x217934u;
    // 0x217934: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x217934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x217938: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x217938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21793c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21793Cu;
    {
        const bool branch_taken_0x21793c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21793c) {
            ctx->pc = 0x217940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21793Cu;
            // 0x217940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217954u;
            goto label_217954;
        }
    }
    ctx->pc = 0x217944u;
    // 0x217944: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x217944u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_217948:
    // 0x217948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21794c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x21794cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x217950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217954:
    // 0x217954: 0xc0902c8  jal         func_240B20
    ctx->pc = 0x217954u;
    SET_GPR_U32(ctx, 31, 0x21795Cu);
    ctx->pc = 0x217958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217954u;
    // 0x217958: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240B20u, 0x217954u, 0x21795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21795Cu;
label_21795c:
    // 0x21795c: 0x26238858  addiu       $v1, $s1, -0x77A8
    ctx->pc = 0x21795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936664));
    // 0x217960: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x217960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x217964: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x217964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_217968:
    // 0x217968: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x217968u;
    SET_GPR_U32(ctx, 31, 0x217970u);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x217968u, 0x217970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217970u;
label_217970:
    // 0x217970: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217970u;
    {
        const bool branch_taken_0x217970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217970u;
        // 0x217974: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217970) {
            ctx->pc = 0x217988u;
            goto label_217988;
        }
    }
    ctx->pc = 0x217978u;
    // 0x217978: 0x26238858  addiu       $v1, $s1, -0x77A8
    ctx->pc = 0x217978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936664));
    // 0x21797c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x21797cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x217980: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x217980u;
    {
        const bool branch_taken_0x217980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217980u;
        // 0x217984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217980) {
            ctx->pc = 0x217A40u;
            goto label_217a40;
        }
    }
    ctx->pc = 0x217988u;
label_217988:
    // 0x217988: 0xc09031c  jal         func_240C70
    ctx->pc = 0x217988u;
    SET_GPR_U32(ctx, 31, 0x217990u);
    ctx->pc = 0x240C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240C70u, 0x217988u, 0x217990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217990u;
label_217990:
    // 0x217990: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x217990u;
    {
        const bool branch_taken_0x217990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217990) {
            ctx->pc = 0x217994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217990u;
            // 0x217994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217A40u;
            goto label_217a40;
        }
    }
    ctx->pc = 0x217998u;
    // 0x217998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21799c: 0xc08520c  jal         func_214830
    ctx->pc = 0x21799Cu;
    SET_GPR_U32(ctx, 31, 0x2179A4u);
    ctx->pc = 0x2179A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21799Cu;
    // 0x2179a0: 0x3c11003e  lui         $s1, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214830u, 0x21799Cu, 0x2179A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179A4u;
label_2179a4:
    // 0x2179a4: 0x262437e0  addiu       $a0, $s1, 0x37E0
    ctx->pc = 0x2179a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
    // 0x2179a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2179a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2179ac: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2179ACu;
    SET_GPR_U32(ctx, 31, 0x2179B4u);
    ctx->pc = 0x2179B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179ACu;
    // 0x2179b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2179ACu, 0x2179B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179B4u;
label_2179b4:
    // 0x2179b4: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2179b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2179b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2179b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2179bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2179BCu;
    {
        const bool branch_taken_0x2179bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2179bc) {
            ctx->pc = 0x2179C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2179BCu;
            // 0x2179c0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2179D8u;
            goto label_2179d8;
        }
    }
    ctx->pc = 0x2179C4u;
    // 0x2179c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2179c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2179c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2179c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2179cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2179CCu;
    {
        const bool branch_taken_0x2179cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2179cc) {
            ctx->pc = 0x2179E0u;
            goto label_2179e0;
        }
    }
    ctx->pc = 0x2179D4u;
    // 0x2179d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2179d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2179d8:
    // 0x2179d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2179d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179dc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2179dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2179e0:
    // 0x2179e0: 0xc090212  jal         func_240848
    ctx->pc = 0x2179E0u;
    SET_GPR_U32(ctx, 31, 0x2179E8u);
    ctx->pc = 0x240848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240848u, 0x2179E0u, 0x2179E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179E8u;
label_2179e8:
    // 0x2179e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2179e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179ec: 0xc0b6a76  jal         func_2DA9D8
    ctx->pc = 0x2179ECu;
    SET_GPR_U32(ctx, 31, 0x2179F4u);
    ctx->pc = 0x2179F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179ECu;
    // 0x2179f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9D8u, 0x2179ECu, 0x2179F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179F4u;
label_2179f4:
    // 0x2179f4: 0x262437e0  addiu       $a0, $s1, 0x37E0
    ctx->pc = 0x2179f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
    // 0x2179f8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2179F8u;
    SET_GPR_U32(ctx, 31, 0x217A00u);
    ctx->pc = 0x2179FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179F8u;
    // 0x2179fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2179F8u, 0x217A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A00u;
label_217a00:
    // 0x217a00: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x217a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x217a04: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x217a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217a08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x217A08u;
    {
        const bool branch_taken_0x217a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a08) {
            ctx->pc = 0x217A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217A08u;
            // 0x217a0c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217A24u;
            goto label_217a24;
        }
    }
    ctx->pc = 0x217A10u;
    // 0x217a10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x217a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x217a14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x217a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x217a18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217A18u;
    {
        const bool branch_taken_0x217a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217a18) {
            ctx->pc = 0x217A2Cu;
            goto label_217a2c;
        }
    }
    ctx->pc = 0x217A20u;
    // 0x217a20: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x217a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_217a24:
    // 0x217a24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a28: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x217a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_217a2c:
    // 0x217a2c: 0xc090212  jal         func_240848
    ctx->pc = 0x217A2Cu;
    SET_GPR_U32(ctx, 31, 0x217A34u);
    ctx->pc = 0x240848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240848u, 0x217A2Cu, 0x217A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A34u;
label_217a34:
    // 0x217a34: 0xc0b6a28  jal         func_2DA8A0
    ctx->pc = 0x217A34u;
    SET_GPR_U32(ctx, 31, 0x217A3Cu);
    ctx->pc = 0x217A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A34u;
    // 0x217a38: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8A0u, 0x217A34u, 0x217A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A3Cu;
label_217a3c:
    // 0x217a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217a40:
    // 0x217a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217a48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x217A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A4Cu;
        // 0x217a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217A54u;
    // 0x217a54: 0x0  nop
    ctx->pc = 0x217a54u;
    // NOP
    ctx->pc = 0x217a58u;
}
