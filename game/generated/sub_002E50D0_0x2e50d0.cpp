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

// Function: sub_002E50D0
// Address: 0x2e50d0 - 0x2e51f0
void sub_002E50D0_0x2e50d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E50D0_0x2e50d0");
#endif

    switch (ctx->pc) {
        case 0x2e5120u: goto label_2e5120;
        case 0x2e5188u: goto label_2e5188;
        case 0x2e5194u: goto label_2e5194;
        case 0x2e51b8u: goto label_2e51b8;
        default: break;
    }

    ctx->pc = 0x2e50d0u;

    // 0x2e50d0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2e50d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2e50d4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2e50d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2e50d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e50d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50dc: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2e50dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x2e50e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e50e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50e4: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2e50e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2e50e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e50e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50ec: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x2e50ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x2e50f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2e50f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50f4: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2e50f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2e50f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e50f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50fc: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2e50fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2e5100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5104: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E5104u;
    {
        const bool branch_taken_0x2e5104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5104u;
        // 0x2e5108: 0xffbf0130  sd          $ra, 0x130($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5104) {
            ctx->pc = 0x2E5174u;
            goto label_2e5174;
        }
    }
    ctx->pc = 0x2E510Cu;
    // 0x2e510c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2e510cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e5110: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E5110u;
    {
        const bool branch_taken_0x2e5110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5110u;
        // 0x2e5114: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5110) {
            ctx->pc = 0x2E5174u;
            goto label_2e5174;
        }
    }
    ctx->pc = 0x2E5118u;
    // 0x2e5118: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2e5118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e511c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e511cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5120:
    // 0x2e5120: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2e5120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2e5124: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2e5124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e5128: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5128u;
    {
        const bool branch_taken_0x2e5128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2e5128) {
            ctx->pc = 0x2E5148u;
            goto label_2e5148;
        }
    }
    ctx->pc = 0x2E5130u;
    // 0x2e5130: 0x54a6000b  bnel        $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2E5130u;
    {
        const bool branch_taken_0x2e5130 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2e5130) {
            ctx->pc = 0x2E5134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5130u;
            // 0x2e5134: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5160u;
            goto label_2e5160;
        }
    }
    ctx->pc = 0x2E5138u;
    // 0x2e5138: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2e5138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e513c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e513cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e5140: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5140u;
    {
        const bool branch_taken_0x2e5140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5140u;
        // 0x2e5144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5140) {
            ctx->pc = 0x2E515Cu;
            goto label_2e515c;
        }
    }
    ctx->pc = 0x2E5148u;
label_2e5148:
    // 0x2e5148: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5148u;
    {
        const bool branch_taken_0x2e5148 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5148u;
        // 0x2e514c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5148) {
            ctx->pc = 0x2E5158u;
            goto label_2e5158;
        }
    }
    ctx->pc = 0x2E5150u;
    // 0x2e5150: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e5150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e5154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e5154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5158:
    // 0x2e5158: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e5158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e515c:
    // 0x2e515c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e515cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e5160:
    // 0x2e5160: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5160u;
    {
        const bool branch_taken_0x2e5160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5160) {
            ctx->pc = 0x2E5164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5160u;
            // 0x2e5164: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5178u;
            goto label_2e5178;
        }
    }
    ctx->pc = 0x2E5168u;
    // 0x2e5168: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2e5168u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e516c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E516Cu;
    {
        const bool branch_taken_0x2e516c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E516Cu;
        // 0x2e5170: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e516c) {
            ctx->pc = 0x2E5120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5120;
        }
    }
    ctx->pc = 0x2E5174u;
label_2e5174:
    // 0x2e5174: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2e5174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e5178:
    // 0x2e5178: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2e5178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e517c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e517cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5180: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5180u;
    {
        const bool branch_taken_0x2e5180 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2E5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5180u;
        // 0x2e5184: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5180) {
            ctx->pc = 0x2E51A4u;
            goto label_2e51a4;
        }
    }
    ctx->pc = 0x2E5188u;
label_2e5188:
    // 0x2e5188: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x2e5188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e518c: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2E518Cu;
    SET_GPR_U32(ctx, 31, 0x2E5194u);
    ctx->pc = 0x2E5190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E518Cu;
    // 0x2e5190: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2E518Cu, 0x2E5194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5194u;
label_2e5194:
    // 0x2e5194: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x2e5194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e5198: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e519c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E519Cu;
    {
        const bool branch_taken_0x2e519c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E519Cu;
        // 0x2e51a0: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e519c) {
            ctx->pc = 0x2E5188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5188;
        }
    }
    ctx->pc = 0x2E51A4u;
label_2e51a4:
    // 0x2e51a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e51a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e51a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e51acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51b0: 0xc0b949c  jal         func_2E5270
    ctx->pc = 0x2E51B0u;
    SET_GPR_U32(ctx, 31, 0x2E51B8u);
    ctx->pc = 0x2E51B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51B0u;
    // 0x2e51b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5270u, 0x2E51B0u, 0x2E51B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51B8u;
label_2e51b8:
    // 0x2e51b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e51bc: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2e51bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2e51c0: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2e51c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e51c4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e51c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e51c8: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2e51c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2e51cc: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2e51ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2e51d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e51d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51d4: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2e51d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2e51d8: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2e51d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2e51dc: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x2e51dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2e51e0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2e51e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2e51e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E51E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E51E4u;
        // 0x2e51e8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E51E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E51ECu;
    // 0x2e51ec: 0x0  nop
    ctx->pc = 0x2e51ecu;
    // NOP
    ctx->pc = 0x2e51f0u;
}
