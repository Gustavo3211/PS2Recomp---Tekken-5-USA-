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

// Function: sub_0048FB88
// Address: 0x48fb88 - 0x48fe70
void sub_0048FB88_0x48fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FB88_0x48fb88");
#endif

    ctx->pc = 0x48fb88u;

    // 0x48fb88: 0x3c0e0073  lui         $t6, 0x73
    ctx->pc = 0x48fb88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)115 << 16));
    // 0x48fb8c: 0x3c0d007e  lui         $t5, 0x7E
    ctx->pc = 0x48fb8cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)126 << 16));
    // 0x48fb90: 0x25cff932  addiu       $t7, $t6, -0x6CE
    ctx->pc = 0x48fb90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965554));
    // 0x48fb94: 0x25b814b8  addiu       $t8, $t5, 0x14B8
    ctx->pc = 0x48fb94u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 5304));
    // 0x48fb98: 0x8de2ffca  lw          $v0, -0x36($t7)
    ctx->pc = 0x48fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72F8FCu));
    // 0x48fb9c: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x48FB9Cu;
    {
        const bool branch_taken_0x48fb9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x48FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FB9Cu;
        // 0x48fba0: 0xaf0f0000  sw          $t7, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fb9c) {
            ctx->pc = 0x48FC40u;
            goto label_48fc40;
        }
    }
    ctx->pc = 0x48FBA4u;
    // 0x48fba4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x48fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x48fba8: 0x25e90001  addiu       $t1, $t7, 0x1
    ctx->pc = 0x48fba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x48fbac: 0x248414b0  addiu       $a0, $a0, 0x14B0
    ctx->pc = 0x48fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5296));
    // 0x48fbb0: 0x25ea0002  addiu       $t2, $t7, 0x2
    ctx->pc = 0x48fbb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x48fbb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7E14B0u));
    // 0x48fbb8: 0x25eb0003  addiu       $t3, $t7, 0x3
    ctx->pc = 0x48fbb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
    // 0x48fbbc: 0x25ec0004  addiu       $t4, $t7, 0x4
    ctx->pc = 0x48fbbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x48fbc0: 0x25ee0005  addiu       $t6, $t7, 0x5
    ctx->pc = 0x48fbc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 5));
    // 0x48fbc4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x48fbc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48fbc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48fbcc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x48fbccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E14B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B0u, _value); } while (0);
    // 0x48fbd0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x48fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48fbd4: 0xaf090000  sw          $t1, 0x0($t8)
    ctx->pc = 0x48fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 9));
    // 0x48fbd8: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x48fbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48fbdc: 0xa1e30000  sb          $v1, 0x0($t7)
    ctx->pc = 0x48fbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x48fbe0: 0x24470003  addiu       $a3, $v0, 0x3
    ctx->pc = 0x48fbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x48fbe4: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x48fbe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48fbe8: 0x244d0005  addiu       $t5, $v0, 0x5
    ctx->pc = 0x48fbe8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x48fbec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x48fbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48fbf0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x48fbf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E14B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B0u, _value); } while (0);
    // 0x48fbf4: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x48fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x48fbf8: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x48fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x48fbfc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x48fbfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48fc00: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x48fc00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7E14B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B0u, _value); } while (0);
    // 0x48fc04: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x48fc04u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fc08: 0xaf0b0000  sw          $t3, 0x0($t8)
    ctx->pc = 0x48fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 11));
    // 0x48fc0c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x48fc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48fc10: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x48fc10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7E14B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B0u, _value); } while (0);
    // 0x48fc14: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x48fc14u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fc18: 0xaf0c0000  sw          $t4, 0x0($t8)
    ctx->pc = 0x48fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 12));
    // 0x48fc1c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x48fc1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48fc20: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x48fc20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x7E14B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B0u, _value); } while (0);
    // 0x48fc24: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x48fc24u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fc28: 0xaf0e0000  sw          $t6, 0x0($t8)
    ctx->pc = 0x48fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 14));
    // 0x48fc2c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x48fc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48fc30: 0xac8d0000  sw          $t5, 0x0($a0)
    ctx->pc = 0x48fc30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x7E14B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B0u, _value); } while (0);
    // 0x48fc34: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x48fc34u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fc38: 0x3e00008  jr          $ra
    ctx->pc = 0x48FC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FC38u;
        // 0x48fc3c: 0xaf0f0000  sw          $t7, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FC40u;
