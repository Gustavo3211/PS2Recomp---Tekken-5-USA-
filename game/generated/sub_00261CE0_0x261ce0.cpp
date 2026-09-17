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

// Function: sub_00261CE0
// Address: 0x261ce0 - 0x261e40
void sub_00261CE0_0x261ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261CE0_0x261ce0");
#endif

    switch (ctx->pc) {
        case 0x261ce0u: goto label_261ce0;
        case 0x261ce4u: goto label_261ce4;
        case 0x261ce8u: goto label_261ce8;
        case 0x261cecu: goto label_261cec;
        case 0x261cf0u: goto label_261cf0;
        case 0x261cf4u: goto label_261cf4;
        case 0x261cf8u: goto label_261cf8;
        case 0x261cfcu: goto label_261cfc;
        case 0x261d00u: goto label_261d00;
        case 0x261d04u: goto label_261d04;
        case 0x261d08u: goto label_261d08;
        case 0x261d0cu: goto label_261d0c;
        case 0x261d10u: goto label_261d10;
        case 0x261d14u: goto label_261d14;
        case 0x261d18u: goto label_261d18;
        case 0x261d1cu: goto label_261d1c;
        case 0x261d20u: goto label_261d20;
        case 0x261d24u: goto label_261d24;
        case 0x261d28u: goto label_261d28;
        case 0x261d2cu: goto label_261d2c;
        case 0x261d30u: goto label_261d30;
        case 0x261d34u: goto label_261d34;
        case 0x261d38u: goto label_261d38;
        case 0x261d3cu: goto label_261d3c;
        case 0x261d40u: goto label_261d40;
        case 0x261d44u: goto label_261d44;
        case 0x261d48u: goto label_261d48;
        case 0x261d4cu: goto label_261d4c;
        case 0x261d50u: goto label_261d50;
        case 0x261d54u: goto label_261d54;
        case 0x261d58u: goto label_261d58;
        case 0x261d5cu: goto label_261d5c;
        case 0x261d60u: goto label_261d60;
        case 0x261d64u: goto label_261d64;
        case 0x261d68u: goto label_261d68;
        case 0x261d6cu: goto label_261d6c;
        case 0x261d70u: goto label_261d70;
        case 0x261d74u: goto label_261d74;
        case 0x261d78u: goto label_261d78;
        case 0x261d7cu: goto label_261d7c;
        case 0x261d80u: goto label_261d80;
        case 0x261d84u: goto label_261d84;
        case 0x261d88u: goto label_261d88;
        case 0x261d8cu: goto label_261d8c;
        case 0x261d90u: goto label_261d90;
        case 0x261d94u: goto label_261d94;
        case 0x261d98u: goto label_261d98;
        case 0x261d9cu: goto label_261d9c;
        case 0x261da0u: goto label_261da0;
        case 0x261da4u: goto label_261da4;
        case 0x261da8u: goto label_261da8;
        case 0x261dacu: goto label_261dac;
        case 0x261db0u: goto label_261db0;
        case 0x261db4u: goto label_261db4;
        case 0x261db8u: goto label_261db8;
        case 0x261dbcu: goto label_261dbc;
        case 0x261dc0u: goto label_261dc0;
        case 0x261dc4u: goto label_261dc4;
        case 0x261dc8u: goto label_261dc8;
        case 0x261dccu: goto label_261dcc;
        case 0x261dd0u: goto label_261dd0;
        case 0x261dd4u: goto label_261dd4;
        case 0x261dd8u: goto label_261dd8;
        case 0x261ddcu: goto label_261ddc;
        case 0x261de0u: goto label_261de0;
        case 0x261de4u: goto label_261de4;
        case 0x261de8u: goto label_261de8;
        case 0x261decu: goto label_261dec;
        case 0x261df0u: goto label_261df0;
        case 0x261df4u: goto label_261df4;
        case 0x261df8u: goto label_261df8;
        case 0x261dfcu: goto label_261dfc;
        case 0x261e00u: goto label_261e00;
        case 0x261e04u: goto label_261e04;
        case 0x261e08u: goto label_261e08;
        case 0x261e0cu: goto label_261e0c;
        case 0x261e10u: goto label_261e10;
        case 0x261e14u: goto label_261e14;
        case 0x261e18u: goto label_261e18;
        case 0x261e1cu: goto label_261e1c;
        case 0x261e20u: goto label_261e20;
        case 0x261e24u: goto label_261e24;
        case 0x261e28u: goto label_261e28;
        case 0x261e2cu: goto label_261e2c;
        case 0x261e30u: goto label_261e30;
        case 0x261e34u: goto label_261e34;
        case 0x261e38u: goto label_261e38;
        case 0x261e3cu: goto label_261e3c;
        default: break;
    }

    ctx->pc = 0x261ce0u;

