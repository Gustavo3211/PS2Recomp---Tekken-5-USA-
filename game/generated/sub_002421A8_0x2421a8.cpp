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

// Function: sub_002421A8
// Address: 0x2421a8 - 0x2422f8
void sub_002421A8_0x2421a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002421A8_0x2421a8");
#endif

    switch (ctx->pc) {
        case 0x2421f0u: goto label_2421f0;
        case 0x2421f8u: goto label_2421f8;
        case 0x242210u: goto label_242210;
        case 0x242244u: goto label_242244;
        case 0x242268u: goto label_242268;
        default: break;
    }

    ctx->pc = 0x2421a8u;

    // 0x2421a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2421a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2421ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2421acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2421b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2421b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2421b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2421b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2421b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2421b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2421bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2421bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2421c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2421c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2421c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2421c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2421c8: 0x8c940050  lw          $s4, 0x50($a0)
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2421cc: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2421ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2421d0: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2421d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2421d4: 0x26100710  addiu       $s0, $s0, 0x710
    ctx->pc = 0x2421d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1808));
    // 0x2421d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2421d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2421dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2421dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2421e0: 0x1860003c  blez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2421E0u;
    {
        const bool branch_taken_0x2421e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2421E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421E0u;
        // 0x2421e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421e0) {
            ctx->pc = 0x2422D4u;
            goto label_2422d4;
        }
    }
    ctx->pc = 0x2421E8u;
    // 0x2421e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2421e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421ec: 0x0  nop
    ctx->pc = 0x2421ecu;
    // NOP
label_2421f0:
    // 0x2421f0: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x2421F0u;
    SET_GPR_U32(ctx, 31, 0x2421F8u);
    ctx->pc = 0x2421F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2421F0u;
    // 0x2421f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x2421F0u, 0x2421F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421F8u;
label_2421f8:
    // 0x2421f8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2421f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2421fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2421fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242200: 0x1880002f  blez        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x242200u;
    {
        const bool branch_taken_0x242200 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x242204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242200u;
        // 0x242204: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242200) {
            ctx->pc = 0x2422C0u;
            goto label_2422c0;
        }
    }
    ctx->pc = 0x242208u;
    // 0x242208: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x242208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24220c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x24220cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_242210:
    // 0x242210: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x242210u;
    {
        const bool branch_taken_0x242210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242210u;
        // 0x242214: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242210) {
            ctx->pc = 0x242228u;
            goto label_242228;
        }
    }
    ctx->pc = 0x242218u;
    // 0x242218: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24221c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24221Cu;
    {
        const bool branch_taken_0x24221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24221Cu;
        // 0x242220: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24221c) {
            ctx->pc = 0x24222Cu;
            goto label_24222c;
        }
    }
    ctx->pc = 0x242224u;
    // 0x242224: 0x0  nop
    ctx->pc = 0x242224u;
    // NOP
label_242228:
    // 0x242228: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x242228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24222c:
    // 0x24222c: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x24222Cu;
    {
        const bool branch_taken_0x24222c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x242230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24222Cu;
        // 0x242230: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24222c) {
            ctx->pc = 0x2422B0u;
            goto label_2422b0;
        }
    }
    ctx->pc = 0x242234u;
    // 0x242234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x242234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242238: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x242238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24223c: 0xc0905d8  jal         func_241760
    ctx->pc = 0x24223Cu;
    SET_GPR_U32(ctx, 31, 0x242244u);
    ctx->pc = 0x242240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24223Cu;
    // 0x242240: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241760u, 0x24223Cu, 0x242244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242244u;
label_242244:
    // 0x242244: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x242244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242248: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x242248u;
    {
        const bool branch_taken_0x242248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242248) {
            ctx->pc = 0x24224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242248u;
            // 0x24224c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2422B0u;
            goto label_2422b0;
        }
    }
    ctx->pc = 0x242250u;
    // 0x242250: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x242250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x242254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242258: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x242258u;
    {
        const bool branch_taken_0x242258 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x24225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242258u;
        // 0x24225c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242258) {
            ctx->pc = 0x242290u;
            goto label_242290;
        }
    }
    ctx->pc = 0x242260u;
    // 0x242260: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x242260u;
    {
        const bool branch_taken_0x242260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242260u;
        // 0x242264: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242260) {
            ctx->pc = 0x242278u;
            goto label_242278;
        }
    }
    ctx->pc = 0x242268u;
label_242268:
    // 0x242268: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x242268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24226c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24226Cu;
    {
        const bool branch_taken_0x24226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24226Cu;
        // 0x242270: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24226c) {
            ctx->pc = 0x242290u;
            goto label_242290;
        }
    }
    ctx->pc = 0x242274u;
    // 0x242274: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_242278:
    // 0x242278: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x242278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24227c: 0x0  nop
    ctx->pc = 0x24227cu;
    // NOP
    // 0x242280: 0x0  nop
    ctx->pc = 0x242280u;
    // NOP
    // 0x242284: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x242284u;
    {
        const bool branch_taken_0x242284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242284) {
            ctx->pc = 0x242288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242284u;
            // 0x242288: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242268;
        }
    }
    ctx->pc = 0x24228Cu;
    // 0x24228c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24228cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242290:
    // 0x242290: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x242290u;
    {
        const bool branch_taken_0x242290 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x242290) {
            ctx->pc = 0x242294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242290u;
            // 0x242294: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2422B0u;
            goto label_2422b0;
        }
    }
    ctx->pc = 0x242298u;
    // 0x242298: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x242298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x24229c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24229Cu;
    {
        const bool branch_taken_0x24229c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24229Cu;
        // 0x2422a0: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24229c) {
            ctx->pc = 0x2422ACu;
            goto label_2422ac;
        }
    }
    ctx->pc = 0x2422A4u;
    // 0x2422a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2422a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2422a8: 0xa4550000  sh          $s5, 0x0($v0)
    ctx->pc = 0x2422a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 21));
label_2422ac:
    // 0x2422ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2422acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2422b0:
    // 0x2422b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2422b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2422b4: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x2422b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2422b8: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2422B8u;
    {
        const bool branch_taken_0x2422b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2422b8) {
            ctx->pc = 0x2422BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2422B8u;
            // 0x2422bc: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242210;
        }
    }
    ctx->pc = 0x2422C0u;
label_2422c0:
    // 0x2422c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2422c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2422c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2422c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2422c8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2422c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2422cc: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2422CCu;
    {
        const bool branch_taken_0x2422cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2422cc) {
            ctx->pc = 0x2422D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2422CCu;
            // 0x2422d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2421F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2421f0;
        }
    }
    ctx->pc = 0x2422D4u;
label_2422d4:
    // 0x2422d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2422d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2422d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2422d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2422dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2422dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2422e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2422e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2422e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2422e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2422e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2422e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2422ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2422ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2422f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2422F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2422F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422F0u;
        // 0x2422f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2422F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2422F8u;
}