label_48fc40:
    // 0x48fc40: 0x3c0c007e  lui         $t4, 0x7E
    ctx->pc = 0x48fc40u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)126 << 16));
    // 0x48fc44: 0x258214b0  addiu       $v0, $t4, 0x14B0
    ctx->pc = 0x48fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 5296));
    // 0x48fc48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7E14B0u));
    // 0x48fc4c: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x48fc4cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48fc50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fc54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48fc54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E14B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B0u, _value); } while (0);
    // 0x48fc58: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x48fc58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x48fc5c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x48fc5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x48fc60: 0x31220100  andi        $v0, $t1, 0x100
    ctx->pc = 0x48fc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
    // 0x48fc64: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x48FC64u;
    {
        const bool branch_taken_0x48fc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FC64u;
        // 0x48fc68: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fc64) {
            ctx->pc = 0x48FE50u;
            goto label_48fe50;
        }
    }
    ctx->pc = 0x48FC6Cu;
    // 0x48fc6c: 0x31220100  andi        $v0, $t1, 0x100
    ctx->pc = 0x48fc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
    // 0x48fc70: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x48FC70u;
    {
        const bool branch_taken_0x48fc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FC70u;
        // 0x48fc74: 0x30e70003  andi        $a3, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fc70) {
            ctx->pc = 0x48FCF8u;
            goto label_48fcf8;
        }
    }
    ctx->pc = 0x48FC78u;
    // 0x48fc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48fc7c: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x48FC7Cu;
    {
        const bool branch_taken_0x48fc7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x48FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FC7Cu;
        // 0x48fc80: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fc7c) {
            ctx->pc = 0x48FCD0u;
            goto label_48fcd0;
        }
    }
    ctx->pc = 0x48FC84u;
    // 0x48fc84: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x48fc84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48fc88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48FC88u;
    {
        const bool branch_taken_0x48fc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FC88u;
        // 0x48fc8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fc88) {
            ctx->pc = 0x48FCA0u;
            goto label_48fca0;
        }
    }
    ctx->pc = 0x48FC90u;
    // 0x48fc90: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x48FC90u;
    {
        const bool branch_taken_0x48fc90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FC90u;
        // 0x48fc94: 0x258b14b0  addiu       $t3, $t4, 0x14B0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 5296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fc90) {
            ctx->pc = 0x48FCC0u;
            goto label_48fcc0;
        }
    }
    ctx->pc = 0x48FC98u;
    // 0x48fc98: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x48FC98u;
    {
        const bool branch_taken_0x48fc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FC98u;
        // 0x48fc9c: 0x25aa14b8  addiu       $t2, $t5, 0x14B8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 5304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fc98) {
            ctx->pc = 0x48FD28u;
            goto label_48fd28;
        }
    }
    ctx->pc = 0x48FCA0u;
label_48fca0:
    // 0x48fca0: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48FCA0u;
    {
        const bool branch_taken_0x48fca0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x48FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FCA0u;
        // 0x48fca4: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fca0) {
            ctx->pc = 0x48FCD8u;
            goto label_48fcd8;
        }
    }
    ctx->pc = 0x48FCA8u;
    // 0x48fca8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48fcac: 0x10e2000c  beq         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x48FCACu;
    {
        const bool branch_taken_0x48fcac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x48FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FCACu;
        // 0x48fcb0: 0x258b14b0  addiu       $t3, $t4, 0x14B0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 5296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fcac) {
            ctx->pc = 0x48FCE0u;
            goto label_48fce0;
        }
    }
    ctx->pc = 0x48FCB4u;
    // 0x48fcb4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x48FCB4u;
    {
        const bool branch_taken_0x48fcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FCB4u;
        // 0x48fcb8: 0x25aa14b8  addiu       $t2, $t5, 0x14B8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 5304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fcb4) {
            ctx->pc = 0x48FD28u;
            goto label_48fd28;
        }
    }
    ctx->pc = 0x48FCBCu;
    // 0x48fcbc: 0x0  nop
    ctx->pc = 0x48fcbcu;
    // NOP
