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

// Function: sub_0026DCA0
// Address: 0x26dca0 - 0x26ec70
void sub_0026DCA0_0x26dca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DCA0_0x26dca0");
#endif

    switch (ctx->pc) {
        case 0x26dd08u: goto label_26dd08;
        case 0x26dd48u: goto label_26dd48;
        case 0x26dd54u: goto label_26dd54;
        case 0x26e388u: goto label_26e388;
        case 0x26e3a0u: goto label_26e3a0;
        case 0x26e3d0u: goto label_26e3d0;
        case 0x26e3e8u: goto label_26e3e8;
        case 0x26e400u: goto label_26e400;
        case 0x26e41cu: goto label_26e41c;
        case 0x26e460u: goto label_26e460;
        case 0x26e4e0u: goto label_26e4e0;
        case 0x26e520u: goto label_26e520;
        case 0x26e52cu: goto label_26e52c;
        case 0x26eb70u: goto label_26eb70;
        case 0x26eb88u: goto label_26eb88;
        case 0x26ebb8u: goto label_26ebb8;
        case 0x26ebd0u: goto label_26ebd0;
        case 0x26ebe8u: goto label_26ebe8;
        case 0x26ec04u: goto label_26ec04;
        default: break;
    }

    ctx->pc = 0x26dca0u;

    // 0x26dca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26dca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26dca4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26dca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26dca8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26dcac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x26dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x26dcb0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x26dcb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dcb4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x26dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x26dcb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26dcbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26dcc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26dcc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26dcc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x26dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x26dccc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x26dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x26dcd0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x26dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x26dcd4: 0x8f92aa7c  lw          $s2, -0x5584($gp)
    ctx->pc = 0x26dcd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26dcd8: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x26dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x26dcdc: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x26dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x26dce0: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26dce4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x26dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x26dce8: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x26dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x26dcec: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x26dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x26dcf0: 0x8c710014  lw          $s1, 0x14($v1)
    ctx->pc = 0x26dcf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26dcf4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26dcf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26dcf8: 0x106501d4  beq         $v1, $a1, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x26DCF8u;
    {
        const bool branch_taken_0x26dcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x26DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCF8u;
        // 0x26dcfc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcf8) {
            ctx->pc = 0x26E44Cu;
            goto label_26e44c;
        }
    }
    ctx->pc = 0x26DD00u;
    // 0x26dd00: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x26dd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x26dd04: 0x0  nop
    ctx->pc = 0x26dd04u;
    // NOP
label_26dd08:
    // 0x26dd08: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26DD08u;
    {
        const bool branch_taken_0x26dd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26dd08) {
            ctx->pc = 0x26DD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DD08u;
            // 0x26dd0c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DD38u;
            goto label_26dd38;
        }
    }
    ctx->pc = 0x26DD10u;
    // 0x26dd10: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26dd14: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x26dd14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26dd18: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x26dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26dd1c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x26dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26dd20: 0x96330014  lhu         $s3, 0x14($s1)
    ctx->pc = 0x26dd20u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x26dd24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26dd28: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x26dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x26dd2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x26dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26dd30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26DD30u;
    {
        const bool branch_taken_0x26dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD30u;
        // 0x26dd34: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd30) {
            ctx->pc = 0x26DD3Cu;
            goto label_26dd3c;
        }
    }
    ctx->pc = 0x26DD38u;
label_26dd38:
    // 0x26dd38: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x26dd38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26dd3c:
    // 0x26dd3c: 0x126001be  beqz        $s3, . + 4 + (0x1BE << 2)
    ctx->pc = 0x26DD3Cu;
    {
        const bool branch_taken_0x26dd3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD3Cu;
        // 0x26dd40: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd3c) {
            ctx->pc = 0x26E438u;
            goto label_26e438;
        }
    }
    ctx->pc = 0x26DD44u;
    // 0x26dd44: 0x0  nop
    ctx->pc = 0x26dd44u;
    // NOP
label_26dd48:
    // 0x26dd48: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26dd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26dd4c: 0xc09905e  jal         func_264178
    ctx->pc = 0x26DD4Cu;
    SET_GPR_U32(ctx, 31, 0x26DD54u);
    ctx->pc = 0x26DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD4Cu;
    // 0x26dd50: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26DD4Cu, 0x26DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD54u;
label_26dd54:
    // 0x26dd54: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x26dd54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26dd58: 0x547601b4  bnel        $v1, $s6, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x26DD58u;
    {
        const bool branch_taken_0x26dd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x26dd58) {
            ctx->pc = 0x26DD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DD58u;
            // 0x26dd5c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E42Cu;
            goto label_26e42c;
        }
    }
    ctx->pc = 0x26DD60u;
    // 0x26dd60: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x26dd60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x26dd64: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26dd64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26dd68: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26dd68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26dd6c: 0x144001ac  bnez        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x26DD6Cu;
    {
        const bool branch_taken_0x26dd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD6Cu;
        // 0x26dd70: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd6c) {
            ctx->pc = 0x26E420u;
            goto label_26e420;
        }
    }
    ctx->pc = 0x26DD74u;
    // 0x26dd74: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x26dd74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x26dd78: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26dd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26dd7c: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x26DD7Cu;
    {
        const bool branch_taken_0x26dd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD7Cu;
        // 0x26dd80: 0x24063ff8  addiu       $a2, $zero, 0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd7c) {
            ctx->pc = 0x26E420u;
            goto label_26e420;
        }
    }
    ctx->pc = 0x26DD84u;
    // 0x26dd84: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x26dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26dd88: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x26dd88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dd8c: 0x84a3003e  lh          $v1, 0x3E($a1)
    ctx->pc = 0x26dd8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x26dd90: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x26dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26dd94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26dd98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26dd9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26dda0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26dda4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26dda8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26ddac: 0x10860182  beq         $a0, $a2, . + 4 + (0x182 << 2)
    ctx->pc = 0x26DDACu;
    {
        const bool branch_taken_0x26ddac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x26DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDACu;
        // 0x26ddb0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddac) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26DDB4u;
    // 0x26ddb4: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x26ddb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x26ddb8: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x26DDB8u;
    {
        const bool branch_taken_0x26ddb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDB8u;
        // 0x26ddbc: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddb8) {
            ctx->pc = 0x26E0B0u;
            goto label_26e0b0;
        }
    }
    ctx->pc = 0x26DDC0u;
    // 0x26ddc0: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x26ddc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x26ddc4: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x26DDC4u;
    {
        const bool branch_taken_0x26ddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDC4u;
        // 0x26ddc8: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddc4) {
            ctx->pc = 0x26DF48u;
            goto label_26df48;
        }
    }
    ctx->pc = 0x26DDCCu;
    // 0x26ddcc: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x26ddccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x26ddd0: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x26DDD0u;
    {
        const bool branch_taken_0x26ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDD0u;
        // 0x26ddd4: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddd0) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26DDD8u;
    // 0x26ddd8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x26DDD8u;
    {
        const bool branch_taken_0x26ddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDD8u;
        // 0x26dddc: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddd8) {
            ctx->pc = 0x26DE88u;
            goto label_26de88;
        }
    }
    ctx->pc = 0x26DDE0u;
    // 0x26dde0: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x26dde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x26dde4: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x26DDE4u;
    {
        const bool branch_taken_0x26dde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDE4u;
        // 0x26dde8: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dde4) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26DDECu;
    // 0x26ddec: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x26DDECu;
    {
        const bool branch_taken_0x26ddec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDECu;
        // 0x26ddf0: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddec) {
            ctx->pc = 0x26E398u;
            goto label_26e398;
        }
    }
    ctx->pc = 0x26DDF4u;
    // 0x26ddf4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26DDF4u;
    {
        const bool branch_taken_0x26ddf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDF4u;
        // 0x26ddf8: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddf4) {
            ctx->pc = 0x26DE40u;
            goto label_26de40;
        }
    }
    ctx->pc = 0x26DDFCu;
    // 0x26ddfc: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x26ddfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x26de00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DE00u;
    {
        const bool branch_taken_0x26de00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE00u;
        // 0x26de04: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de00) {
            ctx->pc = 0x26DE28u;
            goto label_26de28;
        }
    }
    ctx->pc = 0x26DE08u;
    // 0x26de08: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x26de08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x26de0c: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x26DE0Cu;
    {
        const bool branch_taken_0x26de0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE0Cu;
        // 0x26de10: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de0c) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26DE14u;
    // 0x26de14: 0x10820178  beq         $a0, $v0, . + 4 + (0x178 << 2)
    ctx->pc = 0x26DE14u;
    {
        const bool branch_taken_0x26de14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26de14) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26DE1Cu;
    // 0x26de1c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x26DE1Cu;
    {
        const bool branch_taken_0x26de1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de1c) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DE24u;
    // 0x26de24: 0x0  nop
    ctx->pc = 0x26de24u;
    // NOP
label_26de28:
    // 0x26de28: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x26DE28u;
    {
        const bool branch_taken_0x26de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE28u;
        // 0x26de2c: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de28) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DE30u;
    // 0x26de30: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x26DE30u;
    {
        const bool branch_taken_0x26de30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26de30) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DE38u;
    // 0x26de38: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x26DE38u;
    {
        const bool branch_taken_0x26de38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de38) {
            ctx->pc = 0x26E398u;
            goto label_26e398;
        }
    }
    ctx->pc = 0x26DE40u;
label_26de40:
    // 0x26de40: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x26DE40u;
    {
        const bool branch_taken_0x26de40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE40u;
        // 0x26de44: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de40) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26DE48u;
    // 0x26de48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DE48u;
    {
        const bool branch_taken_0x26de48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE48u;
        // 0x26de4c: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de48) {
            ctx->pc = 0x26DE70u;
            goto label_26de70;
        }
    }
    ctx->pc = 0x26DE50u;
    // 0x26de50: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x26de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x26de54: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26DE54u;
    {
        const bool branch_taken_0x26de54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE54u;
        // 0x26de58: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de54) {
            ctx->pc = 0x26E3B0u;
            goto label_26e3b0;
        }
    }
    ctx->pc = 0x26DE5Cu;
    // 0x26de5c: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x26DE5Cu;
    {
        const bool branch_taken_0x26de5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE5Cu;
        // 0x26de60: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de5c) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26DE64u;
    // 0x26de64: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x26DE64u;
    {
        const bool branch_taken_0x26de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de64) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DE6Cu;
    // 0x26de6c: 0x0  nop
    ctx->pc = 0x26de6cu;
    // NOP
label_26de70:
    // 0x26de70: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x26DE70u;
    {
        const bool branch_taken_0x26de70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE70u;
        // 0x26de74: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de70) {
            ctx->pc = 0x26E398u;
            goto label_26e398;
        }
    }
    ctx->pc = 0x26DE78u;
    // 0x26de78: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x26DE78u;
    {
        const bool branch_taken_0x26de78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26de78) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26DE80u;
    // 0x26de80: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x26DE80u;
    {
        const bool branch_taken_0x26de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de80) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DE88u;