label_261ce0:
    // 0x261ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x261ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_261ce4:
    // 0x261ce4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x261ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_261ce8:
    // 0x261ce8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x261ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_261cec:
    // 0x261cec: 0x2451ed98  addiu       $s1, $v0, -0x1268
    ctx->pc = 0x261cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962584));
label_261cf0:
    // 0x261cf0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x261cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_261cf4:
    // 0x261cf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x261cf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261cf8:
    // 0x261cf8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x261cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_261cfc:
    // 0x261cfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x261cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_261d00:
    // 0x261d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261d04:
    // 0x261d04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x261d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261d08:
    // 0x261d08: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x261d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_261d0c:
    // 0x261d0c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x261d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_261d10:
    // 0x261d10: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x261d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_261d14:
    // 0x261d14: 0xc098b8c  jal         func_262E30
label_261d18:
    if (ctx->pc == 0x261D18u) {
        ctx->pc = 0x261D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D14u;
        // 0x261d18: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D1Cu;
        goto label_261d1c;
    }
    ctx->pc = 0x261D14u;
    SET_GPR_U32(ctx, 31, 0x261D1Cu);
    ctx->pc = 0x261D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D14u;
    // 0x261d18: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E30u, 0x261D14u, 0x261D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D1Cu;
label_261d1c:
    // 0x261d1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x261d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261d20:
    // 0x261d20: 0xc098b8c  jal         func_262E30
label_261d24:
    if (ctx->pc == 0x261D24u) {
        ctx->pc = 0x261D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D20u;
        // 0x261d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D28u;
        goto label_261d28;
    }
    ctx->pc = 0x261D20u;
    SET_GPR_U32(ctx, 31, 0x261D28u);
    ctx->pc = 0x261D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D20u;
    // 0x261d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E30u, 0x261D20u, 0x261D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D28u;
label_261d28:
    // 0x261d28: 0x8e9023b0  lw          $s0, 0x23B0($s4)
    ctx->pc = 0x261d28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 9136)));
label_261d2c:
    // 0x261d2c: 0xc097fdc  jal         func_25FF70
label_261d30:
    if (ctx->pc == 0x261D30u) {
        ctx->pc = 0x261D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D2Cu;
        // 0x261d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D34u;
        goto label_261d34;
    }
    ctx->pc = 0x261D2Cu;
    SET_GPR_U32(ctx, 31, 0x261D34u);
    ctx->pc = 0x261D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D2Cu;
    // 0x261d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x261D2Cu, 0x261D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D34u;
label_261d34:
    // 0x261d34: 0x8606001a  lh          $a2, 0x1A($s0)
    ctx->pc = 0x261d34u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_261d38:
    // 0x261d38: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
label_261d3c:
    if (ctx->pc == 0x261D3Cu) {
        ctx->pc = 0x261D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D38u;
        // 0x261d3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D40u;
        goto label_261d40;
    }
    ctx->pc = 0x261D38u;
    {
        const bool branch_taken_0x261d38 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D38u;
        // 0x261d3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d38) {
            ctx->pc = 0x261D70u;
            goto label_261d70;
        }
    }
    ctx->pc = 0x261D40u;
label_261d40:
    // 0x261d40: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x261d40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_261d44:
    // 0x261d44: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x261d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_261d48:
    // 0x261d48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x261d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261d4c:
    // 0x261d4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261d50:
    // 0x261d50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_261d54:
    // 0x261d54: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x261d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_261d58:
    // 0x261d58: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x261d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_261d5c:
    // 0x261d5c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x261d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261d60:
    // 0x261d60: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x261d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261d64:
    // 0x261d64: 0x10000003  b           . + 4 + (0x3 << 2)