label_48fcc0:
    // 0x48fcc0: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x48fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x48fcc4: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x48fcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x48fcc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x48FCC8u;
    {
        const bool branch_taken_0x48fcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FCC8u;
        // 0x48fccc: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fcc8) {
            ctx->pc = 0x48FD20u;
            goto label_48fd20;
        }
    }
    ctx->pc = 0x48FCD0u;
label_48fcd0:
    // 0x48fcd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48FCD0u;
    {
        const bool branch_taken_0x48fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FCD0u;
        // 0x48fcd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fcd0) {
            ctx->pc = 0x48FCE8u;
            goto label_48fce8;
        }
    }
    ctx->pc = 0x48FCD8u;
label_48fcd8:
    // 0x48fcd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48FCD8u;
    {
        const bool branch_taken_0x48fcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FCD8u;
        // 0x48fcdc: 0x2403ff80  addiu       $v1, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fcd8) {
            ctx->pc = 0x48FCE8u;
            goto label_48fce8;
        }
    }
    ctx->pc = 0x48FCE0u;
label_48fce0:
    // 0x48fce0: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x48fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x48fce4: 0x2403ff82  addiu       $v1, $zero, -0x7E
    ctx->pc = 0x48fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
label_48fce8:
    // 0x48fce8: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x48fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x48fcec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48FCECu;
    {
        const bool branch_taken_0x48fcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FCECu;
        // 0x48fcf0: 0xa1e30000  sb          $v1, 0x0($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fcec) {
            ctx->pc = 0x48FD20u;
            goto label_48fd20;
        }
    }
    ctx->pc = 0x48FCF4u;
    // 0x48fcf4: 0x0  nop
    ctx->pc = 0x48fcf4u;
    // NOP
label_48fcf8:
    // 0x48fcf8: 0x258514b0  addiu       $a1, $t4, 0x14B0
    ctx->pc = 0x48fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 5296));
    // 0x48fcfc: 0x25a614b8  addiu       $a2, $t5, 0x14B8
    ctx->pc = 0x48fcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 5304));
    // 0x48fd00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x48fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48fd04: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x48fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48fd08: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x48fd08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48fd0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48fd10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x48fd10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x48fd14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fd18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x48fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x48fd1c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x48fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_48fd20:
    // 0x48fd20: 0x258b14b0  addiu       $t3, $t4, 0x14B0
    ctx->pc = 0x48fd20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 5296));
    // 0x48fd24: 0x25aa14b8  addiu       $t2, $t5, 0x14B8
    ctx->pc = 0x48fd24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 5304));
label_48fd28:
    // 0x48fd28: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x48fd28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x48fd2c: 0x91440  sll         $v0, $t1, 17
    ctx->pc = 0x48fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 17));
    // 0x48fd30: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x48fd30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48fd34: 0x24c03  sra         $t1, $v0, 16
    ctx->pc = 0x48fd34u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48fd38: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x48fd38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48fd3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x48fd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x48fd40: 0x31220100  andi        $v0, $t1, 0x100
    ctx->pc = 0x48fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
    // 0x48fd44: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x48fd44u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x48fd48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x48fd48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x48fd4c: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x48fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x48fd50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48FD50u;
    {
        const bool branch_taken_0x48fd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FD50u;
        // 0x48fd54: 0xad480000  sw          $t0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fd50) {
            ctx->pc = 0x48FD88u;
            goto label_48fd88;
        }
    }
    ctx->pc = 0x48FD58u;
    // 0x48fd58: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x48fd58u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48fd5c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x48fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x48fd60: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x48fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x48fd64: 0x25060002  addiu       $a2, $t0, 0x2
    ctx->pc = 0x48fd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x48fd68: 0x30e5000f  andi        $a1, $a3, 0xF
    ctx->pc = 0x48fd68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x48fd6c: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x48fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x48fd70: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x48fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x48fd74: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x48fd74u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fd78: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x48fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x48fd7c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x48fd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x48fd80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x48FD80u;
    {
        const bool branch_taken_0x48fd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FD80u;
        // 0x48fd84: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fd80) {
            ctx->pc = 0x48FDB8u;
            goto label_48fdb8;
        }
    }
    ctx->pc = 0x48FD88u;