label_26de88:
    // 0x26de88: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x26DE88u;
    {
        const bool branch_taken_0x26de88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE88u;
        // 0x26de8c: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de88) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26DE90u;
    // 0x26de90: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26DE90u;
    {
        const bool branch_taken_0x26de90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE90u;
        // 0x26de94: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de90) {
            ctx->pc = 0x26DEE8u;
            goto label_26dee8;
        }
    }
    ctx->pc = 0x26DE98u;
    // 0x26de98: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x26de98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x26de9c: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26DE9Cu;
    {
        const bool branch_taken_0x26de9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE9Cu;
        // 0x26dea0: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de9c) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26DEA4u;
    // 0x26dea4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26DEA4u;
    {
        const bool branch_taken_0x26dea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEA4u;
        // 0x26dea8: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dea4) {
            ctx->pc = 0x26DEC8u;
            goto label_26dec8;
        }
    }
    ctx->pc = 0x26DEACu;
    // 0x26deac: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x26deacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x26deb0: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x26DEB0u;
    {
        const bool branch_taken_0x26deb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEB0u;
        // 0x26deb4: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26deb0) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26DEB8u;
    // 0x26deb8: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x26DEB8u;
    {
        const bool branch_taken_0x26deb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEB8u;
        // 0x26debc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26deb8) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26DEC0u;
    // 0x26dec0: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x26DEC0u;
    {
        const bool branch_taken_0x26dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dec0) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DEC8u;
label_26dec8:
    // 0x26dec8: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x26DEC8u;
    {
        const bool branch_taken_0x26dec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEC8u;
        // 0x26decc: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dec8) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DED0u;
    // 0x26ded0: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x26DED0u;
    {
        const bool branch_taken_0x26ded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DED0u;
        // 0x26ded4: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ded0) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26DED8u;
    // 0x26ded8: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x26DED8u;
    {
        const bool branch_taken_0x26ded8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DED8u;
        // 0x26dedc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ded8) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26DEE0u;
    // 0x26dee0: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x26DEE0u;
    {
        const bool branch_taken_0x26dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dee0) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DEE8u;
label_26dee8:
    // 0x26dee8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DEE8u;
    {
        const bool branch_taken_0x26dee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEE8u;
        // 0x26deec: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dee8) {
            ctx->pc = 0x26DF10u;
            goto label_26df10;
        }
    }
    ctx->pc = 0x26DEF0u;
    // 0x26def0: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x26def0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x26def4: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x26DEF4u;
    {
        const bool branch_taken_0x26def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEF4u;
        // 0x26def8: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26def4) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26DEFCu;
    // 0x26defc: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x26DEFCu;
    {
        const bool branch_taken_0x26defc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26defc) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26DF04u;
    // 0x26df04: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x26DF04u;
    {
        const bool branch_taken_0x26df04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df04) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DF0Cu;
    // 0x26df0c: 0x0  nop
    ctx->pc = 0x26df0cu;
    // NOP
label_26df10:
    // 0x26df10: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26DF10u;
    {
        const bool branch_taken_0x26df10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF10u;
        // 0x26df14: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df10) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26DF18u;
    // 0x26df18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DF18u;
    {
        const bool branch_taken_0x26df18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF18u;
        // 0x26df1c: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df18) {
            ctx->pc = 0x26DF38u;
            goto label_26df38;
        }
    }
    ctx->pc = 0x26DF20u;
    // 0x26df20: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x26df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x26df24: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x26DF24u;
    {
        const bool branch_taken_0x26df24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF24u;
        // 0x26df28: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df24) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26DF2Cu;
    // 0x26df2c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x26DF2Cu;
    {
        const bool branch_taken_0x26df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df2c) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DF34u;
    // 0x26df34: 0x0  nop
    ctx->pc = 0x26df34u;
    // NOP
label_26df38:
    // 0x26df38: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26DF38u;
    {
        const bool branch_taken_0x26df38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26df38) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26DF40u;
    // 0x26df40: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x26DF40u;
    {
        const bool branch_taken_0x26df40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df40) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DF48u;
label_26df48:
    // 0x26df48: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x26DF48u;
    {
        const bool branch_taken_0x26df48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF48u;
        // 0x26df4c: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df48) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26DF50u;
    // 0x26df50: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26DF50u;
    {
        const bool branch_taken_0x26df50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF50u;
        // 0x26df54: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df50) {
            ctx->pc = 0x26E010u;
            goto label_26e010;
        }
    }
    ctx->pc = 0x26DF58u;
    // 0x26df58: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x26df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x26df5c: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x26DF5Cu;
    {
        const bool branch_taken_0x26df5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF5Cu;
        // 0x26df60: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df5c) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26DF64u;
    // 0x26df64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26DF64u;
    {
        const bool branch_taken_0x26df64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF64u;
        // 0x26df68: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df64) {
            ctx->pc = 0x26DFB0u;
            goto label_26dfb0;
        }
    }
    ctx->pc = 0x26DF6Cu;
    // 0x26df6c: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x26df6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x26df70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DF70u;
    {
        const bool branch_taken_0x26df70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF70u;
        // 0x26df74: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df70) {
            ctx->pc = 0x26DF98u;
            goto label_26df98;
        }
    }
    ctx->pc = 0x26DF78u;
    // 0x26df78: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x26df78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x26df7c: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x26DF7Cu;
    {
        const bool branch_taken_0x26df7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF7Cu;
        // 0x26df80: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df7c) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26DF84u;
    // 0x26df84: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x26DF84u;
    {
        const bool branch_taken_0x26df84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26df84) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26DF8Cu;
    // 0x26df8c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x26DF8Cu;
    {
        const bool branch_taken_0x26df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df8c) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DF94u;
    // 0x26df94: 0x0  nop
    ctx->pc = 0x26df94u;
    // NOP
label_26df98:
    // 0x26df98: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x26DF98u;
    {
        const bool branch_taken_0x26df98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF98u;
        // 0x26df9c: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df98) {
            ctx->pc = 0x26E380u;
            goto label_26e380;
        }
    }
    ctx->pc = 0x26DFA0u;
    // 0x26dfa0: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x26DFA0u;
    {
        const bool branch_taken_0x26dfa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFA0u;
        // 0x26dfa4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfa0) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26DFA8u;
    // 0x26dfa8: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x26DFA8u;
    {
        const bool branch_taken_0x26dfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dfa8) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DFB0u;
label_26dfb0:
    // 0x26dfb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DFB0u;
    {
        const bool branch_taken_0x26dfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFB0u;
        // 0x26dfb4: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfb0) {
            ctx->pc = 0x26DFD8u;
            goto label_26dfd8;
        }
    }
    ctx->pc = 0x26DFB8u;
    // 0x26dfb8: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x26dfb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x26dfbc: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x26DFBCu;
    {
        const bool branch_taken_0x26dfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFBCu;
        // 0x26dfc0: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfbc) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26DFC4u;
    // 0x26dfc4: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x26DFC4u;
    {
        const bool branch_taken_0x26dfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26dfc4) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26DFCCu;
    // 0x26dfcc: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x26DFCCu;
    {
        const bool branch_taken_0x26dfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dfcc) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DFD4u;
    // 0x26dfd4: 0x0  nop
    ctx->pc = 0x26dfd4u;
    // NOP
label_26dfd8:
    // 0x26dfd8: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x26DFD8u;
    {
        const bool branch_taken_0x26dfd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFD8u;
        // 0x26dfdc: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfd8) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26DFE0u;
    // 0x26dfe0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DFE0u;
    {
        const bool branch_taken_0x26dfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFE0u;
        // 0x26dfe4: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfe0) {
            ctx->pc = 0x26E000u;
            goto label_26e000;
        }
    }
    ctx->pc = 0x26DFE8u;
    // 0x26dfe8: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x26dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x26dfec: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26DFECu;
    {
        const bool branch_taken_0x26dfec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFECu;
        // 0x26dff0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfec) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26DFF4u;
    // 0x26dff4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x26DFF4u;
    {
        const bool branch_taken_0x26dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dff4) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26DFFCu;
    // 0x26dffc: 0x0  nop
    ctx->pc = 0x26dffcu;
    // NOP
label_26e000:
    // 0x26e000: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x26E000u;
    {
        const bool branch_taken_0x26e000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e000) {
            ctx->pc = 0x26E004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E000u;
            // 0x26e004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E008u;
    // 0x26e008: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x26E008u;
    {
        const bool branch_taken_0x26e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e008) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E010u;
label_26e010:
    // 0x26e010: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26E010u;
    {
        const bool branch_taken_0x26e010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E010u;
        // 0x26e014: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e010) {
            ctx->pc = 0x26E068u;
            goto label_26e068;
        }
    }
    ctx->pc = 0x26E018u;
    // 0x26e018: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x26e018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x26e01c: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x26E01Cu;
    {
        const bool branch_taken_0x26e01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E01Cu;
        // 0x26e020: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e01c) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E024u;
    // 0x26e024: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x26E024u;
    {
        const bool branch_taken_0x26e024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E024u;
        // 0x26e028: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e024) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E02Cu;
    // 0x26e02c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E02Cu;
    {
        const bool branch_taken_0x26e02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E02Cu;
        // 0x26e030: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e02c) {
            ctx->pc = 0x26E050u;
            goto label_26e050;
        }
    }
    ctx->pc = 0x26E034u;
    // 0x26e034: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x26e034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x26e038: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26E038u;
    {
        const bool branch_taken_0x26e038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E038u;
        // 0x26e03c: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e038) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E040u;
    // 0x26e040: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x26E040u;
    {
        const bool branch_taken_0x26e040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e040) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E048u;
    // 0x26e048: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x26E048u;
    {
        const bool branch_taken_0x26e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e048) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E050u;
label_26e050:
    // 0x26e050: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26E050u;
    {
        const bool branch_taken_0x26e050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E050u;
        // 0x26e054: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e050) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E058u;
    // 0x26e058: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x26E058u;
    {
        const bool branch_taken_0x26e058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e058) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E060u;
    // 0x26e060: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x26E060u;
    {
        const bool branch_taken_0x26e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e060) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E068u;
label_26e068:
    // 0x26e068: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x26E068u;
    {
        const bool branch_taken_0x26e068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E068u;
        // 0x26e06c: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e068) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E070u;
    // 0x26e070: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E070u;
    {
        const bool branch_taken_0x26e070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E070u;
        // 0x26e074: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e070) {
            ctx->pc = 0x26E098u;
            goto label_26e098;
        }
    }
    ctx->pc = 0x26E078u;
    // 0x26e078: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x26e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x26e07c: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x26E07Cu;
    {
        const bool branch_taken_0x26e07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E07Cu;
        // 0x26e080: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e07c) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E084u;
    // 0x26e084: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x26E084u;
    {
        const bool branch_taken_0x26e084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E084u;
        // 0x26e088: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e084) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26E08Cu;
    // 0x26e08c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x26E08Cu;
    {
        const bool branch_taken_0x26e08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e08c) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E094u;
    // 0x26e094: 0x0  nop
    ctx->pc = 0x26e094u;
    // NOP
label_26e098:
    // 0x26e098: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x26E098u;
    {
        const bool branch_taken_0x26e098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E098u;
        // 0x26e09c: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e098) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E0A0u;
    // 0x26e0a0: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26E0A0u;
    {
        const bool branch_taken_0x26e0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e0a0) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E0A8u;
    // 0x26e0a8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x26E0A8u;
    {
        const bool branch_taken_0x26e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e0a8) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E0B0u;
label_26e0b0:
    // 0x26e0b0: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x26E0B0u;
    {
        const bool branch_taken_0x26e0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0B0u;
        // 0x26e0b4: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0b0) {
            ctx->pc = 0x26E3B0u;
            goto label_26e3b0;
        }
    }
    ctx->pc = 0x26E0B8u;
    // 0x26e0b8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26E0B8u;
    {
        const bool branch_taken_0x26e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0B8u;
        // 0x26e0bc: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0b8) {
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E0C0u;
    // 0x26e0c0: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x26e0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x26e0c4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26E0C4u;
    {
        const bool branch_taken_0x26e0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0C4u;
        // 0x26e0c8: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0c4) {
            ctx->pc = 0x26E168u;
            goto label_26e168;
        }
    }
    ctx->pc = 0x26E0CCu;
    // 0x26e0cc: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x26e0ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x26e0d0: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x26E0D0u;
    {
        const bool branch_taken_0x26e0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0D0u;
        // 0x26e0d4: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0d0) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E0D8u;
    // 0x26e0d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26E0D8u;
    {
        const bool branch_taken_0x26e0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0D8u;
        // 0x26e0dc: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0d8) {
            ctx->pc = 0x26E120u;
            goto label_26e120;
        }
    }
    ctx->pc = 0x26E0E0u;
    // 0x26e0e0: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x26e0e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x26e0e4: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x26E0E4u;
    {
        const bool branch_taken_0x26e0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0E4u;
        // 0x26e0e8: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0e4) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E0ECu;
    // 0x26e0ec: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x26E0ECu;
    {
        const bool branch_taken_0x26e0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0ECu;
        // 0x26e0f0: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0ec) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E0F4u;
    // 0x26e0f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E0F4u;
    {
        const bool branch_taken_0x26e0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0F4u;
        // 0x26e0f8: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0f4) {
            ctx->pc = 0x26E110u;
            goto label_26e110;
        }
    }
    ctx->pc = 0x26E0FCu;
    // 0x26e0fc: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x26e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x26e100: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x26E100u;
    {
        const bool branch_taken_0x26e100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E100u;
        // 0x26e104: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e100) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26E108u;
    // 0x26e108: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x26E108u;
    {
        const bool branch_taken_0x26e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e108) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E110u;
label_26e110:
    // 0x26e110: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x26E110u;
    {
        const bool branch_taken_0x26e110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e110) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E118u;
    // 0x26e118: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x26E118u;
    {
        const bool branch_taken_0x26e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e118) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E120u;
label_26e120:
    // 0x26e120: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26E120u;
    {
        const bool branch_taken_0x26e120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E120u;
        // 0x26e124: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e120) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E128u;
    // 0x26e128: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E128u;
    {
        const bool branch_taken_0x26e128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E128u;
        // 0x26e12c: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e128) {
            ctx->pc = 0x26E150u;
            goto label_26e150;
        }
    }
    ctx->pc = 0x26E130u;
    // 0x26e130: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x26e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x26e134: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26E134u;
    {
        const bool branch_taken_0x26e134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E134u;
        // 0x26e138: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e134) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E13Cu;
    // 0x26e13c: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x26E13Cu;
    {
        const bool branch_taken_0x26e13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E13Cu;
        // 0x26e140: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e13c) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26E144u;
    // 0x26e144: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x26E144u;
    {
        const bool branch_taken_0x26e144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e144) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E14Cu;
    // 0x26e14c: 0x0  nop
    ctx->pc = 0x26e14cu;
    // NOP
label_26e150:
    // 0x26e150: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x26E150u;
    {
        const bool branch_taken_0x26e150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E150u;
        // 0x26e154: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e150) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E158u;
    // 0x26e158: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26E158u;
    {
        const bool branch_taken_0x26e158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e158) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E160u;
    // 0x26e160: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x26E160u;
    {
        const bool branch_taken_0x26e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e160) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E168u;
label_26e168:
    // 0x26e168: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x26E168u;
    {
        const bool branch_taken_0x26e168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E168u;
        // 0x26e16c: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e168) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E170u;
    // 0x26e170: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26E170u;
    {
        const bool branch_taken_0x26e170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E170u;
        // 0x26e174: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e170) {
            ctx->pc = 0x26E1C8u;
            goto label_26e1c8;
        }
    }
    ctx->pc = 0x26E178u;
    // 0x26e178: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x26e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x26e17c: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x26E17Cu;
    {
        const bool branch_taken_0x26e17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E17Cu;
        // 0x26e180: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e17c) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E184u;
    // 0x26e184: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E184u;
    {
        const bool branch_taken_0x26e184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E184u;
        // 0x26e188: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e184) {
            ctx->pc = 0x26E1A8u;
            goto label_26e1a8;
        }
    }
    ctx->pc = 0x26E18Cu;
    // 0x26e18c: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x26e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x26e190: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x26E190u;
    {
        const bool branch_taken_0x26e190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E190u;
        // 0x26e194: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e190) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E198u;
    // 0x26e198: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x26E198u;
    {
        const bool branch_taken_0x26e198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E198u;
        // 0x26e19c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e198) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26E1A0u;
    // 0x26e1a0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x26E1A0u;
    {
        const bool branch_taken_0x26e1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e1a0) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E1A8u;
label_26e1a8:
    // 0x26e1a8: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x26E1A8u;
    {
        const bool branch_taken_0x26e1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1A8u;
        // 0x26e1ac: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1a8) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E1B0u;
    // 0x26e1b0: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x26E1B0u;
    {
        const bool branch_taken_0x26e1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1B0u;
        // 0x26e1b4: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1b0) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E1B8u;
    // 0x26e1b8: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x26E1B8u;
    {
        const bool branch_taken_0x26e1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1B8u;
        // 0x26e1bc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1b8) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26E1C0u;
    // 0x26e1c0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x26E1C0u;
    {
        const bool branch_taken_0x26e1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e1c0) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E1C8u;
label_26e1c8:
    // 0x26e1c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E1C8u;
    {
        const bool branch_taken_0x26e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1C8u;
        // 0x26e1cc: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1c8) {
            ctx->pc = 0x26E1F0u;
            goto label_26e1f0;
        }
    }
    ctx->pc = 0x26E1D0u;
    // 0x26e1d0: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x26e1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x26e1d4: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x26E1D4u;
    {
        const bool branch_taken_0x26e1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1D4u;
        // 0x26e1d8: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1d4) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E1DCu;
    // 0x26e1dc: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x26E1DCu;
    {
        const bool branch_taken_0x26e1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e1dc) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E1E4u;
    // 0x26e1e4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26E1E4u;
    {
        const bool branch_taken_0x26e1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e1e4) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E1ECu;
    // 0x26e1ec: 0x0  nop
    ctx->pc = 0x26e1ecu;
    // NOP
label_26e1f0:
    // 0x26e1f0: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26E1F0u;
    {
        const bool branch_taken_0x26e1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1F0u;
        // 0x26e1f4: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1f0) {
            ctx->pc = 0x26E398u;
            goto label_26e398;
        }
    }
    ctx->pc = 0x26E1F8u;
    // 0x26e1f8: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x26E1F8u;
    {
        const bool branch_taken_0x26e1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1F8u;
        // 0x26e1fc: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1f8) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E200u;
    // 0x26e200: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x26E200u;
    {
        const bool branch_taken_0x26e200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e200) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E208u;
    // 0x26e208: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x26E208u;
    {
        const bool branch_taken_0x26e208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e208) {
            ctx->pc = 0x26E398u;
            goto label_26e398;
        }
    }
    ctx->pc = 0x26E210u;
label_26e210:
    // 0x26e210: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26E210u;
    {
        const bool branch_taken_0x26e210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E210u;
        // 0x26e214: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e210) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E218u;
    // 0x26e218: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26E218u;
    {
        const bool branch_taken_0x26e218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E218u;
        // 0x26e21c: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e218) {
            ctx->pc = 0x26E2D0u;
            goto label_26e2d0;
        }
    }
    ctx->pc = 0x26E220u;
    // 0x26e220: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x26e220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x26e224: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26E224u;
    {
        const bool branch_taken_0x26e224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E224u;
        // 0x26e228: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e224) {
            ctx->pc = 0x26E278u;
            goto label_26e278;
        }
    }
    ctx->pc = 0x26E22Cu;
    // 0x26e22c: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x26e22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x26e230: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x26E230u;
    {
        const bool branch_taken_0x26e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E230u;
        // 0x26e234: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e230) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E238u;
    // 0x26e238: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x26E238u;
    {
        const bool branch_taken_0x26e238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E238u;
        // 0x26e23c: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e238) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E240u;
    // 0x26e240: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E240u;
    {
        const bool branch_taken_0x26e240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E240u;
        // 0x26e244: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e240) {
            ctx->pc = 0x26E260u;
            goto label_26e260;
        }
    }
    ctx->pc = 0x26E248u;
    // 0x26e248: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x26e248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x26e24c: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x26E24Cu;
    {
        const bool branch_taken_0x26e24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e24c) {
            ctx->pc = 0x26E398u;
            goto label_26e398;
        }
    }
    ctx->pc = 0x26E254u;
    // 0x26e254: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x26E254u;
    {
        const bool branch_taken_0x26e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e254) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E25Cu;
    // 0x26e25c: 0x0  nop
    ctx->pc = 0x26e25cu;
    // NOP
label_26e260:
    // 0x26e260: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26E260u;
    {
        const bool branch_taken_0x26e260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E260u;
        // 0x26e264: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e260) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E268u;
    // 0x26e268: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x26E268u;
    {
        const bool branch_taken_0x26e268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e268) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E270u;
    // 0x26e270: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x26E270u;
    {
        const bool branch_taken_0x26e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e270) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E278u;
label_26e278:
    // 0x26e278: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x26E278u;
    {
        const bool branch_taken_0x26e278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E278u;
        // 0x26e27c: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e278) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E280u;
    // 0x26e280: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E280u;
    {
        const bool branch_taken_0x26e280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E280u;
        // 0x26e284: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e280) {
            ctx->pc = 0x26E2A8u;
            goto label_26e2a8;
        }
    }
    ctx->pc = 0x26E288u;
    // 0x26e288: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x26e288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x26e28c: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x26E28Cu;
    {
        const bool branch_taken_0x26e28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E28Cu;
        // 0x26e290: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e28c) {
            ctx->pc = 0x26E398u;
            goto label_26e398;
        }
    }
    ctx->pc = 0x26E294u;
    // 0x26e294: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26E294u;
    {
        const bool branch_taken_0x26e294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E294u;
        // 0x26e298: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e294) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26E29Cu;
    // 0x26e29c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26E29Cu;
    {
        const bool branch_taken_0x26e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e29c) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E2A4u;
    // 0x26e2a4: 0x0  nop
    ctx->pc = 0x26e2a4u;
    // NOP
label_26e2a8:
    // 0x26e2a8: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26E2A8u;
    {
        const bool branch_taken_0x26e2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2A8u;
        // 0x26e2ac: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2a8) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E2B0u;
    // 0x26e2b0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26E2B0u;
    {
        const bool branch_taken_0x26e2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2B0u;
        // 0x26e2b4: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2b0) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E2B8u;
    // 0x26e2b8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26E2B8u;
    {
        const bool branch_taken_0x26e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2B8u;
        // 0x26e2bc: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2b8) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E2C0u;
    // 0x26e2c0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x26E2C0u;
    {
        const bool branch_taken_0x26e2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e2c0) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E2C8u;
    // 0x26e2c8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x26E2C8u;
    {
        const bool branch_taken_0x26e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e2c8) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E2D0u;
label_26e2d0:
    // 0x26e2d0: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26E2D0u;
    {
        const bool branch_taken_0x26e2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2D0u;
        // 0x26e2d4: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2d0) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E2D8u;
    // 0x26e2d8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26E2D8u;
    {
        const bool branch_taken_0x26e2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2D8u;
        // 0x26e2dc: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2d8) {
            ctx->pc = 0x26E328u;
            goto label_26e328;
        }
    }
    ctx->pc = 0x26E2E0u;
    // 0x26e2e0: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x26e2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x26e2e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26E2E4u;
    {
        const bool branch_taken_0x26e2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2E4u;
        // 0x26e2e8: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2e4) {
            ctx->pc = 0x26E310u;
            goto label_26e310;
        }
    }
    ctx->pc = 0x26E2ECu;
    // 0x26e2ec: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x26e2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x26e2f0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x26E2F0u;
    {
        const bool branch_taken_0x26e2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2F0u;
        // 0x26e2f4: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2f0) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E2F8u;
    // 0x26e2f8: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26E2F8u;
    {
        const bool branch_taken_0x26e2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2F8u;
        // 0x26e2fc: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2f8) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E300u;
    // 0x26e300: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26E300u;
    {
        const bool branch_taken_0x26e300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e300) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E308u;
    // 0x26e308: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26E308u;
    {
        const bool branch_taken_0x26e308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e308) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E310u;
label_26e310:
    // 0x26e310: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26E310u;
    {
        const bool branch_taken_0x26e310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E310u;
        // 0x26e314: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e310) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E318u;
    // 0x26e318: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26E318u;
    {
        const bool branch_taken_0x26e318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E318u;
        // 0x26e31c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e318) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26E320u;
    // 0x26e320: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26E320u;
    {
        const bool branch_taken_0x26e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e320) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E328u;
label_26e328:
    // 0x26e328: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26e328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26e32c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26E32Cu;
    {
        const bool branch_taken_0x26e32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E32Cu;
        // 0x26e330: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e32c) {
            ctx->pc = 0x26E368u;
            goto label_26e368;
        }
    }
    ctx->pc = 0x26E334u;
    // 0x26e334: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x26e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x26e338: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26e338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26e33c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26E33Cu;
    {
        const bool branch_taken_0x26e33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E33Cu;
        // 0x26e340: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e33c) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E344u;
    // 0x26e344: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26e344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26e348: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26E348u;
    {
        const bool branch_taken_0x26e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E348u;
        // 0x26e34c: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e348) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E350u;
    // 0x26e350: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26e350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26e354: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26E354u;
    {
        const bool branch_taken_0x26e354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e354) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E35Cu;
    // 0x26e35c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26E35Cu;
    {
        const bool branch_taken_0x26e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e35c) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E364u;
    // 0x26e364: 0x0  nop
    ctx->pc = 0x26e364u;
    // NOP
label_26e368:
    // 0x26e368: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26E368u;
    {
        const bool branch_taken_0x26e368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E368u;
        // 0x26e36c: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e368) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E370u;
    // 0x26e370: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E370u;
    {
        const bool branch_taken_0x26e370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E370u;
        // 0x26e374: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e370) {
            ctx->pc = 0x26E3BCu;
            goto label_26e3bc;
        }
    }
    ctx->pc = 0x26E378u;
    // 0x26e378: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26E378u;
    {
        const bool branch_taken_0x26e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e378) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E380u;
label_26e380:
    // 0x26e380: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26E380u;
    SET_GPR_U32(ctx, 31, 0x26E388u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26E380u, 0x26E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E388u;
label_26e388:
    // 0x26e388: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x26e388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x26e38c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26E38Cu;
    {
        const bool branch_taken_0x26e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E38Cu;
        // 0x26e390: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e38c) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E394u;
    // 0x26e394: 0x0  nop
    ctx->pc = 0x26e394u;
    // NOP
label_26e398:
    // 0x26e398: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26E398u;
    SET_GPR_U32(ctx, 31, 0x26E3A0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26E398u, 0x26E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3A0u;
label_26e3a0:
    // 0x26e3a0: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x26e3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x26e3a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26E3A4u;
    {
        const bool branch_taken_0x26e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3A4u;
        // 0x26e3a8: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3a4) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E3ACu;
    // 0x26e3ac: 0x0  nop
    ctx->pc = 0x26e3acu;
    // NOP
label_26e3b0:
    // 0x26e3b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26E3B0u;
    {
        const bool branch_taken_0x26e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3B0u;
        // 0x26e3b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3b0) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E3B8u;
label_26e3b8:
    // 0x26e3b8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26e3bc:
    // 0x26e3bc: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x26e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x26e3c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26E3C0u;
    {
        const bool branch_taken_0x26e3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3C0u;
        // 0x26e3c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3c0) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E3C8u;
    // 0x26e3c8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26E3C8u;
    SET_GPR_U32(ctx, 31, 0x26E3D0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26E3C8u, 0x26E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3D0u;
label_26e3d0:
    // 0x26e3d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26e3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26e3d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26E3D4u;
    {
        const bool branch_taken_0x26e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3D4u;
        // 0x26e3d8: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3d4) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E3DCu;
    // 0x26e3dc: 0x0  nop
    ctx->pc = 0x26e3dcu;
    // NOP
label_26e3e0:
    // 0x26e3e0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26E3E0u;
    SET_GPR_U32(ctx, 31, 0x26E3E8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26E3E0u, 0x26E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3E8u;
label_26e3e8:
    // 0x26e3e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26e3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26e3ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E3ECu;
    {
        const bool branch_taken_0x26e3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3ECu;
        // 0x26e3f0: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3ec) {
            ctx->pc = 0x26E408u;
            goto label_26e408;
        }
    }
    ctx->pc = 0x26E3F4u;
    // 0x26e3f4: 0x0  nop
    ctx->pc = 0x26e3f4u;
    // NOP
label_26e3f8:
    // 0x26e3f8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26E3F8u;
    SET_GPR_U32(ctx, 31, 0x26E400u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26E3F8u, 0x26E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E400u;
label_26e400:
    // 0x26e400: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26e404: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x26e404u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_26e408:
    // 0x26e408: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E408u;
    {
        const bool branch_taken_0x26e408 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E408u;
        // 0x26e40c: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e408) {
            ctx->pc = 0x26E420u;
            goto label_26e420;
        }
    }
    ctx->pc = 0x26E410u;
    // 0x26e410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e414: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x26E414u;
    SET_GPR_U32(ctx, 31, 0x26E41Cu);
    ctx->pc = 0x26E418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E414u;
    // 0x26e418: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x26E414u, 0x26E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E41Cu;
label_26e41c:
    // 0x26e41c: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x26e41cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26e420:
    // 0x26e420: 0x56a00005  bnel        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E420u;
    {
        const bool branch_taken_0x26e420 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e420) {
            ctx->pc = 0x26E424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E420u;
            // 0x26e424: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E438u;
            goto label_26e438;
        }
    }
    ctx->pc = 0x26E428u;
    // 0x26e428: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26e428u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_26e42c:
    // 0x26e42c: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x26e42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26e430: 0x1440fe45  bnez        $v0, . + 4 + (-0x1BB << 2)
    ctx->pc = 0x26E430u;
    {
        const bool branch_taken_0x26e430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E430u;
        // 0x26e434: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e430) {
            ctx->pc = 0x26DD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26dd48;
        }
    }
    ctx->pc = 0x26E438u;
label_26e438:
    // 0x26e438: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x26e438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x26e43c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26e43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26e440: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26e440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e444: 0x1462fe30  bne         $v1, $v0, . + 4 + (-0x1D0 << 2)
    ctx->pc = 0x26E444u;
    {
        const bool branch_taken_0x26e444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E444u;
        // 0x26e448: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e444) {
            ctx->pc = 0x26DD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26dd08;
        }
    }
    ctx->pc = 0x26E44Cu;
label_26e44c:
    // 0x26e44c: 0x16e001fb  bnez        $s7, . + 4 + (0x1FB << 2)
    ctx->pc = 0x26E44Cu;
    {
        const bool branch_taken_0x26e44c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E44Cu;
        // 0x26e450: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e44c) {
            ctx->pc = 0x26EC3Cu;
            goto label_26ec3c;
        }
    }
    ctx->pc = 0x26E454u;
    // 0x26e454: 0x96250008  lhu         $a1, 0x8($s1)
    ctx->pc = 0x26e454u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26e458: 0xc09905e  jal         func_264178
    ctx->pc = 0x26E458u;
    SET_GPR_U32(ctx, 31, 0x26E460u);
    ctx->pc = 0x26E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E458u;
    // 0x26e45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26E458u, 0x26E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E460u;
label_26e460:
    // 0x26e460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26e460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e464: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x26e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x26e468: 0x10a201f4  beq         $a1, $v0, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x26E468u;
    {
        const bool branch_taken_0x26e468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E468u;
        // 0x26e46c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e468) {
            ctx->pc = 0x26EC3Cu;
            goto label_26ec3c;
        }
    }
    ctx->pc = 0x26E470u;
    // 0x26e470: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x26e470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26e474: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x26e474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x26e478: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e47c: 0x144001ef  bnez        $v0, . + 4 + (0x1EF << 2)
    ctx->pc = 0x26E47Cu;
    {
        const bool branch_taken_0x26e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E47Cu;
        // 0x26e480: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e47c) {
            ctx->pc = 0x26EC3Cu;
            goto label_26ec3c;
        }
    }
    ctx->pc = 0x26E484u;
    // 0x26e484: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x26e484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x26e488: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26e488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e48c: 0x144001eb  bnez        $v0, . + 4 + (0x1EB << 2)
    ctx->pc = 0x26E48Cu;
    {
        const bool branch_taken_0x26e48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E48Cu;
        // 0x26e490: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e48c) {
            ctx->pc = 0x26EC3Cu;
            goto label_26ec3c;
        }
    }
    ctx->pc = 0x26E494u;
    // 0x26e494: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x26e494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26e498: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x26e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x26e49c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E49Cu;
    {
        const bool branch_taken_0x26e49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E49Cu;
        // 0x26e4a0: 0x8e5e00bc  lw          $fp, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e49c) {
            ctx->pc = 0x26E4B8u;
            goto label_26e4b8;
        }
    }
    ctx->pc = 0x26E4A4u;
    // 0x26e4a4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x26e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x26e4a8: 0xae4200bc  sw          $v0, 0xBC($s2)
    ctx->pc = 0x26e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
    // 0x26e4ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E4ACu;
    {
        const bool branch_taken_0x26e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4ACu;
        // 0x26e4b0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4ac) {
            ctx->pc = 0x26E4BCu;
            goto label_26e4bc;
        }
    }
    ctx->pc = 0x26E4B4u;
    // 0x26e4b4: 0x0  nop
    ctx->pc = 0x26e4b4u;
    // NOP
label_26e4b8:
    // 0x26e4b8: 0xae5e0054  sw          $fp, 0x54($s2)
    ctx->pc = 0x26e4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 30));
label_26e4bc:
    // 0x26e4bc: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x26e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26e4c0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x26e4c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26e4c4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x26e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x26e4c8: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x26e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x26e4cc: 0x8cb10014  lw          $s1, 0x14($a1)
    ctx->pc = 0x26e4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x26e4d0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26e4d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e4d4: 0x506401d8  beql        $v1, $a0, . + 4 + (0x1D8 << 2)
    ctx->pc = 0x26E4D4u;
    {
        const bool branch_taken_0x26e4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x26e4d4) {
            ctx->pc = 0x26E4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E4D4u;
            // 0x26e4d8: 0xae5e00bc  sw          $fp, 0xBC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EC38u;
            goto label_26ec38;
        }
    }
    ctx->pc = 0x26E4DCu;
    // 0x26e4dc: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x26e4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_26e4e0:
    // 0x26e4e0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26E4E0u;
    {
        const bool branch_taken_0x26e4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e4e0) {
            ctx->pc = 0x26E4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E4E0u;
            // 0x26e4e4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E510u;
            goto label_26e510;
        }
    }
    ctx->pc = 0x26E4E8u;
    // 0x26e4e8: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26e4ec: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x26e4ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26e4f0: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x26e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26e4f4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x26e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26e4f8: 0x96330014  lhu         $s3, 0x14($s1)
    ctx->pc = 0x26e4f8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x26e4fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26e500: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x26e500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x26e504: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x26e504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26e508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26E508u;
    {
        const bool branch_taken_0x26e508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E508u;
        // 0x26e50c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e508) {
            ctx->pc = 0x26E514u;
            goto label_26e514;
        }
    }
    ctx->pc = 0x26E510u;
label_26e510:
    // 0x26e510: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x26e510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e514:
    // 0x26e514: 0x126001c2  beqz        $s3, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x26E514u;
    {
        const bool branch_taken_0x26e514 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E514u;
        // 0x26e518: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e514) {
            ctx->pc = 0x26EC20u;
            goto label_26ec20;
        }
    }
    ctx->pc = 0x26E51Cu;
    // 0x26e51c: 0x0  nop
    ctx->pc = 0x26e51cu;
    // NOP
label_26e520:
    // 0x26e520: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26e520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26e524: 0xc09905e  jal         func_264178
    ctx->pc = 0x26E524u;
    SET_GPR_U32(ctx, 31, 0x26E52Cu);
    ctx->pc = 0x26E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E524u;
    // 0x26e528: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26E524u, 0x26E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E52Cu;
label_26e52c:
    // 0x26e52c: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x26e52cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26e530: 0x547601b8  bnel        $v1, $s6, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x26E530u;
    {
        const bool branch_taken_0x26e530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x26e530) {
            ctx->pc = 0x26E534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E530u;
            // 0x26e534: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EC14u;
            goto label_26ec14;
        }
    }
    ctx->pc = 0x26E538u;
    // 0x26e538: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x26e538u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e540: 0x546201b4  bnel        $v1, $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x26E540u;
    {
        const bool branch_taken_0x26e540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e540) {
            ctx->pc = 0x26E544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E540u;
            // 0x26e544: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EC14u;
            goto label_26ec14;
        }
    }
    ctx->pc = 0x26E548u;
    // 0x26e548: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x26e548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x26e54c: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26e54cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e550: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e554: 0x144001ac  bnez        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x26E554u;
    {
        const bool branch_taken_0x26e554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E554u;
        // 0x26e558: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e554) {
            ctx->pc = 0x26EC08u;
            goto label_26ec08;
        }
    }
    ctx->pc = 0x26E55Cu;
    // 0x26e55c: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x26e55cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x26e560: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26e560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e564: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x26E564u;
    {
        const bool branch_taken_0x26e564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E564u;
        // 0x26e568: 0x24063ff8  addiu       $a2, $zero, 0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e564) {
            ctx->pc = 0x26EC08u;
            goto label_26ec08;
        }
    }
    ctx->pc = 0x26E56Cu;
    // 0x26e56c: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x26e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26e570: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x26e570u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e574: 0x84a3003e  lh          $v1, 0x3E($a1)
    ctx->pc = 0x26e574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x26e578: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x26e578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26e57c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26e580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26e584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e588: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26e588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26e58c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26e590: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26e590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26e594: 0x10860182  beq         $a0, $a2, . + 4 + (0x182 << 2)
    ctx->pc = 0x26E594u;
    {
        const bool branch_taken_0x26e594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x26E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E594u;
        // 0x26e598: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e594) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E59Cu;
    // 0x26e59c: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x26e59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x26e5a0: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x26E5A0u;
    {
        const bool branch_taken_0x26e5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5A0u;
        // 0x26e5a4: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5a0) {
            ctx->pc = 0x26E898u;
            goto label_26e898;
        }
    }
    ctx->pc = 0x26E5A8u;
    // 0x26e5a8: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x26e5a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x26e5ac: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x26E5ACu;
    {
        const bool branch_taken_0x26e5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5ACu;
        // 0x26e5b0: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5ac) {
            ctx->pc = 0x26E730u;
            goto label_26e730;
        }
    }
    ctx->pc = 0x26E5B4u;
    // 0x26e5b4: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x26e5b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x26e5b8: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x26E5B8u;
    {
        const bool branch_taken_0x26e5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5B8u;
        // 0x26e5bc: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5b8) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E5C0u;
    // 0x26e5c0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x26E5C0u;
    {
        const bool branch_taken_0x26e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5C0u;
        // 0x26e5c4: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5c0) {
            ctx->pc = 0x26E670u;
            goto label_26e670;
        }
    }
    ctx->pc = 0x26E5C8u;
    // 0x26e5c8: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x26e5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x26e5cc: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x26E5CCu;
    {
        const bool branch_taken_0x26e5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5CCu;
        // 0x26e5d0: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5cc) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E5D4u;
    // 0x26e5d4: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x26E5D4u;
    {
        const bool branch_taken_0x26e5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5D4u;
        // 0x26e5d8: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5d4) {
            ctx->pc = 0x26EB80u;
            goto label_26eb80;
        }
    }
    ctx->pc = 0x26E5DCu;
    // 0x26e5dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E5DCu;
    {
        const bool branch_taken_0x26e5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5DCu;
        // 0x26e5e0: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5dc) {
            ctx->pc = 0x26E628u;
            goto label_26e628;
        }
    }
    ctx->pc = 0x26E5E4u;
    // 0x26e5e4: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x26e5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e5e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E5E8u;
    {
        const bool branch_taken_0x26e5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5E8u;
        // 0x26e5ec: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5e8) {
            ctx->pc = 0x26E610u;
            goto label_26e610;
        }
    }
    ctx->pc = 0x26E5F0u;
    // 0x26e5f0: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x26e5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x26e5f4: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x26E5F4u;
    {
        const bool branch_taken_0x26e5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5F4u;
        // 0x26e5f8: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5f4) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E5FCu;
    // 0x26e5fc: 0x10820178  beq         $a0, $v0, . + 4 + (0x178 << 2)
    ctx->pc = 0x26E5FCu;
    {
        const bool branch_taken_0x26e5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e5fc) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E604u;
    // 0x26e604: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x26E604u;
    {
        const bool branch_taken_0x26e604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e604) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E60Cu;
    // 0x26e60c: 0x0  nop
    ctx->pc = 0x26e60cu;
    // NOP
label_26e610:
    // 0x26e610: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x26E610u;
    {
        const bool branch_taken_0x26e610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E610u;
        // 0x26e614: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e610) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E618u;
    // 0x26e618: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x26E618u;
    {
        const bool branch_taken_0x26e618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e618) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E620u;
    // 0x26e620: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x26E620u;
    {
        const bool branch_taken_0x26e620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e620) {
            ctx->pc = 0x26EB80u;
            goto label_26eb80;
        }
    }
    ctx->pc = 0x26E628u;
label_26e628:
    // 0x26e628: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x26E628u;
    {
        const bool branch_taken_0x26e628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E628u;
        // 0x26e62c: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e628) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E630u;
    // 0x26e630: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E630u;
    {
        const bool branch_taken_0x26e630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E630u;
        // 0x26e634: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e630) {
            ctx->pc = 0x26E658u;
            goto label_26e658;
        }
    }
    ctx->pc = 0x26E638u;
    // 0x26e638: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x26e638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x26e63c: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26E63Cu;
    {
        const bool branch_taken_0x26e63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E63Cu;
        // 0x26e640: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e63c) {
            ctx->pc = 0x26EB98u;
            goto label_26eb98;
        }
    }
    ctx->pc = 0x26E644u;
    // 0x26e644: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x26E644u;
    {
        const bool branch_taken_0x26e644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E644u;
        // 0x26e648: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e644) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E64Cu;
    // 0x26e64c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x26E64Cu;
    {
        const bool branch_taken_0x26e64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e64c) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E654u;
    // 0x26e654: 0x0  nop
    ctx->pc = 0x26e654u;
    // NOP
label_26e658:
    // 0x26e658: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x26E658u;
    {
        const bool branch_taken_0x26e658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E658u;
        // 0x26e65c: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e658) {
            ctx->pc = 0x26EB80u;
            goto label_26eb80;
        }
    }
    ctx->pc = 0x26E660u;
    // 0x26e660: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x26E660u;
    {
        const bool branch_taken_0x26e660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e660) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E668u;
    // 0x26e668: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x26E668u;
    {
        const bool branch_taken_0x26e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e668) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E670u;
label_26e670:
    // 0x26e670: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x26E670u;
    {
        const bool branch_taken_0x26e670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E670u;
        // 0x26e674: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e670) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E678u;
    // 0x26e678: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26E678u;
    {
        const bool branch_taken_0x26e678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E678u;
        // 0x26e67c: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e678) {
            ctx->pc = 0x26E6D0u;
            goto label_26e6d0;
        }
    }
    ctx->pc = 0x26E680u;
    // 0x26e680: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x26e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x26e684: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26E684u;
    {
        const bool branch_taken_0x26e684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E684u;
        // 0x26e688: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e684) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E68Cu;
    // 0x26e68c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E68Cu;
    {
        const bool branch_taken_0x26e68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E68Cu;
        // 0x26e690: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e68c) {
            ctx->pc = 0x26E6B0u;
            goto label_26e6b0;
        }
    }
    ctx->pc = 0x26E694u;
    // 0x26e694: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x26e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x26e698: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x26E698u;
    {
        const bool branch_taken_0x26e698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E698u;
        // 0x26e69c: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e698) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E6A0u;
    // 0x26e6a0: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x26E6A0u;
    {
        const bool branch_taken_0x26e6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6A0u;
        // 0x26e6a4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6a0) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E6A8u;
    // 0x26e6a8: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x26E6A8u;
    {
        const bool branch_taken_0x26e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e6a8) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E6B0u;
label_26e6b0:
    // 0x26e6b0: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x26E6B0u;
    {
        const bool branch_taken_0x26e6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6B0u;
        // 0x26e6b4: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6b0) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E6B8u;
    // 0x26e6b8: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x26E6B8u;
    {
        const bool branch_taken_0x26e6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6B8u;
        // 0x26e6bc: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6b8) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E6C0u;
    // 0x26e6c0: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x26E6C0u;
    {
        const bool branch_taken_0x26e6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6C0u;
        // 0x26e6c4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6c0) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E6C8u;
    // 0x26e6c8: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x26E6C8u;
    {
        const bool branch_taken_0x26e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e6c8) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E6D0u;
label_26e6d0:
    // 0x26e6d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E6D0u;
    {
        const bool branch_taken_0x26e6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6D0u;
        // 0x26e6d4: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6d0) {
            ctx->pc = 0x26E6F8u;
            goto label_26e6f8;
        }
    }
    ctx->pc = 0x26E6D8u;
    // 0x26e6d8: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x26e6d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x26e6dc: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x26E6DCu;
    {
        const bool branch_taken_0x26e6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6DCu;
        // 0x26e6e0: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6dc) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E6E4u;
    // 0x26e6e4: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x26E6E4u;
    {
        const bool branch_taken_0x26e6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e6e4) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E6ECu;
    // 0x26e6ec: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x26E6ECu;
    {
        const bool branch_taken_0x26e6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e6ec) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E6F4u;
    // 0x26e6f4: 0x0  nop
    ctx->pc = 0x26e6f4u;
    // NOP
label_26e6f8:
    // 0x26e6f8: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26E6F8u;
    {
        const bool branch_taken_0x26e6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6F8u;
        // 0x26e6fc: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6f8) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E700u;
    // 0x26e700: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E700u;
    {
        const bool branch_taken_0x26e700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E700u;
        // 0x26e704: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e700) {
            ctx->pc = 0x26E720u;
            goto label_26e720;
        }
    }
    ctx->pc = 0x26E708u;
    // 0x26e708: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x26e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x26e70c: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x26E70Cu;
    {
        const bool branch_taken_0x26e70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E70Cu;
        // 0x26e710: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e70c) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E714u;
    // 0x26e714: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x26E714u;
    {
        const bool branch_taken_0x26e714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e714) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E71Cu;
    // 0x26e71c: 0x0  nop
    ctx->pc = 0x26e71cu;
    // NOP
label_26e720:
    // 0x26e720: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26E720u;
    {
        const bool branch_taken_0x26e720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e720) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E728u;
    // 0x26e728: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x26E728u;
    {
        const bool branch_taken_0x26e728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e728) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E730u;
label_26e730:
    // 0x26e730: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x26E730u;
    {
        const bool branch_taken_0x26e730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E730u;
        // 0x26e734: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e730) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E738u;
    // 0x26e738: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26E738u;
    {
        const bool branch_taken_0x26e738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E738u;
        // 0x26e73c: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e738) {
            ctx->pc = 0x26E7F8u;
            goto label_26e7f8;
        }
    }
    ctx->pc = 0x26E740u;
    // 0x26e740: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x26e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x26e744: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x26E744u;
    {
        const bool branch_taken_0x26e744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E744u;
        // 0x26e748: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e744) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E74Cu;
    // 0x26e74c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E74Cu;
    {
        const bool branch_taken_0x26e74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E74Cu;
        // 0x26e750: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e74c) {
            ctx->pc = 0x26E798u;
            goto label_26e798;
        }
    }
    ctx->pc = 0x26E754u;
    // 0x26e754: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x26e754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x26e758: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E758u;
    {
        const bool branch_taken_0x26e758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E758u;
        // 0x26e75c: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e758) {
            ctx->pc = 0x26E780u;
            goto label_26e780;
        }
    }
    ctx->pc = 0x26E760u;
    // 0x26e760: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x26e760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x26e764: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x26E764u;
    {
        const bool branch_taken_0x26e764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E764u;
        // 0x26e768: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e764) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E76Cu;
    // 0x26e76c: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x26E76Cu;
    {
        const bool branch_taken_0x26e76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e76c) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E774u;
    // 0x26e774: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x26E774u;
    {
        const bool branch_taken_0x26e774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e774) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E77Cu;
    // 0x26e77c: 0x0  nop
    ctx->pc = 0x26e77cu;
    // NOP
label_26e780:
    // 0x26e780: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x26E780u;
    {
        const bool branch_taken_0x26e780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E780u;
        // 0x26e784: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e780) {
            ctx->pc = 0x26EB68u;
            goto label_26eb68;
        }
    }
    ctx->pc = 0x26E788u;
    // 0x26e788: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x26E788u;
    {
        const bool branch_taken_0x26e788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E788u;
        // 0x26e78c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e788) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E790u;
    // 0x26e790: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x26E790u;
    {
        const bool branch_taken_0x26e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e790) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E798u;
label_26e798:
    // 0x26e798: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E798u;
    {
        const bool branch_taken_0x26e798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E798u;
        // 0x26e79c: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e798) {
            ctx->pc = 0x26E7C0u;
            goto label_26e7c0;
        }
    }
    ctx->pc = 0x26E7A0u;
    // 0x26e7a0: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x26e7a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x26e7a4: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x26E7A4u;
    {
        const bool branch_taken_0x26e7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7A4u;
        // 0x26e7a8: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7a4) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E7ACu;
    // 0x26e7ac: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x26E7ACu;
    {
        const bool branch_taken_0x26e7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e7ac) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E7B4u;
    // 0x26e7b4: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x26E7B4u;
    {
        const bool branch_taken_0x26e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e7b4) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E7BCu;
    // 0x26e7bc: 0x0  nop
    ctx->pc = 0x26e7bcu;
    // NOP
label_26e7c0:
    // 0x26e7c0: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x26E7C0u;
    {
        const bool branch_taken_0x26e7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7C0u;
        // 0x26e7c4: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7c0) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E7C8u;
    // 0x26e7c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E7C8u;
    {
        const bool branch_taken_0x26e7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7C8u;
        // 0x26e7cc: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7c8) {
            ctx->pc = 0x26E7E8u;
            goto label_26e7e8;
        }
    }
    ctx->pc = 0x26E7D0u;
    // 0x26e7d0: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x26e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x26e7d4: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26E7D4u;
    {
        const bool branch_taken_0x26e7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7D4u;
        // 0x26e7d8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7d4) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E7DCu;
    // 0x26e7dc: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x26E7DCu;
    {
        const bool branch_taken_0x26e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e7dc) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E7E4u;
    // 0x26e7e4: 0x0  nop
    ctx->pc = 0x26e7e4u;
    // NOP
label_26e7e8:
    // 0x26e7e8: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x26E7E8u;
    {
        const bool branch_taken_0x26e7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e7e8) {
            ctx->pc = 0x26E7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E7E8u;
            // 0x26e7ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E7F0u;
    // 0x26e7f0: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x26E7F0u;
    {
        const bool branch_taken_0x26e7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e7f0) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E7F8u;
label_26e7f8:
    // 0x26e7f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26E7F8u;
    {
        const bool branch_taken_0x26e7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7F8u;
        // 0x26e7fc: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7f8) {
            ctx->pc = 0x26E850u;
            goto label_26e850;
        }
    }
    ctx->pc = 0x26E800u;
    // 0x26e800: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x26e800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x26e804: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x26E804u;
    {
        const bool branch_taken_0x26e804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E804u;
        // 0x26e808: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e804) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E80Cu;
    // 0x26e80c: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x26E80Cu;
    {
        const bool branch_taken_0x26e80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E80Cu;
        // 0x26e810: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e80c) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E814u;
    // 0x26e814: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E814u;
    {
        const bool branch_taken_0x26e814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E814u;
        // 0x26e818: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e814) {
            ctx->pc = 0x26E838u;
            goto label_26e838;
        }
    }
    ctx->pc = 0x26E81Cu;
    // 0x26e81c: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x26e81cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x26e820: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26E820u;
    {
        const bool branch_taken_0x26e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E820u;
        // 0x26e824: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e820) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E828u;
    // 0x26e828: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x26E828u;
    {
        const bool branch_taken_0x26e828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e828) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E830u;
    // 0x26e830: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x26E830u;
    {
        const bool branch_taken_0x26e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e830) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E838u;
label_26e838:
    // 0x26e838: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26E838u;
    {
        const bool branch_taken_0x26e838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E838u;
        // 0x26e83c: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e838) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E840u;
    // 0x26e840: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x26E840u;
    {
        const bool branch_taken_0x26e840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e840) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E848u;
    // 0x26e848: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x26E848u;
    {
        const bool branch_taken_0x26e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e848) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E850u;
label_26e850:
    // 0x26e850: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x26E850u;
    {
        const bool branch_taken_0x26e850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E850u;
        // 0x26e854: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e850) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E858u;
    // 0x26e858: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E858u;
    {
        const bool branch_taken_0x26e858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E858u;
        // 0x26e85c: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e858) {
            ctx->pc = 0x26E880u;
            goto label_26e880;
        }
    }
    ctx->pc = 0x26E860u;
    // 0x26e860: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x26e864: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x26E864u;
    {
        const bool branch_taken_0x26e864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E864u;
        // 0x26e868: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e864) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E86Cu;
    // 0x26e86c: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x26E86Cu;
    {
        const bool branch_taken_0x26e86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E86Cu;
        // 0x26e870: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e86c) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E874u;
    // 0x26e874: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x26E874u;
    {
        const bool branch_taken_0x26e874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e874) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E87Cu;
    // 0x26e87c: 0x0  nop
    ctx->pc = 0x26e87cu;
    // NOP
label_26e880:
    // 0x26e880: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x26E880u;
    {
        const bool branch_taken_0x26e880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E880u;
        // 0x26e884: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e880) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E888u;
    // 0x26e888: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26E888u;
    {
        const bool branch_taken_0x26e888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e888) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E890u;
    // 0x26e890: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x26E890u;
    {
        const bool branch_taken_0x26e890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e890) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E898u;
label_26e898:
    // 0x26e898: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x26E898u;
    {
        const bool branch_taken_0x26e898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E898u;
        // 0x26e89c: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e898) {
            ctx->pc = 0x26EB98u;
            goto label_26eb98;
        }
    }
    ctx->pc = 0x26E8A0u;
    // 0x26e8a0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26E8A0u;
    {
        const bool branch_taken_0x26e8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8A0u;
        // 0x26e8a4: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8a0) {
            ctx->pc = 0x26E9F8u;
            goto label_26e9f8;
        }
    }
    ctx->pc = 0x26E8A8u;
    // 0x26e8a8: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x26e8a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x26e8ac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26E8ACu;
    {
        const bool branch_taken_0x26e8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8ACu;
        // 0x26e8b0: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8ac) {
            ctx->pc = 0x26E950u;
            goto label_26e950;
        }
    }
    ctx->pc = 0x26E8B4u;
    // 0x26e8b4: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x26e8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x26e8b8: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x26E8B8u;
    {
        const bool branch_taken_0x26e8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8B8u;
        // 0x26e8bc: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8b8) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E8C0u;
    // 0x26e8c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26E8C0u;
    {
        const bool branch_taken_0x26e8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8C0u;
        // 0x26e8c4: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8c0) {
            ctx->pc = 0x26E908u;
            goto label_26e908;
        }
    }
    ctx->pc = 0x26E8C8u;
    // 0x26e8c8: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x26e8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x26e8cc: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x26E8CCu;
    {
        const bool branch_taken_0x26e8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8CCu;
        // 0x26e8d0: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8cc) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E8D4u;
    // 0x26e8d4: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x26E8D4u;
    {
        const bool branch_taken_0x26e8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8D4u;
        // 0x26e8d8: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8d4) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E8DCu;
    // 0x26e8dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E8DCu;
    {
        const bool branch_taken_0x26e8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8DCu;
        // 0x26e8e0: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8dc) {
            ctx->pc = 0x26E8F8u;
            goto label_26e8f8;
        }
    }
    ctx->pc = 0x26E8E4u;
    // 0x26e8e4: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x26e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x26e8e8: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x26E8E8u;
    {
        const bool branch_taken_0x26e8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8E8u;
        // 0x26e8ec: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8e8) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E8F0u;
    // 0x26e8f0: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x26E8F0u;
    {
        const bool branch_taken_0x26e8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e8f0) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E8F8u;
label_26e8f8:
    // 0x26e8f8: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x26E8F8u;
    {
        const bool branch_taken_0x26e8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e8f8) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E900u;
    // 0x26e900: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x26E900u;
    {
        const bool branch_taken_0x26e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e900) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E908u;
label_26e908:
    // 0x26e908: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26E908u;
    {
        const bool branch_taken_0x26e908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E908u;
        // 0x26e90c: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e908) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E910u;
    // 0x26e910: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E910u;
    {
        const bool branch_taken_0x26e910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E910u;
        // 0x26e914: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e910) {
            ctx->pc = 0x26E938u;
            goto label_26e938;
        }
    }
    ctx->pc = 0x26E918u;
    // 0x26e918: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x26e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x26e91c: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26E91Cu;
    {
        const bool branch_taken_0x26e91c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E91Cu;
        // 0x26e920: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e91c) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E924u;
    // 0x26e924: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x26E924u;
    {
        const bool branch_taken_0x26e924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E924u;
        // 0x26e928: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e924) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E92Cu;
    // 0x26e92c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x26E92Cu;
    {
        const bool branch_taken_0x26e92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e92c) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E934u;
    // 0x26e934: 0x0  nop
    ctx->pc = 0x26e934u;
    // NOP
label_26e938:
    // 0x26e938: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x26E938u;
    {
        const bool branch_taken_0x26e938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E938u;
        // 0x26e93c: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e938) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E940u;
    // 0x26e940: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26E940u;
    {
        const bool branch_taken_0x26e940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e940) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E948u;
    // 0x26e948: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x26E948u;
    {
        const bool branch_taken_0x26e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e948) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E950u;
label_26e950:
    // 0x26e950: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x26E950u;
    {
        const bool branch_taken_0x26e950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E950u;
        // 0x26e954: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e950) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E958u;
    // 0x26e958: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26E958u;
    {
        const bool branch_taken_0x26e958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E958u;
        // 0x26e95c: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e958) {
            ctx->pc = 0x26E9B0u;
            goto label_26e9b0;
        }
    }
    ctx->pc = 0x26E960u;
    // 0x26e960: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x26e960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x26e964: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x26E964u;
    {
        const bool branch_taken_0x26e964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E964u;
        // 0x26e968: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e964) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E96Cu;
    // 0x26e96c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E96Cu;
    {
        const bool branch_taken_0x26e96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E96Cu;
        // 0x26e970: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e96c) {
            ctx->pc = 0x26E990u;
            goto label_26e990;
        }
    }
    ctx->pc = 0x26E974u;
    // 0x26e974: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x26e974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x26e978: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x26E978u;
    {
        const bool branch_taken_0x26e978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E978u;
        // 0x26e97c: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e978) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26E980u;
    // 0x26e980: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x26E980u;
    {
        const bool branch_taken_0x26e980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E980u;
        // 0x26e984: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e980) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E988u;
    // 0x26e988: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x26E988u;
    {
        const bool branch_taken_0x26e988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e988) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E990u;
label_26e990:
    // 0x26e990: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x26E990u;
    {
        const bool branch_taken_0x26e990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E990u;
        // 0x26e994: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e990) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E998u;
    // 0x26e998: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x26E998u;
    {
        const bool branch_taken_0x26e998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E998u;
        // 0x26e99c: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e998) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E9A0u;
    // 0x26e9a0: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x26E9A0u;
    {
        const bool branch_taken_0x26e9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9A0u;
        // 0x26e9a4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9a0) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26E9A8u;
    // 0x26e9a8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x26E9A8u;
    {
        const bool branch_taken_0x26e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e9a8) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E9B0u;
label_26e9b0:
    // 0x26e9b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E9B0u;
    {
        const bool branch_taken_0x26e9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9B0u;
        // 0x26e9b4: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9b0) {
            ctx->pc = 0x26E9D8u;
            goto label_26e9d8;
        }
    }
    ctx->pc = 0x26E9B8u;
    // 0x26e9b8: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x26e9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x26e9bc: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x26E9BCu;
    {
        const bool branch_taken_0x26e9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9BCu;
        // 0x26e9c0: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9bc) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26E9C4u;
    // 0x26e9c4: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x26E9C4u;
    {
        const bool branch_taken_0x26e9c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e9c4) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26E9CCu;
    // 0x26e9cc: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26E9CCu;
    {
        const bool branch_taken_0x26e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e9cc) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E9D4u;
    // 0x26e9d4: 0x0  nop
    ctx->pc = 0x26e9d4u;
    // NOP
label_26e9d8:
    // 0x26e9d8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26E9D8u;
    {
        const bool branch_taken_0x26e9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9D8u;
        // 0x26e9dc: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9d8) {
            ctx->pc = 0x26EB80u;
            goto label_26eb80;
        }
    }
    ctx->pc = 0x26E9E0u;
    // 0x26e9e0: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x26E9E0u;
    {
        const bool branch_taken_0x26e9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9E0u;
        // 0x26e9e4: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9e0) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E9E8u;
    // 0x26e9e8: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x26E9E8u;
    {
        const bool branch_taken_0x26e9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e9e8) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26E9F0u;
    // 0x26e9f0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x26E9F0u;
    {
        const bool branch_taken_0x26e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e9f0) {
            ctx->pc = 0x26EB80u;
            goto label_26eb80;
        }
    }
    ctx->pc = 0x26E9F8u;
label_26e9f8:
    // 0x26e9f8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26E9F8u;
    {
        const bool branch_taken_0x26e9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9F8u;
        // 0x26e9fc: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9f8) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26EA00u;
    // 0x26ea00: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26EA00u;
    {
        const bool branch_taken_0x26ea00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA00u;
        // 0x26ea04: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea00) {
            ctx->pc = 0x26EAB8u;
            goto label_26eab8;
        }
    }
    ctx->pc = 0x26EA08u;
    // 0x26ea08: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x26ea08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x26ea0c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26EA0Cu;
    {
        const bool branch_taken_0x26ea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA0Cu;
        // 0x26ea10: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea0c) {
            ctx->pc = 0x26EA60u;
            goto label_26ea60;
        }
    }
    ctx->pc = 0x26EA14u;
    // 0x26ea14: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x26ea14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x26ea18: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x26EA18u;
    {
        const bool branch_taken_0x26ea18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA18u;
        // 0x26ea1c: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea18) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26EA20u;
    // 0x26ea20: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x26EA20u;
    {
        const bool branch_taken_0x26ea20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA20u;
        // 0x26ea24: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea20) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26EA28u;
    // 0x26ea28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26EA28u;
    {
        const bool branch_taken_0x26ea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA28u;
        // 0x26ea2c: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea28) {
            ctx->pc = 0x26EA48u;
            goto label_26ea48;
        }
    }
    ctx->pc = 0x26EA30u;
    // 0x26ea30: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x26ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x26ea34: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x26EA34u;
    {
        const bool branch_taken_0x26ea34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ea34) {
            ctx->pc = 0x26EB80u;
            goto label_26eb80;
        }
    }
    ctx->pc = 0x26EA3Cu;
    // 0x26ea3c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x26EA3Cu;
    {
        const bool branch_taken_0x26ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea3c) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EA44u;
    // 0x26ea44: 0x0  nop
    ctx->pc = 0x26ea44u;
    // NOP
label_26ea48:
    // 0x26ea48: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26EA48u;
    {
        const bool branch_taken_0x26ea48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA48u;
        // 0x26ea4c: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea48) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26EA50u;
    // 0x26ea50: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x26EA50u;
    {
        const bool branch_taken_0x26ea50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ea50) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26EA58u;
    // 0x26ea58: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x26EA58u;
    {
        const bool branch_taken_0x26ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea58) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EA60u;
label_26ea60:
    // 0x26ea60: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x26EA60u;
    {
        const bool branch_taken_0x26ea60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA60u;
        // 0x26ea64: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea60) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26EA68u;
    // 0x26ea68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26EA68u;
    {
        const bool branch_taken_0x26ea68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA68u;
        // 0x26ea6c: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea68) {
            ctx->pc = 0x26EA90u;
            goto label_26ea90;
        }
    }
    ctx->pc = 0x26EA70u;
    // 0x26ea70: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x26ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x26ea74: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x26EA74u;
    {
        const bool branch_taken_0x26ea74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA74u;
        // 0x26ea78: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea74) {
            ctx->pc = 0x26EB80u;
            goto label_26eb80;
        }
    }
    ctx->pc = 0x26EA7Cu;
    // 0x26ea7c: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26EA7Cu;
    {
        const bool branch_taken_0x26ea7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA7Cu;
        // 0x26ea80: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea7c) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26EA84u;
    // 0x26ea84: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26EA84u;
    {
        const bool branch_taken_0x26ea84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea84) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EA8Cu;
    // 0x26ea8c: 0x0  nop
    ctx->pc = 0x26ea8cu;
    // NOP
label_26ea90:
    // 0x26ea90: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26EA90u;
    {
        const bool branch_taken_0x26ea90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA90u;
        // 0x26ea94: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea90) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26EA98u;
    // 0x26ea98: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26EA98u;
    {
        const bool branch_taken_0x26ea98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA98u;
        // 0x26ea9c: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea98) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EAA0u;
    // 0x26eaa0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26EAA0u;
    {
        const bool branch_taken_0x26eaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAA0u;
        // 0x26eaa4: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eaa0) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EAA8u;
    // 0x26eaa8: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x26EAA8u;
    {
        const bool branch_taken_0x26eaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eaa8) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EAB0u;
    // 0x26eab0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x26EAB0u;
    {
        const bool branch_taken_0x26eab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eab0) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26EAB8u;
label_26eab8:
    // 0x26eab8: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26EAB8u;
    {
        const bool branch_taken_0x26eab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAB8u;
        // 0x26eabc: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eab8) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26EAC0u;
    // 0x26eac0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26EAC0u;
    {
        const bool branch_taken_0x26eac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAC0u;
        // 0x26eac4: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eac0) {
            ctx->pc = 0x26EB10u;
            goto label_26eb10;
        }
    }
    ctx->pc = 0x26EAC8u;
    // 0x26eac8: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x26eac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x26eacc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26EACCu;
    {
        const bool branch_taken_0x26eacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EACCu;
        // 0x26ead0: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eacc) {
            ctx->pc = 0x26EAF8u;
            goto label_26eaf8;
        }
    }
    ctx->pc = 0x26EAD4u;
    // 0x26ead4: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x26ead4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x26ead8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x26EAD8u;
    {
        const bool branch_taken_0x26ead8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAD8u;
        // 0x26eadc: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ead8) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26EAE0u;
    // 0x26eae0: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26EAE0u;
    {
        const bool branch_taken_0x26eae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAE0u;
        // 0x26eae4: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eae0) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26EAE8u;
    // 0x26eae8: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26EAE8u;
    {
        const bool branch_taken_0x26eae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26eae8) {
            ctx->pc = 0x26EBE0u;
            goto label_26ebe0;
        }
    }
    ctx->pc = 0x26EAF0u;
    // 0x26eaf0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26EAF0u;
    {
        const bool branch_taken_0x26eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eaf0) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EAF8u;
label_26eaf8:
    // 0x26eaf8: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26EAF8u;
    {
        const bool branch_taken_0x26eaf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAF8u;
        // 0x26eafc: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eaf8) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26EB00u;
    // 0x26eb00: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26EB00u;
    {
        const bool branch_taken_0x26eb00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB00u;
        // 0x26eb04: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb00) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26EB08u;
    // 0x26eb08: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26EB08u;
    {
        const bool branch_taken_0x26eb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb08) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EB10u;
label_26eb10:
    // 0x26eb10: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26eb10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26eb14: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26EB14u;
    {
        const bool branch_taken_0x26eb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB14u;
        // 0x26eb18: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb14) {
            ctx->pc = 0x26EB50u;
            goto label_26eb50;
        }
    }
    ctx->pc = 0x26EB1Cu;
    // 0x26eb1c: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x26eb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x26eb20: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26eb20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26eb24: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26EB24u;
    {
        const bool branch_taken_0x26eb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB24u;
        // 0x26eb28: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb24) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26EB2Cu;
    // 0x26eb2c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26eb2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26eb30: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26EB30u;
    {
        const bool branch_taken_0x26eb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB30u;
        // 0x26eb34: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb30) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EB38u;
    // 0x26eb38: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26eb38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26eb3c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26EB3Cu;
    {
        const bool branch_taken_0x26eb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eb3c) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EB44u;
    // 0x26eb44: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26EB44u;
    {
        const bool branch_taken_0x26eb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb44) {
            ctx->pc = 0x26EBC8u;
            goto label_26ebc8;
        }
    }
    ctx->pc = 0x26EB4Cu;
    // 0x26eb4c: 0x0  nop
    ctx->pc = 0x26eb4cu;
    // NOP
label_26eb50:
    // 0x26eb50: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26EB50u;
    {
        const bool branch_taken_0x26eb50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB50u;
        // 0x26eb54: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb50) {
            ctx->pc = 0x26EBA0u;
            goto label_26eba0;
        }
    }
    ctx->pc = 0x26EB58u;
    // 0x26eb58: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26EB58u;
    {
        const bool branch_taken_0x26eb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB58u;
        // 0x26eb5c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb58) {
            ctx->pc = 0x26EBA4u;
            goto label_26eba4;
        }
    }
    ctx->pc = 0x26EB60u;
    // 0x26eb60: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26EB60u;
    {
        const bool branch_taken_0x26eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb60) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EB68u;
label_26eb68:
    // 0x26eb68: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26EB68u;
    SET_GPR_U32(ctx, 31, 0x26EB70u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26EB68u, 0x26EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB70u;
label_26eb70:
    // 0x26eb70: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x26eb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x26eb74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26EB74u;
    {
        const bool branch_taken_0x26eb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB74u;
        // 0x26eb78: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb74) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EB7Cu;
    // 0x26eb7c: 0x0  nop
    ctx->pc = 0x26eb7cu;
    // NOP
label_26eb80:
    // 0x26eb80: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26EB80u;
    SET_GPR_U32(ctx, 31, 0x26EB88u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26EB80u, 0x26EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB88u;
label_26eb88:
    // 0x26eb88: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x26eb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x26eb8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26EB8Cu;
    {
        const bool branch_taken_0x26eb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB8Cu;
        // 0x26eb90: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb8c) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EB94u;
    // 0x26eb94: 0x0  nop
    ctx->pc = 0x26eb94u;
    // NOP
label_26eb98:
    // 0x26eb98: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26EB98u;
    {
        const bool branch_taken_0x26eb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB98u;
        // 0x26eb9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb98) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EBA0u;
label_26eba0:
    // 0x26eba0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26eba4:
    // 0x26eba4: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x26eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x26eba8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26EBA8u;
    {
        const bool branch_taken_0x26eba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBA8u;
        // 0x26ebac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eba8) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EBB0u;
    // 0x26ebb0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26EBB0u;
    SET_GPR_U32(ctx, 31, 0x26EBB8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26EBB0u, 0x26EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBB8u;
label_26ebb8:
    // 0x26ebb8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26ebb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26ebbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26EBBCu;
    {
        const bool branch_taken_0x26ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBBCu;
        // 0x26ebc0: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebbc) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EBC4u;
    // 0x26ebc4: 0x0  nop
    ctx->pc = 0x26ebc4u;
    // NOP
label_26ebc8:
    // 0x26ebc8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26EBC8u;
    SET_GPR_U32(ctx, 31, 0x26EBD0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26EBC8u, 0x26EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBD0u;
label_26ebd0:
    // 0x26ebd0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26ebd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26EBD4u;
    {
        const bool branch_taken_0x26ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBD4u;
        // 0x26ebd8: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebd4) {
            ctx->pc = 0x26EBF0u;
            goto label_26ebf0;
        }
    }
    ctx->pc = 0x26EBDCu;
    // 0x26ebdc: 0x0  nop
    ctx->pc = 0x26ebdcu;
    // NOP
label_26ebe0:
    // 0x26ebe0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26EBE0u;
    SET_GPR_U32(ctx, 31, 0x26EBE8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26EBE0u, 0x26EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBE8u;
label_26ebe8:
    // 0x26ebe8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26ebec: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x26ebecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_26ebf0:
    // 0x26ebf0: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EBF0u;
    {
        const bool branch_taken_0x26ebf0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBF0u;
        // 0x26ebf4: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebf0) {
            ctx->pc = 0x26EC08u;
            goto label_26ec08;
        }
    }
    ctx->pc = 0x26EBF8u;
    // 0x26ebf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebfc: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x26EBFCu;
    SET_GPR_U32(ctx, 31, 0x26EC04u);
    ctx->pc = 0x26EC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBFCu;
    // 0x26ec00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x26EBFCu, 0x26EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC04u;
label_26ec04:
    // 0x26ec04: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x26ec04u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26ec08:
    // 0x26ec08: 0x56a00005  bnel        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EC08u;
    {
        const bool branch_taken_0x26ec08 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ec08) {
            ctx->pc = 0x26EC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EC08u;
            // 0x26ec0c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EC20u;
            goto label_26ec20;
        }
    }
    ctx->pc = 0x26EC10u;
    // 0x26ec10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26ec10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_26ec14:
    // 0x26ec14: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x26ec14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26ec18: 0x1440fe41  bnez        $v0, . + 4 + (-0x1BF << 2)
    ctx->pc = 0x26EC18u;
    {
        const bool branch_taken_0x26ec18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC18u;
        // 0x26ec1c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec18) {
            ctx->pc = 0x26E520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e520;
        }
    }
    ctx->pc = 0x26EC20u;
label_26ec20:
    // 0x26ec20: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x26ec20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x26ec24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26ec24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26ec28: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26ec28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26ec2c: 0x1462fe2c  bne         $v1, $v0, . + 4 + (-0x1D4 << 2)
    ctx->pc = 0x26EC2Cu;
    {
        const bool branch_taken_0x26ec2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC2Cu;
        // 0x26ec30: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec2c) {
            ctx->pc = 0x26E4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e4e0;
        }
    }
    ctx->pc = 0x26EC34u;
    // 0x26ec34: 0xae5e00bc  sw          $fp, 0xBC($s2)
    ctx->pc = 0x26ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 30));
label_26ec38:
    // 0x26ec38: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x26ec38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ec3c:
    // 0x26ec3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26ec3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ec40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26ec40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26ec44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26ec44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ec48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26ec48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26ec4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26ec4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ec50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x26ec50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x26ec54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ec58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x26ec58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26ec5c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x26ec5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ec60: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x26ec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x26ec64: 0x3e00008  jr          $ra
    ctx->pc = 0x26EC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC64u;
        // 0x26ec68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EC6Cu;
    // 0x26ec6c: 0x0  nop
    ctx->pc = 0x26ec6cu;
    // NOP
    ctx->pc = 0x26ec70u;
}