label_261d68:
    if (ctx->pc == 0x261D68u) {
        ctx->pc = 0x261D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D64u;
        // 0x261d68: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D6Cu;
        goto label_261d6c;
    }
    ctx->pc = 0x261D64u;
    {
        const bool branch_taken_0x261d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D64u;
        // 0x261d68: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d64) {
            ctx->pc = 0x261D74u;
            goto label_261d74;
        }
    }
    ctx->pc = 0x261D6Cu;
label_261d6c:
    // 0x261d6c: 0x0  nop
    ctx->pc = 0x261d6cu;
    // NOP
label_261d70:
    // 0x261d70: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x261d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_261d74:
    // 0x261d74: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_261d78:
    if (ctx->pc == 0x261D78u) {
        ctx->pc = 0x261D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D74u;
        // 0x261d78: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D7Cu;
        goto label_261d7c;
    }
    ctx->pc = 0x261D74u;
    {
        const bool branch_taken_0x261d74 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D74u;
        // 0x261d78: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d74) {
            ctx->pc = 0x261D88u;
            goto label_261d88;
        }
    }
    ctx->pc = 0x261D7Cu;
label_261d7c:
    // 0x261d7c: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x261d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_261d80:
    // 0x261d80: 0x10000002  b           . + 4 + (0x2 << 2)
label_261d84:
    if (ctx->pc == 0x261D84u) {
        ctx->pc = 0x261D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D80u;
        // 0x261d84: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D88u;
        goto label_261d88;
    }
    ctx->pc = 0x261D80u;
    {
        const bool branch_taken_0x261d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D80u;
        // 0x261d84: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d80) {
            ctx->pc = 0x261D8Cu;
            goto label_261d8c;
        }
    }
    ctx->pc = 0x261D88u;
label_261d88:
    // 0x261d88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_261d8c:
    // 0x261d8c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x261d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261d90:
    // 0x261d90: 0xe0f809  jalr        $a3
label_261d94:
    if (ctx->pc == 0x261D94u) {
        ctx->pc = 0x261D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D90u;
        // 0x261d94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D98u;
        goto label_261d98;
    }
    ctx->pc = 0x261D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261D98u);
        ctx->pc = 0x261D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D90u;
        // 0x261d94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D90u, 0x261D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261D98u;
label_261d98:
    // 0x261d98: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x261d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_261d9c:
    // 0x261d9c: 0x2471eba0  addiu       $s1, $v1, -0x1460
    ctx->pc = 0x261d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962080));
label_261da0:
    // 0x261da0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x261da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261da4:
    // 0x261da4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x261da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261da8:
    // 0x261da8: 0xc0988f0  jal         func_2623C0
label_261dac:
    if (ctx->pc == 0x261DACu) {
        ctx->pc = 0x261DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DA8u;
        // 0x261dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261DB0u;
        goto label_261db0;
    }
    ctx->pc = 0x261DA8u;
    SET_GPR_U32(ctx, 31, 0x261DB0u);
    ctx->pc = 0x261DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261DA8u;
    // 0x261dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2623C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2623C0u, 0x261DA8u, 0x261DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261DB0u;
label_261db0:
    // 0x261db0: 0x8e9023b0  lw          $s0, 0x23B0($s4)
    ctx->pc = 0x261db0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 9136)));
label_261db4:
    // 0x261db4: 0xc097fdc  jal         func_25FF70
label_261db8:
    if (ctx->pc == 0x261DB8u) {
        ctx->pc = 0x261DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DB4u;
        // 0x261db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261DBCu;
        goto label_261dbc;
    }
    ctx->pc = 0x261DB4u;
    SET_GPR_U32(ctx, 31, 0x261DBCu);
    ctx->pc = 0x261DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261DB4u;
    // 0x261db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x261DB4u, 0x261DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261DBCu;
label_261dbc:
    // 0x261dbc: 0x8606001a  lh          $a2, 0x1A($s0)
    ctx->pc = 0x261dbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_261dc0:
    // 0x261dc0: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