label_48fd88:
    // 0x48fd88: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x48fd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48fd8c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x48fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x48fd90: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x48fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x48fd94: 0x25050002  addiu       $a1, $t0, 0x2
    ctx->pc = 0x48fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x48fd98: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x48fd98u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fd9c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48fd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48fda0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x48fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x48fda4: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x48fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x48fda8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x48fda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48fdac: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x48fdacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fdb0: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x48fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x48fdb4: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x48fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
label_48fdb8:
    // 0x48fdb8: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x48fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x48fdbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x48fdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x48fdc0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x48FDC0u;
    {
        const bool branch_taken_0x48fdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FDC0u;
        // 0x48fdc4: 0x258614b0  addiu       $a2, $t4, 0x14B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 5296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fdc0) {
            ctx->pc = 0x48FE08u;
            goto label_48fe08;
        }
    }
    ctx->pc = 0x48FDC8u;
    // 0x48fdc8: 0x25a514b8  addiu       $a1, $t5, 0x14B8
    ctx->pc = 0x48fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 5304));
    // 0x48fdcc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48fdd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x48fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48fdd4: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x48fdd4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48fdd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48fddc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x48fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x48fde0: 0x72102  srl         $a0, $a3, 4
    ctx->pc = 0x48fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x48fde4: 0x30e6000f  andi        $a2, $a3, 0xF
    ctx->pc = 0x48fde4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x48fde8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x48fde8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x48fdec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fdf0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x48fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fdf4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x48fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x48fdf8: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x48fdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x48fdfc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x48FDFCu;
    {
        const bool branch_taken_0x48fdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FDFCu;
        // 0x48fe00: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fdfc) {
            ctx->pc = 0x48FE48u;
            goto label_48fe48;
        }
    }
    ctx->pc = 0x48FE04u;
    // 0x48fe04: 0x0  nop
    ctx->pc = 0x48fe04u;
    // NOP
label_48fe08:
    // 0x48fe08: 0x258514b0  addiu       $a1, $t4, 0x14B0
    ctx->pc = 0x48fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 5296));
    // 0x48fe0c: 0x25a614b8  addiu       $a2, $t5, 0x14B8
    ctx->pc = 0x48fe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 5304));
    // 0x48fe10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x48fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48fe14: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x48fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48fe18: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x48fe18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48fe1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fe20: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x48fe20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fe24: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x48fe24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fe28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48fe2c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x48fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x48fe30: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x48fe30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48fe34: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x48fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x48fe38: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x48fe38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48fe3c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x48fe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fe40: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x48fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x48fe44: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x48fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_48fe48:
    // 0x48fe48: 0x25c2f932  addiu       $v0, $t6, -0x6CE
    ctx->pc = 0x48fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965554));
    // 0x48fe4c: 0xada214b8  sw          $v0, 0x14B8($t5)
    ctx->pc = 0x48fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 5304), GPR_U32(ctx, 2));
label_48fe50:
    // 0x48fe50: 0x3e00008  jr          $ra
    ctx->pc = 0x48FE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FE58u;
    // 0x48fe58: 0x3e00008  jr          $ra
    ctx->pc = 0x48FE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FE58u;
        // 0x48fe5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FE60u;
    // 0x48fe60: 0x3e00008  jr          $ra
    ctx->pc = 0x48FE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FE68u;
    // 0x48fe68: 0x3e00008  jr          $ra
    ctx->pc = 0x48FE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FE70u;
}
