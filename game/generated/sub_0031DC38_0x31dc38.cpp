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

// Function: sub_0031DC38
// Address: 0x31dc38 - 0x31dd60
void sub_0031DC38_0x31dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DC38_0x31dc38");
#endif

    switch (ctx->pc) {
        case 0x31dcb8u: goto label_31dcb8;
        case 0x31dcf8u: goto label_31dcf8;
        case 0x31dd18u: goto label_31dd18;
        default: break;
    }

    ctx->pc = 0x31dc38u;

    // 0x31dc38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31dc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc3c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x31dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x31dc40: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x31dc40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x31dc44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31dc44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31dc48: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x31dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x31dc4c: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x31dc4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31dc50: 0x2c630031  sltiu       $v1, $v1, 0x31
    ctx->pc = 0x31dc50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x31dc54: 0x24494e30  addiu       $t1, $v0, 0x4E30
    ctx->pc = 0x31dc54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
    // 0x31dc58: 0x89260003  lwl         $a2, 0x3($t1)
    ctx->pc = 0x31dc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x31dc5c: 0x99260000  lwr         $a2, 0x0($t1)
    ctx->pc = 0x31dc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x31dc60: 0xaba60003  swl         $a2, 0x3($sp)
    ctx->pc = 0x31dc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31dc64: 0xbba60000  swr         $a2, 0x0($sp)
    ctx->pc = 0x31dc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31dc68: 0x24884e38  addiu       $t0, $a0, 0x4E38
    ctx->pc = 0x31dc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20024));
    // 0x31dc6c: 0x89020003  lwl         $v0, 0x3($t0)
    ctx->pc = 0x31dc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x31dc70: 0x99020000  lwr         $v0, 0x0($t0)
    ctx->pc = 0x31dc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x31dc74: 0xa9420003  swl         $v0, 0x3($t2)
    ctx->pc = 0x31dc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31dc78: 0xb9420000  swr         $v0, 0x0($t2)
    ctx->pc = 0x31dc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31dc7c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DC7Cu;
    {
        const bool branch_taken_0x31dc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dc7c) {
            ctx->pc = 0x31DC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DC7Cu;
            // 0x31dc80: 0x90a30011  lbu         $v1, 0x11($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DC90u;
            goto label_31dc90;
        }
    }
    ctx->pc = 0x31DC84u;
    // 0x31dc84: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x31DC84u;
    {
        const bool branch_taken_0x31dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC84u;
        // 0x31dc88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc84) {
            ctx->pc = 0x31DD58u;
            goto label_31dd58;
        }
    }
    ctx->pc = 0x31DC8Cu;
    // 0x31dc8c: 0x0  nop
    ctx->pc = 0x31dc8cu;
    // NOP
label_31dc90:
    // 0x31dc90: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x31dc90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31dc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31dc9c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31dca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31dca4: 0x8c42f8a8  lw          $v0, -0x758($v0)
    ctx->pc = 0x31dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965416)));
    // 0x31dca8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x31dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31dcac: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x31dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31dcb0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31dcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcb4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x31dcb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_31dcb8:
    // 0x31dcb8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31dcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31dcbc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x31dcbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31dcc0: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x31DCC0u;
    {
        const bool branch_taken_0x31dcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCC0u;
        // 0x31dcc4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcc0) {
            ctx->pc = 0x31DD54u;
            goto label_31dd54;
        }
    }
    ctx->pc = 0x31DCC8u;
    // 0x31dcc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31dcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31dccc: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x31dcccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31dcd0: 0x0  nop
    ctx->pc = 0x31dcd0u;
    // NOP
    // 0x31dcd4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31DCD4u;
    {
        const bool branch_taken_0x31dcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dcd4) {
            ctx->pc = 0x31DCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DCD4u;
            // 0x31dcd8: 0x90e30000  lbu         $v1, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dcb8;
        }
    }
    ctx->pc = 0x31DCDCu;
    // 0x31dcdc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x31dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31dce0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x31dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31dce4: 0x24102  srl         $t0, $v0, 4
    ctx->pc = 0x31dce4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x31dce8: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31DCE8u;
    {
        const bool branch_taken_0x31dce8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCE8u;
        // 0x31dcec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dce8) {
            ctx->pc = 0x31DD54u;
            goto label_31dd54;
        }
    }
    ctx->pc = 0x31DCF0u;
    // 0x31dcf0: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x31dcf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31dcf4: 0x0  nop
    ctx->pc = 0x31dcf4u;
    // NOP
label_31dcf8:
    // 0x31dcf8: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x31dcf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcfc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x31dcfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31dd00: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x31dd00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31dd04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31dd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd08: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31DD08u;
    {
        const bool branch_taken_0x31dd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD08u;
        // 0x31dd0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd08) {
            ctx->pc = 0x31DD3Cu;
            goto label_31dd3c;
        }
    }
    ctx->pc = 0x31DD10u;
    // 0x31dd10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31dd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31dd14: 0x0  nop
    ctx->pc = 0x31dd14u;
    // NOP
label_31dd18:
    // 0x31dd18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31dd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31dd1c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x31dd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31dd20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31DD20u;
    {
        const bool branch_taken_0x31dd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD20u;
        // 0x31dd24: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd20) {
            ctx->pc = 0x31DD3Cu;
            goto label_31dd3c;
        }
    }
    ctx->pc = 0x31DD28u;
    // 0x31dd28: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x31dd28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31dd2c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x31dd2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31dd30: 0x0  nop
    ctx->pc = 0x31dd30u;
    // NOP
    // 0x31dd34: 0x5062fff8  beql        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31DD34u;
    {
        const bool branch_taken_0x31dd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dd34) {
            ctx->pc = 0x31DD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DD34u;
            // 0x31dd38: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dd18;
        }
    }
    ctx->pc = 0x31DD3Cu;
label_31dd3c:
    // 0x31dd3c: 0x50cb0006  beql        $a2, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x31DD3Cu;
    {
        const bool branch_taken_0x31dd3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x31dd3c) {
            ctx->pc = 0x31DD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DD3Cu;
            // 0x31dd40: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DD58u;
            goto label_31dd58;
        }
    }
    ctx->pc = 0x31DD44u;
    // 0x31dd44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31dd44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31dd48: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x31dd48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x31dd4c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31DD4Cu;
    {
        const bool branch_taken_0x31dd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD4Cu;
        // 0x31dd50: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd4c) {
            ctx->pc = 0x31DCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dcf8;
        }
    }
    ctx->pc = 0x31DD54u;
label_31dd54:
    // 0x31dd54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31dd58:
    // 0x31dd58: 0x3e00008  jr          $ra
    ctx->pc = 0x31DD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD58u;
        // 0x31dd5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DD60u;
}