label_261dc4:
    if (ctx->pc == 0x261DC4u) {
        ctx->pc = 0x261DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DC0u;
        // 0x261dc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261DC8u;
        goto label_261dc8;
    }
    ctx->pc = 0x261DC0u;
    {
        const bool branch_taken_0x261dc0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DC0u;
        // 0x261dc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dc0) {
            ctx->pc = 0x261DF8u;
            goto label_261df8;
        }
    }
    ctx->pc = 0x261DC8u;
label_261dc8:
    // 0x261dc8: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x261dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_261dcc:
    // 0x261dcc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x261dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_261dd0:
    // 0x261dd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x261dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261dd4:
    // 0x261dd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261dd8:
    // 0x261dd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_261ddc:
    // 0x261ddc: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x261ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_261de0:
    // 0x261de0: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x261de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_261de4:
    // 0x261de4: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x261de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261de8:
    // 0x261de8: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x261de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261dec:
    // 0x261dec: 0x10000003  b           . + 4 + (0x3 << 2)
label_261df0:
    if (ctx->pc == 0x261DF0u) {
        ctx->pc = 0x261DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DECu;
        // 0x261df0: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261DF4u;
        goto label_261df4;
    }
    ctx->pc = 0x261DECu;
    {
        const bool branch_taken_0x261dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DECu;
        // 0x261df0: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dec) {
            ctx->pc = 0x261DFCu;
            goto label_261dfc;
        }
    }
    ctx->pc = 0x261DF4u;
label_261df4:
    // 0x261df4: 0x0  nop
    ctx->pc = 0x261df4u;
    // NOP
label_261df8:
    // 0x261df8: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x261df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_261dfc:
    // 0x261dfc: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_261e00:
    if (ctx->pc == 0x261E00u) {
        ctx->pc = 0x261E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DFCu;
        // 0x261e00: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E04u;
        goto label_261e04;
    }
    ctx->pc = 0x261DFCu;
    {
        const bool branch_taken_0x261dfc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DFCu;
        // 0x261e00: 0x86030018  lh          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dfc) {
            ctx->pc = 0x261E10u;
            goto label_261e10;
        }
    }
    ctx->pc = 0x261E04u;
label_261e04:
    // 0x261e04: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x261e04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_261e08:
    // 0x261e08: 0x10000002  b           . + 4 + (0x2 << 2)
label_261e0c:
    if (ctx->pc == 0x261E0Cu) {
        ctx->pc = 0x261E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E08u;
        // 0x261e0c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E10u;
        goto label_261e10;
    }
    ctx->pc = 0x261E08u;
    {
        const bool branch_taken_0x261e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E08u;
        // 0x261e0c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e08) {
            ctx->pc = 0x261E14u;
            goto label_261e14;
        }
    }
    ctx->pc = 0x261E10u;
label_261e10:
    // 0x261e10: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_261e14:
    // 0x261e14: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x261e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261e18:
    // 0x261e18: 0xe0f809  jalr        $a3
label_261e1c:
    if (ctx->pc == 0x261E1Cu) {
        ctx->pc = 0x261E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E18u;
        // 0x261e1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E20u;
        goto label_261e20;
    }
    ctx->pc = 0x261E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261E20u);
        ctx->pc = 0x261E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E18u;
        // 0x261e1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261E18u, 0x261E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261E20u;
label_261e20:
    // 0x261e20: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x261e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_261e24:
    // 0x261e24: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x261e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_261e28:
    // 0x261e28: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x261e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_261e2c:
    // 0x261e2c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x261e2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_261e30:
    // 0x261e30: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x261e30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_261e34:
    // 0x261e34: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x261e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_261e38:
    // 0x261e38: 0x3e00008  jr          $ra
label_261e3c:
    if (ctx->pc == 0x261E3Cu) {
        ctx->pc = 0x261E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E38u;
        // 0x261e3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E40u;
        goto label_fallthrough_0x261e38;
    }
    ctx->pc = 0x261E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E38u;
        // 0x261e3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261e38:
    ctx->pc = 0x261E40u;
}
