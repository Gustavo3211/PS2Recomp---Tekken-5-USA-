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

// Function: sub_002148E0
// Address: 0x2148e0 - 0x214a28
void sub_002148E0_0x2148e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002148E0_0x2148e0");
#endif

    switch (ctx->pc) {
        case 0x214920u: goto label_214920;
        case 0x214940u: goto label_214940;
        case 0x214978u: goto label_214978;
        default: break;
    }

    ctx->pc = 0x2148e0u;

    // 0x2148e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2148e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2148e4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2148e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2148e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2148e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2148ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2148ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2148f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2148f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2148f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2148f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2148f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2148fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2148fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214900: 0x14640043  bne         $v1, $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x214900u;
    {
        const bool branch_taken_0x214900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x214904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214900u;
        // 0x214904: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214900) {
            ctx->pc = 0x214A10u;
            goto label_214a10;
        }
    }
    ctx->pc = 0x214908u;
    // 0x214908: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x214908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21490c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x21490cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x214910: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214910u;
    {
        const bool branch_taken_0x214910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214910u;
        // 0x214914: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214910) {
            ctx->pc = 0x214938u;
            goto label_214938;
        }
    }
    ctx->pc = 0x214918u;
    // 0x214918: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x214918u;
    {
        const bool branch_taken_0x214918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214918u;
        // 0x21491c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214918) {
            ctx->pc = 0x214A14u;
            goto label_214a14;
        }
    }
    ctx->pc = 0x214920u;
label_214920:
    // 0x214920: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x214920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x214924: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x214924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x214928: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x214928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21492c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x21492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x214930: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x214930u;
    {
        const bool branch_taken_0x214930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214930u;
        // 0x214934: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214930) {
            ctx->pc = 0x21499Cu;
            goto label_21499c;
        }
    }
    ctx->pc = 0x214938u;
label_214938:
    // 0x214938: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x214938u;
    SET_GPR_U32(ctx, 31, 0x214940u);
    ctx->pc = 0x21493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214938u;
    // 0x21493c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x214938u, 0x214940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214940u;
label_214940:
    // 0x214940: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x214940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x214944: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214948: 0x2463b708  addiu       $v1, $v1, -0x48F8
    ctx->pc = 0x214948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948616));
    // 0x21494c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x214950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214954: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x214954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214958: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21495c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x21495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x214960: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x214960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214964: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x214964u;
    {
        const bool branch_taken_0x214964 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x214968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214964u;
        // 0x214968: 0x8c67000c  lw          $a3, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214964) {
            ctx->pc = 0x21499Cu;
            goto label_21499c;
        }
    }
    ctx->pc = 0x21496Cu;
    // 0x21496c: 0x8e0a0038  lw          $t2, 0x38($s0)
    ctx->pc = 0x21496cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x214970: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x214970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214974: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x214974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_214978:
    // 0x214978: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x214978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21497c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21497cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x214980: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x214980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x214984: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x214984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x214988: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21498c: 0x106affe4  beq         $v1, $t2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x21498Cu;
    {
        const bool branch_taken_0x21498c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x214990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21498Cu;
        // 0x214990: 0xc9202a  slt         $a0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21498c) {
            ctx->pc = 0x214920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214920;
        }
    }
    ctx->pc = 0x214994u;
    // 0x214994: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x214994u;
    {
        const bool branch_taken_0x214994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x214998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214994u;
        // 0x214998: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214994) {
            ctx->pc = 0x214978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214978;
        }
    }
    ctx->pc = 0x21499Cu;
label_21499c:
    // 0x21499c: 0x1100001c  beqz        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21499Cu;
    {
        const bool branch_taken_0x21499c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21499Cu;
        // 0x2149a0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21499c) {
            ctx->pc = 0x214A10u;
            goto label_214a10;
        }
    }
    ctx->pc = 0x2149A4u;
    // 0x2149a4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2149a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2149a8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2149a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2149ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2149acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2149b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2149b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2149b4: 0x9044005d  lbu         $a0, 0x5D($v0)
    ctx->pc = 0x2149b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 93)));
    // 0x2149b8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2149b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2149bc: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2149BCu;
    {
        const bool branch_taken_0x2149bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2149bc) {
            ctx->pc = 0x2149C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2149BCu;
            // 0x2149c0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214A10u;
            goto label_214a10;
        }
    }
    ctx->pc = 0x2149C4u;
    // 0x2149c4: 0x4830004  bgezl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2149C4u;
    {
        const bool branch_taken_0x2149c4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2149c4) {
            ctx->pc = 0x2149C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2149C4u;
            // 0x2149c8: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2149D8u;
            goto label_2149d8;
        }
    }
    ctx->pc = 0x2149CCu;
    // 0x2149cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2149CCu;
    {
        const bool branch_taken_0x2149cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149CCu;
        // 0x2149d0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149cc) {
            ctx->pc = 0x214A10u;
            goto label_214a10;
        }
    }
    ctx->pc = 0x2149D4u;
    // 0x2149d4: 0x0  nop
    ctx->pc = 0x2149d4u;
    // NOP
label_2149d8:
    // 0x2149d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2149d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2149dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2149dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2149e0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2149e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2149e4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2149e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2149e8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2149e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2149ec: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2149ECu;
    {
        const bool branch_taken_0x2149ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2149F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149ECu;
        // 0x2149f0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149ec) {
            ctx->pc = 0x214A10u;
            goto label_214a10;
        }
    }
    ctx->pc = 0x2149F4u;
    // 0x2149f4: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x2149f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2149f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2149f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2149fc: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2149FCu;
    {
        const bool branch_taken_0x2149fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x214A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149FCu;
        // 0x214a00: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149fc) {
            ctx->pc = 0x214A0Cu;
            goto label_214a0c;
        }
    }
    ctx->pc = 0x214A04u;
    // 0x214a04: 0x10850002  beq         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x214A04u;
    {
        const bool branch_taken_0x214a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x214A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A04u;
        // 0x214a08: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a04) {
            ctx->pc = 0x214A10u;
            goto label_214a10;
        }
    }
    ctx->pc = 0x214A0Cu;
label_214a0c:
    // 0x214a0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x214a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_214a10:
    // 0x214a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214a14:
    // 0x214a14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x214A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A1Cu;
        // 0x214a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214A24u;
    // 0x214a24: 0x0  nop
    ctx->pc = 0x214a24u;
    // NOP
    ctx->pc = 0x214a28u;
}
